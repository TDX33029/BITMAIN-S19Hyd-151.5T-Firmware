// FUN_0084ee30 @ 0084ee30 size=92 calls_out=2 calls_in=8
// strings: 

void FUN_0084ee30(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x164) == '\0') {
    FUN_00b9c134(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x164) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x15c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x138);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0193c3cc(param_1 + 0x13c);
  }
  FUN_00b9c134(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x165) = 0;
  return;
}

