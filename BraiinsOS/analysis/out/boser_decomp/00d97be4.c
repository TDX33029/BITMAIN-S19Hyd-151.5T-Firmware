// FUN_00d97be4 @ 00d97be4 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_00d97be4(int param_1)

{
  if (*(char *)(param_1 + 0x13c) == '\0') {
    FUN_00d430ac(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x13c) == '\x03') {
    FUN_00d430ac(param_1 + 0xa0);
    FUN_012840cc(param_1 + 0x90);
    *(undefined2 *)(param_1 + 0x13d) = 0;
    return;
  }
  return;
}

