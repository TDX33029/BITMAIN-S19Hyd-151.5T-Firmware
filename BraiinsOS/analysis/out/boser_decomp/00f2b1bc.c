// FUN_00f2b1bc @ 00f2b1bc size=112 calls_out=3 calls_in=3
// strings: 

void FUN_00f2b1bc(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 8) != '\x03') {
    if (*(char *)(param_1 + 8) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x7a) == '\x03') {
      FUN_00ba6dc4(param_1 + 0x10);
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 4),1);
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

