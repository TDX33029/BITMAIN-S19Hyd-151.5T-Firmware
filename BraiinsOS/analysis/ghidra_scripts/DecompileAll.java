import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.symbol.*;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.*;

public class DecompileAll extends GhidraScript {
    String strAt(Address to, int depth) {
        if (depth > 2) return null;
        Data d = currentProgram.getListing().getDataAt(to);
        if (d == null) return null;
        if (d.hasStringValue()) {
            Object v = d.getValue();
            return v == null ? null : v.toString();
        }
        for (Reference r : currentProgram.getReferenceManager().getReferencesFrom(to)) {
            String s = strAt(r.getToAddress(), depth + 1);
            if (s != null) return s;
        }
        return null;
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args.length > 0 ? args[0] : ".";
        new File(outDir).mkdirs();

        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);

        PrintWriter idx = new PrintWriter(new BufferedWriter(new OutputStreamWriter(
            new FileOutputStream(outDir + "/all_functions_index.csv"), "UTF-8")));
        idx.println("address,size,name,ncalls_out,ncalls_in,is_thunk,strings");

        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int total = 0, ok = 0, failed = 0, skipped = 0;
        long t0 = System.currentTimeMillis();
        while (it.hasNext()) {
            Function f = it.next();
            total++;
            if (monitor.isCancelled()) break;
            if (f.isThunk()) {
                skipped++;
                Function th = f.getThunkedFunction(true);
                idx.println(f.getEntryPoint() + "," + f.getBody().getNumAddresses() + ",THUNK->" +
                    (th == null ? "?" : th.getName()) + ",0,0,1,");
                continue;
            }
            // strings via refs (cap 6)
            StringBuilder sb = new StringBuilder();
            int sc = 0;
            CodeUnitIterator cu = currentProgram.getListing().getCodeUnits(f.getBody(), true);
            outer:
            while (cu.hasNext()) {
                CodeUnit c = cu.next();
                for (Reference r : currentProgram.getReferenceManager().getReferencesFrom(c.getAddress())) {
                    String s = strAt(r.getToAddress(), 0);
                    if (s != null && s.length() >= 4) {
                        if (sc > 0) sb.append(" | ");
                        sb.append(s.replace('\n', ' ').replace('"', '\'').replace(',', ';'));
                        sc++;
                        if (sc >= 6) break outer;
                    }
                }
            }
            Set<Function> out_ = f.getCalledFunctions(monitor);
            Set<Function> in_ = f.getCallingFunctions(monitor);
            DecompileResults res = di.decompileFunction(f, 120, monitor);
            String code = null;
            if (res != null && res.decompileCompleted()) {
                code = res.getDecompiledFunction().getC();
                ok++;
            } else failed++;

            if (code != null) {
                PrintWriter pf = new PrintWriter(new OutputStreamWriter(
                    new FileOutputStream(outDir + "/" + f.getEntryPoint() + ".c"), "UTF-8"));
                pf.println("// " + f.getName() + " @ " + f.getEntryPoint() + " size=" + f.getBody().getNumAddresses()
                    + " calls_out=" + out_.size() + " calls_in=" + in_.size());
                pf.println("// strings: " + sb);
                pf.print(code);
                pf.close();
            }
            idx.println(f.getEntryPoint() + "," + f.getBody().getNumAddresses() + "," + f.getName() + ","
                + out_.size() + "," + in_.size() + ",0,\"" + sb + "\"");
            if (total % 250 == 0) {
                idx.flush();
                long mins = (System.currentTimeMillis() - t0) / 60000;
                println("progress " + total + " ok=" + ok + " failed=" + failed + " skipped=" + skipped
                    + " (" + mins + " min)");
            }
        }
        idx.close();
        di.dispose();
        long mins = (System.currentTimeMillis() - t0) / 60000;
        println("DONE total=" + total + " ok=" + ok + " failed=" + failed + " skipped=" + skipped + " in " + mins + " min");
    }
}
