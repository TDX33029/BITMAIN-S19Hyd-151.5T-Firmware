// FUN_00b963fc @ 00b963fc size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00b963fc(int param_1)

{
  if (*(char *)(param_1 + 0x1a9) == '\0') {
    FUN_00b96170(param_1 + 0xd8);
    return;
  }
  if (*(char *)(param_1 + 0x1a9) == '\x03') {
    FUN_00b963b4(param_1);
    *(undefined1 *)(param_1 + 0x1a8) = 0;
    return;
  }
  return;
}

