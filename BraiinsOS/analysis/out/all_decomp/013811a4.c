// FUN_013811a4 @ 013811a4 size=424 calls_out=2 calls_in=1
// strings: 

void FUN_013811a4(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  bool bVar17;
  
  puVar16 = param_1 + param_2 * 4 + -4;
  puVar6 = param_3 + param_2 * 4 + -4;
  uVar5 = param_2 >> 1;
  puVar11 = param_1 + uVar5 * 4;
  puVar15 = puVar11 + -4;
  do {
    puVar7 = param_3;
    uVar13 = param_1[2];
    uVar12 = puVar11[2];
    uVar8 = uVar13;
    if (uVar12 < uVar13) {
      uVar8 = uVar12;
    }
    iVar1 = FUN_016dd50a(puVar11[1],param_1[1],uVar8);
    if (iVar1 == 0) {
      iVar1 = uVar12 - uVar13;
    }
    bVar17 = -1 < iVar1;
    if (iVar1 == 0) {
      bVar17 = *(byte *)(param_1 + 3) <= *(byte *)(puVar11 + 3);
    }
    uVar8 = (uint)!bVar17;
    puVar2 = param_1;
    if (uVar8 != 0) {
      puVar2 = puVar11;
    }
    uVar14 = puVar16[2];
    uVar9 = puVar2[1];
    uVar10 = puVar2[2];
    *puVar7 = *puVar2;
    uVar13 = puVar15[2];
    uVar3 = puVar2[3];
    puVar7[1] = uVar9;
    uVar12 = uVar13;
    if (uVar14 < uVar13) {
      uVar12 = uVar14;
    }
    puVar7[2] = uVar10;
    puVar7[3] = uVar3;
    iVar1 = FUN_016dd50a(puVar16[1],puVar15[1],uVar12);
    if (iVar1 == 0) {
      iVar1 = uVar14 - uVar13;
    }
    puVar11 = puVar11 + uVar8 * 4;
    bVar17 = -1 < iVar1;
    if (iVar1 == 0) {
      bVar17 = *(byte *)(puVar15 + 3) <= *(byte *)(puVar16 + 3);
    }
    uVar12 = (uint)!bVar17;
    puVar2 = puVar16;
    if (uVar12 != 0) {
      puVar2 = puVar15;
    }
    puVar15 = puVar15 + uVar12 * -4;
    uVar9 = puVar2[1];
    uVar10 = puVar2[2];
    puVar4 = puVar16 + uVar12 * 4;
    puVar16 = puVar4 + -4;
    uVar3 = puVar2[3];
    *puVar6 = *puVar2;
    puVar6[1] = uVar9;
    puVar6[2] = uVar10;
    uVar5 = uVar5 - 1;
    puVar6[3] = uVar3;
    puVar6 = puVar6 + -4;
    param_1 = param_1 + (uVar8 ^ 1) * 4;
    param_3 = puVar7 + 4;
  } while (uVar5 != 0);
  puVar15 = puVar15 + 4;
  if ((param_2 & 1) != 0) {
    bVar17 = puVar15 <= param_1;
    puVar6 = puVar11;
    if (!bVar17) {
      puVar6 = param_1;
    }
    uVar3 = *puVar6;
    uVar9 = puVar6[1];
    uVar10 = puVar6[2];
    puVar7[7] = puVar6[3];
    puVar7[4] = uVar3;
    puVar7[5] = uVar9;
    puVar7[6] = uVar10;
    puVar11 = puVar11 + (uint)bVar17 * 4;
    param_1 = param_1 + (uint)!bVar17 * 4;
  }
  puVar6 = puVar15;
  if (param_1 == puVar15) {
    puVar6 = puVar4;
  }
  if (param_1 != puVar15 || puVar11 != puVar6) {
    FUN_00fb7254();
  }
  return;
}

