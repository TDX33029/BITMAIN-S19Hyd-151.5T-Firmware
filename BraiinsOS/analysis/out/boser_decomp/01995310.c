// FUN_01995310 @ 01995310 size=508 calls_out=0 calls_in=1
// strings: 

void FUN_01995310(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  
  uVar11 = 1;
  if (param_1[4] <= param_1[10]) {
    uVar11 = (uint)(param_1[10] <= param_1[4] &&
                   (param_1[7] <= param_1[1] &&
                   (uint)(*param_1 <= param_1[6]) <= param_1[7] - param_1[1]));
  }
  uVar4 = param_1[0x10];
  uVar8 = param_1[0x16];
  if (uVar8 < uVar4) {
    puVar5 = param_1 + 0x12;
    iVar3 = 2;
  }
  else {
    uVar10 = param_1[0xd];
    uVar9 = param_1[0x13];
    bVar1 = (uint)(param_1[0xc] <= param_1[0x12]) <= uVar9 - uVar10;
    puVar5 = param_1 + 0x12;
    if (uVar4 < uVar8 || (uVar9 > uVar10 || !bVar1)) {
      puVar5 = param_1 + 0xc;
    }
    iVar3 = 3;
    if (uVar8 <= uVar4 && (uVar9 <= uVar10 && bVar1)) {
      iVar3 = 2;
    }
  }
  bVar1 = true;
  puVar12 = param_1 + (uVar11 | uVar11 << 1) * 2;
  puVar13 = param_1 + iVar3 * 6;
  param_1 = param_1 + (uVar11 ^ 1 | (uVar11 ^ 1) << 1) * 2;
  if (puVar12[4] <= puVar5[4]) {
    bVar1 = puVar5[4] <= puVar12[4] &&
            (puVar5[1] <= puVar12[1] && (uint)(*puVar12 <= *puVar5) <= puVar5[1] - puVar12[1]);
  }
  uVar11 = puVar13[4];
  if (uVar11 < param_1[4]) {
    puVar6 = puVar5;
    if (bVar1) {
      puVar6 = puVar12;
      puVar12 = puVar5;
    }
  }
  else {
    puVar7 = puVar5;
    if (bVar1) {
      puVar7 = param_1;
    }
    puVar6 = param_1;
    puVar2 = puVar13;
    if (uVar11 <= param_1[4] &&
        (puVar13[1] <= param_1[1] && (uint)(*param_1 <= *puVar13) <= puVar13[1] - param_1[1])) {
      puVar6 = puVar5;
      puVar2 = param_1;
      puVar7 = puVar13;
    }
    puVar13 = puVar7;
    param_1 = puVar2;
    uVar11 = puVar13[4];
    if (bVar1) {
      puVar6 = puVar12;
    }
    else {
      puVar5 = puVar12;
    }
    puVar12 = puVar5;
  }
  uVar4 = puVar6[4];
  if (uVar11 < uVar4) {
    puVar5 = puVar6;
  }
  else {
    uVar8 = puVar6[1];
    uVar9 = puVar13[1];
    bVar1 = (uint)(*puVar6 <= *puVar13) <= uVar9 - uVar8;
    puVar5 = puVar13;
    if (uVar11 <= uVar4 && (uVar9 <= uVar8 && bVar1)) {
      puVar5 = puVar6;
    }
    if (uVar4 < uVar11 || (uVar9 > uVar8 || !bVar1)) {
      puVar13 = puVar6;
    }
  }
  uVar11 = puVar12[1];
  uVar4 = puVar12[2];
  uVar8 = puVar12[3];
  uVar9 = puVar12[4];
  uVar10 = puVar12[5];
  *param_2 = *puVar12;
  param_2[1] = uVar11;
  param_2[2] = uVar4;
  param_2[3] = uVar8;
  param_2[4] = uVar9;
  param_2[5] = uVar10;
  uVar11 = puVar13[1];
  uVar4 = puVar13[2];
  uVar8 = puVar13[3];
  uVar9 = puVar13[4];
  uVar10 = puVar13[5];
  param_2[6] = *puVar13;
  param_2[7] = uVar11;
  param_2[8] = uVar4;
  param_2[9] = uVar8;
  param_2[10] = uVar9;
  param_2[0xb] = uVar10;
  uVar11 = puVar5[1];
  uVar4 = puVar5[2];
  uVar8 = puVar5[3];
  uVar9 = puVar5[4];
  uVar10 = puVar5[5];
  param_2[0xc] = *puVar5;
  param_2[0xd] = uVar11;
  param_2[0xe] = uVar4;
  param_2[0xf] = uVar8;
  param_2[0x10] = uVar9;
  param_2[0x11] = uVar10;
  uVar11 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  uVar9 = param_1[4];
  uVar10 = param_1[5];
  param_2[0x12] = *param_1;
  param_2[0x13] = uVar11;
  param_2[0x14] = uVar4;
  param_2[0x15] = uVar8;
  param_2[0x16] = uVar9;
  param_2[0x17] = uVar10;
  return;
}

