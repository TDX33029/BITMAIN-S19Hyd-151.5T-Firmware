// FUN_017cd3fc @ 017cd3fc size=76 calls_out=3 calls_in=0
// strings: 

void FUN_017cd3fc(int param_1)

{
  if (*(char *)(param_1 + 0x240) == '\0') {
    FUN_017cc82c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x240) != '\x03') {
    return;
  }
  FUN_017cd46c(param_1 + 0xd8);
  if (*(int *)(param_1 + 0x210) != 2) {
    FUN_017cc7b0();
  }
  *(undefined1 *)(param_1 + 0x241) = 0;
  return;
}

