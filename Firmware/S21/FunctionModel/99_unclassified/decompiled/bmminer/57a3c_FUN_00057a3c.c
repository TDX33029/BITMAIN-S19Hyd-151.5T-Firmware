// FUN_00057a3c @ 00057a3c  size=136  callers=1
// program: bmminer


bool FUN_00057a3c(void)

{
  FILE *__stream;
  char local_2008 [8192];
  
  __stream = fopen("/config/scanfreqdone","r");
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2008,"[DEBUG] Check if sweep is already done.\n",0x29);
    FUN_0004948c(4,local_2008,0);
  }
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return __stream != (FILE *)0x0;
}

