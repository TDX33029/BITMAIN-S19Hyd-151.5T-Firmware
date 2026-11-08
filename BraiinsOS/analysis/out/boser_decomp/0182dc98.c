// FUN_0182dc98 @ 0182dc98 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_0182dc98(int param_1)

{
  if (*(byte *)(param_1 + 0x5f4) - 3 < 2) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x5e4),*(undefined4 *)(param_1 + 0x5e8));
    FUN_0182c114(param_1 + 0x2f0);
    *(undefined1 *)(param_1 + 0x5f5) = 0;
    return;
  }
  if (*(byte *)(param_1 + 0x5f4) == 0) {
    FUN_0182c114(param_1);
    return;
  }
  return;
}

