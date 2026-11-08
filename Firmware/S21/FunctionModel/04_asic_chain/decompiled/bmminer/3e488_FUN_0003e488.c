// FUN_0003e488 @ 0003e488  size=544  callers=1
// program: bmminer


void FUN_0003e488(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int param3;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double param4;
  undefined8 uVar9;
  char acStack_2028 [8196];
  
  if (DAT_000c9480 == 1) {
    memset(&DAT_000c7f80,0,0x20);
    DAT_000c9480 = 0;
  }
  iVar2 = FUN_0003e028();
  puVar5 = &DAT_000c7f80;
  iVar4 = iVar2 - DAT_000c7fa0;
  if (iVar2 == DAT_000c7fa0) {
    iVar3 = 1;
  }
  else {
    iVar3 = iVar2 - DAT_000c7fa0;
  }
  param3 = 0;
  DAT_000c7fa0 = iVar2;
  do {
    while( true ) {
      iVar2 = FUN_0002a6f0(param3);
      uVar1 = DAT_000c709c;
      if (iVar2 != 0) break;
LAB_0003e61c:
      param3 = param3 + 1;
      puVar5 = puVar5 + 2;
      if (param3 == 4) goto LAB_0003e62c;
    }
    uVar6 = (&DAT_012a2918)[param3 * 2];
    uVar7 = (&DAT_012a291c)[param3 * 2];
    uVar8 = uVar6 - *puVar5;
    uVar9 = FUN_00098f3c(-uVar8,(uVar8 & 0xfffffffe) +
                                ((uint)(uVar8 * -0x80000000 < uVar8) * -2 -
                                (uVar7 - (puVar5[1] + (uint)(uVar6 < *puVar5)))) +
                                (uint)CARRY4(uVar8 * 0x7fffffff,uVar8 * 0x7fffffff) +
                                (uint)CARRY4(uVar8 * -2,uVar8),iVar3,iVar3 >> 0x1f);
    FUN_00098f3c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1000000000,0);
    param4 = (double)FUN_00098c14();
    *puVar5 = uVar6;
    puVar5[1] = uVar7;
    *(double *)(&DAT_00a4f4a8 + (param3 * 0x18 + uVar1 % 0x18) * 8) = param4;
    if (((uVar1 < 2) ||
        (*(double *)(&DAT_00a4f4a8 + (param3 * 0x18 + (uVar1 - 1) % 0x18) * 8) * 0.75 <= param4)) ||
       (DAT_000be63c < 4)) goto LAB_0003e61c;
    snprintf(acStack_2028,0x2000,"chain %d hash rate %.2f low in %ld mins",param3,param4,
             iVar4 / 0x3c);
    param3 = param3 + 1;
    FUN_0004948c(3,acStack_2028,0);
    puVar5 = puVar5 + 2;
  } while (param3 != 4);
LAB_0003e62c:
  DAT_000c709c = DAT_000c709c + 1;
  return;
}

