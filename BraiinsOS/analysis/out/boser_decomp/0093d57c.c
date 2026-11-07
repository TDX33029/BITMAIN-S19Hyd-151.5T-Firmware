// FUN_0093d57c @ 0093d57c size=60 calls_out=2 calls_in=2
// strings: 

void FUN_0093d57c(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_0093d43c(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00a35200(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

