// FUN_00733cc8 @ 00733cc8 size=492 calls_out=0 calls_in=1
// strings: 

void FUN_00733cc8(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  
  uVar6 = 1;
  if (((param_1[4] <= param_1[10]) && (uVar6 = 0, param_1[10] <= param_1[4])) &&
     (param_1[7] <= param_1[1] && (uint)(*param_1 <= param_1[6]) <= param_1[7] - param_1[1])) {
    uVar6 = 1;
  }
  puVar3 = param_1 + 0x12;
  if (param_1[0x16] < param_1[0x10]) {
    uVar2 = uVar6 | uVar6 << 1;
    iVar4 = 2;
LAB_00733d74:
    uVar6 = uVar6 ^ 1 | (uVar6 ^ 1) << 1;
    puVar8 = puVar3;
  }
  else {
    puVar8 = param_1 + 0xc;
    if (param_1[0x16] == param_1[0x10]) {
      uVar5 = param_1[0xd];
      uVar7 = param_1[0x13];
      iVar4 = 3;
      bVar1 = uVar7 - uVar5 < (uint)(*puVar8 <= *puVar3);
      if (uVar5 < uVar7 || bVar1) {
        puVar3 = puVar8;
      }
      uVar2 = uVar6 | uVar6 << 1;
      if (uVar5 >= uVar7 && !bVar1) {
        iVar4 = 2;
      }
      goto LAB_00733d74;
    }
    uVar2 = uVar6 | uVar6 << 1;
    iVar4 = 3;
    uVar6 = uVar6 ^ 1 | (uVar6 ^ 1) << 1;
  }
  puVar10 = param_1 + uVar6 * 2;
  puVar3 = param_1 + uVar2 * 2;
  bVar1 = true;
  param_1 = param_1 + iVar4 * 6;
  if (((puVar3[4] <= puVar8[4]) && (bVar1 = false, puVar8[4] <= puVar3[4])) &&
     (puVar8[1] <= puVar3[1] && (uint)(*puVar3 <= *puVar8) <= puVar8[1] - puVar3[1])) {
    bVar1 = true;
  }
  uVar6 = param_1[4];
  puVar11 = puVar3;
  if (uVar6 < puVar10[4]) {
    if (bVar1) {
      puVar11 = puVar8;
    }
LAB_00733dd8:
    if (!bVar1) {
      puVar3 = puVar8;
    }
    puVar8 = param_1;
    param_1 = puVar10;
  }
  else {
    if (uVar6 == puVar10[4]) {
      if (bVar1) {
        puVar11 = puVar8;
      }
      if (param_1[1] <= puVar10[1] && (uint)(*puVar10 <= *param_1) <= param_1[1] - puVar10[1])
      goto LAB_00733dd8;
    }
    else if (bVar1) {
      puVar11 = puVar8;
    }
    if (bVar1) {
      puVar8 = puVar10;
    }
    else {
      puVar3 = puVar10;
    }
    uVar6 = puVar8[4];
  }
  if (uVar6 < puVar3[4]) {
    puVar10 = puVar3;
    puVar12 = puVar8;
  }
  else {
    puVar12 = puVar3;
    puVar10 = puVar8;
    if ((uVar6 == puVar3[4]) &&
       (puVar8[1] <= puVar3[1] && (uint)(*puVar3 <= *puVar8) <= puVar8[1] - puVar3[1])) {
      puVar12 = puVar8;
      puVar10 = puVar3;
    }
  }
  uVar6 = puVar11[1];
  uVar5 = puVar11[2];
  uVar7 = puVar11[3];
  uVar2 = puVar11[4];
  uVar9 = puVar11[5];
  *param_2 = *puVar11;
  param_2[1] = uVar6;
  param_2[2] = uVar5;
  param_2[3] = uVar7;
  param_2[4] = uVar2;
  param_2[5] = uVar9;
  uVar6 = puVar12[1];
  uVar5 = puVar12[2];
  uVar7 = puVar12[3];
  uVar2 = puVar12[4];
  uVar9 = puVar12[5];
  param_2[6] = *puVar12;
  param_2[7] = uVar6;
  param_2[8] = uVar5;
  param_2[9] = uVar7;
  param_2[10] = uVar2;
  param_2[0xb] = uVar9;
  uVar6 = puVar10[1];
  uVar5 = puVar10[2];
  uVar7 = puVar10[3];
  uVar2 = puVar10[4];
  uVar9 = puVar10[5];
  param_2[0xc] = *puVar10;
  param_2[0xd] = uVar6;
  param_2[0xe] = uVar5;
  param_2[0xf] = uVar7;
  param_2[0x10] = uVar2;
  param_2[0x11] = uVar9;
  uVar6 = param_1[1];
  uVar5 = param_1[2];
  uVar7 = param_1[3];
  uVar2 = param_1[4];
  uVar9 = param_1[5];
  param_2[0x12] = *param_1;
  param_2[0x13] = uVar6;
  param_2[0x14] = uVar5;
  param_2[0x15] = uVar7;
  param_2[0x16] = uVar2;
  param_2[0x17] = uVar9;
  return;
}

