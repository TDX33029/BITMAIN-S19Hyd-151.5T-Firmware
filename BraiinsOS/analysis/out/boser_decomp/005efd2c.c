// FUN_005efd2c @ 005efd2c size=52 calls_out=1 calls_in=9
// strings: 

void FUN_005efd2c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x2c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 9);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_019ede44(param_1 + 0xc);
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  return;
}

