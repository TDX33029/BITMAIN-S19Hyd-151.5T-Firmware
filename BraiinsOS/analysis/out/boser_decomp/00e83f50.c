// FUN_00e83f50 @ 00e83f50 size=100 calls_out=3 calls_in=1
// strings: 

void FUN_00e83f50(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x5d0) == '\x03') {
      FUN_00e834c4(param_1 + 0x10);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xc0);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xac);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00bb8080(param_1 + 0x40);
  }
  FUN_00a9581c(param_1 + 0x10);
  return;
}

