// FUN_00a7389c @ 00a7389c size=68 calls_out=1 calls_in=20
// strings: 

void FUN_00a7389c(int param_1)

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
    if (*(char *)(param_1 + 0x590) != '\0') goto LAB_00a738d4;
  }
  FUN_00df9ef8(iVar1);
LAB_00a738d4:
  *(undefined1 *)(param_1 + 0x59c) = 0;
  return;
}

