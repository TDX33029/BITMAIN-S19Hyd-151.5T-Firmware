// FUN_005f2ce0 @ 005f2ce0 size=160 calls_out=3 calls_in=1
// strings: 

void FUN_005f2ce0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    piVar2 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011814ec(*(undefined4 *)(param_1 + 0xc));
    }
    FUN_006a41c0(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xb0) != '\x03') {
    return;
  }
  FUN_005f5218(param_1 + 0x20);
  piVar2 = *(int **)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0xb1) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011814ec(*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}

