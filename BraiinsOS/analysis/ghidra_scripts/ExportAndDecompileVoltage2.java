import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.symbol.*;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.*;
import java.util.regex.*;

public class ExportAndDecompileVoltage2 extends GhidraScript {
    String strAt(Address to, int depth) {
        if (depth > 2) return null;
        Data d = currentProgram.getListing().getDataAt(to);
        if (d == null) return null;
        if (d.hasStringValue()) {
            Object v = d.getValue();
            return v == null ? null : v.toString();
        }
        // pointer data: follow references out of it
        Reference[] refs = currentProgram.getReferenceManager().getReferencesFrom(to);
        for (Reference r : refs) {
            String s = strAt(r.getToAddress(), depth + 1);
            if (s != null) return s;
        }
        return null;
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args.length > 0 ? args[0] : ".";
        new File(outDir + "/decomp").mkdirs();

        Pattern volt = Pattern.compile("(voltage|set_v|PSU|TPS6287|dcdc|DC_DC|vcom|ramping|regulator|DCDC)", Pattern.CASE_INSENSITIVE);
        Listing listing = currentProgram.getListing();
        ReferenceManager rm = currentProgram.getReferenceManager();

        PrintWriter idx = new PrintWriter(new BufferedWriter(new OutputStreamWriter(
            new FileOutputStream(outDir + "/voltage_index.csv"), "UTF-8")));
        idx.println("address,size,n_volt_strings,sample_strings");

        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);

        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int total = 0, matched = 0;
        while (it.hasNext()) {
            Function f = it.next();
            total++;
            if (monitor.isCancelled()) break;
            StringBuilder sb = new StringBuilder();
            int nvolt = 0;
            CodeUnitIterator cu = listing.getCodeUnits(f.getBody(), true);
            while (cu.hasNext()) {
                CodeUnit c = cu.next();
                Reference[] refs = rm.getReferencesFrom(c.getAddress());
                for (Reference r : refs) {
                    String s = strAt(r.getToAddress(), 0);
                    if (s != null && s.length() >= 4) {
                        if (volt.matcher(s).find()) nvolt++;
                        if (sb.length() < 500) {
                            if (sb.length() > 0) sb.append(" | ");
                            sb.append(s.replace('\n', ' ').replace('"', '\''));
                        }
                    }
                    if (nvolt > 12) break;
                }
                if (nvolt > 12) break;
            }
            if (nvolt == 0) continue;
            matched++;
            String hexAddr = f.getEntryPoint().toString();
            synchronized (idx) {
                idx.println(hexAddr + "," + f.getBody().getNumAddresses() + "," + nvolt + ",\"" + sb.toString().replace(',', ';') + "\"");
                idx.flush();
            }
            DecompileResults res = di.decompileFunction(f, 90, monitor);
            PrintWriter pf = new PrintWriter(new OutputStreamWriter(
                new FileOutputStream(outDir + "/decomp/" + hexAddr + ".c"), "UTF-8"));
            pf.println("// function @ " + hexAddr + "  size=" + f.getBody().getNumAddresses() + "  volt_strings=" + nvolt);
            pf.println("// strings: " + sb.toString());
            if (res != null && res.decompileCompleted()) {
                pf.print(res.getDecompiledFunction().getC());
            } else {
                pf.println("// DECOMPILE FAILED");
            }
            pf.close();
            if (matched % 20 == 0) println("matched " + matched + " (scanned " + total + ")");
        }
        idx.close();
        di.dispose();
        println("TOTAL scanned=" + total + " voltage_functions=" + matched + " -> " + outDir);
    }
}
