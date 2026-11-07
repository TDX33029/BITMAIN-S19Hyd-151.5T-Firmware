// FUN_000580e8 @ 000580e8  size=156  callers=1
// program: bmminer


void FUN_000580e8(void)

{
  char local_2008 [8192];
  
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2008,"[DEBUG] Free memory for hw sweep.\n",0x23);
    FUN_0004948c(4,local_2008,0);
  }
  if (DAT_00944b7c != (void *)0x0) {
    if (*(void **)((int)DAT_00944b7c + 4) != (void *)0x0) {
      free(*(void **)((int)DAT_00944b7c + 4));
    }
    free(DAT_00944b7c);
    DAT_00944b7c = (void *)0x0;
  }
  return;
}

