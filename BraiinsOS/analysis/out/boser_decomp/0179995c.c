// FUN_0179995c @ 0179995c size=76 calls_out=3 calls_in=13
// strings: 

void FUN_0179995c(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 8);
  FUN_019e8cd0(piVar3);
  FUN_00668d74(param_1);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db52c(*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}

