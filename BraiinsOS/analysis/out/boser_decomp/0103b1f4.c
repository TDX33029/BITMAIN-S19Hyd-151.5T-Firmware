// FUN_0103b1f4 @ 0103b1f4 size=80 calls_out=3 calls_in=5
// strings: 

void FUN_0103b1f4(int param_1)

{
  if (*(char *)(param_1 + 0x45) == '\x03') {
    FUN_0103b98c(param_1 + 0x58);
  }
  else {
    if (*(char *)(param_1 + 0x45) != '\x04') {
      return;
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x58));
    }
    FUN_0103be5c(param_1);
  }
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}

