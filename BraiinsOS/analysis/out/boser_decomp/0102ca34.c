// FUN_0102ca34 @ 0102ca34 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_0102ca34(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xcc);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xb8);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0102bd74(param_1 + 0x60);
  }
  FUN_0102ca10(param_1 + 0x10);
  return;
}

