// FUN_0133da78 @ 0133da78 size=100 calls_out=4 calls_in=1
// strings: 

void FUN_0133da78(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 != -0x80000000) {
    FUN_0133dadc();
    return;
  }
  uVar1 = param_1[1];
  iVar2 = uVar1 - 0xf;
  if (uVar1 < 0xf) {
    iVar2 = 0;
  }
  if (iVar2 == 1) {
    iVar2 = param_1[2];
    FUN_0132dd18(iVar2);
    thunk_FUN_01be4678(iVar2);
    return;
  }
  if (iVar2 != 0) {
    return;
  }
  if ((1 << (uVar1 & 0xff) & 0x7bdeU) == 0) {
    FUN_0134bd64(param_1[2],param_1[3]);
    return;
  }
  return;
}

