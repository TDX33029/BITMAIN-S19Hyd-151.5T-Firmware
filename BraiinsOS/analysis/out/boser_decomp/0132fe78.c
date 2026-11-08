// FUN_0132fe78 @ 0132fe78 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_0132fe78(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if (uVar1 != 0x12) {
    iVar2 = uVar1 - 0xf;
    if (uVar1 < 0xf) {
      iVar2 = 0;
    }
    if (iVar2 == 1) {
      uVar1 = param_1[1];
      FUN_0132dd18(uVar1);
      thunk_FUN_01be4678(uVar1);
      return;
    }
    if (iVar2 == 0) {
      if ((1 << (uVar1 & 0xff) & 0x7bdeU) == 0) {
        FUN_0134bd64(param_1[1],param_1[2]);
        return;
      }
      return;
    }
  }
  return;
}

