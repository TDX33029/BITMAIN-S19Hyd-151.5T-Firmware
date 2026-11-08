// FUN_00cdc96c @ 00cdc96c size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00cdc96c(int param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x03') {
    FUN_00cdc9b8(param_1 + 0x78);
  }
  else {
    if (*(char *)(param_1 + 0x70) != '\x04') {
      return;
    }
    FUN_00cdcb78(param_1 + 0x148);
  }
  *(undefined1 *)(param_1 + 0x71) = 0;
  return;
}

