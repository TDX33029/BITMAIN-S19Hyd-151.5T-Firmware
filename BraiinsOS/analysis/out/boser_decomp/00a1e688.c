// FUN_00a1e688 @ 00a1e688 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00a1e688(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00a1e4d0(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00a1e5ac(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

