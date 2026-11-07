// FUN_01705970 @ 01705970 size=188 calls_out=8 calls_in=1
// strings: 

void FUN_01705970(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0 || param_1[1] != 0) {
    iVar1 = 1;
    if ((uint)((uint)param_1[2] < 4) <= (uint)-param_1[3]) {
      iVar1 = param_1[2] - 4;
    }
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        FUN_01703ed4(param_1 + 0x2a);
        FUN_017054f0(param_1 + 4);
      }
      goto LAB_017059d4;
    }
  }
  FUN_017054f0();
  FUN_01703ed4(param_1 + 0x28);
  FUN_01705ae8(param_1 + 0x6c);
LAB_017059d4:
  FUN_01703ed4(param_1 + 0x80);
  FUN_01703ff8(param_1 + 0xc9);
  if ((9 < *(byte *)(param_1 + 0xd9)) && (param_1[0xdb] != 0)) {
    thunk_FUN_01be4678(param_1[0xda]);
  }
  FUN_01a8c248(param_1 + 0xce);
  FUN_0142e6dc(param_1 + 0x70);
  if (param_1[0xc4] == 0) {
    FUN_0181eb40(param_1 + 0xc5);
    return;
  }
  return;
}

