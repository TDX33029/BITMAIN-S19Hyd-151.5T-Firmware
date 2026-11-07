// FUN_00f853ec @ 00f853ec size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00f853ec(int param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x03') {
    FUN_00f85438(param_1 + 0x78);
  }
  else {
    if (*(char *)(param_1 + 0x70) != '\x04') {
      return;
    }
    FUN_00f855f8(param_1 + 0x148);
  }
  *(undefined1 *)(param_1 + 0x71) = 0;
  return;
}

