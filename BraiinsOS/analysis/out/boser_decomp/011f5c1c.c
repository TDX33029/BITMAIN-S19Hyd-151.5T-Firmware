// FUN_011f5c1c @ 011f5c1c size=72 calls_out=3 calls_in=0
// strings: 

void FUN_011f5c1c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\x03') {
    FUN_011f6f10(param_1 + 0xc);
    FUN_010a7c94(param_1 + 0xe0);
    return;
  }
  bVar2 = cVar1 == '\x04';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x28);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00b71be0(param_1 + 0x14);
    return;
  }
  return;
}

