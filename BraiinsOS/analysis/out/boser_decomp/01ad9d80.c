// FUN_01ad9d80 @ 01ad9d80 size=72 calls_out=1 calls_in=8
// strings: 

void FUN_01ad9d80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_01ad2c80(param_2);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_3[4];
  *param_2 = *param_3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  uVar1 = param_3[6];
  uVar2 = param_3[7];
  uVar3 = param_3[8];
  uVar4 = param_3[9];
  param_2[5] = param_3[5];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar3;
  param_2[9] = uVar4;
  uVar1 = param_3[0xb];
  uVar2 = param_3[0xc];
  uVar3 = param_3[0xd];
  uVar4 = param_3[0xe];
  uVar5 = param_3[0xf];
  param_2[10] = param_3[10];
  param_2[0xb] = uVar1;
  param_2[0xc] = uVar2;
  param_2[0xd] = uVar3;
  param_2[0xe] = uVar4;
  param_2[0xf] = uVar5;
  FUN_01bed4e2(param_1,param_2,0x130);
  return;
}

