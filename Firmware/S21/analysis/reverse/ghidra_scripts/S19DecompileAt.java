// Decompile one or more functions by address and dump C pseudocode to files.
// Usage (headless):
//   -postScript DecompileAt.java <outDir> 0x4ff74 [0x50390 ...]
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.io.File;
import java.io.PrintWriter;

public class S19DecompileAt extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("usage: DecompileAt.java <outDir> <addr> [addr ...]");
            return;
        }
        File outDir = new File(args[0]);
        if (!outDir.exists() && !outDir.mkdirs()) {
            println("cannot create " + outDir);
            return;
        }
        DecompInterface ifc = new DecompInterface();
        ifc.toggleCCode(true);
        ifc.toggleSyntaxTree(true);
        ifc.setSimplificationStyle("decompile");
        if (!ifc.openProgram(currentProgram)) {
            println("decompiler open failed: " + ifc.getLastMessage());
            return;
        }
        for (int i = 1; i < args.length; i++) {
            Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(args[i]);
            Function f = getFunctionAt(a);
            if (f == null) {
                println("no function at " + args[i]);
                continue;
            }
            DecompileResults res = ifc.decompileFunction(f, 120, monitor);
            if (res == null || !res.decompileCompleted() || res.getDecompiledFunction() == null) {
                println("decompile failed at " + args[i] + ": " + (res == null ? "null" : res.getErrorMessage()));
                continue;
            }
            String name = args[i].replace("0x", "");
            File out = new File(outDir, name + "_" + f.getName() + ".c");
            PrintWriter pw = new PrintWriter(out, "UTF-8");
            pw.println("// " + f.getName() + " @ " + f.getEntryPoint() + "  size=" + f.getBody().getNumAddresses());
            pw.println("// callers: " + f.getCallingFunctions(monitor));
            pw.println(res.getDecompiledFunction().getC());
            pw.close();
            println("wrote " + out.getAbsolutePath());
        }
        ifc.dispose();
    }
}
