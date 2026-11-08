// FUN_0165d13c @ 0165d13c size=104 calls_out=4 calls_in=3
// strings: 

void FUN_0165d13c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = 5;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  switch(uVar1) {
  case 0:
  case 1:
  case 3:
    return;
  case 2:
    FUN_0134bd64(param_1[1],param_1[2]);
    return;
  case 4:
    FUN_0165d624(param_1 + 1);
    return;
  default:
    FUN_0165d0b8(param_1);
    FUN_0134aee0(uVar2,param_1[1],8,0x10);
    return;
  }
}

