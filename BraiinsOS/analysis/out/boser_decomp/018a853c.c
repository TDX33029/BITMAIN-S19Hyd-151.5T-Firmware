// FUN_018a853c @ 018a853c size=60 calls_out=2 calls_in=1
// strings: 

void FUN_018a853c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = 2;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (uVar1 == 0) {
    FUN_0134bd64(param_1[1],param_1[2]);
    return;
  }
  if (uVar1 == 1) {
    FUN_018a8274();
    return;
  }
  FUN_0134bd64(uVar2,param_1[1]);
  return;
}

