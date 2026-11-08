// FUN_01705794 @ 01705794 size=192 calls_out=8 calls_in=1
// strings: 

void FUN_01705794(int param_1,int param_2)

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
    FUN_01705970(param_2);
    if (*(int *)(param_2 + 0x430) != 0) {
      FUN_00668c84();
    }
    if (*(int *)(param_2 + 0x434) != 0) {
      FUN_00668c84();
    }
    thunk_FUN_01be4678(param_2);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  FUN_01702f28(param_2);
  return;
}

