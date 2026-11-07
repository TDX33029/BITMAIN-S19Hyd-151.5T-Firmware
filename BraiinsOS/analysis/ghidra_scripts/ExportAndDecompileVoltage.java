import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.AddressSet;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.regex.*;

public class ExportAndDecompileVoltage extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args.length > 0 ? args[0] : ".";
        new File(outDir + "/decomp").mkdirs();

        Pattern volt = Pattern.compile("(voltage|set_v|PSU|TPS6287|dcdc|DC_DC|vcom|ramping|regulator)", Pattern.CASE_INSENSITIVE);

        PrintWriter idx = new PrintWriter(new BufferedWriter(new OutputStreamWriter(
            new FileOutputStream(outDir + "/voltage_index.csv"), "UTF-8")));
        idx.println("address,size,n_volt_strings,sample_strings");

        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        di.setOptions(opts);
        di.openProgram(currentProgram);

        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int total = 0, matched = 0;
        while (it.hasNext()) {
            Function f = it.next();
            total++;
            if (monitor.isCancelled()) break;
            // gather string evidence in body
            StringBuilder sb = new StringBuilder();
            int nvolt = 0;
            CodeUnitIterator cu = currentProgram.getListing().getCodeUnits(f.getBody(), true);
            while (cu.hasNext()) {
                CodeUnit c = cu.next();
                if (c instanceof Data) {
                    Data d = (Data) c;
                    if (d.hasStringValue()) {
                        Object v = d.getValue();
                        String s = v == null ? "" : v.toString();
                        if (s.length() >= 4) {
                            if (volt.matcher(s).find()) nvolt++;
                            if (sb.length() < 400) {
                                if (sb.length() > 0) sb.append(" | ");
                                sb.append(s.replace('\n', ' ').replace('"', '\''));
                            }
                        }
                    }
                }
            }
            if (nvolt == 0) continue;
            matched++;
            String hexAddr = f.getEntryPoint().toString();
            idx.println(hexAddr + "," + f.getBody().getNumAddresses() + "," + nvolt + ",\"" + sb.toString().replace(',', ';') + "\"");
            DecompileResults res = di.decompileFunction(f, 90, monitor);
            if (res != null && res.decompileCompleted()) {
                String code = res.getDecompiledFunction().getC();
                PrintWriter pf = new PrintWriter(new OutputStreamWriter(
                    new FileOutputStream(outDir + "/decomp/" + hexAddr + ".c"), "UTF-8"));
                pf.println("// function @ " + hexAddr + "  size=" + f.getBody().getNumAddresses() + "  volt_strings=" + nvolt);
                pf.println("// strings: " + sb.toString());
                pf.print(code);
                pf.close();
            } else {
                PrintWriter pf = new PrintWriter(new OutputStreamWriter(
                    new FileOutputStream(outDir + "/decomp/" + hexAddr + ".c"), "UTF-8"));
                pf.println("// function @ " + hexAddr + " DECOMPILE FAILED");
                pf.close();
            }
            if (matched % 20 == 0) println("matched " + matched + " (scanned " + total + ")");
        }
        idx.close();
        di.dispose();
        println("TOTAL scanned=" + total + " voltage_functions=" + matched + " -> " + outDir);
    }
}
