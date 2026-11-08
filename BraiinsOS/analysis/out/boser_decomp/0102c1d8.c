// FUN_0102c1d8 @ 0102c1d8 size=52 calls_out=2 calls_in=0
// strings: 

void FUN_0102c1d8(int param_1)

{
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0xac) == '\x03') {
    FUN_0102c18c(param_1 + 0x40);
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return;
}

