// FUN_009d0eb8 @ 009d0eb8 size=448 calls_out=1 calls_in=1
// strings: 

void FUN_009d0eb8(uint *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  
  uVar8 = param_2 >> 1;
  puVar12 = param_1 + uVar8 * 4;
  puVar11 = param_1 + param_2 * 4 + -4;
  puVar1 = param_3 + param_2 * 4 + -4;
  puVar9 = puVar12 + -4;
  do {
    puVar2 = param_3;
    uVar6 = (uint)(puVar12[2] < param_1[2]);
    if (((puVar12[2] == param_1[2]) &&
        (uVar4 = *param_1 ^ (uint)((int)*param_1 >> 0x1f) >> 1,
        uVar5 = *puVar12 ^ (uint)((int)*puVar12 >> 0x1f) >> 1,
        uVar6 = (uint)((int)uVar5 < (int)uVar4), uVar5 == uVar4)) &&
       (uVar6 = 0,
       (int)(puVar12[1] ^ (uint)((int)puVar12[1] >> 0x1f) >> 1) <
       (int)(param_1[1] ^ (uint)((int)param_1[1] >> 0x1f) >> 1))) {
      uVar6 = 1;
    }
    puVar3 = param_1;
    if (uVar6 != 0) {
      puVar3 = puVar12;
    }
    uVar10 = puVar11[2];
    puVar2[2] = puVar3[2];
    uVar4 = puVar9[2];
    *puVar2 = *puVar3;
    uVar5 = puVar3[3];
    uVar7 = (uint)(uVar10 < uVar4);
    puVar2[1] = puVar3[1];
    puVar2[3] = uVar5;
    if ((uVar10 == uVar4) &&
       (uVar4 = *puVar9 ^ (uint)((int)*puVar9 >> 0x1f) >> 1,
       uVar5 = *puVar11 ^ (uint)((int)*puVar11 >> 0x1f) >> 1,
       uVar7 = (uint)((int)uVar5 < (int)uVar4), uVar5 == uVar4)) {
      uVar7 = (uint)((int)(puVar11[1] ^ (uint)((int)puVar11[1] >> 0x1f) >> 1) <
                    (int)(puVar9[1] ^ (uint)((int)puVar9[1] >> 0x1f) >> 1));
    }
    puVar12 = puVar12 + uVar6 * 4;
    param_1 = param_1 + (uVar6 ^ 1) * 4;
    puVar3 = puVar11;
    if (uVar7 != 0) {
      puVar3 = puVar9;
    }
    puVar9 = puVar9 + uVar7 * -4;
    uVar6 = *puVar3;
    uVar4 = puVar3[1];
    uVar5 = puVar3[2];
    uVar8 = uVar8 - 1;
    puVar1[3] = puVar3[3];
    puVar3 = puVar11 + uVar7 * 4;
    *puVar1 = uVar6;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar11 = puVar3 + -4;
    puVar1 = puVar1 + -4;
    param_3 = puVar2 + 4;
  } while (uVar8 != 0);
  puVar9 = puVar9 + 4;
  if ((param_2 & 1) != 0) {
    bVar13 = puVar9 <= param_1;
    puVar1 = puVar12;
    if (!bVar13) {
      puVar1 = param_1;
    }
    uVar8 = *puVar1;
    uVar6 = puVar1[1];
    uVar4 = puVar1[2];
    puVar2[7] = puVar1[3];
    puVar2[4] = uVar8;
    puVar2[5] = uVar6;
    puVar2[6] = uVar4;
    puVar12 = puVar12 + (uint)bVar13 * 4;
    param_1 = param_1 + (uint)!bVar13 * 4;
  }
  puVar1 = param_1;
  if (param_1 == puVar9) {
    puVar1 = puVar3;
  }
  if (param_1 != puVar9 || puVar12 != puVar1) {
    FUN_00fb7254();
  }
  return;
}

