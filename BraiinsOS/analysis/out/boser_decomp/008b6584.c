// FUN_008b6584 @ 008b6584 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_008b6584(int *param_1)

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
    FUN_008b65c0(param_1 + 2);
    return;
  }
  return;
}

