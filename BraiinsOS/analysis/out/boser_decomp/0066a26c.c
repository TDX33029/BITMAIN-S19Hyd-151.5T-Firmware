// FUN_0066a26c @ 0066a26c size=76 calls_out=3 calls_in=0
// strings: 

void FUN_0066a26c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019da640(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_0066a468(param_1 + 0x28);
  FUN_014b1410(param_1 + 0x148);
  return;
}

