// FUN_00783aa0 @ 00783aa0 size=24 calls_out=1 calls_in=1
// strings: 

void FUN_00783aa0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  FUN_013e19bc();
  piVar3 = *(int **)(param_1 + 0xc0);
  FUN_013cee40(piVar3 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013cef90(piVar3);
    return;
  }
  return;
}

