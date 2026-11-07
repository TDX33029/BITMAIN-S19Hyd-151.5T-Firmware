// FUN_00702bfc @ 00702bfc size=256 calls_out=6 calls_in=3
// strings: 

void FUN_00702bfc(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = param_1[4];
  uVar2 = 7;
  if ((int)uVar6 < 0) {
    uVar2 = uVar6 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
  case 1:
  case 3:
    return;
  case 2:
    FUN_0134bd64(*param_1,param_1[1]);
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00702d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
    return;
  case 5:
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*param_1,param_1[1]);
      return;
    }
    return;
  case 6:
    uVar2 = param_1[1];
    FUN_00702d50(uVar2,param_1[2]);
    uVar6 = *param_1;
    uVar5 = 0x30;
    break;
  default:
    uVar2 = param_1[8];
    if ((uVar2 != 0) && (iVar4 = uVar2 * 4 + 4, uVar2 + iVar4 != -5)) {
      thunk_FUN_01be4678(param_1[7] - iVar4);
    }
    uVar2 = param_1[5];
    FUN_00702da0(uVar2,param_1[6]);
    uVar5 = 0x40;
  }
  FUN_0134aee0(uVar6,uVar2,8,uVar5);
  return;
}

