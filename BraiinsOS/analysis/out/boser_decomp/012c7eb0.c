// FUN_012c7eb0 @ 012c7eb0 size=92 calls_out=5 calls_in=2
// strings: 

void FUN_012c7eb0(int param_1)

{
  if (*(char *)(param_1 + 0xac) == '\0') {
    FUN_00b76614(param_1);
    FUN_0193c71c(param_1 + 0x10);
    FUN_005faf6c(param_1 + 0x14);
    return;
  }
  if (*(char *)(param_1 + 0xac) == '\x03') {
    FUN_012c7f64(param_1 + 0x80);
    FUN_011178c4(param_1 + 0x20);
    FUN_005faf6c(param_1 + 0x1c);
    FUN_0193c71c(param_1 + 0x18);
    return;
  }
  return;
}

