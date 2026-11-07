// FUN_00c85f64 @ 00c85f64 size=168 calls_out=3 calls_in=3
// strings: 

void FUN_00c85f64(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x4c) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x2c) == '\x04') {
    if ((*(char *)(param_1 + 0x3c) == '\x03') && (*(int *)(param_1 + 0x34) != 0)) {
      FUN_00c8204c(*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),1);
    }
    FUN_00c822ec(*(undefined4 *)(param_1 + 0x28));
  }
  else if ((*(char *)(param_1 + 0x2c) == '\x03') && (*(int *)(param_1 + 0x30) != 0)) {
    FUN_00c8204c(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1);
  }
  piVar2 = *(int **)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}

