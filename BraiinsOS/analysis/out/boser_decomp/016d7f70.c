// FUN_016d7f70 @ 016d7f70 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_016d7f70(uint *param_1)

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
    FUN_0134bd64(uVar2,param_1[1]);
    return;
  }
  FUN_0134aee0(param_1[1],param_1[2],4,0x1c);
  return;
}

