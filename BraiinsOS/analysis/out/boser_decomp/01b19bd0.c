// FUN_01b19bd0 @ 01b19bd0 size=120 calls_out=0 calls_in=8
// strings: 

undefined8 FUN_01b19bd0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar10 = param_2[9];
  uVar11 = param_2[8];
  uVar3 = param_2[7];
  uVar4 = param_2[6];
  uVar5 = param_2[5];
  uVar6 = param_2[4];
  uVar7 = param_2[3];
  uVar8 = param_2[2];
  uVar9 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  param_1[2] = uVar8;
  param_1[3] = uVar7;
  param_1[4] = uVar6;
  param_1[5] = uVar5;
  param_1[6] = uVar4;
  param_1[7] = uVar3;
  param_1[8] = uVar11;
  param_1[9] = uVar10;
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  return 0;
}

