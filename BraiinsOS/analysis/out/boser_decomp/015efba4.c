// FUN_015efba4 @ 015efba4 size=100 calls_out=1 calls_in=2
// strings: 

void FUN_015efba4(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_1;
  uVar4 = param_1[3];
  if (uVar4 == uVar1) {
    FUN_015ef550(param_1);
    uVar1 = *param_1;
    uVar4 = param_1[3];
  }
  param_1[3] = uVar4 + 1;
  uVar4 = param_1[2] + uVar4;
  uVar2 = uVar4 - uVar1;
  if (uVar4 < uVar1) {
    uVar2 = uVar4;
  }
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  puVar3 = (undefined4 *)(param_1[1] + uVar2 * 0x1c);
  *puVar3 = *param_2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  puVar3[3] = param_2[3];
  puVar3[4] = uVar5;
  puVar3[5] = uVar6;
  puVar3[6] = uVar7;
  return;
}

