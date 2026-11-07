// FUN_006bd824 @ 006bd824 size=116 calls_out=2 calls_in=4
// strings: 

void FUN_006bd824(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  param_1[10] = *param_3;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[0xb];
  FUN_006cefc4(uVar1,param_2[0xc]);
  FUN_0132b958(param_2[10],uVar1,4,0xc);
  return;
}

