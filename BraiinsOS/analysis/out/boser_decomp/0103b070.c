// FUN_0103b070 @ 0103b070 size=96 calls_out=2 calls_in=1
// strings: 

void FUN_0103b070(int param_1)

{
  if (*(char *)(param_1 + 0x5dc) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x5d0),*(undefined4 *)(param_1 + 0x5d4));
    return;
  }
  if (*(char *)(param_1 + 0x5dc) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x5c0) == '\x03') {
    FUN_01039d3c(param_1);
  }
  else if (*(char *)(param_1 + 0x5c0) != '\0') {
    return;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x5b4),*(undefined4 *)(param_1 + 0x5b8));
  return;
}

