// FUN_005f5218 @ 005f5218 size=168 calls_out=4 calls_in=1
// strings: 

void FUN_005f5218(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x8c) == '\0') {
    FUN_006a41c0(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x8c) != '\x03') {
    return;
  }
  FUN_005f4b7c(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  *(undefined1 *)(piVar2 + 2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x14));
  }
  piVar2 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177f84(*(undefined4 *)(param_1 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x8d) = 0;
  return;
}

