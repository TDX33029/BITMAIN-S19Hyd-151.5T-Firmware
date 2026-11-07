// FUN_005f2134 @ 005f2134 size=124 calls_out=5 calls_in=7
// strings: 

void FUN_005f2134(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x34);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x40) == '\x04') {
      FUN_005f1388(param_1 + 0x44);
    }
    FUN_005fb2fc(param_1 + 0x194);
    return;
  }
  if (cVar1 != '\x05') {
    if (cVar1 == '\x06') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
      FUN_019f8c54(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
      return;
    }
    return;
  }
  cVar1 = *(char *)(param_1 + 100);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x60);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0193c3cc(param_1 + 0x40);
    return;
  }
  return;
}

