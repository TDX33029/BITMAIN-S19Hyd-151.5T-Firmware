// FUN_00d35adc @ 00d35adc size=64 calls_out=2 calls_in=4
// strings: 

void FUN_00d35adc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_012cb72c();
  piVar2 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a384d0(*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}

