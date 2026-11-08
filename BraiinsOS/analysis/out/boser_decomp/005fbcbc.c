// FUN_005fbcbc @ 005fbcbc size=88 calls_out=2 calls_in=1
// strings: 

void FUN_005fbcbc(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x78);
  if (cVar1 == '\0') {
    FUN_00b76614(param_1);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(int *)(param_1 + 0x7c) != -0x80000000) {
      FUN_005f5594();
    }
  }
  FUN_00b76614(param_1 + 0x68);
  *(undefined2 *)(param_1 + 0x79) = 0;
  return;
}

