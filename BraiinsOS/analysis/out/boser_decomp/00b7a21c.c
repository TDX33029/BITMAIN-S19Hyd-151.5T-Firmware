// FUN_00b7a21c @ 00b7a21c size=96 calls_out=5 calls_in=2
// strings: 

void FUN_00b7a21c(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x2d);
  if (cVar1 == '\x03') {
    FUN_00b7a2a8(param_1 + 0x30);
    return;
  }
  if (cVar1 == '\x04') {
    FUN_00b7a30c(param_1 + 0x30);
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    FUN_00b7a8b4(param_1 + 0x90);
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  FUN_00b7aa08(param_1 + 0x10);
  return;
}

