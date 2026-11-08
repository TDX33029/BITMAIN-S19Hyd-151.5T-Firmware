// FUN_009cf4a0 @ 009cf4a0 size=352 calls_out=7 calls_in=1
// strings: 

void FUN_009cf4a0(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  iVar2 = 1;
  if (0x80000006 < (uint)param_1[6]) {
    iVar2 = param_1[6] + 0x7ffffff9;
  }
  if (iVar2 == 0) {
    FUN_01139b38(*param_1,param_1[1]);
    return;
  }
  if (iVar2 != 1) {
    return;
  }
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*param_1,param_1[1]);
  }
  uVar8 = param_1[6];
  uVar4 = 7;
  if ((int)uVar8 < 0) {
    uVar4 = uVar8 ^ 0x80000000;
  }
  switch(uVar4) {
  case 0:
  case 1:
  case 3:
    return;
  case 2:
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x009cf618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
    return;
  case 5:
    piVar3 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
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
    iVar2 = param_1[10];
    if ((iVar2 != 0) && (iVar5 = iVar2 * 4 + 4, iVar2 + iVar5 != -5)) {
      thunk_FUN_01be4678(param_1[9] - iVar5);
    }
    uVar7 = param_1[7];
    FUN_00702da0(uVar7,param_1[8]);
    uVar6 = 0x40;
  }
  FUN_0134aee0(uVar8,uVar7,8,uVar6);
  return;
}

