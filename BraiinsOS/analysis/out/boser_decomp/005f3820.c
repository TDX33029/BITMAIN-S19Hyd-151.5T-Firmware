// FUN_005f3820 @ 005f3820 size=48 calls_out=2 calls_in=2
// strings: 

void FUN_005f3820(int param_1)

{
  if (*(char *)(param_1 + 0x2b5) == '\x03') {
    FUN_005f3d40(param_1 + 0x180);
    FUN_005f4f04(param_1);
    *(undefined1 *)(param_1 + 0x2b4) = 0;
    return;
  }
  return;
}

