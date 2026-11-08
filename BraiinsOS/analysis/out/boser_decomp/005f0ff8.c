// FUN_005f0ff8 @ 005f0ff8 size=160 calls_out=4 calls_in=4
// strings: 

void FUN_005f0ff8(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x20) == '\x04') {
      FUN_005f1388(param_1 + 0x24);
    }
    FUN_005fb2fc(param_1 + 0x174);
    return;
  }
  if (cVar1 == '\x05') {
    cVar1 = *(char *)(param_1 + 0x44);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x40);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x20);
      return;
    }
    return;
  }
  if (cVar1 != '\x06') {
    return;
  }
  if (*(char *)(param_1 + 0x4c) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x48);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x44);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x24);
    }
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}

