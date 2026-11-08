// FUN_0160ea2c @ 0160ea2c size=124 calls_out=5 calls_in=11
// strings: 

void FUN_0160ea2c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_012840cc(param_1 + 0x50);
  FUN_01139b38(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
  if (*(int *)(param_1 + 0x94) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
  }
  FUN_0160eb18(param_1 + 0x10);
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

