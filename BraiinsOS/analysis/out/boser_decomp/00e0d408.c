// FUN_00e0d408 @ 00e0d408 size=116 calls_out=3 calls_in=1
// strings: 

void FUN_00e0d408(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x1d) == '\x03') {
    if (*(char *)(param_1 + 0xe0) == '\x03') {
      FUN_00df984c(param_1 + 0x24);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x1d) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x5e4) == '\x03') {
    if (*(char *)(param_1 + 0x5d8) == '\x03') {
      iVar1 = param_1 + 0x310;
    }
    else {
      if (*(char *)(param_1 + 0x5d8) != '\0') goto LAB_00e0d470;
      iVar1 = param_1 + 0x48;
    }
    FUN_00df9ef8(iVar1);
  }
LAB_00e0d470:
  FUN_0084ec48(param_1 + 0x20);
  return;
}

