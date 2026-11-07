// FUN_017131b8 @ 017131b8 size=176 calls_out=8 calls_in=1
// strings: 

void FUN_017131b8(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    if ((9 < *(byte *)(param_2 + 0x418)) && (*(int *)(param_2 + 0x420) != 0)) {
      thunk_FUN_01be4678(*(undefined4 *)(param_2 + 0x41c));
    }
    FUN_019bb7e0(*(undefined4 *)(param_2 + 0x3d0),*(undefined4 *)(param_2 + 0x3d4));
    FUN_0142e6dc(param_2 + 0x380);
    piVar2 = *(int **)(param_2 + 0x42c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01703cd8(*(undefined4 *)(param_2 + 0x42c));
    }
    FUN_017132e8(param_2);
    FUN_017133e8(*(undefined4 *)(param_2 + 0x430));
    FUN_017133e8(*(undefined4 *)(param_2 + 0x434));
    thunk_FUN_01be4678(param_2);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  FUN_01702f28(param_2);
  return;
}

