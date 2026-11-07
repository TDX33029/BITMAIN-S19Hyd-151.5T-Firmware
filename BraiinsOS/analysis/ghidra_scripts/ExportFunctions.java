import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;

public class ExportFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String out = args.length > 0 ? args[0] : "ghidra_functions.csv";
        File outFile = new File(out);
        PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(new FileOutputStream(outFile), "UTF-8")));
        pw.println("address,size,name,strings");
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int n = 0;
        while (it.hasNext()) {
            Function f = it.next();
            long size = f.getBody().getNumAddresses();
            StringBuilder sb = new StringBuilder();
            CodeUnitIterator cu = currentProgram.getListing().getCodeUnits(f.getBody(), true);
            int sc = 0;
            while (cu.hasNext() && sc < 10) {
                Data d = (Data) cu.next();
                if (d.hasStringValue()) {
                    Object v = d.getValue();
                    String s = v == null ? "" : v.toString();
                    if (s.length() >= 4) {
                        if (sc > 0) sb.append(" | ");
                        sb.append(s.replace('\n', ' ').replace('\r', ' ').replace('"', '\'').replace(',', ';'));
                        sc++;
                    }
                }
            }
            pw.println(f.getEntryPoint() + "," + size + "," + f.getName() + ",\"" + sb + "\"");
            n++;
            if (n % 5000 == 0) println("exported " + n);
        }
        pw.close();
        println("TOTAL " + n + " functions -> " + outFile.getAbsolutePath());
    }
}
