// FUN_0161a714 @ 0161a714 size=108 calls_out=3 calls_in=1
// strings: 

void FUN_0161a714(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = 0x30;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x80000000;
  }
  if (uVar2 < 0x2d) {
    return;
  }
  if (uVar2 - 0x2e < 2) {
    return;
  }
  if (uVar2 == 0x2d) {
    uVar1 = param_1[2];
    FUN_01631b5c(uVar1,param_1[3]);
    FUN_0134aee0(param_1[1],uVar1,8,0x18);
    return;
  }
  FUN_0134bd64(uVar1,param_1[1]);
  return;
}

