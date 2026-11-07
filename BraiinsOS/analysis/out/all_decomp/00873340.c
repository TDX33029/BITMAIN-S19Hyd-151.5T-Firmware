// FUN_00873340 @ 00873340 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_00873340(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_007bed10();
  piVar2 = *(int **)(param_1 + 0x148);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f305c(*(undefined4 *)(param_1 + 0x148));
    return;
  }
  return;
}

