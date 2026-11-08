// FUN_00dc8a54 @ 00dc8a54 size=84 calls_out=3 calls_in=1
// strings: 

void FUN_00dc8a54(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    FUN_00cce838(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xb4);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xa0);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00db1dcc(param_1 + 0x48);
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  return;
}

