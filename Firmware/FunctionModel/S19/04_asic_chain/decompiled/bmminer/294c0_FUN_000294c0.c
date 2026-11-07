// FUN_000294c0 @ 000294c0  size=544  callers=1
// program: bmminer


void FUN_000294c0(void)

{
  uint uVar1;
  int iVar2;
  int param3;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double param4;
  undefined8 uVar8;
  char acStack_828 [2052];
  
  if (DAT_0008a7e8 == 1) {
    memset(&DAT_00089298,0,0x20);
    DAT_0008a7e8 = 0;
  }
  iVar2 = FUN_00029324();
  iVar4 = iVar2 - DAT_000892b8;
  puVar3 = &DAT_00089298;
  param3 = 0;
  DAT_000892b8 = iVar2;
  do {
    while( true ) {
      iVar2 = FUN_000201d8(param3);
      uVar1 = DAT_0008920c;
      if (iVar2 != 0) break;
LAB_00029650:
      param3 = param3 + 1;
      puVar3 = puVar3 + 2;
      if (param3 == 4) goto LAB_00029660;
    }
    uVar5 = (&DAT_00b2d1e0)[param3 * 2];
    uVar6 = (&DAT_00b2d1e4)[param3 * 2];
    uVar7 = uVar5 - *puVar3;
    uVar8 = FUN_00067ad0(-uVar7,(uVar7 & 0xfffffffe) +
                                ((uint)(uVar7 * -0x80000000 < uVar7) * -2 -
                                (uVar6 - (puVar3[1] + (uint)(uVar5 < *puVar3)))) +
                                (uint)CARRY4(uVar7 * 0x7fffffff,uVar7 * 0x7fffffff) +
                                (uint)CARRY4(uVar7 * -2,uVar7),iVar4,iVar4 >> 0x1f);
    FUN_00067ad0((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000000000,0);
    param4 = (double)FUN_000679c4();
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    *(double *)(&DAT_0071c480 + (param3 * 0x18 + uVar1 % 0x18) * 8) = param4;
    if (((uVar1 < 2) ||
        (*(double *)(&DAT_0071c480 + (param3 * 0x18 + (uVar1 - 1) % 0x18) * 8) * 0.75 <= param4)) ||
       (DAT_00087bbc < 4)) goto LAB_00029650;
    snprintf(acStack_828,0x800,"chain %d hash rate %.2f low in %ld mins",param3,param4,iVar4 / 0x3c)
    ;
    param3 = param3 + 1;
    FUN_00032218(3,acStack_828,0);
    puVar3 = puVar3 + 2;
  } while (param3 != 4);
LAB_00029660:
  DAT_0008920c = DAT_0008920c + 1;
  return;
}

