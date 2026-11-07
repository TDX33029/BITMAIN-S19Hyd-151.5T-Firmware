// FUN_0174281c @ 0174281c size=68 calls_out=1 calls_in=2
// strings: 

void FUN_0174281c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014212ac(*param_1);
  }
  piVar3 = (int *)param_1[1];
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
  FUN_01744450(piVar3 + 8);
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

