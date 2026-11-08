// FUN_00bb9850 @ 00bb9850 size=92 calls_out=2 calls_in=0
// strings: 

void FUN_00bb9850(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  cVar1 = *(char *)(param_1 + 0x25);
  bVar5 = cVar1 == '\x03';
  if (bVar5) {
    cVar1 = *(char *)(param_1 + 0x18);
  }
  if (!bVar5 || cVar1 != '\x03') {
    return;
  }
  puVar4 = (undefined4 *)(param_1 + 0x10);
  FUN_016af0b0(puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*puVar4);
    return;
  }
  return;
}

