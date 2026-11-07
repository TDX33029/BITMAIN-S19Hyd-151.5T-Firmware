// FUN_00b80130 @ 00b80130 size=32 calls_out=2 calls_in=2
// strings: 

void FUN_00b80130(int param_1)

{
  if (*(char *)(param_1 + 200) == '\0') {
    FUN_00b697cc(param_1 + 0xc0);
    return;
  }
  if (*(char *)(param_1 + 200) == '\x03') {
    FUN_00b80150();
    return;
  }
  return;
}

