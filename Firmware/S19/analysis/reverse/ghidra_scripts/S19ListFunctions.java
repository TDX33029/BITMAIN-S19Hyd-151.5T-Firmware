// Dump function inventory (entry, name, size, callers count) to CSV.
// Usage: ListFunctions.java <outCsv> [startAddr] [endAddr]
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.File;
import java.io.PrintWriter;

public class S19ListFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("usage: ListFunctions.java <outCsv> [startAddr] [endAddr]");
            return;
        }
        Address lo = null, hi = null;
        if (args.length >= 3) {
            lo = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(args[1]);
            hi = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(args[2]);
        }
        File out = new File(args[0]);
        PrintWriter pw = new PrintWriter(out, "UTF-8");
        pw.println("entry,name,size,params,callers,thunk");
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int n = 0;
        while (it.hasNext() && !monitor.isCancelled()) {
            Function f = it.next();
            Address e = f.getEntryPoint();
            if (lo != null && (e.compareTo(lo) < 0 || e.compareTo(hi) > 0)) continue;
            pw.println(String.format("%s,%s,%d,%d,%d,%s",
                    e, f.getName(), f.getBody().getNumAddresses(),
                    f.getParameterCount(), f.getCallingFunctions(monitor).size(),
                    f.isThunk() ? "1" : "0"));
            n++;
        }
        pw.close();
        println("wrote " + out.getAbsolutePath() + " (" + n + " functions)");
    }
}
