// FUN_006c40f4 @ 006c40f4 size=288 calls_out=6 calls_in=2
// strings: 

void FUN_006c40f4(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = param_1[4];
  uVar2 = 8;
  if ((int)uVar6 < 0) {
    uVar2 = uVar6 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
    piVar3 = (int *)*param_1;
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
    goto switchD_006c411c_caseD_1;
  case 3:
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x006c41a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
    return;
  case 6:
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    break;
  case 7:
    uVar2 = param_1[1];
    FUN_00702b18(uVar2,param_1[2]);
    uVar6 = *param_1;
    uVar5 = 0x30;
    goto LAB_006c422c;
  default:
    uVar2 = param_1[8];
    if ((uVar2 != 0) && (iVar4 = uVar2 * 4 + 4, uVar2 + iVar4 != -5)) {
      thunk_FUN_01be4678(param_1[7] - iVar4);
    }
    uVar2 = param_1[5];
    FUN_00702b68(uVar2,param_1[6]);
    uVar5 = 0x40;
LAB_006c422c:
    FUN_0134aee0(uVar6,uVar2,8,uVar5);
    return;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*param_1,param_1[1]);
    return;
  }
switchD_006c411c_caseD_1:
  return;
}

