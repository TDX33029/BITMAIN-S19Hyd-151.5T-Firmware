// FUN_01192ac4 @ 01192ac4 size=80 calls_out=2 calls_in=6
// strings: 

void FUN_01192ac4(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      FUN_00db19c4(param_1 + 2);
      return;
    }
    return;
  }
  cVar1 = (char)param_1[0x2d];
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = (char)param_1[0x21];
  }
  if (bVar2 && cVar1 == '\x03') {
    cVar1 = (char)param_1[0x1d];
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = (char)param_1[0x18];
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_01192a14(param_1 + 2);
      return;
    }
  }
  return;
}

