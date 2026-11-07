// FUN_01081e30 @ 01081e30 size=228 calls_out=5 calls_in=2
// strings: 

void FUN_01081e30(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x1be);
  if (cVar1 == '\0') {
    FUN_019bb7e0(param_1[0x67],param_1[0x68]);
    if (param_1[0x36] != -0x80000000) {
      FUN_0193f164(param_1 + 0x36);
    }
    FUN_01086be0(param_1 + 100);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_01086c54(param_1 + 0x9e);
    *(undefined1 *)((int)param_1 + 0x1ba) = 0;
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_01086d60(param_1 + 0x70);
  }
  if (*(char *)((int)param_1 + 0x1bb) != '\0') {
    FUN_019bb7e0(param_1[0x31],param_1[0x32]);
  }
  bVar3 = (char)param_1[0x6f] != '\0';
  iVar2 = 0;
  if (bVar3) {
    iVar2 = *param_1;
  }
  if ((bVar3 && iVar2 != -0x80000000) && (*(char *)((int)param_1 + 0x1bd) == '\x01')) {
    FUN_0193f164(param_1);
  }
  *(undefined1 *)(param_1 + 0x6f) = 0;
  if (*(char *)((int)param_1 + 0x1bb) != '\0') {
    FUN_01086be0(param_1 + 0x2e);
  }
  *(undefined1 *)((int)param_1 + 0x1bd) = 0;
  *(undefined2 *)((int)param_1 + 0x1bb) = 0;
  return;
}

