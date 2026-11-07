// FUN_006755c4 @ 006755c4 size=32 calls_out=2 calls_in=1
// strings: 

void FUN_006755c4(int param_1)

{
  if (*(char *)(param_1 + 0x94) == '\0') {
    FUN_0067593c();
    return;
  }
  if (*(char *)(param_1 + 0x94) == '\x03') {
    FUN_006755e4(param_1 + 0x2c);
    return;
  }
  return;
}

