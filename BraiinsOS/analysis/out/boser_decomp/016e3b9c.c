// FUN_016e3b9c @ 016e3b9c size=80 calls_out=3 calls_in=2
// strings: 

void FUN_016e3b9c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = 1;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x80000000;
  }
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      FUN_0134bd64(uVar1,param_1[1]);
    }
    else {
      FUN_0134aee0(param_1[1],param_1[2],4,0x1c);
    }
  }
  FUN_016e3bec(param_1 + 0xb);
  return;
}

