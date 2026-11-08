// FUN_019bd168 @ 019bd168 size=76 calls_out=2 calls_in=3
// strings: 

void FUN_019bd168(int param_1)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  
  FUN_0134bd64(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = extraout_r1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    iVar3 = iVar2 * 4 + 4;
    if (iVar2 + iVar3 == -5) {
      return;
    }
    thunk_FUN_01be4678(iVar1 - iVar3);
    return;
  }
  return;
}

