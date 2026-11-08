// FUN_014981e0 @ 014981e0 size=460 calls_out=1 calls_in=5
// strings: 

void FUN_014981e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  
  uVar7 = *(uint *)(param_1 + 8);
  uVar17 = *(uint *)(param_1 + 0x30);
  uVar18 = uVar7;
  if (uVar17 < uVar7) {
    uVar18 = uVar17;
  }
  uVar2 = FUN_01bed842(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 4),uVar18);
  uVar20 = *(uint *)(param_1 + 0x58);
  uVar14 = *(uint *)(param_1 + 0x80);
  uVar18 = uVar20;
  if (uVar14 < uVar20) {
    uVar18 = uVar14;
  }
  iVar3 = FUN_01bed842(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x54),uVar18);
  if (iVar3 == 0) {
    iVar3 = uVar14 - uVar20;
  }
  if (uVar2 == 0) {
    uVar2 = uVar17 - uVar7;
  }
  iVar8 = 0x78;
  if (iVar3 < 0) {
    iVar8 = 0x50;
  }
  puVar19 = (undefined4 *)(param_1 + ((int)uVar2 >> 0x1f) * -0x28);
  iVar5 = 0x50;
  if (iVar3 < 0) {
    iVar5 = 0x78;
  }
  puVar4 = (undefined4 *)(param_1 + iVar5);
  uVar7 = puVar19[2];
  uVar17 = puVar4[2];
  uVar18 = uVar7;
  if (uVar17 < uVar7) {
    uVar18 = uVar17;
  }
  iVar3 = FUN_01bed842(puVar4[1],puVar19[1],uVar18);
  puVar9 = (undefined4 *)(param_1 + iVar8);
  puVar11 = (undefined4 *)(param_1 + ((int)~uVar2 >> 0x1f) * -0x28);
  if (iVar3 == 0) {
    iVar3 = uVar17 - uVar7;
  }
  uVar18 = puVar9[2];
  uVar7 = puVar11[2];
  puVar16 = puVar4;
  if (iVar3 < 0) {
    puVar16 = puVar11;
  }
  uVar17 = uVar7;
  if (uVar18 < uVar7) {
    uVar17 = uVar18;
  }
  iVar8 = FUN_01bed842(puVar9[1],puVar11[1],uVar17);
  if (iVar8 == 0) {
    iVar8 = uVar18 - uVar7;
  }
  puVar12 = puVar11;
  puVar1 = puVar9;
  if (iVar8 < 0) {
    puVar12 = puVar4;
    puVar1 = puVar11;
    puVar16 = puVar9;
  }
  if (iVar3 < 0) {
    puVar12 = puVar19;
  }
  uVar18 = puVar12[2];
  if (iVar3 < 0) {
    puVar19 = puVar4;
  }
  uVar17 = puVar16[2];
  uVar7 = uVar18;
  if (uVar17 < uVar18) {
    uVar7 = uVar17;
  }
  iVar3 = FUN_01bed842(puVar16[1],puVar12[1],uVar7);
  uVar6 = puVar19[1];
  uVar10 = puVar19[2];
  uVar13 = puVar19[3];
  uVar15 = puVar19[4];
  if (iVar3 == 0) {
    iVar3 = uVar17 - uVar18;
  }
  *param_2 = *puVar19;
  param_2[1] = uVar6;
  param_2[2] = uVar10;
  param_2[3] = uVar13;
  param_2[4] = uVar15;
  puVar4 = puVar12;
  if (iVar3 < 0) {
    puVar4 = puVar16;
  }
  uVar6 = puVar19[6];
  uVar10 = puVar19[7];
  uVar13 = puVar19[8];
  uVar15 = puVar19[9];
  if (iVar3 >= 0) {
    puVar12 = puVar16;
  }
  param_2[5] = puVar19[5];
  param_2[6] = uVar6;
  param_2[7] = uVar10;
  param_2[8] = uVar13;
  param_2[9] = uVar15;
  uVar6 = puVar4[1];
  uVar10 = puVar4[2];
  uVar13 = puVar4[3];
  uVar15 = puVar4[4];
  param_2[10] = *puVar4;
  param_2[0xb] = uVar6;
  param_2[0xc] = uVar10;
  param_2[0xd] = uVar13;
  param_2[0xe] = uVar15;
  uVar6 = puVar4[6];
  uVar10 = puVar4[7];
  uVar13 = puVar4[8];
  uVar15 = puVar4[9];
  param_2[0xf] = puVar4[5];
  param_2[0x10] = uVar6;
  param_2[0x11] = uVar10;
  param_2[0x12] = uVar13;
  param_2[0x13] = uVar15;
  uVar6 = puVar12[1];
  uVar10 = puVar12[2];
  uVar13 = puVar12[3];
  uVar15 = puVar12[4];
  param_2[0x14] = *puVar12;
  param_2[0x15] = uVar6;
  param_2[0x16] = uVar10;
  param_2[0x17] = uVar13;
  param_2[0x18] = uVar15;
  uVar6 = puVar12[6];
  uVar10 = puVar12[7];
  uVar13 = puVar12[8];
  uVar15 = puVar12[9];
  param_2[0x19] = puVar12[5];
  param_2[0x1a] = uVar6;
  param_2[0x1b] = uVar10;
  param_2[0x1c] = uVar13;
  param_2[0x1d] = uVar15;
  uVar6 = puVar1[1];
  uVar10 = puVar1[2];
  uVar13 = puVar1[3];
  uVar15 = puVar1[4];
  param_2[0x1e] = *puVar1;
  param_2[0x1f] = uVar6;
  param_2[0x20] = uVar10;
  param_2[0x21] = uVar13;
  param_2[0x22] = uVar15;
  uVar6 = puVar1[6];
  uVar10 = puVar1[7];
  uVar13 = puVar1[8];
  uVar15 = puVar1[9];
  param_2[0x23] = puVar1[5];
  param_2[0x24] = uVar6;
  param_2[0x25] = uVar10;
  param_2[0x26] = uVar13;
  param_2[0x27] = uVar15;
  return;
}

