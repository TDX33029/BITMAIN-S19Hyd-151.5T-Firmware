// FUN_006f61c8 @ 006f61c8 size=380 calls_out=6 calls_in=1
// strings: 

void FUN_006f61c8(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  piVar4 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  piVar4 = (int *)(param_1 + 0x18);
  uVar7 = *(uint *)(param_1 + 0x28);
  uVar2 = 8;
  if ((int)uVar7 < 0) {
    uVar2 = uVar7 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
    piVar3 = (int *)*piVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    break;
  case 1:
  case 2:
  case 4:
    goto switchD_006f5dfc_caseD_1;
  case 3:
    FUN_0134bd64(*piVar4,*(undefined4 *)(param_1 + 0x1c));
    return;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x006f5e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar4 + 0x10))
              (param_1 + 0x24,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    return;
  case 6:
    piVar3 = (int *)*piVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    break;
  case 7:
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    FUN_00702b18(uVar8,*(undefined4 *)(param_1 + 0x20));
    FUN_0134aee0(*piVar4,uVar8,8,0x30);
    return;
  default:
    iVar6 = *(int *)(param_1 + 0x38);
    if ((iVar6 != 0) && (iVar5 = iVar6 * 4 + 4, iVar6 + iVar5 != -5)) {
      thunk_FUN_01be4678(*(int *)(param_1 + 0x34) - iVar5);
    }
    uVar8 = *(undefined4 *)(param_1 + 0x2c);
    FUN_00702b68(uVar8,*(undefined4 *)(param_1 + 0x30));
    FUN_0134aee0(uVar7,uVar8,8,0x40);
    return;
  }
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*piVar4,*(undefined4 *)(param_1 + 0x1c));
    return;
  }
switchD_006f5dfc_caseD_1:
  return;
}

