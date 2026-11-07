// FUN_016f1eb4 @ 016f1eb4 size=508 calls_out=0 calls_in=2
// strings: 

uint FUN_016f1eb4(uint *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint *puVar3;
  uint *puVar2;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_4 < param_2) {
    uVar7 = param_4;
  }
  else {
    uVar7 = param_2;
  }
  if (uVar7 == 0) {
    uVar1 = 0;
  }
  else {
    puVar4 = (uint *)(param_3 + -4);
    uVar1 = 0;
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar8 = *puVar2;
      puVar4 = puVar4 + 1;
      uVar6 = *puVar4 ^ uVar8;
      uVar5 = (int)(uVar6 - 1 & ~uVar6) >> 0x1f;
      uVar6 = (int)((uVar8 - *puVar4 ^ uVar8 | uVar6) ^ uVar8) >> 0x1f;
      uVar1 = (~uVar6 & 1 | uVar6) & ~uVar5 | uVar5 & uVar1;
      puVar2 = puVar3;
    } while (puVar3 != param_1 + uVar7);
  }
  if (param_4 <= param_2) {
    if (param_2 <= param_4) {
      return uVar1;
    }
    uVar7 = param_2 - param_4;
    if (uVar7 - 1 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
      puVar2 = param_1 + param_4;
      do {
        puVar4 = puVar2 + 2;
        uVar5 = *puVar2 | uVar5;
        uVar6 = puVar2[1] | uVar6;
        puVar2 = puVar4;
      } while (param_1 + param_4 + (uVar7 & 0xfffffffe) != puVar4);
      uVar5 = uVar5 | uVar6;
      if ((uVar7 & 1) == 0) goto LAB_016f2068;
      param_4 = param_4 + (uVar7 & 0xfffffffe);
    }
    uVar5 = uVar5 | param_1[param_4];
    if (param_4 + 1 < param_2) {
      uVar5 = uVar5 | param_1[param_4 + 1];
    }
LAB_016f2068:
    uVar7 = (int)(uVar5 - 1 & ~uVar5) >> 0x1f;
    return uVar7 & uVar1 | ~uVar7 & 1;
  }
  uVar7 = param_4 - param_2;
  if (uVar7 - 1 < 2) {
    uVar5 = 0;
  }
  else {
    puVar4 = (uint *)(param_3 + param_2 * 4);
    uVar6 = 0;
    uVar5 = 0;
    puVar2 = puVar4;
    do {
      puVar3 = puVar2 + 2;
      uVar6 = *puVar2 | uVar6;
      uVar5 = puVar2[1] | uVar5;
      puVar2 = puVar3;
    } while (puVar4 + (uVar7 & 0xfffffffe) != puVar3);
    uVar5 = uVar5 | uVar6;
    if ((uVar7 & 1) == 0) goto LAB_016f1fbc;
    param_2 = param_2 + (uVar7 & 0xfffffffe);
  }
  uVar5 = uVar5 | *(uint *)(param_3 + param_2 * 4);
  if (param_2 + 1 < param_4) {
    uVar5 = uVar5 | *(uint *)(param_3 + param_2 * 4 + 4);
  }
LAB_016f1fbc:
  uVar7 = (int)(uVar5 - 1 & ~uVar5) >> 0x1f;
  return uVar7 & uVar1 | ~uVar7;
}

