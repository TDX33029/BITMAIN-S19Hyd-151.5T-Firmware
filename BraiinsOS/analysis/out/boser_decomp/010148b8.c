// FUN_010148b8 @ 010148b8 size=476 calls_out=1 calls_in=1
// strings: 

void FUN_010148b8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  
  uVar8 = *(uint *)(param_1 + 0x28);
  uVar17 = *(uint *)(param_1 + 0x58);
  uVar18 = uVar8;
  if (uVar17 < uVar8) {
    uVar18 = uVar17;
  }
  uVar2 = FUN_01bed842(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x24),uVar18);
  uVar21 = *(uint *)(param_1 + 0x88);
  uVar14 = *(uint *)(param_1 + 0xb8);
  uVar18 = uVar21;
  if (uVar14 < uVar21) {
    uVar18 = uVar14;
  }
  iVar3 = FUN_01bed842(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0x84),uVar18);
  if (iVar3 == 0) {
    iVar3 = uVar14 - uVar21;
  }
  if (uVar2 == 0) {
    uVar2 = uVar17 - uVar8;
  }
  iVar9 = 0x90;
  if (iVar3 < 0) {
    iVar9 = 0x60;
  }
  puVar6 = (undefined4 *)(param_1 + ((int)uVar2 >> 0x1f) * -0x30);
  iVar5 = 0x60;
  if (iVar3 < 0) {
    iVar5 = 0x90;
  }
  puVar4 = (undefined4 *)(param_1 + iVar5);
  uVar8 = puVar6[10];
  uVar17 = puVar4[10];
  uVar18 = uVar8;
  if (uVar17 < uVar8) {
    uVar18 = uVar17;
  }
  iVar3 = FUN_01bed842(puVar4[9],puVar6[9],uVar18);
  puVar10 = (undefined4 *)(param_1 + iVar9);
  uVar18 = puVar10[10];
  puVar19 = (undefined4 *)(param_1 + ((int)~uVar2 >> 0x1f) * -0x30);
  if (iVar3 == 0) {
    iVar3 = uVar17 - uVar8;
  }
  uVar8 = puVar19[10];
  puVar16 = puVar4;
  if (iVar3 < 0) {
    puVar16 = puVar19;
  }
  uVar17 = uVar8;
  if (uVar18 < uVar8) {
    uVar17 = uVar18;
  }
  iVar9 = FUN_01bed842(puVar10[9],puVar19[9],uVar17);
  if (iVar9 == 0) {
    iVar9 = uVar18 - uVar8;
  }
  puVar20 = puVar19;
  puVar1 = puVar10;
  if (iVar9 < 0) {
    puVar20 = puVar4;
    puVar1 = puVar19;
    puVar16 = puVar10;
  }
  if (iVar3 < 0) {
    puVar20 = puVar6;
  }
  uVar18 = puVar20[10];
  if (iVar3 < 0) {
    puVar6 = puVar4;
  }
  uVar17 = puVar16[10];
  uVar8 = uVar18;
  if (uVar17 < uVar18) {
    uVar8 = uVar17;
  }
  iVar3 = FUN_01bed842(puVar16[9],puVar20[9],uVar8);
  uVar7 = puVar6[1];
  uVar11 = puVar6[2];
  uVar12 = puVar6[3];
  uVar13 = puVar6[4];
  uVar15 = puVar6[5];
  *param_2 = *puVar6;
  param_2[1] = uVar7;
  param_2[2] = uVar11;
  param_2[3] = uVar12;
  param_2[4] = uVar13;
  param_2[5] = uVar15;
  uVar7 = puVar6[7];
  uVar11 = puVar6[8];
  uVar12 = puVar6[9];
  uVar13 = puVar6[10];
  uVar15 = puVar6[0xb];
  param_2[6] = puVar6[6];
  param_2[7] = uVar7;
  param_2[8] = uVar11;
  param_2[9] = uVar12;
  param_2[10] = uVar13;
  param_2[0xb] = uVar15;
  if (iVar3 == 0) {
    iVar3 = uVar17 - uVar18;
  }
  if (iVar3 < 0) {
    puVar6 = puVar20;
    puVar20 = puVar16;
  }
  else {
    puVar6 = puVar16;
  }
  uVar7 = puVar20[1];
  uVar11 = puVar20[2];
  uVar12 = puVar20[3];
  uVar13 = puVar20[4];
  uVar15 = puVar20[5];
  param_2[0xc] = *puVar20;
  param_2[0xd] = uVar7;
  param_2[0xe] = uVar11;
  param_2[0xf] = uVar12;
  param_2[0x10] = uVar13;
  param_2[0x11] = uVar15;
  uVar7 = puVar20[7];
  uVar11 = puVar20[8];
  uVar12 = puVar20[9];
  uVar13 = puVar20[10];
  uVar15 = puVar20[0xb];
  param_2[0x12] = puVar20[6];
  param_2[0x13] = uVar7;
  param_2[0x14] = uVar11;
  param_2[0x15] = uVar12;
  param_2[0x16] = uVar13;
  param_2[0x17] = uVar15;
  uVar7 = puVar6[1];
  uVar11 = puVar6[2];
  uVar12 = puVar6[3];
  uVar13 = puVar6[4];
  uVar15 = puVar6[5];
  param_2[0x18] = *puVar6;
  param_2[0x19] = uVar7;
  param_2[0x1a] = uVar11;
  param_2[0x1b] = uVar12;
  param_2[0x1c] = uVar13;
  param_2[0x1d] = uVar15;
  uVar7 = puVar6[7];
  uVar11 = puVar6[8];
  uVar12 = puVar6[9];
  uVar13 = puVar6[10];
  uVar15 = puVar6[0xb];
  param_2[0x1e] = puVar6[6];
  param_2[0x1f] = uVar7;
  param_2[0x20] = uVar11;
  param_2[0x21] = uVar12;
  param_2[0x22] = uVar13;
  param_2[0x23] = uVar15;
  uVar7 = puVar1[1];
  uVar11 = puVar1[2];
  uVar12 = puVar1[3];
  uVar13 = puVar1[4];
  uVar15 = puVar1[5];
  param_2[0x24] = *puVar1;
  param_2[0x25] = uVar7;
  param_2[0x26] = uVar11;
  param_2[0x27] = uVar12;
  param_2[0x28] = uVar13;
  param_2[0x29] = uVar15;
  uVar7 = puVar1[7];
  uVar11 = puVar1[8];
  uVar12 = puVar1[9];
  uVar13 = puVar1[10];
  uVar15 = puVar1[0xb];
  param_2[0x2a] = puVar1[6];
  param_2[0x2b] = uVar7;
  param_2[0x2c] = uVar11;
  param_2[0x2d] = uVar12;
  param_2[0x2e] = uVar13;
  param_2[0x2f] = uVar15;
  return;
}

