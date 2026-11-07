// FUN_00f2aecc @ 00f2aecc size=28 calls_out=1 calls_in=2
// strings: 

void FUN_00f2aecc(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01a886e0(param_1 + 0x32);
  if (*param_1 == 6 && param_1[1] == 0) {
    FUN_01a886e0(param_1 + 2);
    FUN_005f6438(param_1[6],param_1[7]);
    return;
  }
  FUN_00d36a10(param_1);
  if (param_1[0x2c] == 0) {
    return;
  }
  FUN_01429548(param_1[0x2f]);
  piVar2 = (int *)param_1[0x30];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01421174(param_1[0x30]);
    }
  }
  FUN_01a69874(param_1 + 0x2c);
  return;
}

