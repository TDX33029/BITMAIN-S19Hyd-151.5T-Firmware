// FUN_00fd599c @ 00fd599c size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00fd599c(int param_1)

{
  if (*(char *)(param_1 + 0x64c) == '\0') {
    FUN_00ebabdc(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x64c) == '\x03') {
    FUN_00fd669c(param_1 + 0x120);
    *(undefined1 *)(param_1 + 0x64d) = 0;
    return;
  }
  return;
}

