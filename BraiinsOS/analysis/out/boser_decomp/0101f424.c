// FUN_0101f424 @ 0101f424 size=52 calls_out=1 calls_in=9
// strings: 

void FUN_0101f424(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x38);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x15);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_019ede44(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x14) = 0;
    return;
  }
  return;
}

