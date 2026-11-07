// FUN_00a0cb08 @ 00a0cb08 size=60 calls_out=2 calls_in=3
// strings: 

void FUN_00a0cb08(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      FUN_00ba8128(param_1 + 2);
      return;
    }
    return;
  }
  cVar1 = (char)param_1[0x35];
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = (char)param_1[0x29];
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00a046a4(param_1 + 2);
    return;
  }
  return;
}

