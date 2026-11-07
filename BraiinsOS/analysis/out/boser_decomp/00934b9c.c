// FUN_00934b9c @ 00934b9c size=136 calls_out=4 calls_in=1
// strings: 

void FUN_00934b9c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2c) == '\x03') {
    if (*(char *)(param_1 + 0xf0) == '\x03') {
      FUN_009267f4(param_1 + 0x34);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x2c) == '\x04') {
    if (*(char *)(param_1 + 0x5e8) == '\x03') {
      if (*(char *)(param_1 + 0x5d0) == '\x03') {
        iVar1 = param_1 + 0x308;
      }
      else {
        if (*(char *)(param_1 + 0x5d0) != '\0') goto LAB_00934c04;
        iVar1 = param_1 + 0x40;
      }
      FUN_00926ab4(iVar1);
    }
LAB_00934c04:
    FUN_00927390(param_1 + 0x30);
    if (*(undefined1 **)(param_1 + 0x1c) == &DAT_80000005) {
      return;
    }
    FUN_00932dcc((undefined4 *)(param_1 + 0x1c));
    return;
  }
  return;
}

