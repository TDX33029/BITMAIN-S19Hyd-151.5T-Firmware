// FUN_00d33eb4 @ 00d33eb4 size=124 calls_out=3 calls_in=4
// strings: 

void FUN_00d33eb4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[0x13];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182bec(param_1[0x13]);
  }
  piVar2 = (int *)param_1[0x14];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_1[0x14]);
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  if (param_1[4] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[4],param_1[5]);
  FUN_019bb7e0(param_1[7],param_1[8]);
  if (param_1[10] != -0x80000000) {
    FUN_019bb7e0(param_1[10],param_1[0xb]);
  }
  if (param_1[0xd] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0xd],param_1[0xe]);
  return;
}

