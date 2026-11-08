// FUN_016c8b64 @ 016c8b64 size=508 calls_out=1 calls_in=1
// strings: 

void FUN_016c8b64(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  
  uVar11 = *(uint *)(param_1 + 8);
  uVar15 = *(uint *)(param_1 + 0x40);
  uVar2 = uVar11;
  if (uVar15 < uVar11) {
    uVar2 = uVar15;
  }
  uVar2 = FUN_016dd50a(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 4),uVar2);
  if (uVar2 == 0) {
    uVar2 = uVar15 - uVar11;
  }
  uVar15 = *(uint *)(param_1 + 0x78);
  uVar17 = *(uint *)(param_1 + 0xb0);
  puVar16 = (undefined4 *)(param_1 + ((int)uVar2 >> 0x1f) * -0x38);
  uVar11 = uVar15;
  if (uVar17 < uVar15) {
    uVar11 = uVar17;
  }
  iVar3 = FUN_016dd50a(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0x74),uVar11);
  iVar5 = 0x70;
  if (iVar3 == 0) {
    iVar3 = uVar17 - uVar15;
  }
  uVar11 = puVar16[2];
  if (iVar3 < 0) {
    iVar5 = 0xa8;
  }
  puVar4 = (undefined4 *)(param_1 + iVar5);
  iVar5 = 0xa8;
  uVar15 = puVar4[2];
  if (iVar3 < 0) {
    iVar5 = 0x70;
  }
  puVar12 = (undefined4 *)(param_1 + ((int)~uVar2 >> 0x1f) * -0x38);
  uVar2 = uVar11;
  if (uVar15 < uVar11) {
    uVar2 = uVar15;
  }
  iVar3 = FUN_016dd50a(puVar4[1],puVar16[1],uVar2);
  puVar14 = (undefined4 *)(param_1 + iVar5);
  uVar2 = puVar12[2];
  if (iVar3 == 0) {
    iVar3 = uVar15 - uVar11;
  }
  uVar11 = puVar14[2];
  puVar7 = puVar4;
  if (iVar3 < 0) {
    puVar7 = puVar12;
  }
  uVar15 = uVar2;
  if (uVar11 < uVar2) {
    uVar15 = uVar11;
  }
  iVar5 = FUN_016dd50a(puVar14[1],puVar12[1],uVar15);
  if (iVar5 == 0) {
    iVar5 = uVar11 - uVar2;
  }
  puVar13 = puVar12;
  puVar1 = puVar14;
  if (iVar5 < 0) {
    puVar13 = puVar4;
    puVar1 = puVar12;
    puVar7 = puVar14;
  }
  if (iVar3 < 0) {
    puVar13 = puVar16;
  }
  uVar2 = puVar7[2];
  uVar11 = puVar13[2];
  if (iVar3 < 0) {
    puVar16 = puVar4;
  }
  uVar15 = uVar11;
  if (uVar2 < uVar11) {
    uVar15 = uVar2;
  }
  iVar3 = FUN_016dd50a(puVar7[1],puVar13[1],uVar15);
  uVar6 = puVar16[1];
  uVar8 = puVar16[2];
  uVar9 = puVar16[3];
  if (iVar3 == 0) {
    iVar3 = uVar2 - uVar11;
  }
  *param_2 = *puVar16;
  param_2[1] = uVar6;
  param_2[2] = uVar8;
  param_2[3] = uVar9;
  uVar6 = puVar16[5];
  uVar8 = puVar16[6];
  uVar9 = puVar16[7];
  uVar10 = puVar16[8];
  param_2[4] = puVar16[4];
  param_2[5] = uVar6;
  param_2[6] = uVar8;
  param_2[7] = uVar9;
  param_2[8] = uVar10;
  uVar6 = puVar16[10];
  uVar8 = puVar16[0xb];
  uVar9 = puVar16[0xc];
  uVar10 = puVar16[0xd];
  param_2[9] = puVar16[9];
  param_2[10] = uVar6;
  param_2[0xb] = uVar8;
  param_2[0xc] = uVar9;
  param_2[0xd] = uVar10;
  if (iVar3 < 0) {
    puVar16 = puVar13;
    puVar13 = puVar7;
  }
  else {
    puVar16 = puVar7;
  }
  uVar6 = puVar13[1];
  uVar8 = puVar13[2];
  uVar9 = puVar13[3];
  param_2[0xe] = *puVar13;
  param_2[0xf] = uVar6;
  param_2[0x10] = uVar8;
  param_2[0x11] = uVar9;
  uVar6 = puVar13[5];
  uVar8 = puVar13[6];
  uVar9 = puVar13[7];
  uVar10 = puVar13[8];
  param_2[0x12] = puVar13[4];
  param_2[0x13] = uVar6;
  param_2[0x14] = uVar8;
  param_2[0x15] = uVar9;
  param_2[0x16] = uVar10;
  uVar6 = puVar13[10];
  uVar8 = puVar13[0xb];
  uVar9 = puVar13[0xc];
  uVar10 = puVar13[0xd];
  param_2[0x17] = puVar13[9];
  param_2[0x18] = uVar6;
  param_2[0x19] = uVar8;
  param_2[0x1a] = uVar9;
  param_2[0x1b] = uVar10;
  uVar6 = puVar16[1];
  uVar8 = puVar16[2];
  uVar9 = puVar16[3];
  param_2[0x1c] = *puVar16;
  param_2[0x1d] = uVar6;
  param_2[0x1e] = uVar8;
  param_2[0x1f] = uVar9;
  uVar6 = puVar16[5];
  uVar8 = puVar16[6];
  uVar9 = puVar16[7];
  uVar10 = puVar16[8];
  param_2[0x20] = puVar16[4];
  param_2[0x21] = uVar6;
  param_2[0x22] = uVar8;
  param_2[0x23] = uVar9;
  param_2[0x24] = uVar10;
  uVar6 = puVar16[10];
  uVar8 = puVar16[0xb];
  uVar9 = puVar16[0xc];
  uVar10 = puVar16[0xd];
  param_2[0x25] = puVar16[9];
  param_2[0x26] = uVar6;
  param_2[0x27] = uVar8;
  param_2[0x28] = uVar9;
  param_2[0x29] = uVar10;
  uVar6 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  param_2[0x2a] = *puVar1;
  param_2[0x2b] = uVar6;
  param_2[0x2c] = uVar8;
  param_2[0x2d] = uVar9;
  uVar6 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  uVar10 = puVar1[8];
  param_2[0x2e] = puVar1[4];
  param_2[0x2f] = uVar6;
  param_2[0x30] = uVar8;
  param_2[0x31] = uVar9;
  param_2[0x32] = uVar10;
  uVar6 = puVar1[10];
  uVar8 = puVar1[0xb];
  uVar9 = puVar1[0xc];
  uVar10 = puVar1[0xd];
  param_2[0x33] = puVar1[9];
  param_2[0x34] = uVar6;
  param_2[0x35] = uVar8;
  param_2[0x36] = uVar9;
  param_2[0x37] = uVar10;
  return;
}

