// FUN_00d628ac @ 00d628ac size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00d628ac(uint *param_1)

{
  bool bVar1;
  
  if ((*param_1 & 7) == 3) {
    FUN_005f6588(param_1 + 2);
    return;
  }
  bVar1 = *param_1 == 4;
  if (!bVar1) {
    bVar1 = param_1[0x9e] == 3 && param_1[0x9f] == 0;
  }
  if (bVar1) {
    return;
  }
  FUN_006a41c0(param_1 + 0xba);
  return;
}

