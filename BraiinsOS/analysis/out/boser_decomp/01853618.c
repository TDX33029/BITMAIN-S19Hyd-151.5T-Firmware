// FUN_01853618 @ 01853618 size=96 calls_out=3 calls_in=17
// strings: 

void FUN_01853618(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0187bb2c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  FUN_01af7af8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),8,0x100);
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

