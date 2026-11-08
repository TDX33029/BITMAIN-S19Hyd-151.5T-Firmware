// FUN_006d6c3c @ 006d6c3c size=100 calls_out=1 calls_in=11
// strings: 

void FUN_006d6c3c(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar2 = *param_3;
  uVar4 = param_3[1];
  uVar7 = param_3[2];
  iVar8 = param_1[2];
  if (iVar8 == *param_1) {
    FUN_014f8acc(param_1);
  }
  puVar1 = (undefined4 *)(param_1[1] + iVar8 * 0x18);
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar2;
  puVar1[4] = uVar4;
  puVar1[5] = uVar7;
  param_1[2] = iVar8 + 1;
  return;
}

