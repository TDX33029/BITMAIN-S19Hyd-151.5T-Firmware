// FUN_00f2b078 @ 00f2b078 size=112 calls_out=3 calls_in=2
// strings: 

void FUN_00f2b078(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    if (*(char *)(param_1 + 0xc) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x7e) == '\x03') {
      FUN_00ba6dc4(param_1 + 0x14);
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 8),1);
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x44);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x20);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_0193c3cc(param_1 + 0x24);
      return;
    }
  }
  return;
}

