// FUN_016e0e70 @ 016e0e70 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_016e0e70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  *param_2 = 0;
  uVar1 = FUN_016dee1c();
  uVar2 = param_2[6];
  param_2[6] = uVar1;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar2;
  FUN_016df1bc(param_2);
  return;
}

