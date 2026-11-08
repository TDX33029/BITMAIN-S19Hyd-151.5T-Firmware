// FUN_009de42c @ 009de42c size=64 calls_out=1 calls_in=2
// strings: 

void FUN_009de42c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc0) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xbc);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xba);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00b76614(param_1 + 0x20);
    *(undefined2 *)(param_1 + 0xb8) = 0;
    return;
  }
  return;
}

