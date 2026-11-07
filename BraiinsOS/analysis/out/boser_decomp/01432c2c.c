// FUN_01432c2c @ 01432c2c size=292 calls_out=5 calls_in=0
// strings: 

void FUN_01432c2c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014212ac(param_1[1]);
  }
  FUN_014328a4(param_1 + 2);
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    return;
  }
  FUN_014371d0();
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar2[2] != 3 || piVar2[3] != 0) {
    FUN_0142e6dc();
  }
  if (piVar2[0x14] != 0) {
    (**(code **)(piVar2[0x14] + 0xc))(piVar2[0x15]);
  }
  if (piVar2[0x17] != 0) {
    (**(code **)(piVar2[0x17] + 0xc))(piVar2[0x18]);
  }
  if (piVar2 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar3 = piVar2 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(piVar2);
    return;
  }
  return;
}

