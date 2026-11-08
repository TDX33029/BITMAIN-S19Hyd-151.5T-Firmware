// FUN_0182875c @ 0182875c size=84 calls_out=3 calls_in=1
// strings: 

void FUN_0182875c(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x62);
  if (cVar1 == '\x04') {
    FUN_01747c4c(param_1 + 0x68);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_018287a4;
    }
    FUN_018057b8(param_1 + 0x74);
  }
  *(undefined1 *)(param_1 + 99) = 0;
  param_1 = param_1 + 0x30;
LAB_018287a4:
  FUN_01a8c248(param_1);
  return;
}

