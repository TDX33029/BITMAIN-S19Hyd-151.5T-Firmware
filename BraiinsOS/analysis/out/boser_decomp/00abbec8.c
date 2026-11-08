// FUN_00abbec8 @ 00abbec8 size=184 calls_out=5 calls_in=12
// strings: 

void FUN_00abbec8(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = 7;
  if (param_1[4] < 0) {
    uVar2 = param_1[4] ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
  case 1:
  case 3:
    goto switchD_00abbef0_caseD_0;
  case 2:
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00abbf98. Too many branches */
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
switchD_00abbef0_caseD_0:
    return;
  case 6:
    iVar4 = param_1[1];
    FUN_00702d50(iVar4,param_1[2]);
    FUN_0134aee0(*param_1,iVar4,8,0x30);
    return;
  default:
    FUN_006c1408(param_1);
    return;
  }
}

