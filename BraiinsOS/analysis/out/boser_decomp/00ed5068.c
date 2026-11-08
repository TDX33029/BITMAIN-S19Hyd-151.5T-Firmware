// FUN_00ed5068 @ 00ed5068 size=100 calls_out=2 calls_in=1
// strings: 

void FUN_00ed5068(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 == 4 && param_1[1] == 0) {
    return;
  }
  if ((uVar1 & 3) != 2) {
    if (uVar1 == 3) {
      FUN_005f6588(param_1 + 2);
      return;
    }
    FUN_019bb7e0(param_1[0x12],param_1[0x13]);
  }
  if (param_1[0x16] == 2 && param_1[0x17] == 0) {
    return;
  }
  FUN_019bb7e0(param_1[0x48],param_1[0x49]);
  return;
}

