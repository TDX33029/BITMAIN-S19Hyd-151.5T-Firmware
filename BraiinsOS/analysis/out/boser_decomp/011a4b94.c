// FUN_011a4b94 @ 011a4b94 size=292 calls_out=6 calls_in=1
// strings: 

void FUN_011a4b94(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 0x18);
  uVar2 = 8;
  if ((int)uVar8 < 0) {
    uVar2 = uVar8 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
    piVar3 = *(int **)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    break;
  case 1:
  case 2:
  case 4:
    goto switchD_011a4bbc_caseD_1;
  case 3:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x011a4c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 0x10))
              (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    return;
  case 6:
    piVar3 = *(int **)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    break;
  case 7:
    uVar7 = *(undefined4 *)(param_1 + 0xc);
    FUN_00702b18(uVar7,*(undefined4 *)(param_1 + 0x10));
    uVar8 = *(uint *)(param_1 + 8);
    uVar6 = 0x30;
    goto LAB_011a4cd0;
  default:
    iVar4 = *(int *)(param_1 + 0x28);
    if ((iVar4 != 0) && (iVar5 = iVar4 * 4 + 4, iVar4 + iVar5 != -5)) {
      thunk_FUN_01be4678(*(int *)(param_1 + 0x24) - iVar5);
    }
    uVar7 = *(undefined4 *)(param_1 + 0x1c);
    FUN_00702b68(uVar7,*(undefined4 *)(param_1 + 0x20));
    uVar6 = 0x40;
LAB_011a4cd0:
    FUN_0134aee0(uVar8,uVar7,8,uVar6);
    return;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return;
  }
switchD_011a4bbc_caseD_1:
  return;
}

