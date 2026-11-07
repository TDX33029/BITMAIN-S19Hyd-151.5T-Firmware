// FUN_006f64b8 @ 006f64b8 size=328 calls_out=8 calls_in=1
// strings: 

void FUN_006f64b8(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  piVar2 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  }
  FUN_006f654c(param_1 + 0x58);
  FUN_00b96a8c(param_1 + 100);
  if (*(int *)(param_1 + 0x30) == -0x7ffffff9) {
    return;
  }
  piVar2 = (int *)(param_1 + 0x20);
  uVar7 = *(uint *)(param_1 + 0x30);
  uVar3 = 7;
  if ((int)uVar7 < 0) {
    uVar3 = uVar7 ^ 0x80000000;
  }
  switch(uVar3) {
  case 0:
  case 1:
  case 3:
    goto switchD_006f65e0_caseD_0;
  case 2:
    FUN_0134bd64(*piVar2,*(undefined4 *)(param_1 + 0x24));
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x006f66b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x10))
              (param_1 + 0x2c,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
    return;
  case 5:
    piVar4 = (int *)*piVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*piVar2,*(undefined4 *)(param_1 + 0x24));
      return;
    }
switchD_006f65e0_caseD_0:
    return;
  case 6:
    FUN_006f66dc(piVar2);
    return;
  default:
    iVar5 = *(int *)(param_1 + 0x40);
    if ((iVar5 != 0) && (iVar6 = iVar5 * 4 + 4, iVar5 + iVar6 != -5)) {
      thunk_FUN_01be4678(*(int *)(param_1 + 0x3c) - iVar6);
    }
    uVar8 = *(undefined4 *)(param_1 + 0x34);
    FUN_00702da0(uVar8,*(undefined4 *)(param_1 + 0x38));
    FUN_0134aee0(uVar7,uVar8,8,0x40);
    return;
  }
}

