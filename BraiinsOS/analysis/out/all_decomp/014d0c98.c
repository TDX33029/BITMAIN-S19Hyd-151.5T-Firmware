// FUN_014d0c98 @ 014d0c98 size=88 calls_out=3 calls_in=0
// strings: 

void FUN_014d0c98(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x62);
  if (cVar1 == '\x04') {
    FUN_014595f8(param_1 + 0x68);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        FUN_0145d5e0();
        return;
      }
      return;
    }
    FUN_014590b8(param_1 + 0x74);
  }
  *(undefined1 *)(param_1 + 99) = 0;
  FUN_0145d5e0(param_1 + 0x30);
  return;
}

