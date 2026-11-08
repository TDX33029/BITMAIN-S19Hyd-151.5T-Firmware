// FUN_00a97164 @ 00a97164 size=112 calls_out=2 calls_in=5
// strings: 

void FUN_00a97164(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 8) != 0;
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  if (bVar3 && iVar1 != -0x80000000) {
    FUN_019bb7e0(iVar1,*(undefined4 *)(param_1 + 0x18));
  }
  (**(code **)(*(int *)(param_1 + 0x28) + 0xc))(*(undefined4 *)(param_1 + 0x2c));
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar1 = *piVar2;
    bVar3 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar3);
  *piVar2 = iVar1 + -1;
  if (iVar1 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

