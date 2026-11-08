// FUN_009f9508 @ 009f9508 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_009f9508(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x53] == '\x03') {
      cVar1 = (char)param_1[0x52];
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = (char)param_1[0x43];
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_01139b38(param_1[0x44],param_1[0x45]);
      }
      FUN_019bb7e0(param_1[0x19],param_1[0x1a]);
      if (param_1[0x16] == -0x80000000) {
        return;
      }
      FUN_019bb7e0(param_1[0x16],param_1[0x17]);
      return;
    }
  }
  else if (*param_1 == 1) {
    FUN_00ba8128(param_1 + 2);
    return;
  }
  return;
}

