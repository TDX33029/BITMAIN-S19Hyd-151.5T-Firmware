// FUN_01089044 @ 01089044 size=152 calls_out=4 calls_in=0
// strings: 

void FUN_01089044(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x154);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x3b4) == '\x03') {
      FUN_010855e4(param_1 + 0x21c);
    }
    if (*(int *)(param_1 + 0x158) != -0x80000000) {
      FUN_0193f164();
    }
    *(undefined1 *)(param_1 + 0x156) = 0;
    if ((*(char *)(param_1 + 0x155) == '\x01') && (*(int *)(param_1 + 0x98) != -0x80000000)) {
      FUN_0193f164();
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_010890d0;
    }
    FUN_00bba254(param_1 + 0x158);
  }
  *(undefined1 *)(param_1 + 0x155) = 0;
  param_1 = param_1 + 0x48;
LAB_010890d0:
  FUN_00f9604c(param_1);
  return;
}

