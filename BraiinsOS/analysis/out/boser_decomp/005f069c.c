// FUN_005f069c @ 005f069c size=32 calls_out=2 calls_in=2
// strings: 

void FUN_005f069c(int param_1)

{
  if (*(char *)(param_1 + 0x978) == '\0') {
    FUN_005fa5c4();
    return;
  }
  if (*(char *)(param_1 + 0x978) == '\x03') {
    FUN_005f0864(param_1 + 0x248);
    return;
  }
  return;
}

