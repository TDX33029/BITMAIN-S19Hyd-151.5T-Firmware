// FUN_00bf94d8 @ 00bf94d8 size=40 calls_out=1 calls_in=0
// strings: 

void FUN_00bf94d8(int param_1)

{
  if (*(char *)(param_1 + 0xb2) == '\x03') {
    FUN_00bf94b4(param_1);
    *(undefined2 *)(param_1 + 0xb0) = 0;
    return;
  }
  return;
}

