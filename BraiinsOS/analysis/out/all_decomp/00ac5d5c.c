// FUN_00ac5d5c @ 00ac5d5c size=92 calls_out=3 calls_in=4
// strings: 

void FUN_00ac5d5c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0x84) != '\x03') {
    return;
  }
  puVar4 = (undefined4 *)(param_1 + 0x20);
  FUN_016af0b0(puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*puVar4);
  }
  FUN_00a07b4c(param_1 + 0x28);
  return;
}

