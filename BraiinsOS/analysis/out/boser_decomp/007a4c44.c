// FUN_007a4c44 @ 007a4c44 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_007a4c44(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 4;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  switch(uVar1) {
  case 0:
    FUN_019bb7e0(param_1[1],param_1[2]);
    uVar1 = param_1[4];
    uVar2 = param_1[5];
    break;
  case 1:
    if (param_1[1] < 2) {
      return;
    }
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    break;
  case 2:
  case 3:
    return;
  case 4:
    FUN_007a4cc4(param_1);
    return;
  default:
    uVar1 = param_1[1];
    uVar2 = param_1[2];
  }
  FUN_019bb7e0(uVar1,uVar2);
  return;
}

