// FUN_0003bd28 @ 0003bd28  size=156  callers=1
// program: bmminer


void FUN_0003bd28(void)

{
  char local_808 [2048];
  
  if (4 < DAT_00087bbc) {
    builtin_strncpy(local_808,"[DEBUG] Free memory for hw sweep.\n",0x23);
    FUN_00032218(4,local_808,0);
  }
  if (DAT_00507484 != (void *)0x0) {
    if (*(void **)((int)DAT_00507484 + 4) != (void *)0x0) {
      free(*(void **)((int)DAT_00507484 + 4));
    }
    free(DAT_00507484);
    DAT_00507484 = (void *)0x0;
  }
  return;
}

