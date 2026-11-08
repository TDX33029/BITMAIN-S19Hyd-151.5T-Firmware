// FUN_006620a0 @ 006620a0 size=88 calls_out=3 calls_in=0
// strings: 

void FUN_006620a0(int param_1)

{
  FUN_0065ac74();
  if (*(char *)(param_1 + 0xdc8) == '\x03') {
    if (*(char *)(param_1 + 0xdbc) == '\x04') {
      FUN_006f625c(*(undefined4 *)(param_1 + 0xdb8));
      return;
    }
    if (*(char *)(param_1 + 0xdbc) != '\x03') {
      return;
    }
    if (*(int *)(param_1 + 0xdc0) != 0) {
      FUN_006f5fbc(*(int *)(param_1 + 0xdc0),*(undefined4 *)(param_1 + 0xdc4),1);
      return;
    }
  }
  return;
}

