// FUN_00e7a7b0 @ 00e7a7b0 size=68 calls_out=1 calls_in=12
// strings: 

void FUN_00e7a7b0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x59e) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x590) == '\x03') {
    iVar1 = param_1 + 0x2c8;
  }
  else {
    iVar1 = param_1;
    if (*(char *)(param_1 + 0x590) != '\0') goto LAB_00e7a7e8;
  }
  FUN_00df9ef8(iVar1);
LAB_00e7a7e8:
  *(undefined1 *)(param_1 + 0x59c) = 0;
  return;
}

