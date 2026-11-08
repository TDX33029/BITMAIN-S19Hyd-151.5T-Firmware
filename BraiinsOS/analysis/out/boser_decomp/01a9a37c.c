// FUN_01a9a37c @ 01a9a37c size=92 calls_out=2 calls_in=2
// strings: 

void FUN_01a9a37c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x114) == '\0') {
    FUN_01a9a484(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x114) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x10c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xe8);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0193c3cc(param_1 + 0xec);
  }
  FUN_01a9a484(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x115) = 0;
  return;
}

