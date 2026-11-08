// FUN_00c00794 @ 00c00794 size=116 calls_out=3 calls_in=1
// strings: 

void FUN_00c00794(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2c) == '\x03') {
    if (*(char *)(param_1 + 0xf0) == '\x03') {
      FUN_00b99500(param_1 + 0x34);
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
      if (*(char *)(param_1 + 0x5c8) != '\0') goto LAB_00c007fc;
      iVar1 = param_1 + 0x38;
    }
    FUN_00b9a8cc(iVar1);
  }
LAB_00c007fc:
  FUN_0084ec48(param_1 + 0x10);
  return;
}

