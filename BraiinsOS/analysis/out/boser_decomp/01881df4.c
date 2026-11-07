// FUN_01881df4 @ 01881df4 size=64 calls_out=1 calls_in=1
// strings: 

void FUN_01881df4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01a8c624(param_1 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (param_1[2] != 0) {
    FUN_01a69838();
  }
  if (param_1[4] != 0) {
    (**(code **)(param_1[4] + 0xc))(param_1[5]);
  }
  if (param_1[7] != 0) {
    (**(code **)(param_1[7] + 0xc))(param_1[8]);
  }
  if (param_1 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar2 = param_1 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

