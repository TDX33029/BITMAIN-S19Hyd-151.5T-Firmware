// FUN_012c7d9c @ 012c7d9c size=148 calls_out=6 calls_in=2
// strings: 

void FUN_012c7d9c(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x31)) {
  case 0:
    FUN_0193c71c(param_1 + 0x28);
    FUN_005faf6c(param_1 + 0x2c);
    return;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0xd2) == '\x03') {
      FUN_00b76614(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0xd0) = 0;
    }
    break;
  case 4:
    FUN_011e9c6c(param_1 + 0x48);
    FUN_011e9d50(*(undefined1 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    break;
  case 5:
    FUN_012c7eb0(param_1 + 0x38);
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_005faf6c(param_1 + 0x24);
  FUN_0193c71c(param_1 + 0x20);
  return;
}

