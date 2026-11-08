// FUN_019e54b8 @ 019e54b8 size=112 calls_out=3 calls_in=1
// strings: 

void FUN_019e54b8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_019e58a4();
  if (1 < *(int *)(param_1 + 0x68) + 1U) {
    piVar2 = (int *)(*(int *)(param_1 + 0x68) + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678();
    }
  }
  if (*(undefined1 **)(param_1 + 0x60) == &DAT_3b9aca00) {
    return;
  }
  thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x48));
  return;
}

