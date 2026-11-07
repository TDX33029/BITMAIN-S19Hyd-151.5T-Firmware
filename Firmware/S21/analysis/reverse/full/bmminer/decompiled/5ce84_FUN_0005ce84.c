// FUN_0005ce84 @ 0005ce84  size=188  callers=0
// program: bmminer


void FUN_0005ce84(void)

{
  char local_2008 [8192];
  
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2008,"[DEBUG] freq tuning fine exit.\n",0x20);
    FUN_0004948c(4,local_2008,0);
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2008,"[DEBUG] Free memory for pm grade.\n",0x23);
      FUN_0004948c(4,local_2008,0);
    }
  }
  if (DAT_00944b8c != (void *)0x0) {
    free(DAT_00944b8c);
    DAT_00944b8c = (void *)0x0;
  }
  return;
}

