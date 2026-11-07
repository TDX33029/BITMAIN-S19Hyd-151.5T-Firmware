// Dump the direct call graph of the current program.
// Usage: BMDumpCalls.java <outCsv>
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

import java.io.File;
import java.io.PrintWriter;
import java.util.Set;

public class BMDumpCalls extends GhidraScript {
    private static String csv(String s) {
        if (s == null) return "";
        return "\"" + s.replace("\"", "\"\"") + "\"";
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("usage: BMDumpCalls.java <outCsv>");
            return;
        }
        PrintWriter pw = new PrintWriter(new File(args[0]), "UTF-8");
        pw.println("caller_addr,caller_name,callee_addr,callee_name");
        int edges = 0;
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Function f = it.next();
            if (f.isExternal()) continue;
            Set<Function> callees = f.getCalledFunctions(monitor);
            for (Function c : callees) {
                pw.println(csv(f.getEntryPoint().toString()) + "," + csv(f.getName()) + ","
                        + csv(c.getEntryPoint().toString()) + "," + csv(c.getName()));
                edges++;
            }
        }
        pw.close();
        println("edges=" + edges + " -> " + args[0]);
    }
}
