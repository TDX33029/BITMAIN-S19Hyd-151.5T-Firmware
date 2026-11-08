// FUN_00e0720c @ 00e0720c size=104 calls_out=3 calls_in=0
// strings: 

void FUN_00e0720c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0xc5) != '\x03') {
      return;
    }
    FUN_00bfccd4(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0xc4) = 0;
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xbc);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa8);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00df41b8(param_1 + 0x50);
    }
    FUN_00bfccf8(param_1 + 0x34);
    return;
  }
  return;
}

