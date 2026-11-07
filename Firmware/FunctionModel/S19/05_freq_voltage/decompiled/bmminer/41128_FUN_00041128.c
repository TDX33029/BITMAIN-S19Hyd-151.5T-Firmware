// FUN_00041128 @ 00041128  size=188  callers=0
// program: bmminer


void FUN_00041128(void)

{
  char local_808 [2048];
  
  if (4 < DAT_00087bbc) {
    builtin_strncpy(local_808,"[DEBUG] freq tuning fine exit.\n",0x20);
    FUN_00032218(4,local_808,0);
    if (4 < DAT_00087bbc) {
      builtin_strncpy(local_808,"[DEBUG] Free memory for pm grade.\n",0x23);
      FUN_00032218(4,local_808,0);
    }
  }
  if (DAT_00507494 != (void *)0x0) {
    free(DAT_00507494);
    DAT_00507494 = (void *)0x0;
  }
  return;
}

