// FUN_007340f4 @ 007340f4 size=288 calls_out=0 calls_in=1
// strings: 

void FUN_007340f4(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  byte in_Q;
  
  uVar5 = param_1[1];
  uVar9 = param_1[7];
  bVar1 = (uint)(*param_1 <= param_1[6]) <= uVar9 - uVar5;
  uVar7 = (uint)(uVar9 <= uVar5 && bVar1);
  uVar5 = (uint)(uVar9 > uVar5 || !bVar1);
  iVar6 = 0x30;
  iVar11 = 0x48;
  if (param_1[0x13] <= param_1[0xd] &&
      (uint)(param_1[0xc] <= param_1[0x12]) <= param_1[0x13] - param_1[0xd]) {
    iVar6 = 0x48;
    iVar11 = 0x30;
  }
  puVar17 = (uint *)((int)param_1 + iVar11);
  puVar10 = (uint *)((int)param_1 + iVar6);
  puVar4 = param_1 + (uVar7 | uVar7 << 1) * 2;
  param_1 = param_1 + (uVar5 | uVar5 << 1) * 2;
  uVar5 = puVar10[1];
  uVar9 = puVar4[1];
  bVar1 = uVar5 - uVar9 < (uint)(*puVar4 <= *puVar10);
  puVar18 = puVar10;
  if (uVar9 >= uVar5 && !bVar1) {
    puVar18 = param_1;
  }
  puVar3 = param_1;
  puVar2 = puVar17;
  if (puVar17[1] <= param_1[1] && (uint)(*param_1 <= *puVar17) <= puVar17[1] - param_1[1]) {
    puVar3 = puVar10;
    puVar2 = param_1;
    puVar18 = puVar17;
  }
  puVar17 = puVar4;
  if ((((byte)((uVar9 < uVar5 || bVar1) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0) {
    puVar17 = puVar10;
    puVar3 = puVar4;
  }
  uVar7 = *puVar3;
  uVar5 = puVar3[1];
  uVar14 = *puVar18;
  uVar16 = puVar18[1];
  uVar9 = puVar17[1];
  uVar8 = puVar17[2];
  uVar12 = puVar17[3];
  uVar13 = puVar17[4];
  uVar15 = puVar17[5];
  *param_2 = *puVar17;
  param_2[1] = uVar9;
  param_2[2] = uVar8;
  param_2[3] = uVar12;
  param_2[4] = uVar13;
  param_2[5] = uVar15;
  if (uVar5 < uVar16 || uVar16 - uVar5 < (uint)(uVar7 <= uVar14)) {
    puVar4 = puVar18;
  }
  else {
    puVar4 = puVar3;
    puVar3 = puVar18;
  }
  uVar5 = puVar3[1];
  uVar9 = puVar3[2];
  uVar7 = puVar3[3];
  uVar8 = puVar3[4];
  uVar12 = puVar3[5];
  param_2[6] = *puVar3;
  param_2[7] = uVar5;
  param_2[8] = uVar9;
  param_2[9] = uVar7;
  param_2[10] = uVar8;
  param_2[0xb] = uVar12;
  uVar5 = puVar4[1];
  uVar9 = puVar4[2];
  uVar7 = puVar4[3];
  uVar8 = puVar4[4];
  uVar12 = puVar4[5];
  param_2[0xc] = *puVar4;
  param_2[0xd] = uVar5;
  param_2[0xe] = uVar9;
  param_2[0xf] = uVar7;
  param_2[0x10] = uVar8;
  param_2[0x11] = uVar12;
  uVar5 = puVar2[1];
  uVar9 = puVar2[2];
  uVar7 = puVar2[3];
  uVar8 = puVar2[4];
  uVar12 = puVar2[5];
  param_2[0x12] = *puVar2;
  param_2[0x13] = uVar5;
  param_2[0x14] = uVar9;
  param_2[0x15] = uVar7;
  param_2[0x16] = uVar8;
  param_2[0x17] = uVar12;
  return;
}

