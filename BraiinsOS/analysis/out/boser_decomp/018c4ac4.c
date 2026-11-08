// FUN_018c4ac4 @ 018c4ac4 size=84 calls_out=2 calls_in=5
// strings: 

void FUN_018c4ac4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = 1;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (uVar1 == 0) {
    return;
  }
  if (uVar1 == 1) {
    FUN_018c4c30(param_1 + 3);
  }
  else {
    if (uVar1 == 2) {
      return;
    }
    param_1 = param_1 + 1;
    uVar2 = *param_1;
  }
  FUN_0134bd64(uVar2,param_1[1]);
  return;
}

