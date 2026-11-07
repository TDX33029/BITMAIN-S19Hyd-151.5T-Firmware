// FUN_005fc224 @ 005fc224 size=88 calls_out=3 calls_in=3
// strings: 

void FUN_005fc224(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    if (*(char *)(param_1 + 0xc) == '\x04') {
      FUN_005fc984(param_1 + 0x10);
      FUN_019f8c54(*(undefined4 *)(param_1 + 4),1);
      return;
    }
    return;
  }
  cVar1 = *(char *)(param_1 + 0x3c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x38);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0193c3cc(param_1 + 0x18);
    return;
  }
  return;
}

