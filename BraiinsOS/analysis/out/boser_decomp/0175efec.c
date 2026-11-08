// FUN_0175efec @ 0175efec size=244 calls_out=5 calls_in=0
// strings: 

void FUN_0175efec(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  FUN_0172f0d8();
  FUN_0172fdf0(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x14);
  if (piVar3 == (int *)0x0) {
    return;
  }
  FUN_01a8c624(piVar3 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar3[2] != 0) {
    FUN_01704b6c();
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
  piVar2 = piVar3 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(piVar3);
    return;
  }
  return;
}

