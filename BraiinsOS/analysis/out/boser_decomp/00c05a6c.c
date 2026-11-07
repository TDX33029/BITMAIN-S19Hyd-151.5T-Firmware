// FUN_00c05a6c @ 00c05a6c size=100 calls_out=3 calls_in=1
// strings: 

void FUN_00c05a6c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x50) == '\x03') {
      FUN_00c056b8(param_1 + 0x18);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xc4);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xb0);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00ba638c(param_1 + 0x58);
  }
  FUN_00c058e0(param_1 + 0x10);
  return;
}

