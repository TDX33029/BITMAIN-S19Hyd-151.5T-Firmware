// FUN_01a9a444 @ 01a9a444 size=48 calls_out=1 calls_in=1
// strings: 

void FUN_01a9a444(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 2;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  switch(uVar1) {
  default:
    param_1 = param_1 + 1;
    break;
  case 2:
    break;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

