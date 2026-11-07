// FUN_01412478 @ 01412478 size=92 calls_out=4 calls_in=0
// strings: 

void FUN_01412478(int param_1)

{
  if (*(char *)(param_1 + 0x2a0) == '\0') {
    FUN_0140ed24(param_1 + 0xa0);
    FUN_0145d5e0(param_1 + 0x248);
    FUN_0141253c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x2a0) == '\x03') {
    FUN_014117a8(param_1 + 0x1a0);
    FUN_0141253c(param_1 + 0x100);
    FUN_0145d5e0(param_1 + 0x274);
    *(undefined1 *)(param_1 + 0x2a1) = 0;
    return;
  }
  return;
}

