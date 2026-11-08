// FUN_016f3d00 @ 016f3d00 size=280 calls_out=1 calls_in=2
// strings: 

void FUN_016f3d00(uint *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  bool bVar12;
  
  uVar8 = param_2 >> 1;
  puVar11 = param_1 + uVar8 * 2;
  puVar10 = param_1 + param_2 * 2 + -2;
  puVar1 = param_3 + param_2 * 2 + -2;
  puVar4 = puVar11 + -2;
  do {
    puVar2 = param_3;
    uVar5 = (uint)(*puVar11 < *param_1);
    if ((*puVar11 == *param_1) && (uVar5 = 0, puVar11[1] < param_1[1])) {
      uVar5 = 1;
    }
    puVar3 = param_1;
    if (uVar5 != 0) {
      puVar3 = puVar11;
    }
    uVar6 = *puVar10;
    uVar9 = puVar3[1];
    *puVar2 = *puVar3;
    puVar2[1] = uVar9;
    uVar9 = (uint)(uVar6 < *puVar4);
    if ((uVar6 == *puVar4) && (uVar9 = 0, puVar10[1] < puVar4[1])) {
      uVar9 = 1;
    }
    puVar11 = puVar11 + uVar5 * 2;
    param_1 = param_1 + (uVar5 ^ 1) * 2;
    puVar3 = puVar10;
    if (uVar9 != 0) {
      puVar3 = puVar4;
    }
    puVar4 = puVar4 + uVar9 * -2;
    uVar5 = puVar3[1];
    puVar7 = puVar10 + uVar9 * 2;
    puVar10 = puVar7 + -2;
    uVar8 = uVar8 - 1;
    *puVar1 = *puVar3;
    puVar1[1] = uVar5;
    puVar1 = puVar1 + -2;
    param_3 = puVar2 + 2;
  } while (uVar8 != 0);
  puVar4 = puVar4 + 2;
  if ((param_2 & 1) != 0) {
    bVar12 = puVar4 <= param_1;
    puVar1 = puVar11;
    if (!bVar12) {
      puVar1 = param_1;
    }
    uVar8 = puVar1[1];
    puVar2[2] = *puVar1;
    puVar2[3] = uVar8;
    puVar11 = puVar11 + (uint)bVar12 * 2;
    param_1 = param_1 + (uint)!bVar12 * 2;
  }
  puVar1 = param_1;
  if (param_1 == puVar4) {
    puVar1 = puVar7;
  }
  if (param_1 != puVar4 || puVar11 != puVar1) {
    FUN_01307140();
  }
  return;
}

