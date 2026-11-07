// FUN_0077a52c @ 0077a52c size=68 calls_out=2 calls_in=9
// strings: 

void FUN_0077a52c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0079217c(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013cdd5c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

