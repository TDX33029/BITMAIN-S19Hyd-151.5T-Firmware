// FUN_00b99b94 @ 00b99b94 size=68 calls_out=1 calls_in=8
// strings: 

void FUN_00b99b94(int param_1)

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
    if (*(char *)(param_1 + 0x590) != '\0') goto LAB_00b99bcc;
  }
  FUN_00b9a8cc(iVar1);
LAB_00b99bcc:
  *(undefined1 *)(param_1 + 0x59c) = 0;
  return;
}

