// FUN_015efc98 @ 015efc98 size=96 calls_out=1 calls_in=1
// strings: 

void FUN_015efc98(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  if (uVar3 == uVar1) {
    FUN_015ef7d0(param_1);
    uVar1 = *param_1;
    uVar3 = param_1[3];
  }
  uVar4 = param_1[2] + uVar3;
  param_1[3] = uVar3 + 1;
  uVar3 = uVar4 - uVar1;
  if (uVar4 < uVar1) {
    uVar3 = uVar4;
  }
  puVar2 = (undefined4 *)(param_1[1] + uVar3 * 0x20);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *puVar2 = *param_2;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  puVar2[4] = param_2[4];
  puVar2[5] = uVar5;
  puVar2[6] = uVar6;
  puVar2[7] = uVar7;
  return;
}

