// FUN_011bc61c @ 011bc61c size=60 calls_out=2 calls_in=1
// strings: 

void FUN_011bc61c(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_011c796c(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_011bc4bc(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

