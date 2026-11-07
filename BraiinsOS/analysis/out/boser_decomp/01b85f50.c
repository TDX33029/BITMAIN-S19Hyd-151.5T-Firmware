// FUN_01b85f50 @ 01b85f50 size=208 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_01b85f50(uint *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    return 1;
  }
  if (param_2 == *param_1 && param_4 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = param_1[3];
    uVar1 = *param_1 - param_1[1];
    param_1[2] = param_1[1];
    param_1[1] = param_2 - uVar1;
    param_1[3] = uVar1;
    uVar2 = 0;
    if (uVar1 - uVar3 < 8) {
      uVar3 = uVar1;
    }
    param_1[4] = uVar3;
  }
  uVar4 = param_1[2];
  uVar3 = param_2 + param_3;
  uVar1 = param_1[3];
  *param_1 = uVar3;
  if (param_2 < uVar4 + uVar1 && uVar4 + param_1[4] < uVar3) {
    if ((int)uVar1 < (int)(uVar3 - uVar4)) {
      param_1[4] = uVar1;
    }
    else {
      param_1[4] = uVar3 - uVar4;
    }
  }
  return uVar2;
}

