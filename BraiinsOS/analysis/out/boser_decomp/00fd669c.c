// FUN_00fd669c @ 00fd669c size=128 calls_out=5 calls_in=1
// strings: 

void FUN_00fd669c(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x7c);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x38) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    }
    FUN_00fd69f8(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00fd6750(param_1 + 0x90);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00fd69b0(param_1 + 0x80);
  }
  FUN_017cc7b0(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x7d) = 0;
  if (*(int *)(param_1 + 0x44) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  return;
}

