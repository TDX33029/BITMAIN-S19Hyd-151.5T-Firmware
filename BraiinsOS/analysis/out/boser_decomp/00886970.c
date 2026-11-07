// FUN_00886970 @ 00886970 size=36 calls_out=2 calls_in=1
// strings: 

void FUN_00886970(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '\x03') {
    FUN_0088685c(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0xc) == '\x04') {
    FUN_008868f0(param_1 + 0x10);
    return;
  }
  return;
}

