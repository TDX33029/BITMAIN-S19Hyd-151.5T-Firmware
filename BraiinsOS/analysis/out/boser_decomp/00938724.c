// FUN_00938724 @ 00938724 size=136 calls_out=4 calls_in=3
// strings: 

void FUN_00938724(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x24) == '\x03') {
    if (*(char *)(param_1 + 0xe8) == '\x03') {
      FUN_009267f4(param_1 + 0x2c);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x24) == '\x04') {
    if (*(char *)(param_1 + 0x5dc) == '\x03') {
      if (*(char *)(param_1 + 0x5c8) == '\x03') {
        iVar1 = param_1 + 0x300;
      }
      else {
        if (*(char *)(param_1 + 0x5c8) != '\0') goto LAB_0093878c;
        iVar1 = param_1 + 0x38;
      }
      FUN_00926ab4(iVar1);
    }
LAB_0093878c:
    FUN_00927390(param_1 + 0x28);
    if (*(undefined1 **)(param_1 + 0x14) == &DAT_80000005) {
      return;
    }
    FUN_00932dcc((undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

