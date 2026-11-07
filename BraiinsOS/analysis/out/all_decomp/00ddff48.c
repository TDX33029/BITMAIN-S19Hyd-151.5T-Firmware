// FUN_00ddff48 @ 00ddff48 size=108 calls_out=4 calls_in=1
// strings: 

void FUN_00ddff48(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x978) == '\0') {
    FUN_005bee90(param_1);
    piVar2 = *(int **)(param_1 + 0xe0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0xe0));
    }
    FUN_00d9e928(param_1 + 0xb0);
    return;
  }
  if (*(char *)(param_1 + 0x978) == '\x03') {
    FUN_00ddffe0(param_1 + 0xe8);
    return;
  }
  return;
}

