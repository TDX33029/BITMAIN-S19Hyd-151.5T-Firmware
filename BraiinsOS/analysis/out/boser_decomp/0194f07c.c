// FUN_0194f07c @ 0194f07c size=96 calls_out=3 calls_in=3
// strings: 

void FUN_0194f07c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[0x34];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0195b288(param_1[0x34]);
  }
  FUN_0194f108(param_1 + 3);
  FUN_019bb7e0(*param_1,param_1[1]);
  if (param_1[0x31] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x31],param_1[0x32]);
  return;
}

