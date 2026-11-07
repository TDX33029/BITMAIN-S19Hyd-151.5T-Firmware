// FUN_0003b534 @ 0003b534  size=136  callers=2
// program: bmminer


bool FUN_0003b534(void)

{
  FILE *__stream;
  char local_808 [2048];
  
  __stream = fopen64("/config/scanfreqdone","r");
  if (4 < DAT_00087bbc) {
    builtin_strncpy(local_808,"[DEBUG] Check if sweep is already done.\n",0x29);
    FUN_00032218(4,local_808,0);
  }
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return __stream != (FILE *)0x0;
}

