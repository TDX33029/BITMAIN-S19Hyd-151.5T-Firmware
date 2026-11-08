// FUN_01823c8c @ 01823c8c size=208 calls_out=3 calls_in=2
// strings: 

void FUN_01823c8c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (piVar4 == (int *)0x0) {
    return;
  }
  FUN_018817d0(piVar4 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = *param_1;
  FUN_0184f100(iVar2 + 8);
  if (*(int *)(iVar2 + 0x28) != 0) {
    (**(code **)(*(int *)(iVar2 + 0x28) + 0xc))(*(undefined4 *)(iVar2 + 0x2c));
  }
  if (*(int *)(iVar2 + 0x34) != 0) {
    (**(code **)(*(int *)(iVar2 + 0x34) + 0xc))(*(undefined4 *)(iVar2 + 0x38));
  }
  if (iVar2 == -1) {
    return;
  }
  piVar4 = (int *)(iVar2 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar2);
    return;
  }
  return;
}

