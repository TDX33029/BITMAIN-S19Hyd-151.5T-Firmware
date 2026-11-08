// FUN_00938c54 @ 00938c54 size=108 calls_out=3 calls_in=1
// strings: 

void FUN_00938c54(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x6bd) != '\x03') {
      return;
    }
    FUN_00938bf0(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x6bc) = 0;
    *(undefined4 *)(param_1 + 0x6b8) = 0;
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xd4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xc0);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_01192a14(param_1 + 0x68);
    }
    FUN_00932f8c(param_1 + 0x10);
    return;
  }
  return;
}

