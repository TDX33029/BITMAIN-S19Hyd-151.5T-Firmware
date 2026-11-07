// FUN_0079a52c @ 0079a52c size=140 calls_out=5 calls_in=2
// strings: 

void FUN_0079a52c(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x49)) {
  case 3:
    FUN_0079a674(param_1 + 0xd8);
    if (*(int *)(param_1 + 0x50) == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0));
    return;
  case 4:
    FUN_0079acbc(param_1 + 0x50);
    goto LAB_0079a5bc;
  case 5:
    FUN_0079ad28(param_1 + 0x50);
    break;
  case 6:
    FUN_0079adb0(param_1 + 0x58);
    break;
  default:
    goto switchD_0079a54c_default;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  *(undefined1 *)(param_1 + 0x4a) = 0;
  if (*(int *)(param_1 + 0x30) != -0x7fffffff) {
    *(undefined1 *)(param_1 + 0x4b) = 0;
  }
LAB_0079a5bc:
  *(undefined1 *)(param_1 + 0x4b) = 0;
switchD_0079a54c_default:
  return;
}

