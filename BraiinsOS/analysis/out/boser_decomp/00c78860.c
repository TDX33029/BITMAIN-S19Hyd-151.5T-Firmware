// FUN_00c78860 @ 00c78860 size=144 calls_out=4 calls_in=4
// strings: 

void FUN_00c78860(int *param_1)

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
  if ((char)param_1[0x67] != '\x03') {
    return;
  }
  cVar1 = (char)param_1[0x5b];
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = (char)param_1[0x4c];
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0175d85c(param_1 + 0x4d);
  }
  if ((char)param_1[0x25] == '\x03') {
    FUN_00c787b4(param_1 + 2);
  }
  FUN_019bb7e0(param_1[0x33],param_1[0x34]);
  if (param_1[0x30] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x30],param_1[0x31]);
  return;
}

