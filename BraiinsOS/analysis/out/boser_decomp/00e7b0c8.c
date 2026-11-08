// FUN_00e7b0c8 @ 00e7b0c8 size=60 calls_out=0 calls_in=1
// strings: 

void FUN_00e7b0c8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  param_1[0xb] = 0x1000;
  return;
}

