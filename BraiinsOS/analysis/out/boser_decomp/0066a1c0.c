// FUN_0066a1c0 @ 0066a1c0 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_0066a1c0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc5) == '\0') {
    FUN_0067e38c(param_1 + 0x80);
    return;
  }
  if (*(char *)(param_1 + 0xc5) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x7c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x58);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0193c3cc(param_1 + 0x5c);
  }
  FUN_0067e38c(param_1);
  *(undefined1 *)(param_1 + 0xc4) = 0;
  return;
}

