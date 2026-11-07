// FUN_0079ad28 @ 0079ad28 size=88 calls_out=3 calls_in=2
// strings: 

void FUN_0079ad28(int param_1)

{
  if (*(char *)(param_1 + 0x1e4) == '\0') {
    FUN_0079a86c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x1e4) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x164) == '\x03') {
    FUN_0079ae1c(param_1 + 0x40);
  }
  FUN_0079a76c(param_1 + 0x168);
  *(undefined2 *)(param_1 + 0x1e5) = 0;
  *(undefined1 *)(param_1 + 0x1e7) = 0;
  return;
}

