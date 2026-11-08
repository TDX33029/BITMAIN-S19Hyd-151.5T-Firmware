// FUN_007566e4 @ 007566e4 size=192 calls_out=11 calls_in=2
// strings: 

void FUN_007566e4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 1) {
    FUN_00756144(param_1 + 2);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  FUN_019deb7c(param_1 + 0x10);
  if (param_1[0x13] != -1) {
    FUN_01bf01d6();
  }
  FUN_01781558(param_1 + 0x10);
  FUN_00756454(param_1 + 0x14);
  FUN_00756518(param_1 + 0x26);
  if (param_1[0x22] != -0x80000000) {
    FUN_019bb7e0(param_1[0x22],param_1[0x23]);
  }
  FUN_00756554(param_1 + 0x33);
  FUN_007631bc(param_1 + 6);
  piVar2 = (int *)param_1[0xe];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0xe],param_1[0xf]);
    }
  }
  FUN_0075618c(param_1 + 0x40);
  return;
}

