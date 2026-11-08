// Dump all functions, strings and call edges for the current program into
// <baseDir>/<programName>/{decompiled,functions.csv,strings.csv,calls.csv}.
// Usage: BMDumpProgram.java <baseDir> [timeoutSeconds]
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;

import java.io.File;
import java.io.PrintWriter;
import java.util.Set;

public class BMDumpProgram extends GhidraScript {
    private static String csv(String s) {
        if (s == null) return "";
        s = s.replace("\r", "\\r").replace("\n", "\\n");
        return "\"" + s.replace("\"", "\"\"") + "\"";
    }

    private static String safe(String s) {
        return s.replaceAll("[^A-Za-z0-9_.-]", "_");
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("usage: BMDumpProgram.java <baseDir> [timeoutSeconds]");
            return;
        }
        int timeout = args.length > 1 ? Integer.parseInt(args[1]) : 60;
        String prog = safe(currentProgram.getName());
        File dir = new File(args[0], prog);
        File dec = new File(dir, "decompiled");
        if (!dec.exists() && !dec.mkdirs()) {
            println("cannot create " + dec);
            return;
        }

        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        if (!di.openProgram(currentProgram)) {
            println("decompiler open failed for " + prog);
            return;
        }

        PrintWriter fw = new PrintWriter(new File(dir, "functions.csv"), "UTF-8");
        fw.println("addr,name,size,num_params,return_type,is_thunk,is_external,callers,decompiled,error");
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
                        File out = new File(dec, String.format("%x_%s.c", ep.getOffset(), safe(f.getName())));
                        try (PrintWriter pw = new PrintWriter(out, "UTF-8")) {
                            pw.println("// " + f.getName() + " @ " + ep + "  size=" + size
                                    + "  callers=" + callers);
                            pw.println("// program: " + currentProgram.getName());
                            pw.println();
                            pw.print(res.getDecompiledFunction().getC());
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
            fw.println(String.join(",",
                    csv(ep.toString()), csv(f.getName()), Long.toString(size),
                    Integer.toString(f.getParameterCount()), csv(f.getReturnType().getName()),
                    Boolean.toString(thunk), Boolean.toString(external), Integer.toString(callers),
                    Boolean.toString(decompiled), csv(err)));
            if (total % 100 == 0) {
                println(prog + " functions: total=" + total + " ok=" + ok + " fail=" + fail + " skipped=" + skipped);
                fw.flush();
            }
        }
        fw.close();

        PrintWriter sw = new PrintWriter(new File(dir, "strings.csv"), "UTF-8");
        sw.println("string_addr,string,from_addr,func_addr,func_name");
        ReferenceManager rm = currentProgram.getReferenceManager();
        DataIterator dit = currentProgram.getListing().getDefinedData(true);
        int nstr = 0;
        while (dit.hasNext() && !monitor.isCancelled()) {
            Data d = dit.next();
            Object v = d.getValue();
            if (!(v instanceof String)) continue;
            String s = (String) v;
            if (s.isEmpty()) continue;
            nstr++;
            ReferenceIterator refs = rm.getReferencesTo(d.getAddress());
            if (!refs.hasNext()) {
                sw.println(csv(d.getAddress().toString()) + "," + csv(s) + ",,,");
                continue;
            }
            while (refs.hasNext()) {
                Reference r = refs.next();
                Address from = r.getFromAddress();
                Function f = getFunctionContaining(from);
                sw.println(csv(d.getAddress().toString()) + "," + csv(s) + "," + csv(from.toString())
                        + (f == null ? ",," : "," + csv(f.getEntryPoint().toString()) + "," + csv(f.getName())));
            }
        }
        sw.close();

        PrintWriter cw = new PrintWriter(new File(dir, "calls.csv"), "UTF-8");
        cw.println("caller_addr,caller_name,callee_addr,callee_name");
        int edges = 0;
        FunctionIterator it2 = currentProgram.getFunctionManager().getFunctions(true);
        while (it2.hasNext() && !monitor.isCancelled()) {
            Function f = it2.next();
            if (f.isExternal()) continue;
            Set<Function> callees = f.getCalledFunctions(monitor);
            for (Function c : callees) {
                cw.println(csv(f.getEntryPoint().toString()) + "," + csv(f.getName()) + ","
                        + csv(c.getEntryPoint().toString()) + "," + csv(c.getName()));
                edges++;
            }
        }
        cw.close();

        PrintWriter mw = new PrintWriter(new File(dir, "program.txt"), "UTF-8");
        mw.println("name=" + currentProgram.getName());
        mw.println("executable_path=" + currentProgram.getExecutablePath());
        mw.println("language=" + currentProgram.getLanguageID());
        mw.println("functions=" + total);
        mw.println("decompiled=" + ok);
        mw.println("failed=" + fail);
        mw.println("skipped=" + skipped);
        mw.println("strings=" + nstr);
        mw.println("call_edges=" + edges);
        mw.close();

        di.dispose();
        println(prog + " done: functions=" + total + " ok=" + ok + " fail=" + fail
                + " skipped=" + skipped + " strings=" + nstr + " edges=" + edges);
    }
}
