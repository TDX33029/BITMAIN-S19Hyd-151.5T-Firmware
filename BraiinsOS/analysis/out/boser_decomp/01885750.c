// FUN_01885750 @ 01885750 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_01885750(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  FUN_01885344(param_1 + 1);
  piVar4 = (int *)*param_1;
  FUN_01884f28(piVar4 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar4[2] != 0) {
    FUN_01a69838();
  }
  if (piVar4[4] != 0) {
    (**(code **)(piVar4[4] + 0xc))(piVar4[5]);
  }
  if (piVar4[7] != 0) {
    (**(code **)(piVar4[7] + 0xc))(piVar4[8]);
  }
  if (piVar4 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar2 = piVar4 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(piVar4);
    return;
  }
  return;
}

