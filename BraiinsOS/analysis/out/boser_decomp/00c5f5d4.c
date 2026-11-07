// FUN_00c5f5d4 @ 00c5f5d4 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_00c5f5d4(int *param_1)

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
  if ((char)param_1[0x4e] != '\x03') {
    return;
  }
  cVar1 = (char)param_1[0x4d];
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = (char)param_1[0x3e];
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0175d85c(param_1 + 0x3f);
  }
  FUN_019bb7e0(param_1[0x19],param_1[0x1a]);
  if (param_1[0x16] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x16],param_1[0x17]);
  return;
}

