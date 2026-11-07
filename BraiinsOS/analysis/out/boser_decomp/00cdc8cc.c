// FUN_00cdc8cc @ 00cdc8cc size=96 calls_out=2 calls_in=2
// strings: 

void FUN_00cdc8cc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x328) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x318) == '\x03') {
    FUN_00cdc96c(param_1 + 0x20);
  }
  piVar2 = *(int **)(param_1 + 0x324);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01784968(*(undefined4 *)(param_1 + 0x324));
    return;
  }
  return;
}

