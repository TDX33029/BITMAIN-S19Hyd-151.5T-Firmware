// FUN_00d39444 @ 00d39444 size=100 calls_out=3 calls_in=1
// strings: 

void FUN_00d39444(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 8) != '\x03') {
    if (*(char *)(param_1 + 8) == '\x04') {
      FUN_00d32e04(param_1 + 0xc);
      FUN_019f8c54(*(undefined4 *)(param_1 + 4),1);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x44) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x40);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x1c);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_0193c3cc(param_1 + 0x20);
      return;
    }
  }
  return;
}

