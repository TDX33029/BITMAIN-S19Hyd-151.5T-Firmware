// FUN_013d97f0 @ 013d97f0 size=248 calls_out=4 calls_in=1
// strings: 

void FUN_013d97f0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = FUN_013d2518(param_2);
  if (iVar1 == 0x5c) {
    FUN_013d2e34(param_1,param_2);
    return;
  }
  iVar1 = *param_2;
  uVar7 = *(uint *)(iVar1 + 0x50);
  uVar2 = FUN_013d2518(param_2);
  uVar4 = 1;
  if (0x7f < uVar2) {
    uVar4 = 2;
  }
  if ((0x7ff < uVar2) && (uVar4 = 4, uVar2 < 0x10000)) {
    uVar4 = 3;
  }
  if (CARRY4(uVar4,uVar7)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01894f38);
  }
  iVar9 = *(int *)(iVar1 + 0x58) + 1;
  if (*(int *)(iVar1 + 0x58) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01894f28);
  }
  iVar8 = *(int *)(iVar1 + 0x54);
  iVar3 = FUN_013d2518(param_2);
  uVar5 = *(undefined4 *)(iVar1 + 0x54);
  uVar6 = *(undefined4 *)(iVar1 + 0x58);
  param_1[3] = *(uint *)(iVar1 + 0x50);
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  uVar5 = FUN_013d2518(param_2);
  FUN_013d2d20(param_2);
  *(undefined1 *)(param_1 + 9) = 0;
  if (iVar3 == 10) {
    iVar9 = 1;
    iVar8 = iVar8 + 1;
  }
  param_1[6] = uVar4 + uVar7;
  param_1[7] = iVar8;
  param_1[8] = iVar9;
  *param_1 = 0x22;
  param_1[1] = 0x80000002;
  param_1[2] = uVar5;
  return;
}

