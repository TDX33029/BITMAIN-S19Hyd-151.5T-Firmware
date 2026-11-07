// FUN_00b9fcc0 @ 00b9fcc0 size=140 calls_out=4 calls_in=5
// strings: 

void FUN_00b9fcc0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x158) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x30) == '\x04') {
    FUN_00b9f9bc(param_1 + 0x38);
    FUN_00c822ec(*(undefined4 *)(param_1 + 0x2c));
  }
  else if ((*(char *)(param_1 + 0x30) == '\x03') && (*(int *)(param_1 + 0x34) != 0)) {
    FUN_00c8204c(*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),1);
  }
  piVar2 = *(int **)(param_1 + 0x154);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(*(undefined4 *)(param_1 + 0x154));
    return;
  }
  return;
}

