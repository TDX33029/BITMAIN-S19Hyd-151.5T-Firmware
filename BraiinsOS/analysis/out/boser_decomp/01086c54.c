// FUN_01086c54 @ 01086c54 size=152 calls_out=4 calls_in=2
// strings: 

void FUN_01086c54(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xe0);
  if (cVar1 == '\0') {
    FUN_0193f164(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x1c8);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x1c4);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x1a4);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x1cc) == '\x03') {
      FUN_01080ff0(param_1 + 0xe8);
    }
    *(undefined1 *)(param_1 + 0xe2) = 0;
    FUN_019f8c54(*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd8));
  }
  if (*(char *)(param_1 + 0xe1) != '\0') {
    FUN_0193f164(param_1 + 0xe4);
  }
  *(undefined1 *)(param_1 + 0xe1) = 0;
  return;
}

