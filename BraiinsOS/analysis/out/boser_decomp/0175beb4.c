// FUN_0175beb4 @ 0175beb4 size=60 calls_out=3 calls_in=1
// strings: 

void FUN_0175beb4(int param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x02') {
    return;
  }
  FUN_014323b0(param_1 + 0xc);
  if (*(char *)(param_1 + 8) == '\x02') {
    FUN_0172ebfc();
    return;
  }
  FUN_0172ea40();
  return;
}

