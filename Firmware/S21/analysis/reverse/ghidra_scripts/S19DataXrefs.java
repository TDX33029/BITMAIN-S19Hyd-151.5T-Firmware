// Report references to given data addresses, with the containing function.
// Usage: S19DataXrefs.java <outCsv> <addr> [addr ...]
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.RefType;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceManager;
import java.io.File;
import java.io.PrintWriter;

public class S19DataXrefs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) { println("usage: S19DataXrefs.java <outCsv> <addr> [...]"); return; }
        PrintWriter pw = new PrintWriter(new File(args[0]), "UTF-8");
        pw.println("data_addr,from_addr,ref_type,func_addr,func_name");
        ReferenceManager rm = currentProgram.getReferenceManager();
        for (int i = 1; i < args.length; i++) {
            Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(args[i]);
            for (Reference r : rm.getReferencesTo(a)) {
                Function f = getFunctionContaining(r.getFromAddress());
                RefType t = r.getReferenceType();
                pw.println(String.format("%s,%s,%s,%s,%s", a, r.getFromAddress(), t,
                        f == null ? "" : f.getEntryPoint(), f == null ? "" : f.getName()));
            }
        }
        pw.close();
        println("wrote " + args[0]);
    }
}
