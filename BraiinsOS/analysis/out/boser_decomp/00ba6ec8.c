// FUN_00ba6ec8 @ 00ba6ec8 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_00ba6ec8(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)((int)param_1 + 9);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      if (*(char *)((int)param_1 + 0x7a) == '\x03') {
        FUN_00ba6dc4(param_1 + 4);
      }
    }
    else if (cVar1 != '\x05') {
      return;
    }
    FUN_019f8c54(*param_1,1);
    return;
  }
  if (*(char *)(param_1 + 0x11) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x10);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 7);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_0193c3cc(param_1 + 8);
      return;
    }
  }
  return;
}

