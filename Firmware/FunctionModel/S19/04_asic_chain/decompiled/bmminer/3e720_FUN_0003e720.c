// FUN_0003e720 @ 0003e720  size=212  callers=0
// program: bmminer


void FUN_0003e720(float param_1,int param_2)

{
  char acStack_818 [2052];
  
  if (4 < DAT_00087bbc) {
    snprintf(acStack_818,0x800,
             "[DEBUG] Check if chain is unqualified happen, chain = %d, nonce_rate_threshold = %.2f\n"
             ,param_2,(double)param_1);
    FUN_00032218(4,acStack_818,0);
  }
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      FUN_0003dc10(DAT_0050748c);
      return;
    }
  }
  else if (*(float *)(DAT_0050748c + param_2 * 4 + 0x30) < param_1) {
    *(undefined1 *)(DAT_0050748c + param_2 + 0x1c) = 1;
  }
  return;
}

