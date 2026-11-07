// FUN_00ba8128 @ 00ba8128 size=232 calls_out=6 calls_in=47
// strings: 

void FUN_00ba8128(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
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
    goto switchD_00ba8150_caseD_0;
  case 2:
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00ba8228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
    return;
  case 5:
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*param_1,param_1[1]);
      return;
    }
switchD_00ba8150_caseD_0:
    return;
  case 6:
    FUN_006f66dc(param_1);
    return;
  default:
    iVar3 = param_1[8];
    if ((iVar3 != 0) && (iVar5 = iVar3 * 4 + 4, iVar3 + iVar5 != -5)) {
      thunk_FUN_01be4678(param_1[7] - iVar5);
    }
    iVar3 = param_1[5];
    FUN_00702da0(iVar3,param_1[6]);
    FUN_0134aee0(uVar6,iVar3,8,0x40);
    return;
  }
}

