// FUN_00a967c0 @ 00a967c0 size=196 calls_out=7 calls_in=50
// strings: 

void FUN_00a967c0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x378) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x37c));
  }
  if (*(int *)(param_1 + 0x394) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x394),*(undefined4 *)(param_1 + 0x398));
  }
  if (*(int *)(param_1 + 0x3b0) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x3b0),*(undefined4 *)(param_1 + 0x3b4));
  }
  if (*(int *)(param_1 + 0x3e0) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x3e0),*(undefined4 *)(param_1 + 0x3e4));
  }
  FUN_00a968fc(param_1 + 8);
  FUN_00a96958(param_1 + 200);
  FUN_00b8a02c(param_1 + 0x3f0);
  FUN_00b8a09c(param_1 + 0x1b0);
  FUN_00b8a0e8(param_1 + 0x228);
  if (*(int *)(param_1 + 0x498) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x498),*(undefined4 *)(param_1 + 0x49c));
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

