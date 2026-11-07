// FUN_00fbbf54 @ 00fbbf54 size=96 calls_out=4 calls_in=6
// strings: 

void FUN_00fbbf54(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x84);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0160ea2c(*(undefined4 *)(param_1 + 0x84));
  }
  FUN_0142e6dc(param_1);
  FUN_00d432cc(param_1 + 0x40);
  if (*(int *)(param_1 + 0x58) == 2) {
    return;
  }
  FUN_017cc7b0((int *)(param_1 + 0x58));
  return;
}

