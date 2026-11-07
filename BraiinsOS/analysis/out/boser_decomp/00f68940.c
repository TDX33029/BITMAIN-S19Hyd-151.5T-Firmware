// FUN_00f68940 @ 00f68940 size=68 calls_out=1 calls_in=6
// strings: 

void FUN_00f68940(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x59d) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x590) == '\x03') {
    iVar1 = param_1 + 0x2c8;
  }
  else {
    iVar1 = param_1;
    if (*(char *)(param_1 + 0x590) != '\0') goto LAB_00f68978;
  }
  FUN_00b9a8cc(iVar1);
LAB_00f68978:
  *(undefined1 *)(param_1 + 0x59c) = 0;
  return;
}

