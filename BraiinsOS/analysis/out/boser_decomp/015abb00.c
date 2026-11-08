// FUN_015abb00 @ 015abb00 size=76 calls_out=2 calls_in=3
// strings: 

void FUN_015abb00(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_0134bd64(param_1[0xb],param_1[0xc]);
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    return;
  }
  uVar2 = iVar1 * 0x32 + 0x35U & 0xfffffffc;
  if (iVar1 + uVar2 == -5) {
    return;
  }
  thunk_FUN_01be4678(*param_1 - uVar2);
  return;
}

