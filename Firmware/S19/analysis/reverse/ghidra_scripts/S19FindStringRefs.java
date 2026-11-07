// Find defined strings matching keywords and report the containing functions.
// Usage: S19FindStringRefs.java <outCsv> <keyword> [keyword ...]
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceManager;
import java.io.File;
import java.io.PrintWriter;
import java.util.Arrays;

public class S19FindStringRefs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("usage: S19FindStringRefs.java <outCsv> <keyword> [keyword ...]");
            return;
        }
        File out = new File(args[0]);
        String[] kws = Arrays.copyOfRange(args, 1, args.length);
        ReferenceManager rm = currentProgram.getReferenceManager();
        FunctionManager fm = currentProgram.getFunctionManager();
        PrintWriter pw = new PrintWriter(out, "UTF-8");
        pw.println("func_addr,func_name,string_addr,string");
        DataIterator di = currentProgram.getListing().getDefinedData(true);
        int hits = 0;
        while (di.hasNext() && !monitor.isCancelled()) {
            Data d = di.next();
            if (!(d.getValue() instanceof String)) continue;
            String s = (String) d.getValue();
            boolean match = false;
            for (String k : kws) {
                if (s.toLowerCase().contains(k.toLowerCase())) { match = true; break; }
            }
            if (!match) continue;
            for (Reference r : rm.getReferencesTo(d.getAddress())) {
                Function f = fm.getFunctionContaining(r.getFromAddress());
                if (f == null) continue;
                pw.println(String.format("%s,%s,%s,\"%s\"",
                        f.getEntryPoint(), f.getName(), d.getAddress(),
                        s.replace("\"", "\"\"").replace("\n", " ")));
                hits++;
            }
        }
        pw.close();
        println("hits=" + hits + " -> " + out.getAbsolutePath());
    }
}
