// FUN_00f28824 @ 00f28824 size=84 calls_out=1 calls_in=2
// strings: 

void FUN_00f28824(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xb5) == '\0') {
    FUN_00f202a4(param_1 + 0x20);
    return;
  }
  if (*(char *)(param_1 + 0xb5) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0xb0) == '\x03') {
    iVar1 = 0x60;
    if (*(int *)(param_1 + 0x74) == 3) {
      return;
    }
  }
  else {
    iVar1 = 0x24;
    if (*(char *)(param_1 + 0xb0) != '\0') {
      return;
    }
  }
  FUN_00f202a4(param_1 + 0x38 + iVar1);
  return;
}

