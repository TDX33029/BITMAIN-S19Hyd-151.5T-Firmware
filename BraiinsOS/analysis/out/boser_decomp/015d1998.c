// FUN_015d1998 @ 015d1998 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_015d1998(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_0134bd64(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = iVar1 * 0x32 + 0x35U & 0xfffffffc;
  if (iVar1 + uVar2 == -5) {
    return;
  }
  thunk_FUN_01be4678(*(int *)(param_1 + 8) - uVar2);
  return;
}

