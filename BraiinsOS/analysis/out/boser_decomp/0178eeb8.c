// FUN_0178eeb8 @ 0178eeb8 size=124 calls_out=3 calls_in=1
// strings: 

void FUN_0178eeb8(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)((int)param_1 + 0x19) == '\x02') {
    return;
  }
  FUN_014323b0(param_1 + 3);
  if (*(char *)(param_1 + 2) != '\x02') {
    FUN_0178ef10();
    return;
  }
  piVar2 = (int *)*param_1;
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014212ac();
  }
  FUN_00943f20();
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
  FUN_017d2d2c(piVar3 + 8);
  if (piVar3[0x10] != 0) {
    (**(code **)(piVar3[0x10] + 0xc))(piVar3[0x11]);
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

