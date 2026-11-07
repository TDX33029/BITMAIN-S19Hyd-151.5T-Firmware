// FUN_00db19c4 @ 00db19c4 size=124 calls_out=4 calls_in=57
// strings: 

void FUN_00db19c4(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = 7;
  if (param_1[4] < 0) {
    uVar2 = param_1[4] ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
  case 1:
  case 3:
    return;
  case 2:
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00db1a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
    return;
  case 5:
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    break;
  case 6:
    FUN_006f66dc();
    return;
  default:
    FUN_006c1408();
    return;
  }
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
  return;
}

