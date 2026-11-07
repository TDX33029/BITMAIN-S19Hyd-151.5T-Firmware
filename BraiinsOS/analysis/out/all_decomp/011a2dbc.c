// FUN_011a2dbc @ 011a2dbc size=64 calls_out=2 calls_in=0
// strings: 

void FUN_011a2dbc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01164f34();
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    return;
  }
  return;
}

