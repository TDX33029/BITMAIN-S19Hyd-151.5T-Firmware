// FUN_017ca070 @ 017ca070 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_017ca070(int param_1)

{
  if (*(char *)(param_1 + 0x1b4) == '\0') {
    FUN_017ca0f4(param_1);
    FUN_01771c90(param_1 + 0x1a8);
    return;
  }
  if (*(char *)(param_1 + 0x1b4) == '\x03') {
    FUN_017ca0f4(param_1 + 0xd0);
    FUN_01771c90(param_1 + 0x1ac);
    *(undefined1 *)(param_1 + 0x1b5) = 0;
    return;
  }
  return;
}

