// FUN_00dcf000 @ 00dcf000 size=120 calls_out=3 calls_in=1
// strings: 

void FUN_00dcf000(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x34) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x30);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x2c);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00fe4378(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
      return;
    }
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xb4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa0);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00db1dcc(param_1 + 0x48);
    }
    FUN_00dcefa0(param_1 + 0x34);
    return;
  }
  return;
}

