// FUN_00d3a82c @ 00d3a82c size=168 calls_out=4 calls_in=2
// strings: 

void FUN_00d3a82c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (*param_1 == 1) {
    iVar3 = 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      iVar3 = param_1[4];
    }
    if ((param_1[2] != 0 || param_1[3] != 0) && iVar3 != 0) {
      FUN_01443048(iVar3,param_1[5]);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  FUN_01a886e0(param_1 + 2);
  FUN_00d3a8b0(param_1 + 6);
  piVar2 = (int *)param_1[7];
  if (piVar2 == (int *)0x0) {
    return;
  }
  FUN_01a8c624(piVar2 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar2[2] != 0) {
    FUN_01a69838();
  }
  if (piVar2[4] != 0) {
    (**(code **)(piVar2[4] + 0xc))(piVar2[5]);
  }
  if (piVar2[7] != 0) {
    (**(code **)(piVar2[7] + 0xc))(piVar2[8]);
  }
  if (piVar2 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar4 = piVar2 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(piVar2);
    return;
  }
  return;
}

