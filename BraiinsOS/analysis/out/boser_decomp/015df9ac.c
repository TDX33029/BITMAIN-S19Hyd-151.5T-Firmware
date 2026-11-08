// FUN_015df9ac @ 015df9ac size=132 calls_out=2 calls_in=1
// strings: 

void FUN_015df9ac(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = param_2[0xb];
  uVar4 = param_2[0xc];
  iVar5 = param_2[0xd];
  iVar2 = param_2[7];
  iVar6 = param_2[8];
  uVar7 = param_2[9];
  uVar8 = param_2[6];
  iVar1 = param_2[10];
  param_1[0xc] = iVar5 + param_2[0xe] * 8;
  param_1[8] = iVar1 + iVar3 * 8;
  param_1[9] = iVar5;
  param_1[10] = iVar5;
  param_1[0xb] = uVar4;
  *param_1 = 1;
  param_1[1] = iVar2;
  param_1[2] = iVar2;
  param_1[3] = uVar8;
  param_1[4] = iVar2 + iVar6 * 8;
  param_1[5] = iVar1;
  param_1[6] = iVar1;
  param_1[7] = uVar7;
  FUN_0134bd64(*param_2,param_2[1]);
  FUN_015df014(param_2 + 3);
  FUN_0134bd64(param_2[0xf],param_2[0x10]);
  return;
}

