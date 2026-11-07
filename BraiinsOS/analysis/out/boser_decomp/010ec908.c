// FUN_010ec908 @ 010ec908 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_010ec908(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01a886e0(param_1 + 0x40);
  if (*param_1 == 6 && param_1[1] == 0) {
    FUN_01a886e0(param_1 + 2);
    FUN_00b19860(param_1[6],param_1[7]);
    return;
  }
  FUN_010e78c0(param_1);
  if (param_1[0x3a] == 0) {
    return;
  }
  FUN_01429548(param_1[0x3d]);
  piVar2 = (int *)param_1[0x3e];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01421174(param_1[0x3e]);
    }
  }
  FUN_01a69874(param_1 + 0x3a);
  return;
}

