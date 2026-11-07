// FUN_01192dd0 @ 01192dd0 size=88 calls_out=2 calls_in=6
// strings: 

void FUN_01192dd0(int *param_1)

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
  if ((char)param_1[0x2d] == '\x03') {
    cVar1 = (char)param_1[0x21];
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = (char)param_1[0x1d];
    }
    if (bVar2 && cVar1 == '\x03') {
      if ((char)param_1[0x18] == '\x03') {
        FUN_01192a14();
        return;
      }
      return;
    }
  }
  return;
}

