// FUN_00c0016c @ 00c0016c size=116 calls_out=3 calls_in=2
// strings: 

void FUN_00c0016c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x1d) == '\x03') {
    if (*(char *)(param_1 + 0xe0) == '\x03') {
      FUN_00b99500(param_1 + 0x24);
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
      if (*(char *)(param_1 + 0x5d8) != '\0') goto LAB_00c001d4;
      iVar1 = param_1 + 0x48;
    }
    FUN_00b9a8cc(iVar1);
  }
LAB_00c001d4:
  FUN_0084ec48(param_1 + 0x20);
  return;
}

