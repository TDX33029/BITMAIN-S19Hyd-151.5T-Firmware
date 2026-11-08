// FUN_01772f6c @ 01772f6c size=60 calls_out=1 calls_in=2
// strings: 

void FUN_01772f6c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  FUN_017da3b0();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  FUN_017d2d2c(param_1 + 8);
  if (param_1[0x10] != 0) {
    (**(code **)(param_1[0x10] + 0xc))(param_1[0x11]);
  }
  if (param_1 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar3 = param_1 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

