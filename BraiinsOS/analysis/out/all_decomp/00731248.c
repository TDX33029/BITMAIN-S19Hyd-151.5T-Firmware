// FUN_00731248 @ 00731248 size=88 calls_out=3 calls_in=0
// strings: 

void FUN_00731248(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00f2d10c(param_1 + 8);
  }
  cVar1 = '\x01';
  if (8 < *(byte *)(param_1 + 0x1c)) {
    cVar1 = *(byte *)(param_1 + 0x1c) - 9;
  }
  if (cVar1 == '\x01') {
    FUN_00731154();
    return;
  }
  if (cVar1 == '\0') {
    FUN_0073102c(param_1 + 0x20);
    return;
  }
  return;
}

