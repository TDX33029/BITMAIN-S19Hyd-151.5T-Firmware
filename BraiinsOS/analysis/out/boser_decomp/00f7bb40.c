// FUN_00f7bb40 @ 00f7bb40 size=192 calls_out=6 calls_in=1
// strings: 

void FUN_00f7bb40(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_00f7ba60(param_1 + 0xc4);
    if (param_1[0xc] != 3 || param_1[0xd] != 0) {
      FUN_019bb7e0(param_1[0x5a],param_1[0x5b]);
    }
    FUN_00f7ba04(param_1 + 0x60);
    FUN_00a9581c(param_1 + 199);
    return;
  }
  FUN_019bb7e0(param_1[6],param_1[7]);
  piVar2 = (int *)param_1[9];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[9],param_1[10]);
    }
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_006c1148(param_1 + 3);
  return;
}

