// FUN_014918f0 @ 014918f0 size=84 calls_out=0 calls_in=0
// strings: 

void FUN_014918f0(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  uVar4 = (int)*(undefined4 **)(param_2 + 0xc) - *(int *)(param_2 + 4);
  uVar1 = uVar4 >> 5;
  uVar2 = param_3;
  if (uVar1 <= param_3) {
    uVar2 = uVar4 >> 5;
  }
  puVar7 = (undefined4 *)(*(int *)(param_2 + 4) + uVar2 * 0x20);
  *(undefined4 **)(param_2 + 4) = puVar7;
  if ((uVar1 < param_3) || (puVar7 == *(undefined4 **)(param_2 + 0xc))) {
    *(undefined2 *)param_1 = 2;
    return;
  }
  *(undefined4 **)(param_2 + 4) = puVar7 + 8;
  uVar3 = puVar7[1];
  uVar5 = puVar7[2];
  uVar6 = puVar7[3];
  *param_1 = *puVar7;
  param_1[1] = uVar3;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  uVar3 = puVar7[5];
  uVar5 = puVar7[6];
  uVar6 = puVar7[7];
  param_1[4] = puVar7[4];
  param_1[5] = uVar3;
  param_1[6] = uVar5;
  param_1[7] = uVar6;
  return;
}

