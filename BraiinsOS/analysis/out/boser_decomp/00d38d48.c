// FUN_00d38d48 @ 00d38d48 size=160 calls_out=3 calls_in=3
// strings: 

void FUN_00d38d48(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    piVar2 = *(int **)(param_1 + 0x60);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x60));
    }
    FUN_00d38e38(param_1 + 100);
    return;
  }
  if (*(char *)(param_1 + 0x80) != '\x03') {
    return;
  }
  FUN_01431b40(param_1 + 0x10);
  FUN_00d38e38(param_1 + 0x74);
  piVar2 = *(int **)(param_1 + 0x70);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x70));
    return;
  }
  return;
}

