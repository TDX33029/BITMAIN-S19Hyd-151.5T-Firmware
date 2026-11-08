// FUN_0120d1f0 @ 0120d1f0 size=288 calls_out=8 calls_in=1
// strings: 

void FUN_0120d1f0(int param_1)

{
  if (*(char *)(param_1 + 0x114) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
    FUN_011e7820(param_1 + 0x100);
    param_1 = param_1 + 0x104;
LAB_0120d26c:
    FUN_005faf6c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x114) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x49)) {
  case 0:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    FUN_011e7820(param_1 + 0x34);
    param_1 = param_1 + 0x38;
    goto LAB_0120d26c;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0xe2) == '\x03') {
      FUN_00b76614(param_1 + 0x50);
      *(undefined2 *)(param_1 + 0xe0) = 0;
    }
    break;
  case 4:
    FUN_01431b40(param_1 + 0x60);
    FUN_012c7f64(param_1 + 0xb0);
    FUN_0069603c(param_1 + 0x54);
    break;
  case 5:
    if (*(char *)(param_1 + 0xfc) == '\x03') {
      FUN_012c7f64(param_1 + 0xd0);
      FUN_011178c4(param_1 + 0x70);
      FUN_005faf6c(param_1 + 0x6c);
      FUN_011e7820(param_1 + 0x68);
    }
    else if (*(char *)(param_1 + 0xfc) == '\0') {
      FUN_00b76614(param_1 + 0x50);
      FUN_011e7820(param_1 + 0x60);
      FUN_005faf6c(param_1 + 100);
    }
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  FUN_005faf6c(param_1 + 0x30);
  FUN_011e7820(param_1 + 0x2c);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return;
}

