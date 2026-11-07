// FUN_018a87d4 @ 018a87d4 size=68 calls_out=3 calls_in=1
// strings: 

void FUN_018a87d4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = 2;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (uVar1 == 0) {
    FUN_0134aee0(param_1[1],param_1[2],2,4);
    return;
  }
  if (uVar1 == 1) {
    FUN_018a8274();
    return;
  }
  FUN_0134bd64(uVar2,param_1[1]);
  return;
}

