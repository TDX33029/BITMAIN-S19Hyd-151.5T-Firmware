// FUN_011c6034 @ 011c6034 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_011c6034(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xc0);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xac);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_011c5fe8(param_1 + 0x40);
  }
  FUN_011c564c(param_1 + 0x10);
  return;
}

