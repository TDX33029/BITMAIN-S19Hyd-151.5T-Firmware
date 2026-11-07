// FUN_00d9cf34 @ 00d9cf34 size=88 calls_out=2 calls_in=0
// strings: 

void FUN_00d9cf34(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x5c0) == '\x03') {
    iVar2 = 0x5b4;
    if (*(char *)(param_1 + 0x5a0) == '\x03') {
      iVar1 = param_1 + 0x2d8;
    }
    else {
      if (*(char *)(param_1 + 0x5a0) != '\0') goto LAB_00d9cf80;
      iVar1 = param_1 + 0x10;
    }
    FUN_00d9aba4(iVar1);
  }
  else {
    iVar2 = 0x5a8;
    if (*(char *)(param_1 + 0x5c0) != '\0') {
      return;
    }
  }
LAB_00d9cf80:
  FUN_00d9a8a4(param_1 + iVar2);
  return;
}

