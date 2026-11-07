// FUN_016312c8 @ 016312c8 size=88 calls_out=3 calls_in=1
// strings: 

void FUN_016312c8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = 4;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x80000000;
  }
  if (uVar2 < 3) {
    return;
  }
  if (uVar2 == 3) {
    uVar1 = param_1[2];
    FUN_01631320(uVar1,param_1[3]);
    FUN_0134aee0(param_1[1],uVar1,4,0x10);
    return;
  }
  FUN_0134bd64(uVar1,param_1[1]);
  return;
}

