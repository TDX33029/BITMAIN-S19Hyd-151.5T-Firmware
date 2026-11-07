// Dump all defined strings with their references and containing functions.
// Usage: BMDumpStrings.java <outCsv>
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;

import java.io.File;
import java.io.PrintWriter;

public class BMDumpStrings extends GhidraScript {
    private static String csv(String s) {
        if (s == null) return "";
        s = s.replace("\r", "\\r").replace("\n", "\\n");
        return "\"" + s.replace("\"", "\"\"") + "\"";
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("usage: BMDumpStrings.java <outCsv>");
            return;
        }
        PrintWriter pw = new PrintWriter(new File(args[0]), "UTF-8");
        pw.println("string_addr,string,from_addr,func_addr,func_name");
        ReferenceManager rm = currentProgram.getReferenceManager();
        DataIterator it = currentProgram.getListing().getDefinedData(true);
        int total = 0, rows = 0;
        while (it.hasNext() && !monitor.isCancelled()) {
            Data d = it.next();
            Object v = d.getValue();
            if (!(v instanceof String)) continue;
            String s = (String) v;
            if (s.isEmpty()) continue;
            total++;
            ReferenceIterator refs = rm.getReferencesTo(d.getAddress());
            if (!refs.hasNext()) {
                pw.println(csv(d.getAddress().toString()) + "," + csv(s) + ",,,");
                rows++;
                continue;
            }
            while (refs.hasNext()) {
                Reference r = refs.next();
                Address from = r.getFromAddress();
                Function f = getFunctionContaining(from);
                pw.println(csv(d.getAddress().toString()) + "," + csv(s) + ","
                        + csv(from.toString()) + ","
                        + (f == null ? "," : csv(f.getEntryPoint().toString()) + "," + csv(f.getName())));
                rows++;
            }
        }
        pw.close();
        println("strings=" + total + " rows=" + rows + " -> " + args[0]);
    }
}
