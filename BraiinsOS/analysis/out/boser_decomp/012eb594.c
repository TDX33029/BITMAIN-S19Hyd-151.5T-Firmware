// FUN_012eb594 @ 012eb594 size=156 calls_out=5 calls_in=1
// strings: 

void FUN_012eb594(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x21) == '\0') {
    FUN_012ea64c(*param_1,param_1[1]);
  }
  else {
    if (*(char *)(param_1 + 0x21) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x20) == '\x03') {
      FUN_019e0ae8(param_1 + 0x15);
      if (param_1[0x19] != 0) {
        (**(code **)(param_1[0x19] + 0xc))(param_1[0x1a]);
      }
      FUN_012e12ac(param_1 + 0xc);
      FUN_012e1310(param_1 + 7);
      FUN_005faf6c(param_1 + 6);
      *(undefined1 *)((int)param_1 + 0x82) = 0;
    }
    else if (*(char *)(param_1 + 0x20) == '\0') {
      FUN_012ea64c(param_1[3],param_1[4]);
      FUN_005faf6c(param_1 + 5);
    }
  }
  FUN_005faf6c(param_1 + 2);
  return;
}

