// FUN_00d9ab30 @ 00d9ab30 size=88 calls_out=2 calls_in=0
// strings: 

void FUN_00d9ab30(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x5b0) == '\x03') {
    iVar2 = 0x5a4;
    if (*(char *)(param_1 + 0x590) == '\x03') {
      iVar1 = param_1 + 0x2c8;
    }
    else {
      iVar1 = param_1;
      if (*(char *)(param_1 + 0x590) != '\0') goto LAB_00d9ab7c;
    }
    FUN_00d9aba4(iVar1);
  }
  else {
    iVar2 = 0x598;
    if (*(char *)(param_1 + 0x5b0) != '\0') {
      return;
    }
  }
LAB_00d9ab7c:
  FUN_00d9a8a4(param_1 + iVar2);
  return;
}

