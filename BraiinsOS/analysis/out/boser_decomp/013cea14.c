// FUN_013cea14 @ 013cea14 size=112 calls_out=3 calls_in=4
// strings: 

void FUN_013cea14(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_013ceafc(*(undefined4 *)(param_1 + 0xc));
  FUN_01428000(*(undefined4 *)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x24) != 0) {
    (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
  }
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
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

