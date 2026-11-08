// FUN_00a975bc @ 00a975bc size=88 calls_out=2 calls_in=3
// strings: 

void FUN_00a975bc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
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

