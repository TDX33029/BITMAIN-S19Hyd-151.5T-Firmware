// FUN_00df4c2c @ 00df4c2c size=352 calls_out=7 calls_in=1
// strings: 

void FUN_00df4c2c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  iVar5 = 1;
  if (0x80000006 < (uint)param_1[6]) {
    iVar5 = param_1[6] + 0x7ffffff9;
  }
  if (iVar5 == 0) {
    FUN_01139b38(*param_1,param_1[1]);
    return;
  }
  if (iVar5 != 1) {
    return;
  }
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*param_1,param_1[1]);
  }
  uVar8 = param_1[6];
  uVar3 = 7;
  if ((int)uVar8 < 0) {
    uVar3 = uVar8 ^ 0x80000000;
  }
  switch(uVar3) {
  case 0:
  case 1:
  case 3:
    return;
  case 2:
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00df417c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
    return;
  case 5:
    piVar2 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[2],param_1[3]);
      return;
    }
    return;
  case 6:
    uVar7 = param_1[3];
    FUN_00702d50(uVar7,param_1[4]);
    uVar8 = param_1[2];
    uVar6 = 0x30;
    break;
  default:
    iVar5 = param_1[10];
    if ((iVar5 != 0) && (iVar4 = iVar5 * 4 + 4, iVar5 + iVar4 != -5)) {
      thunk_FUN_01be4678(param_1[9] - iVar4);
    }
    uVar7 = param_1[7];
    FUN_00702da0(uVar7,param_1[8]);
    uVar6 = 0x40;
  }
  FUN_0134aee0(uVar8,uVar7,8,uVar6);
  return;
}

