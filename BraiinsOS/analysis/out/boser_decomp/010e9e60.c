// FUN_010e9e60 @ 010e9e60 size=140 calls_out=4 calls_in=1
// strings: 

void FUN_010e9e60(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xfa) == '\0') {
    FUN_010e9f48(param_1 + 0x30);
    FUN_00d32150(param_1 + 0xf4);
    return;
  }
  if (*(char *)(param_1 + 0xfa) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0xf1) == '\0') {
    iVar1 = param_1 + 0x90;
  }
  else {
    if (*(char *)(param_1 + 0xf1) != '\x03') goto LAB_010e9ee0;
    iVar1 = param_1 + 0x60;
    if (*(char *)(param_1 + 0xd0) == '\x03') {
      FUN_010ea060(param_1 + 0xc4);
    }
    if (*(char *)(param_1 + 0xe4) == '\x03') {
      FUN_010ea124(param_1 + 0xd8);
    }
  }
  FUN_010e9f48(iVar1);
LAB_010e9ee0:
  *(undefined2 *)(param_1 + 0xf8) = 0;
  return;
}

