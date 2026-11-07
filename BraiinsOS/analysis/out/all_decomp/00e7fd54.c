// FUN_00e7fd54 @ 00e7fd54 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_00e7fd54(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x40);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f324(*(undefined4 *)(param_1 + 0x40));
  }
  FUN_00d9e928(param_1 + 0x10);
  return;
}

