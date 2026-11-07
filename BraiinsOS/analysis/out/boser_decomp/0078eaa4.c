// FUN_0078eaa4 @ 0078eaa4 size=60 calls_out=2 calls_in=4
// strings: 

void FUN_0078eaa4(int param_1)

{
  if (*(char *)(param_1 + 0x10d) == '\0') {
    FUN_0079217c(param_1 + 0xc0);
    return;
  }
  if (*(char *)(param_1 + 0x10d) == '\x03') {
    FUN_00fe4378(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    *(undefined1 *)(param_1 + 0x10c) = 0;
    return;
  }
  return;
}

