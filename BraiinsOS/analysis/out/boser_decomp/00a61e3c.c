// FUN_00a61e3c @ 00a61e3c size=68 calls_out=3 calls_in=2
// strings: 

void FUN_00a61e3c(int param_1)

{
  if (*(char *)(param_1 + 0xad) == '\x03') {
    FUN_00b19860(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4));
  }
  else {
    if (*(char *)(param_1 + 0xad) != '\x04') {
      return;
    }
    FUN_00a61ea4(param_1 + 0xb0);
  }
  *(undefined1 *)(param_1 + 0xac) = 0;
  FUN_009ded20(param_1);
  return;
}

