// FUN_00bb7b5c @ 00bb7b5c size=88 calls_out=3 calls_in=1
// strings: 

void FUN_00bb7b5c(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x5d0) == '\x03') {
      FUN_00bb7a58(param_1 + 0x10);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0xac) == '\x03') {
    FUN_00bb8080(param_1 + 0x40);
  }
  FUN_00b1e090(param_1 + 0x10);
  return;
}

