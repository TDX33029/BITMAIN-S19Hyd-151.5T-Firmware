// FUN_01554590 @ 01554590 size=60 calls_out=0 calls_in=0
// strings: 

void FUN_01554590(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *param_4;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  *param_1 = 0;
  param_1[0xc] = uVar2;
  param_1[0xb] = uVar1;
  param_1[10] = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[1] = *param_3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  uVar4 = param_3[8];
  param_1[5] = param_3[4];
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  return;
}

