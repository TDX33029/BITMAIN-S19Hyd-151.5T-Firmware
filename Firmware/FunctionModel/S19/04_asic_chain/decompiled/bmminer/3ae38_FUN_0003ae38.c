// FUN_0003ae38 @ 0003ae38  size=232  callers=0
// program: bmminer


undefined4 FUN_0003ae38(void)

{
  int iVar1;
  int iVar2;
  int param3;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  char acStack_820 [2052];
  
  uVar3 = 0;
  param3 = 0;
  do {
    iVar2 = FUN_000201d8(param3);
    iVar1 = (param3 + 0x408) * 4;
    if (iVar2 != 0) {
      fVar4 = *(float *)(DAT_00507478 + iVar1);
      fVar5 = *(float *)(*(int *)(DAT_00507478 + 8) + 0x14);
      if (3 < DAT_00087bbc) {
        snprintf(acStack_820,0x800,
                 "chain = %d, nonce_rate_max = %.4f, nonce_rate_threshold = %.4f\n",param3,
                 (double)fVar4,(double)fVar5);
        FUN_00032218(3,acStack_820,0);
        fVar4 = *(float *)(DAT_00507478 + iVar1);
        fVar5 = *(float *)(*(int *)(DAT_00507478 + 8) + 0x14);
      }
      if (fVar4 < fVar5) {
        uVar3 = 1;
        *(undefined4 *)(DAT_00507478 + (param3 + 0x410) * 4) = 1;
      }
    }
    param3 = param3 + 1;
  } while (param3 != 4);
  return uVar3;
}

