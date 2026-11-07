// FUN_000108f8 @ 000108f8  size=176  callers=1
// program: FileParser


void FUN_000108f8(char *param_1)

{
  puts("Useage:\r");
  printf("\t%s [option] [paramaters]\n\n",param_1);
  puts("\tOption:{-f} {-s} {-p} {-n} {-x} {-q}\n");
  puts(
      "\t\t-f [minerType] [fileName] [rootPublicKeyFile]: \n\t\t\tOnly Check If Filename was Valided.\n"
      );
  puts(
      "\t\t-s [minerType] [fileName] [rootPublicKeyFile]: \n\t\t\tCheck If Filename Was Valided, and Splite Bmu To \"/tmp/tmpfw/\"\n"
      );
  puts(
      "\t\t-p [minerType] [fileName] [rootPublicKeyFile]: \n\t\t\tCheck If Filename Was Valided, and Dump BmuComments\n"
      );
  puts(
      "\t\t-x [minerType] [fileName] [rootPublicKeyFile]: \n\t\t\tCheck If Filename Was FullSize BMU\n"
      );
  puts("\t\t-n [nandBinFile]: \n\t\t\tSplite SigImg To Single File To \"/tmp/tmpNand/\"\n");
  puts("\t\t-q: \n\t\t\tGenerate A 256Bytes 0xff File To \"/tmp/256BFF\"\n");
  puts("\tReturns:");
  puts("\t\t0: \n\t\t\tWell Done!\n");
  puts("\t\tOthers: \n\t\t\tSomething Wrong!\n");
  return;
}

