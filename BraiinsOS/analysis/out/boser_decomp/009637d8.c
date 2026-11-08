// FUN_009637d8 @ 009637d8 size=40 calls_out=2 calls_in=2
// strings: 

void FUN_009637d8(int param_1)

{
  if (*(int *)(param_1 + 0x18) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  FUN_00db4764(param_1);
  return;
}

