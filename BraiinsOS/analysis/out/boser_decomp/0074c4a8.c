// FUN_0074c4a8 @ 0074c4a8 size=84 calls_out=4 calls_in=6
// strings: 

void FUN_0074c4a8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0079213c(param_1 + 0x148);
  FUN_0074b190(param_1 + 200);
  FUN_0074c5a4(param_1);
  piVar2 = *(int **)(param_1 + 0x1a4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0076db24(*(undefined4 *)(param_1 + 0x1a4));
    return;
  }
  return;
}

