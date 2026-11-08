// FUN_009ffc48 @ 009ffc48 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_009ffc48(int *param_1)

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
  if ((char)param_1[0x2d] == '\x03') {
    cVar1 = (char)param_1[0x21];
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = (char)param_1[0x1d];
    }
    if (bVar2 && cVar1 == '\x03') {
      if ((char)param_1[0x18] == '\x03') {
        FUN_009f6fb8();
        return;
      }
      return;
    }
  }
  return;
}

