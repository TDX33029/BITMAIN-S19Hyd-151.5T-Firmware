// FUN_015f91d0 @ 015f91d0 size=148 calls_out=1 calls_in=4
// strings: 

void FUN_015f91d0(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = param_1[2];
  if (uVar7 == *param_1) {
    FUN_015f5ae8(param_1);
  }
  uVar5 = param_1[1];
  param_1[2] = uVar7 + 1;
  uVar8 = 0;
  puVar2 = (uint *)(uVar5 + uVar7 * 8);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  if (uVar7 != 0) {
    do {
      uVar4 = uVar7 - 1;
      uVar1 = uVar4 >> 1;
      puVar2 = (uint *)(uVar5 + uVar1 * 8);
      uVar6 = *puVar2;
      uVar3 = puVar2[1];
      if (uVar3 < param_4 || param_4 - uVar3 < (uint)(uVar6 <= param_3)) {
        uVar8 = uVar7;
        break;
      }
      puVar2 = (uint *)(uVar5 + uVar7 * 8);
      *puVar2 = uVar6;
      puVar2[1] = uVar3;
      uVar7 = uVar1;
    } while (1 < uVar4);
  }
  puVar2 = (uint *)(uVar5 + uVar8 * 8);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  return;
}

