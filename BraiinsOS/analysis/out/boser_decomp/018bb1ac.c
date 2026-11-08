// FUN_018bb1ac @ 018bb1ac size=104 calls_out=1 calls_in=1
// strings: 

void FUN_018bb1ac(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  if (uVar3 == uVar1) {
    FUN_018bb134(param_1);
    uVar1 = *param_1;
    uVar3 = param_1[3];
  }
  uVar4 = param_1[2] + uVar3;
  param_1[3] = uVar3 + 1;
  uVar3 = uVar4 - uVar1;
  if (uVar4 < uVar1) {
    uVar3 = uVar4;
  }
  puVar2 = (undefined4 *)(param_1[1] + uVar3 * 0x40);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  *puVar2 = *param_2;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2[4] = uVar8;
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  uVar7 = param_2[8];
  uVar8 = param_2[9];
  puVar2[5] = param_2[5];
  puVar2[6] = uVar5;
  puVar2[7] = uVar6;
  puVar2[8] = uVar7;
  puVar2[9] = uVar8;
  uVar5 = param_2[0xb];
  uVar6 = param_2[0xc];
  uVar7 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar9 = param_2[0xf];
  puVar2[10] = param_2[10];
  puVar2[0xb] = uVar5;
  puVar2[0xc] = uVar6;
  puVar2[0xd] = uVar7;
  puVar2[0xe] = uVar8;
  puVar2[0xf] = uVar9;
  return;
}

