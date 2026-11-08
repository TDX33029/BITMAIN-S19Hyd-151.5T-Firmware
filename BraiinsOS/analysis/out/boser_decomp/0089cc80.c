// FUN_0089cc80 @ 0089cc80 size=124 calls_out=3 calls_in=1
// strings: 

void FUN_0089cc80(int *param_1)

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
  if ((char)param_1[0x53] != '\x03') {
    return;
  }
  cVar1 = (char)param_1[0x52];
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = (char)param_1[0x43];
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0175d85c(param_1 + 0x44);
  }
  FUN_019bb7e0(param_1[0x19],param_1[0x1a]);
  if (param_1[0x16] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x16],param_1[0x17]);
  return;
}

