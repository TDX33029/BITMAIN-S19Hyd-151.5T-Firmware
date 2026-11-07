// FUN_00a93a9c @ 00a93a9c size=96 calls_out=3 calls_in=4
// strings: 

void FUN_00a93a9c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_014fe9f8(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  FUN_0132b958(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),4,8);
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

