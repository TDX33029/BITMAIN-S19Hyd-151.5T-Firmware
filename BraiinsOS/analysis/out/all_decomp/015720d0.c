// FUN_015720d0 @ 015720d0 size=396 calls_out=2 calls_in=1
// strings: 

void FUN_015720d0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  
  uVar5 = param_2 >> 1;
  puVar14 = param_1 + param_2 * 3 + -3;
  puVar6 = param_3 + param_2 * 3 + -3;
  puVar9 = param_1 + uVar5 * 3;
  puVar11 = puVar9 + -3;
  do {
    puVar15 = param_3;
    uVar12 = param_1[2];
    uVar10 = puVar9[2];
    uVar1 = uVar12;
    if (uVar10 < uVar12) {
      uVar1 = uVar10;
    }
    uVar1 = FUN_016dd50a(puVar9[1],param_1[1],uVar1);
    if (uVar1 == 0) {
      uVar1 = uVar10 - uVar12;
    }
    uVar10 = puVar11[2];
    puVar2 = puVar9;
    if (uVar1 < 0x80000000) {
      puVar2 = param_1;
    }
    uVar13 = puVar14[2];
    uVar4 = *puVar2;
    uVar7 = puVar2[1];
    uVar8 = puVar11[1];
    puVar15[2] = puVar2[2];
    uVar3 = puVar14[1];
    *puVar15 = uVar4;
    puVar15[1] = uVar7;
    uVar12 = uVar10;
    if (uVar13 < uVar10) {
      uVar12 = uVar13;
    }
    uVar12 = FUN_016dd50a(uVar3,uVar8,uVar12);
    if (uVar12 == 0) {
      uVar12 = uVar13 - uVar10;
    }
    puVar2 = puVar11;
    if (uVar12 < 0x80000000) {
      puVar2 = puVar14;
    }
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    puVar6[2] = puVar2[2];
    *puVar6 = uVar3;
    puVar6[1] = uVar4;
    puVar6 = puVar6 + -3;
    puVar9 = puVar9 + (uVar1 >> 0x1f | (uVar1 >> 0x1f) << 1);
    uVar1 = uVar1 >> 0x1f ^ 1;
    param_1 = param_1 + (uVar1 | uVar1 << 1);
    puVar11 = puVar11 + ((int)uVar12 >> 0x1f) * 3;
    puVar14 = puVar14 + ~((int)uVar12 >> 0x1f) * 3;
    uVar5 = uVar5 - 1;
    param_3 = puVar15 + 3;
  } while (uVar5 != 0);
  puVar11 = puVar11 + 3;
  if ((param_2 & 1) != 0) {
    bVar16 = puVar11 <= param_1;
    puVar6 = puVar9;
    if (!bVar16) {
      puVar6 = param_1;
    }
    uVar4 = puVar6[1];
    uVar3 = puVar6[2];
    puVar15[3] = *puVar6;
    puVar15[4] = uVar4;
    puVar15[5] = uVar3;
    puVar9 = puVar9 + ((uint)bVar16 | (uint)bVar16 << 1);
    param_1 = param_1 + ((uint)!bVar16 | (uint)!bVar16 << 1);
  }
  bVar16 = param_1 == puVar11;
  if (bVar16) {
    puVar11 = puVar14 + 3;
  }
  if (!bVar16 || puVar9 != puVar11) {
    FUN_00fb7254();
  }
  return;
}

