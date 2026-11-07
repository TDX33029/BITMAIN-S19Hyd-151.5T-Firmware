// FUN_00c32400 @ 00c32400 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00c32400(int param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x03') {
    FUN_00c3244c(param_1 + 0x78);
  }
  else {
    if (*(char *)(param_1 + 0x70) != '\x04') {
      return;
    }
    FUN_00c3261c(param_1 + 0x148);
  }
  *(undefined1 *)(param_1 + 0x71) = 0;
  return;
}

