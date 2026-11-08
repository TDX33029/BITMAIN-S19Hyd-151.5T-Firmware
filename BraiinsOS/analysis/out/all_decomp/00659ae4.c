// FUN_00659ae4 @ 00659ae4 size=132 calls_out=3 calls_in=2
// strings: 

void FUN_00659ae4(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 100);
  if (cVar1 == '\0') {
    FUN_00659bc0(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_007aabe4(param_1 + 0x68);
    FUN_005c3320(param_1 + 0x68);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xa8) == '\0') {
      FUN_00659bc0(param_1 + 0x68);
    }
  }
  *(undefined1 *)(param_1 + 0x66) = 0;
  if (*(char *)(param_1 + 0x65) != '\0') {
    FUN_005c3320(param_1 + 0x40);
  }
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  return;
}

