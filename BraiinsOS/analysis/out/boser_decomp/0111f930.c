// FUN_0111f930 @ 0111f930 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_0111f930(undefined1 *param_1)

{
  if (param_1[0x60] == '\x03') {
    FUN_01431b40(param_1 + 0x10);
    param_1 = param_1 + 8;
  }
  else if (param_1[0x60] != '\0') {
    return;
  }
  FUN_00b9391c(*param_1,*(undefined4 *)(param_1 + 4));
  return;
}

