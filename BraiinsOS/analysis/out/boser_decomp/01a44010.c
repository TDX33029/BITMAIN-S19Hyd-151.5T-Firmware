// FUN_01a44010 @ 01a44010 size=52 calls_out=2 calls_in=0
// strings: 

void FUN_01a44010(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  iVar1 = param_2[6];
  if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
    FUN_0134bd64(iVar1,param_2[7]);
  }
  FUN_01a49da0(param_2 + 9);
  return;
}

