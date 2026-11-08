// FUN_00c0a5d8 @ 00c0a5d8 size=116 calls_out=3 calls_in=6
// strings: 

void FUN_00c0a5d8(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 4) == '\x03') {
    if (*(char *)(param_1 + 200) == '\x03') {
      FUN_00b99500(param_1 + 0xc);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 4) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x5b4) == '\x03') {
    if (*(char *)(param_1 + 0x5a8) == '\x03') {
      iVar1 = param_1 + 0x2e0;
    }
    else {
      if (*(char *)(param_1 + 0x5a8) != '\0') goto LAB_00c0a640;
      iVar1 = param_1 + 0x18;
    }
    FUN_00b9a8cc(iVar1);
  }
LAB_00c0a640:
  FUN_0084ec48(param_1 + 8);
  return;
}

