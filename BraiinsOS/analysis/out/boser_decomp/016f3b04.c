// FUN_016f3b04 @ 016f3b04 size=452 calls_out=0 calls_in=1
// strings: 

void FUN_016f3b04(uint *param_1,uint *param_2)

{
  uint **ppuVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint *local_2c;
  uint *local_28;
  
  uVar2 = *param_1;
  uVar6 = param_1[6];
  uVar4 = (uint)(uVar6 < uVar2);
  uVar7 = (uint)(uVar6 >= uVar2 && uVar6 != uVar2);
  if (uVar6 == uVar2) {
    uVar2 = param_1[3];
    uVar6 = param_1[9];
    uVar7 = 0;
    uVar4 = (uint)(uVar6 < uVar2);
    if (uVar6 >= uVar2 && uVar6 != uVar2) {
      uVar7 = 1;
    }
  }
  bVar12 = param_1[0x12] < param_1[0xc];
  if ((param_1[0x12] == param_1[0xc]) && (bVar12 = false, param_1[0x15] < param_1[0xf])) {
    bVar12 = true;
  }
  uVar4 = uVar7 - uVar4 & 0xff;
  uVar2 = uVar4 >> 7;
  iVar8 = 0x30;
  if (bVar12) {
    iVar8 = 0x48;
  }
  puVar11 = (uint *)((int)param_1 + iVar8);
  iVar8 = 0x48;
  puVar3 = param_1 + (uVar2 | uVar2 << 1) * 2;
  if (bVar12) {
    iVar8 = 0x30;
  }
  local_28 = (uint *)((int)param_1 + iVar8);
  bVar12 = *puVar11 < *puVar3;
  uVar2 = uVar4 >> 7 ^ 1;
  local_2c = param_1 + (uVar2 | uVar2 << 1) * 2;
  if ((*puVar11 == *puVar3) && (bVar12 = false, puVar11[3] < puVar3[3])) {
    bVar12 = true;
  }
  bVar13 = *local_28 < *local_2c;
  if ((*local_28 == *local_2c) && (bVar13 = false, local_28[3] < local_2c[3])) {
    bVar13 = true;
  }
  puVar10 = local_2c;
  if (bVar13) {
    puVar10 = puVar11;
  }
  puVar5 = puVar11;
  if (bVar12) {
    puVar5 = local_2c;
    puVar10 = puVar3;
  }
  if (bVar13) {
    puVar5 = local_28;
  }
  bVar14 = *puVar10 <= *puVar5;
  if (*puVar5 == *puVar10) {
    bVar14 = puVar10[3] <= puVar5[3];
  }
  if (bVar12) {
    puVar3 = puVar11;
  }
  uVar2 = puVar3[1];
  uVar4 = puVar3[2];
  uVar6 = puVar3[3];
  uVar7 = puVar3[4];
  uVar9 = puVar3[5];
  puVar11 = puVar5;
  if (!bVar14) {
    puVar11 = puVar10;
    puVar10 = puVar5;
  }
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  param_2[2] = uVar4;
  param_2[3] = uVar6;
  param_2[4] = uVar7;
  param_2[5] = uVar9;
  uVar2 = puVar10[1];
  uVar4 = puVar10[2];
  uVar6 = puVar10[3];
  uVar7 = puVar10[4];
  uVar9 = puVar10[5];
  param_2[6] = *puVar10;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar6;
  param_2[10] = uVar7;
  param_2[0xb] = uVar9;
  uVar2 = puVar11[1];
  uVar4 = puVar11[2];
  uVar6 = puVar11[3];
  uVar7 = puVar11[4];
  uVar9 = puVar11[5];
  param_2[0xc] = *puVar11;
  param_2[0xd] = uVar2;
  param_2[0xe] = uVar4;
  param_2[0xf] = uVar6;
  param_2[0x10] = uVar7;
  param_2[0x11] = uVar9;
  ppuVar1 = &local_28;
  if (bVar13) {
    ppuVar1 = &local_2c;
  }
  puVar3 = *ppuVar1;
  uVar2 = puVar3[1];
  uVar4 = puVar3[2];
  uVar6 = puVar3[3];
  uVar7 = puVar3[4];
  uVar9 = puVar3[5];
  param_2[0x12] = *puVar3;
  param_2[0x13] = uVar2;
  param_2[0x14] = uVar4;
  param_2[0x15] = uVar6;
  param_2[0x16] = uVar7;
  param_2[0x17] = uVar9;
  return;
}

