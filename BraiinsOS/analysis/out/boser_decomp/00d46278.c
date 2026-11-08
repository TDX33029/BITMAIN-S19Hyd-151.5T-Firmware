// FUN_00d46278 @ 00d46278 size=128 calls_out=4 calls_in=1
// strings: 

void FUN_00d46278(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x70);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0xcc) == '\x03') {
      FUN_00d46310(param_1 + 0x78);
      return;
    }
    return;
  }
  if (cVar1 == '\x04') {
    cVar1 = *(char *)(param_1 + 0x140);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x13c);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00b99500(param_1 + 0x80);
      return;
    }
  }
  else if (cVar1 == '\x05') {
    if (*(char *)(param_1 + 0x62c) == '\x03') {
      FUN_00b99b94(param_1 + 0x88);
    }
    FUN_0084ec48(param_1 + 0x78);
    return;
  }
  return;
}

