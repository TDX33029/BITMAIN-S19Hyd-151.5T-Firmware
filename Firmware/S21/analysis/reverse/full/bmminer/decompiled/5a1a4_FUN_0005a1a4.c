// FUN_0005a1a4 @ 0005a1a4  size=212  callers=0
// program: bmminer


void FUN_0005a1a4(float param_1,int param_2)

{
  char acStack_2018 [8196];
  
  if (4 < DAT_000be63c) {
    snprintf(acStack_2018,0x2000,
             "[DEBUG] Check if chain is unqualified happen, chain = %d, nonce_rate_threshold = %.2f\n"
             ,param_2,(double)param_1);
    FUN_0004948c(4,acStack_2018,0);
  }
  if ((DAT_00944b84 == 0) || (*(int *)(DAT_00944b84 + 4) == 0)) {
    if (3 < DAT_000be63c) {
      FUN_00059694(DAT_00944b84);
      return;
    }
  }
  else if (*(float *)(DAT_00944b84 + param_2 * 4 + 0x30) < param_1) {
    *(undefined1 *)(DAT_00944b84 + param_2 + 0x1c) = 1;
  }
  return;
}

