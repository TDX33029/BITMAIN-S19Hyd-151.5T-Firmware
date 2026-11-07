// FUN_010e7498 @ 010e7498 size=112 calls_out=7 calls_in=0
// strings: 

void FUN_010e7498(int param_1)

{
  if (*(char *)(param_1 + 0x560) == '\0') {
    FUN_00b76614(param_1);
    FUN_005f5594(param_1 + 0x10);
    FUN_005f983c(param_1 + 0x520);
  }
  else {
    if (*(char *)(param_1 + 0x560) != '\x03') {
      return;
    }
    if (*(int *)(param_1 + 0x52c) != 0) {
      FUN_005efd2c(param_1 + 0x530);
    }
    FUN_010e7588(param_1 + 0xf8);
    FUN_005f0424(param_1 + 0x58);
    FUN_005f983c(param_1 + 0x520);
  }
  FUN_019d8724(param_1 + 0x50);
  return;
}

