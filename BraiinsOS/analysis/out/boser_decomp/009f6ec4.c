// FUN_009f6ec4 @ 009f6ec4 size=136 calls_out=4 calls_in=10
// strings: 

void FUN_009f6ec4(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x67] == '\x03') {
      cVar1 = (char)param_1[0x5b];
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = (char)param_1[0x4c];
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_01139b38(param_1[0x4d],param_1[0x4e]);
      }
      FUN_009f6f84(param_1 + 2);
      FUN_019bb7e0(param_1[0x33],param_1[0x34]);
      if (param_1[0x30] == -0x80000000) {
        return;
      }
      FUN_019bb7e0(param_1[0x30],param_1[0x31]);
      return;
    }
  }
  else if (*param_1 == 1) {
    FUN_00ba8128(param_1 + 2);
    return;
  }
  return;
}

