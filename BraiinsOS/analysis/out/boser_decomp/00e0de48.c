// FUN_00e0de48 @ 00e0de48 size=116 calls_out=3 calls_in=1
// strings: 

void FUN_00e0de48(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2c) == '\x03') {
    if (*(char *)(param_1 + 0xf0) == '\x03') {
      FUN_00df984c(param_1 + 0x34);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x2c) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x5d4) == '\x03') {
    if (*(char *)(param_1 + 0x5c8) == '\x03') {
      iVar1 = param_1 + 0x300;
    }
    else {
      if (*(char *)(param_1 + 0x5c8) != '\0') goto LAB_00e0deb0;
      iVar1 = param_1 + 0x38;
    }
    FUN_00df9ef8(iVar1);
  }
LAB_00e0deb0:
  FUN_0084ec48(param_1 + 0x10);
  return;
}

