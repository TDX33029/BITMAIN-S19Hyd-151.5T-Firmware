// Dump every function of the current program to .c files plus an inventory CSV.
// Usage: BMDumpAllFunctions.java <outDir> <inventoryCsv> [timeoutSeconds]
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

import java.io.File;
import java.io.PrintWriter;

public class BMDumpAllFunctions extends GhidraScript {
    private static String csv(String s) {
        if (s == null) return "";
        return "\"" + s.replace("\"", "\"\"") + "\"";
    }

    private static String safe(String s) {
        return s.replaceAll("[^A-Za-z0-9_.-]", "_");
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("usage: BMDumpAllFunctions.java <outDir> <inventoryCsv> [timeoutSeconds]");
            return;
        }
        File outDir = new File(args[0]);
        if (!outDir.exists() && !outDir.mkdirs()) {
            println("cannot create " + outDir);
            return;
        }
        int timeout = args.length > 2 ? Integer.parseInt(args[2]) : 60;

        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        di.setOptions(opts);
        if (!di.openProgram(currentProgram)) {
            println("decompiler open failed");
            return;
        }

        PrintWriter csvw = new PrintWriter(new File(args[1]), "UTF-8");
        csvw.println("addr,name,size,num_params,return_type,is_thunk,is_external,callers,decompiled,error");

        int total = 0, ok = 0, fail = 0, skipped = 0;
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Function f = it.next();
            total++;
            Address ep = f.getEntryPoint();
            long size = f.getBody().getNumAddresses();
            int callers = f.getCallingFunctions(monitor).size();
            boolean external = f.isExternal();
            boolean thunk = f.isThunk();
            String err = "";
            boolean decompiled = false;

            if (!external && !thunk) {
                try {
                    DecompileResults res = di.decompileFunction(f, timeout, monitor);
                    if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) {
                        String c = res.getDecompiledFunction().getC();
                        File out = new File(outDir, String.format("%x_%s.c", ep.getOffset(), safe(f.getName())));
                        try (PrintWriter pw = new PrintWriter(out, "UTF-8")) {
                            pw.println("// " + f.getName() + " @ " + ep + "  size=" + size
                                    + "  callers=" + callers);
                            pw.println("// program: " + currentProgram.getName());
                            pw.println();
                            pw.print(c);
                        }
                        decompiled = true;
                        ok++;
                    } else {
                        err = res == null ? "null result" : res.getErrorMessage();
                        fail++;
                    }
                } catch (Exception e) {
                    err = e.toString();
                    fail++;
                }
            } else {
                skipped++;
            }

            csvw.println(String.join(",",
                    csv(ep.toString()), csv(f.getName()), Long.toString(size),
                    Integer.toString(f.getParameterCount()), csv(f.getReturnType().getName()),
                    Boolean.toString(thunk), Boolean.toString(external), Integer.toString(callers),
                    Boolean.toString(decompiled), csv(err)));

            if (total % 100 == 0) {
                println("progress: total=" + total + " ok=" + ok + " fail=" + fail + " skipped=" + skipped);
                csvw.flush();
            }
        }
        csvw.close();
        di.dispose();
        println("done: total=" + total + " ok=" + ok + " fail=" + fail + " skipped=" + skipped);
    }
}
