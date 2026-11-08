// FUN_00f84bbc @ 00f84bbc size=188 calls_out=4 calls_in=4
// strings: 

void FUN_00f84bbc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x58c) == '\0') {
    piVar2 = *(int **)(param_1 + 0x578);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(*(undefined4 *)(param_1 + 0x578));
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
    FUN_00ebabdc(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x58c) != '\x03') {
    return;
  }
  FUN_00f80f90(param_1 + 0xd0);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x580),*(undefined4 *)(param_1 + 0x584));
  *(undefined1 *)(param_1 + 0x58d) = 0;
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
  piVar2 = *(int **)(param_1 + 0x57c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(*(undefined4 *)(param_1 + 0x57c));
    return;
  }
  return;
}

