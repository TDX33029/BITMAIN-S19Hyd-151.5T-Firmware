// FUN_0081f90c @ 0081f90c size=144 calls_out=4 calls_in=1
// strings: 

void FUN_0081f90c(int *param_1)

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
  if ((char)param_1[0x6f] != '\x03') {
    return;
  }
  cVar1 = (char)param_1[99];
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = (char)param_1[0x54];
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0175d85c(param_1 + 0x55);
  }
  if ((char)param_1[0x2d] == '\x03') {
    FUN_0081f80c(param_1 + 2);
  }
  FUN_019bb7e0(param_1[0x3b],param_1[0x3c]);
  if (param_1[0x38] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x38],param_1[0x39]);
  return;
}

