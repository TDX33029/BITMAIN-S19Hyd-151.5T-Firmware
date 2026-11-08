// FUN_00f2b008 @ 00f2b008 size=76 calls_out=3 calls_in=2
// strings: 

void FUN_00f2b008(undefined4 *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      FUN_00f2b078(param_1 + 10);
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      FUN_00f2b104(param_1 + 10);
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  FUN_01139b38(*param_1,param_1[1]);
  return;
}

