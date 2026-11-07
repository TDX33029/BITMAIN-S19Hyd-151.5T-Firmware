// FUN_00657a18 @ 00657a18 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_00657a18(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00660248(*(undefined4 *)(param_1 + 0xc));
  }
  FUN_00657a5c(param_1);
  return;
}

