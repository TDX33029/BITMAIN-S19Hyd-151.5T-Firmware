// FUN_00fd59e4 @ 00fd59e4 size=32 calls_out=2 calls_in=0
// strings: 

void FUN_00fd59e4(int param_1)

{
  if (*(char *)(param_1 + 0x6e4) == '\0') {
    FUN_00ebabdc();
    return;
  }
  if (*(char *)(param_1 + 0x6e4) == '\x03') {
    FUN_00fd599c(param_1 + 0x90);
    return;
  }
  return;
}

