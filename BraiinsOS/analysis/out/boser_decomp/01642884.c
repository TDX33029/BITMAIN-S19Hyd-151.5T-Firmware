// FUN_01642884 @ 01642884 size=56 calls_out=0 calls_in=1
// strings: 

void FUN_01642884(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = uVar2 + 1;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar1 = param_2[4];
  if (9 < uVar4) {
    uVar4 = 10;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  return;
}

