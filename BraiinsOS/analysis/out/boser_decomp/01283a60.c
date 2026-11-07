// FUN_01283a60 @ 01283a60 size=260 calls_out=6 calls_in=1
// strings: 

void FUN_01283a60(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_r2;
  int extraout_r3;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  
  iVar5 = *param_2;
  piVar6 = (int *)(iVar5 + 0x10);
  do {
    iVar2 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar2 + 1;
  if (-1 < iVar2) {
    *param_1 = &DAT_01d2e520;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = iVar5;
    return;
  }
  uVar7 = FUN_0128479c();
  piVar6 = (int *)uVar7;
  piVar3 = (int *)*(undefined4 *)((ulonglong)uVar7 >> 0x20);
  DataMemoryBarrier(0xb);
  if (piVar3[4] == 1) {
    iVar5 = *piVar3;
    iVar2 = piVar3[1];
    *piVar3 = 0;
    piVar3[1] = 1;
    piVar3[2] = 0;
    FUN_01283c54(piVar3);
    FUN_01bed864(iVar2,extraout_r2,extraout_r3);
  }
  else {
    uVar4 = 0;
    if (extraout_r3 < 0) {
LAB_01283b00:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,extraout_r3);
    }
    if (extraout_r3 == 0) {
      iVar5 = 0;
      iVar2 = 1;
    }
    else {
      uVar4 = 1;
      iVar2 = FUN_01298504(extraout_r3,1);
      iVar5 = extraout_r3;
      if (iVar2 == 0) goto LAB_01283b00;
    }
    FUN_01bed4e2(iVar2,extraout_r2,extraout_r3);
    FUN_01283c54(piVar3);
  }
  *piVar6 = iVar5;
  piVar6[1] = iVar2;
  piVar6[2] = extraout_r3;
                    /* WARNING: Could not recover jumptable at 0x01283b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1283a98)();
  return;
}

