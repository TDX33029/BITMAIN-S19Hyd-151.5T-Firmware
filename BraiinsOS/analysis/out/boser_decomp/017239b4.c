// FUN_017239b4 @ 017239b4 size=96 calls_out=3 calls_in=1
// strings: 

void FUN_017239b4(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x2c);
  if (cVar1 == '\0') {
    FUN_01723c14(param_1);
  }
  else {
    if (cVar1 == '\x03') {
      FUN_01723b44(param_1 + 0x30);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_017238e8(param_1 + 0x30);
    }
    if (*(char *)(param_1 + 0x2d) == '\0') {
      return;
    }
  }
  FUN_017238e8(param_1 + 0x28);
  return;
}

