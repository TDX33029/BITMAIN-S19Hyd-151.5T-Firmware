// FUN_01a387b8 @ 01a387b8 size=104 calls_out=3 calls_in=1
// strings: 

void FUN_01a387b8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) == 3 && *(int *)(param_1 + 0xc) == 0) {
    return;
  }
  FUN_0134c054(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),4,4);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  piVar2 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x50));
    return;
  }
  return;
}

