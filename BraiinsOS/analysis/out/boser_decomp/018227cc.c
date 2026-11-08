// FUN_018227cc @ 018227cc size=168 calls_out=4 calls_in=0
// strings: 

void FUN_018227cc(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_01820b28();
  FUN_01822814(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x14);
  if (piVar3 == (int *)0x0) {
    return;
  }
  FUN_01a8c624(piVar3 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar3[2] != 0) {
    FUN_01a69838();
  }
  if (piVar3[4] != 0) {
    (**(code **)(piVar3[4] + 0xc))(piVar3[5]);
  }
  if (piVar3[7] != 0) {
    (**(code **)(piVar3[7] + 0xc))(piVar3[8]);
  }
  if (piVar3 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar4 = piVar3 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(piVar3);
    return;
  }
  return;
}

