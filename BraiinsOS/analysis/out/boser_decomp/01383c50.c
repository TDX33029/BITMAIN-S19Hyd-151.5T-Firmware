// FUN_01383c50 @ 01383c50 size=96 calls_out=1 calls_in=2
// strings: 

void FUN_01383c50(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar1 = *param_1;
  uVar4 = param_1[3];
  if (uVar4 == uVar1) {
    FUN_01383cc8(param_1);
    uVar1 = *param_1;
    uVar4 = param_1[3];
  }
  uVar6 = param_1[2] - 1;
  uVar2 = uVar6 + uVar1;
  if (!CARRY4(uVar6,uVar1)) {
    uVar2 = uVar6;
  }
  param_1[2] = uVar2;
  param_1[3] = uVar4 + 1;
  puVar3 = (undefined4 *)(param_1[1] + uVar2 * 0x30);
  uVar5 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[4];
  uVar10 = param_2[5];
  *puVar3 = *param_2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  uVar5 = param_2[7];
  uVar7 = param_2[8];
  uVar8 = param_2[9];
  uVar9 = param_2[10];
  uVar10 = param_2[0xb];
  puVar3[6] = param_2[6];
  puVar3[7] = uVar5;
  puVar3[8] = uVar7;
  puVar3[9] = uVar8;
  puVar3[10] = uVar9;
  puVar3[0xb] = uVar10;
  return;
}

