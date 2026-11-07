// FUN_00613b48 @ 00613b48 size=512 calls_out=0 calls_in=1
// strings: 

void FUN_00613b48(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  
  uVar14 = 1;
  if (param_1[4] <= param_1[10]) {
    uVar14 = (uint)(param_1[10] <= param_1[4] &&
                   (param_1[7] <= param_1[1] &&
                   (uint)(*param_1 <= param_1[6]) <= param_1[7] - param_1[1]));
  }
  uVar5 = param_1[0x10];
  uVar9 = param_1[0x16];
  if (uVar9 < uVar5) {
    puVar6 = param_1 + 0x12;
    iVar3 = 2;
  }
  else {
    uVar10 = param_1[0xd];
    uVar11 = param_1[0x13];
    bVar1 = (uint)(param_1[0xc] <= param_1[0x12]) <= uVar11 - uVar10;
    puVar6 = param_1 + 0x12;
    if (uVar5 < uVar9 || (uVar11 > uVar10 || !bVar1)) {
      puVar6 = param_1 + 0xc;
    }
    iVar3 = 3;
    if (uVar9 <= uVar5 && (uVar11 <= uVar10 && bVar1)) {
      iVar3 = 2;
    }
  }
  bVar1 = true;
  puVar13 = param_1 + (uVar14 | uVar14 << 1) * 2;
  puVar12 = param_1 + iVar3 * 6;
  param_1 = param_1 + (uVar14 ^ 1 | (uVar14 ^ 1) << 1) * 2;
  if (puVar13[4] <= puVar6[4]) {
    bVar1 = puVar6[4] <= puVar13[4] &&
            (puVar6[1] <= puVar13[1] && (uint)(*puVar13 <= *puVar6) <= puVar6[1] - puVar13[1]);
  }
  uVar14 = puVar12[4];
  puVar7 = puVar13;
  if (uVar14 < param_1[4]) {
    puVar8 = puVar6;
    if (bVar1) {
      puVar7 = puVar6;
      puVar8 = puVar13;
    }
    uVar5 = puVar8[4];
    if (uVar14 < uVar5) goto LAB_00613d10;
  }
  else {
    puVar4 = puVar6;
    if (bVar1) {
      puVar4 = param_1;
    }
    puVar8 = param_1;
    puVar2 = puVar12;
    if (uVar14 <= param_1[4] &&
        (puVar12[1] <= param_1[1] && (uint)(*param_1 <= *puVar12) <= puVar12[1] - param_1[1])) {
      puVar8 = puVar6;
      puVar2 = param_1;
      puVar4 = puVar12;
    }
    puVar12 = puVar4;
    param_1 = puVar2;
    uVar14 = puVar12[4];
    if (bVar1) {
      puVar7 = puVar6;
      puVar8 = puVar13;
    }
    uVar5 = puVar8[4];
    if (uVar14 < uVar5) {
LAB_00613d10:
      puVar6 = puVar8;
      goto LAB_00613d14;
    }
  }
  uVar11 = puVar8[1];
  uVar9 = puVar12[1];
  bVar1 = (uint)(*puVar8 <= *puVar12) <= uVar9 - uVar11;
  puVar6 = puVar12;
  if (uVar14 <= uVar5 && (uVar9 <= uVar11 && bVar1)) {
    puVar6 = puVar8;
  }
  if (uVar5 < uVar14 || (uVar9 > uVar11 || !bVar1)) {
    puVar12 = puVar8;
  }
LAB_00613d14:
  uVar14 = puVar7[1];
  uVar5 = puVar7[2];
  uVar9 = puVar7[3];
  uVar11 = puVar7[4];
  uVar10 = puVar7[5];
  *param_2 = *puVar7;
  param_2[1] = uVar14;
  param_2[2] = uVar5;
  param_2[3] = uVar9;
  param_2[4] = uVar11;
  param_2[5] = uVar10;
  uVar14 = puVar12[1];
  uVar5 = puVar12[2];
  uVar9 = puVar12[3];
  uVar11 = puVar12[4];
  uVar10 = puVar12[5];
  param_2[6] = *puVar12;
  param_2[7] = uVar14;
  param_2[8] = uVar5;
  param_2[9] = uVar9;
  param_2[10] = uVar11;
  param_2[0xb] = uVar10;
  uVar14 = puVar6[1];
  uVar5 = puVar6[2];
  uVar9 = puVar6[3];
  uVar11 = puVar6[4];
  uVar10 = puVar6[5];
  param_2[0xc] = *puVar6;
  param_2[0xd] = uVar14;
  param_2[0xe] = uVar5;
  param_2[0xf] = uVar9;
  param_2[0x10] = uVar11;
  param_2[0x11] = uVar10;
  uVar14 = param_1[1];
  uVar5 = param_1[2];
  uVar9 = param_1[3];
  uVar11 = param_1[4];
  uVar10 = param_1[5];
  param_2[0x12] = *param_1;
  param_2[0x13] = uVar14;
  param_2[0x14] = uVar5;
  param_2[0x15] = uVar9;
  param_2[0x16] = uVar11;
  param_2[0x17] = uVar10;
  return;
}

