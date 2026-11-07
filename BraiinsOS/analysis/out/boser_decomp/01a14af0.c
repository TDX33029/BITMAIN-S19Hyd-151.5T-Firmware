// FUN_01a14af0 @ 01a14af0 size=184 calls_out=2 calls_in=1
// strings: 

void FUN_01a14af0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  FUN_019bb7e0(param_1[0x44],param_1[0x45]);
  if (param_1[0xe] == 0) {
    FUN_019bb7e0(param_1[0xf],param_1[0x10]);
  }
  if (param_1[0x14] != -0x80000000) {
    FUN_019bb7e0(param_1[0x14],param_1[0x15]);
    FUN_019bb7e0(param_1[0x17],param_1[0x18]);
    FUN_019bb7e0(param_1[0x1d],param_1[0x1e]);
    FUN_019bb7e0(param_1[0x23],param_1[0x24]);
    FUN_019bb7e0(param_1[0x29],param_1[0x2a]);
    FUN_019bb7e0(param_1[0x2f],param_1[0x30]);
    FUN_019bb7e0(param_1[0x35],param_1[0x36]);
    FUN_019bb7e0(param_1[0x3b],param_1[0x3c]);
  }
  piVar2 = (int *)param_1[0x4a];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0x4a]);
    return;
  }
  return;
}

