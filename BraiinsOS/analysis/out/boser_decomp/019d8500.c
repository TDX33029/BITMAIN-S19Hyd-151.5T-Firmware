// FUN_019d8500 @ 019d8500 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_019d8500(int param_1)

{
  if (*(char *)(param_1 + 0x4c) == '\x03') {
    if (*(char *)(param_1 + 0x48) == '\x03') {
      FUN_007a5afc(param_1 + 0x14);
    }
    param_1 = param_1 + 8;
  }
  else if (*(char *)(param_1 + 0x4c) != '\0') {
    return;
  }
  FUN_019d8724(param_1);
  return;
}

