// FUN_0005737c @ 0005737c  size=232  callers=0
// program: bmminer


undefined4 FUN_0005737c(void)

{
  int iVar1;
  int iVar2;
  int param3;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  char acStack_2020 [8196];
  
  uVar3 = 0;
  param3 = 0;
  do {
    iVar2 = FUN_0002a6f0(param3);
    iVar1 = (param3 + 0x408) * 4;
    if (iVar2 != 0) {
      fVar4 = *(float *)(DAT_00944b70 + iVar1);
      fVar5 = *(float *)(*(int *)(DAT_00944b70 + 8) + 0x14);
      if (3 < DAT_000be63c) {
        snprintf(acStack_2020,0x2000,
                 "chain = %d, nonce_rate_max = %.4f, nonce_rate_threshold = %.4f\n",param3,
                 (double)fVar4,(double)fVar5);
        FUN_0004948c(3,acStack_2020,0);
        fVar4 = *(float *)(DAT_00944b70 + iVar1);
        fVar5 = *(float *)(*(int *)(DAT_00944b70 + 8) + 0x14);
      }
      if (fVar4 < fVar5) {
        uVar3 = 1;
        *(undefined4 *)(DAT_00944b70 + (param3 + 0x410) * 4) = 1;
      }
    }
    param3 = param3 + 1;
  } while (param3 != 4);
  return uVar3;
}

