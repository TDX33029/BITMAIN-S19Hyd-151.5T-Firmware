// FUN_00ba71b0 @ 00ba71b0 size=80 calls_out=3 calls_in=4
// strings: 

void FUN_00ba71b0(int param_1)

{
  if (*(char *)(param_1 + 0x45) == '\x03') {
    FUN_00740564(param_1 + 0x58);
  }
  else {
    if (*(char *)(param_1 + 0x45) != '\x04') {
      return;
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x58));
    }
    FUN_005f649c(param_1);
  }
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}

