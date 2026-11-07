// FUN_00e8baac @ 00e8baac size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00e8baac(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00e8b82c(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00e8b96c(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

