// FUN_00bef858 @ 00bef858 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_00bef858(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xbc);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xa8);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00ba638c(param_1 + 0x50);
  }
  FUN_00bef8ac(param_1 + 0x34);
  return;
}

