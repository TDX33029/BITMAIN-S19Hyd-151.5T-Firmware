// FUN_00c10bfc @ 00c10bfc size=52 calls_out=2 calls_in=0
// strings: 

void FUN_00c10bfc(int param_1)

{
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0xac) == '\x03') {
    FUN_00bb1450(param_1 + 0x40);
  }
  FUN_00be3f38(param_1 + 0x10);
  return;
}

