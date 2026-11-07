// FUN_01a8c5ac @ 01a8c5ac size=84 calls_out=3 calls_in=2
// strings: 

void FUN_01a8c5ac(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x62);
  if (cVar1 == '\x04') {
    FUN_01a8c428(param_1 + 0x68);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_01a8c5f4;
    }
    FUN_01a8c2ec(param_1 + 0x74);
  }
  *(undefined1 *)(param_1 + 99) = 0;
  param_1 = param_1 + 0x30;
LAB_01a8c5f4:
  FUN_01a8c248(param_1);
  return;
}

