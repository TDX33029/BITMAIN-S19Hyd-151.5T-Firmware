// FUN_0193ede0 @ 0193ede0 size=112 calls_out=5 calls_in=1
// strings: 

void FUN_0193ede0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x233);
  if (cVar1 == '\x03') {
    FUN_0193eea4(param_1 + 0x234);
  }
  else {
    if (cVar1 == '\x04') {
      FUN_0193eee4(param_1 + 0x238);
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      FUN_0193efb0(param_1 + 0x360);
      *(undefined1 *)(param_1 + 0x230) = 0;
    }
    FUN_01086b44(param_1 + 300);
    *(undefined1 *)(param_1 + 0x231) = 0;
    FUN_01960218(param_1);
  }
  *(undefined1 *)(param_1 + 0x232) = 0;
  return;
}

