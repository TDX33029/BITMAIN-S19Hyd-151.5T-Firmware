// FUN_014849d0 @ 014849d0 size=84 calls_out=3 calls_in=0
// strings: 

void FUN_014849d0(int param_1)

{
  if (*(char *)(param_1 + 0x94) == '\x03') {
    FUN_01434db4(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x95) = 0;
  }
  else if (*(char *)(param_1 + 0x94) == '\0') {
    FUN_016dffb2(*(undefined4 *)(param_1 + 0x70));
    FUN_00a07b4c(param_1);
    return;
  }
  FUN_00a07b4c(param_1);
  return;
}

