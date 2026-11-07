// FUN_00bebe04 @ 00bebe04 size=140 calls_out=4 calls_in=2
// strings: 

void FUN_00bebe04(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xf4) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x68) == '\x04') {
    FUN_00bebf50(param_1 + 0x6c);
    FUN_00c822ec(*(undefined4 *)(param_1 + 100));
  }
  else if ((*(char *)(param_1 + 0x68) == '\x03') && (*(int *)(param_1 + 0x74) != 0)) {
    FUN_00c8204c(*(int *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),1);
  }
  piVar2 = *(int **)(param_1 + 0xf0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(*(undefined4 *)(param_1 + 0xf0));
    return;
  }
  return;
}

