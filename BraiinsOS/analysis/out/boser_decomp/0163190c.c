// FUN_0163190c @ 0163190c size=52 calls_out=1 calls_in=1
// strings: 

void FUN_0163190c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = 9;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (8 < uVar1) {
    FUN_0134bd64(uVar2,param_1[1]);
    return;
  }
  if (uVar1 == 4) {
    uVar1 = param_1[2];
    FUN_016318bc(uVar1,param_1[3]);
    FUN_0134aee0(param_1[1],uVar1,4,0x10);
    return;
  }
  return;
}

