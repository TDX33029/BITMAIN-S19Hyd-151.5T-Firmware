// FUN_00a045b4 @ 00a045b4 size=160 calls_out=4 calls_in=3
// strings: 

void FUN_00a045b4(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x6f] == '\x03') {
      cVar1 = (char)param_1[99];
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = (char)param_1[0x54];
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_01139b38(param_1[0x55],param_1[0x56]);
      }
      cVar1 = (char)param_1[0x2d];
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = (char)param_1[0x29];
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00a046a4(param_1 + 2);
      }
      FUN_019bb7e0(param_1[0x3b],param_1[0x3c]);
      if (param_1[0x38] == -0x80000000) {
        return;
      }
      FUN_019bb7e0(param_1[0x38],param_1[0x39]);
      return;
    }
  }
  else if (*param_1 == 1) {
    FUN_00ba8128(param_1 + 2);
    return;
  }
  return;
}

