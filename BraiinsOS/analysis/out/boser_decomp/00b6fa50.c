// FUN_00b6fa50 @ 00b6fa50 size=100 calls_out=4 calls_in=2
// strings: 

void FUN_00b6fa50(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x29) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x6c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x68);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00b71be0(param_1 + 0x54);
    }
  }
  else {
    if (*(char *)(param_1 + 0x29) != '\x04') {
      return;
    }
    FUN_00b6fc64(param_1 + 0x2c);
  }
  FUN_00b6fc20(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return;
}

