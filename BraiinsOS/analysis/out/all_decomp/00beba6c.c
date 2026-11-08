// FUN_00beba6c @ 00beba6c size=140 calls_out=4 calls_in=2
// strings: 

void FUN_00beba6c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xcc) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x50) == '\x04') {
    FUN_00bebbb8(param_1 + 0x54);
    FUN_00c822ec(*(undefined4 *)(param_1 + 0x4c));
  }
  else if ((*(char *)(param_1 + 0x50) == '\x03') && (*(int *)(param_1 + 0x5c) != 0)) {
    FUN_00c8204c(*(int *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),1);
  }
  piVar2 = *(int **)(param_1 + 200);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(*(undefined4 *)(param_1 + 200));
    return;
  }
  return;
}

