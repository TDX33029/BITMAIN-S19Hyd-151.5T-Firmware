// FUN_00b800e8 @ 00b800e8 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00b800e8(int param_1)

{
  if (*(char *)(param_1 + 0xe1) == '\0') {
    FUN_00b697cc(param_1 + 0xd8);
    return;
  }
  if (*(char *)(param_1 + 0xe1) == '\x03') {
    FUN_00b80130(param_1);
    *(undefined1 *)(param_1 + 0xe0) = 0;
    return;
  }
  return;
}

