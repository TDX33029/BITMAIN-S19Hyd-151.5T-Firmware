// FUN_008079f8 @ 008079f8 size=124 calls_out=3 calls_in=1
// strings: 

void FUN_008079f8(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x1c) != '\x03') {
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xa0) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x8c);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x78);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x20);
      }
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x14),1);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x4c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x48);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0193c3cc(param_1 + 0x28);
    return;
  }
  return;
}

