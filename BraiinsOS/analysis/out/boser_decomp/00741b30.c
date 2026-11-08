// FUN_00741b30 @ 00741b30 size=112 calls_out=4 calls_in=2
// strings: 

void FUN_00741b30(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xc0);
  if (uVar1 - 3 < 2) {
    FUN_007372d8(param_1 + 0xb0);
    *(undefined1 *)(param_1 + 0xc2) = 0;
  }
  else if (uVar1 == 5) {
    FUN_00741be8(param_1 + 200);
  }
  else {
    if (uVar1 != 6) {
      return;
    }
    FUN_00741c1c(param_1 + 200);
  }
  if (*(char *)(param_1 + 0xc1) != '\0') {
    FUN_010a7ed4(param_1 + 0x50);
  }
  *(undefined1 *)(param_1 + 0xc1) = 0;
  return;
}

