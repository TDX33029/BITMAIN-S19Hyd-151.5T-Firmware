// FUN_006dd0fc @ 006dd0fc size=276 calls_out=6 calls_in=3
// strings: 

void FUN_006dd0fc(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1[4];
  uVar5 = 7;
  if ((int)uVar6 < 0) {
    uVar5 = uVar6 ^ 0x80000000;
  }
  switch(uVar5) {
  case 0:
  case 1:
  case 3:
    goto switchD_006dd124_caseD_0;
  case 2:
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x006dd1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
    return;
  case 5:
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
      return;
    }
switchD_006dd124_caseD_0:
    return;
  case 6:
    iVar2 = param_1[1];
    FUN_00702d50(iVar2,param_1[2]);
    FUN_0134aee0(*param_1,iVar2,8,0x30);
    return;
  default:
    iVar2 = param_1[8];
    if ((iVar2 != 0) && (iVar4 = iVar2 * 4 + 4, iVar2 + iVar4 != -5)) {
      thunk_FUN_01be4678(param_1[7] - iVar4);
    }
    iVar2 = param_1[5];
    FUN_00702da0(iVar2,param_1[6]);
    FUN_0134aee0(param_1[4],iVar2,8,0x40);
    return;
  }
}

