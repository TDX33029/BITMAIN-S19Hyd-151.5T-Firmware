// FUN_005f6dd8 @ 005f6dd8 size=104 calls_out=3 calls_in=6
// strings: 

void FUN_005f6dd8(undefined4 *param_1)

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
  if (param_1[3] != -0x80000000) {
    FUN_01a2affc();
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  if (param_1[0x31] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x31],param_1[0x32]);
  return;
}

