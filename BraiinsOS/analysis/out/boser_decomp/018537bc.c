// FUN_018537bc @ 018537bc size=152 calls_out=5 calls_in=16
// strings: 

void FUN_018537bc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0142e6dc(param_1 + 8);
  FUN_018538f4(param_1 + 0x48);
  piVar2 = *(int **)(param_1 + 0x19c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01853618(*(undefined4 *)(param_1 + 0x19c));
  }
  if (*(int *)(param_1 + 400) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194));
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

