// FUN_00794b8c @ 00794b8c size=52 calls_out=2 calls_in=3
// strings: 

void FUN_00794b8c(uint *param_1)

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
    FUN_019bb7e0(uVar2,param_1[1]);
    return;
  }
  FUN_013f476c(param_1 + 1);
  return;
}

