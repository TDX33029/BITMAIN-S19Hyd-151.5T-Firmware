// FUN_00dccc5c @ 00dccc5c size=52 calls_out=2 calls_in=1
// strings: 

void FUN_00dccc5c(int param_1)

{
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0xac) == '\x03') {
    FUN_00dccc10(param_1 + 0x40);
  }
  FUN_00dccae8(param_1 + 0x10);
  return;
}

