// FUN_011d5414 @ 011d5414 size=188 calls_out=5 calls_in=0
// strings: 

void FUN_011d5414(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x13c) == '\0') {
    piVar2 = *(int **)(param_1 + 0x138);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a9c6d8(*(undefined4 *)(param_1 + 0x138));
    }
    FUN_0142e6dc();
    FUN_005f1224(param_1 + 0x40);
    FUN_0178e884(*(undefined4 *)(param_1 + 0x128));
    return;
  }
  if (*(char *)(param_1 + 0x13c) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x134));
  piVar2 = *(int **)(param_1 + 0x138);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a9c6d8(*(undefined4 *)(param_1 + 0x138));
    return;
  }
  return;
}

