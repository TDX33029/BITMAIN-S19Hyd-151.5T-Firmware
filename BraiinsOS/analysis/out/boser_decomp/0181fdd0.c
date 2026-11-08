// FUN_0181fdd0 @ 0181fdd0 size=68 calls_out=1 calls_in=2
// strings: 

void FUN_0181fdd0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014212ac(*param_1);
  }
  piVar2 = (int *)param_1[1];
  FUN_00943f20();
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
  FUN_01823684(piVar2 + 8);
  if (piVar2[0x10] != 0) {
    (**(code **)(piVar2[0x10] + 0xc))(piVar2[0x11]);
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

