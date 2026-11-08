// FUN_00fb9f1c @ 00fb9f1c size=32 calls_out=2 calls_in=3
// strings: 

void FUN_00fb9f1c(int param_1)

{
  if (*(char *)(param_1 + 0xec) == '\0') {
    FUN_00ebabdc();
    return;
  }
  if (*(char *)(param_1 + 0xec) == '\x03') {
    FUN_00d9eef0(param_1 + 0x90);
    return;
  }
  return;
}

