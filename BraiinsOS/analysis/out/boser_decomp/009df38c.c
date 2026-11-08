// FUN_009df38c @ 009df38c size=76 calls_out=3 calls_in=2
// strings: 

void FUN_009df38c(int param_1)

{
  if (*(char *)(param_1 + 0x48) == '\0') {
    FUN_009df410(*(undefined4 *)(param_1 + 0x40));
    FUN_009df188(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\x03') {
    FUN_019faf5c(param_1 + 0x20);
    FUN_009df188(param_1 + 0x10);
    FUN_009df410(*(undefined4 *)(param_1 + 0x44));
    return;
  }
  return;
}

