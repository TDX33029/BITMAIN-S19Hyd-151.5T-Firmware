// FUN_00d3238c @ 00d3238c size=68 calls_out=2 calls_in=6
// strings: 

void FUN_00d3238c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a97528(*param_1);
  }
  FUN_00d3259c(param_1 + 1);
  return;
}

