// FUN_00b9695c @ 00b9695c size=32 calls_out=2 calls_in=11
// strings: 

void FUN_00b9695c(int param_1)

{
  if (*(char *)(param_1 + 0x94) == '\0') {
    FUN_00b9697c();
    return;
  }
  if (*(char *)(param_1 + 0x94) == '\x03') {
    FUN_00b968c0(param_1 + 0x2c);
    return;
  }
  return;
}

