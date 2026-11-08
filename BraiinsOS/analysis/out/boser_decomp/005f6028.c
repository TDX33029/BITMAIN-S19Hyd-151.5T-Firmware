// FUN_005f6028 @ 005f6028 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_005f6028(int param_1)

{
  if (*(char *)(param_1 + 0x214) == '\0') {
    FUN_005fa438(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x214) == '\x03') {
    FUN_005f6008(param_1 + 0x120);
    *(undefined1 *)(param_1 + 0x215) = 0;
    return;
  }
  return;
}

