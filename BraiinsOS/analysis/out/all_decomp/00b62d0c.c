// FUN_00b62d0c @ 00b62d0c size=2016 calls_out=1 calls_in=1
// strings: 

void FUN_00b62d0c(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  byte in_Q;
  
  uVar10 = param_1[5];
  uVar1 = param_1[7];
  uVar6 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
  uVar14 = param_1[1];
  bVar20 = (((uint)((byte)((int)uVar1 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar1 >> 0x1f) >> 1) ^
           param_1[6]) <
           (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar10 >> 0x1f) >> 1) ^
           param_1[4]);
  uVar1 = (uint)((int)uVar1 >> 0x1f) >> 1 ^ uVar1;
  uVar10 = param_1[3];
  iVar2 = 0x10;
  iVar3 = 0x18;
  if ((int)(uVar1 - (uVar6 + bVar20)) < 0 !=
      (SBORROW4(uVar1,uVar6) != SBORROW4(uVar1 - uVar6,(uint)bVar20))) {
    iVar2 = 0x18;
    iVar3 = 0x10;
  }
  uVar6 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  uVar1 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
  bVar20 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar10 >> 0x1f) >> 1) ^
           param_1[2]) <
           (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           *param_1);
  puVar16 = (uint *)((int)param_1 + iVar3);
  bVar22 = SBORROW4(uVar1,uVar6) != SBORROW4(uVar1 - uVar6,(uint)bVar20);
  bVar20 = (int)(uVar1 - (uVar6 + bVar20)) < 0;
  puVar15 = (uint *)((int)param_1 + iVar2);
  puVar12 = param_1 + (uint)(bVar20 == bVar22) * 2;
  uVar13 = puVar12[1];
  uVar10 = puVar15[1];
  uVar6 = puVar16[1];
  puVar17 = param_1 + (uint)(bVar20 != bVar22) * 2;
  uVar4 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  uVar1 = puVar17[1];
  uVar14 = (uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6;
  bVar20 = (((uint)((byte)((int)uVar6 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar6 >> 0x1f) >> 1) ^
           *puVar16) <
           (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *puVar12);
  bVar22 = SBORROW4(uVar14,uVar4) != SBORROW4(uVar14 - uVar4,(uint)bVar20);
  bVar20 = (int)(uVar14 - (uVar4 + bVar20)) < 0;
  puVar8 = puVar12;
  if (bVar20 != bVar22) {
    puVar8 = puVar15;
  }
  uVar14 = (uint)((int)uVar1 >> 0x1f) >> 1 ^ uVar1;
  uVar6 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
  bVar21 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar10 >> 0x1f) >> 1) ^
           *puVar15) <
           (((uint)((byte)((int)uVar1 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar1 >> 0x1f) >> 1) ^
           *puVar17);
  bVar23 = SBORROW4(uVar6,uVar14) != SBORROW4(uVar6 - uVar14,(uint)bVar21);
  bVar21 = (int)(uVar6 - (uVar14 + bVar21)) < 0;
  puVar9 = puVar15;
  if (bVar21 != bVar23) {
    puVar9 = puVar12;
    puVar8 = puVar17;
  }
  bVar21 = bVar21 != bVar23;
  uVar6 = (byte)(bVar20 << 4 | bVar22 << 1 | in_Q) & 0x1f;
  bVar22 = (uVar6 >> 1 & 1) != 0;
  bVar20 = uVar6 >> 4 != 0;
  uVar6 = puVar8[1];
  if (bVar20 != bVar22) {
    puVar9 = puVar16;
  }
  uVar14 = puVar9[1];
  if (bVar20 != bVar22) {
    puVar16 = puVar12;
  }
  uVar4 = (uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6;
  if (bVar21) {
    uVar1 = uVar10;
  }
  uVar13 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  uVar10 = *puVar17;
  if (bVar21) {
    uVar10 = *puVar15;
  }
  bVar20 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           *puVar9) <
           (((uint)((byte)((int)uVar6 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar6 >> 0x1f) >> 1) ^
           *puVar8);
  param_3[1] = uVar1;
  puVar12 = puVar9;
  if ((int)(uVar13 - (uVar4 + bVar20)) < 0 !=
      (SBORROW4(uVar13,uVar4) != SBORROW4(uVar13 - uVar4,(uint)bVar20))) {
    puVar12 = puVar8;
    puVar8 = puVar9;
  }
  uVar14 = puVar8[1];
  *param_3 = uVar10;
  param_3[2] = *puVar8;
  uVar6 = *puVar12;
  param_3[3] = uVar14;
  uVar14 = puVar12[1];
  iVar3 = 0x18;
  param_3[4] = uVar6;
  uVar13 = *puVar16;
  param_3[5] = uVar14;
  uVar4 = puVar16[1];
  param_3[6] = uVar13;
  puVar8 = param_1 + 8;
  uVar18 = *puVar8;
  param_3[7] = uVar4;
  uVar11 = param_1[0xd];
  uVar6 = param_1[0xf];
  uVar7 = (uint)((int)uVar11 >> 0x1f) >> 1 ^ uVar11;
  uVar5 = param_1[9];
  uVar19 = param_1[0xb];
  uVar14 = (uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6;
  bVar20 = (((uint)((byte)((int)uVar6 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar6 >> 0x1f) >> 1) ^
           param_1[0xe]) <
           (((uint)((byte)((int)uVar11 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar11 >> 0x1f) >> 1) ^
           param_1[0xc]);
  iVar2 = 0x10;
  if ((int)(uVar14 - (uVar7 + bVar20)) < 0 !=
      (SBORROW4(uVar14,uVar7) != SBORROW4(uVar14 - uVar7,(uint)bVar20))) {
    iVar2 = 0x18;
    iVar3 = 0x10;
  }
  uVar6 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
  uVar14 = (uint)((int)uVar19 >> 0x1f) >> 1 ^ uVar19;
  bVar20 = (((uint)((byte)((int)uVar19 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar19 >> 0x1f) >> 1) ^
           param_1[10]) <
           (((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1) ^
           uVar18);
  bVar22 = SBORROW4(uVar14,uVar6) != SBORROW4(uVar14 - uVar6,(uint)bVar20);
  bVar20 = (int)(uVar14 - (uVar6 + bVar20)) < 0;
  puVar17 = puVar8 + (uint)(bVar20 == bVar22) * 2;
  puVar12 = (uint *)((int)puVar8 + iVar3);
  uVar7 = puVar17[1];
  puVar15 = puVar8 + (uint)(bVar20 != bVar22) * 2;
  uVar14 = puVar12[1];
  puVar8 = (uint *)((int)puVar8 + iVar2);
  uVar11 = (uint)((int)uVar7 >> 0x1f) >> 1 ^ uVar7;
  uVar6 = puVar15[1];
  uVar5 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  bVar22 = (((uint)((byte)((int)uVar7 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar7 >> 0x1f) >> 1) ^
           *puVar17) <=
           (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           *puVar12);
  uVar14 = puVar8[1];
  bVar21 = SBORROW4(uVar5,uVar11) != SBORROW4(uVar5 - uVar11,(uint)!bVar22);
  bVar20 = (int)(uVar5 - (uVar11 + !bVar22)) < 0;
  puVar16 = puVar17;
  if (bVar20 != bVar21) {
    puVar16 = puVar8;
  }
  uVar18 = (uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6;
  uVar19 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  bVar23 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           *puVar8) <
           (((uint)((byte)((int)uVar6 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar6 >> 0x1f) >> 1) ^
           *puVar15);
  puVar9 = puVar8;
  uVar7 = *puVar15;
  if ((int)(uVar19 - (uVar18 + bVar23)) < 0 !=
      (SBORROW4(uVar19,uVar18) != SBORROW4(uVar19 - uVar18,(uint)bVar23))) {
    puVar9 = puVar17;
    uVar6 = uVar14;
    uVar7 = *puVar8;
    puVar16 = puVar15;
  }
  bVar20 = (int)((uint)(byte)(bVar20 << 4 | (uVar5 == uVar11 + !bVar22) << 3 |
                              (uVar11 < uVar5 || uVar5 - uVar11 < (uint)bVar22) << 2 | bVar21 << 1 |
                             (in_Q & 1) != 0) << 0x1b) < 0;
  uVar14 = puVar16[1];
  if (bVar20 != bVar21) {
    puVar9 = puVar12;
  }
  uVar5 = puVar9[1];
  if (bVar20 != bVar21) {
    puVar12 = puVar17;
  }
  uVar11 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  bVar20 = (((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1) ^
           *puVar9) <
           (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           *puVar16);
  uVar5 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
  bVar22 = SBORROW4(uVar5,uVar11) != SBORROW4(uVar5 - uVar11,(uint)bVar20);
  bVar20 = (int)(uVar5 - (uVar11 + bVar20)) < 0;
  param_3[9] = uVar6;
  puVar8 = puVar16;
  if (bVar20 != bVar22) {
    puVar8 = puVar9;
  }
  uVar14 = puVar8[1];
  if (bVar20 != bVar22) {
    puVar9 = puVar16;
  }
  param_3[8] = uVar7;
  param_3[10] = *puVar8;
  uVar5 = *puVar9;
  param_3[0xb] = uVar14;
  uVar14 = puVar9[1];
  param_3[0xc] = uVar5;
  param_3[0xd] = uVar14;
  uVar14 = *puVar12;
  uVar5 = puVar12[1];
  uVar18 = (uint)((int)uVar4 >> 0x1f) >> 1 ^ uVar4;
  uVar11 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
  bVar20 = (((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1) ^
           uVar14) < (((uint)((byte)((int)uVar4 >> 0x1f) & 1) << 0x1f |
                      (uint)((int)uVar4 >> 0x1f) >> 1) ^ uVar13);
  param_3[0xf] = uVar5;
  bVar23 = SBORROW4(uVar11,uVar18) != SBORROW4(uVar11 - uVar18,(uint)bVar20);
  bVar22 = (int)(uVar11 - (uVar18 + bVar20)) < 0;
  bVar20 = bVar22 != bVar23;
  uVar18 = (uint)((int)uVar1 >> 0x1f) >> 1 ^ uVar1;
  bVar21 = (((uint)((byte)((int)uVar6 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar6 >> 0x1f) >> 1) ^
           uVar7) < (((uint)((byte)((int)uVar1 >> 0x1f) & 1) << 0x1f |
                     (uint)((int)uVar1 >> 0x1f) >> 1) ^ uVar10);
  uVar11 = (uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6;
  bVar24 = SBORROW4(uVar11,uVar18) != SBORROW4(uVar11 - uVar18,(uint)bVar21);
  bVar21 = (int)(uVar11 - (uVar18 + bVar21)) < 0;
  uVar11 = (uint)(bVar21 != bVar24);
  puVar8 = param_3 + 8 + uVar11 * 2;
  uVar18 = *puVar8;
  if (uVar11 == 0) {
    uVar7 = uVar10;
    uVar6 = uVar1;
  }
  param_3[0xe] = uVar14;
  iVar2 = 0;
  if (bVar20) {
    iVar2 = -1;
    uVar14 = uVar13;
  }
  uVar1 = puVar8[1];
  if (bVar20) {
    uVar5 = uVar4;
  }
  puVar16 = param_3 + (uint)(bVar21 == bVar24) * 2;
  uVar10 = *puVar16;
  param_2[0xf] = uVar5;
  iVar3 = 0;
  if (bVar22 == bVar23) {
    iVar3 = -1;
  }
  uVar4 = puVar16[1];
  *param_2 = uVar7;
  param_2[0xe] = uVar14;
  param_2[1] = uVar6;
  puVar12 = param_3 + 0xe + iVar3 * 2;
  uVar6 = *puVar12;
  uVar13 = (uint)((int)uVar1 >> 0x1f) >> 1 ^ uVar1;
  uVar14 = (uint)((int)uVar4 >> 0x1f) >> 1 ^ uVar4;
  bVar20 = (((uint)((byte)((int)uVar1 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar1 >> 0x1f) >> 1) ^
           uVar18) < (((uint)((byte)((int)uVar4 >> 0x1f) & 1) << 0x1f |
                      (uint)((int)uVar4 >> 0x1f) >> 1) ^ uVar10);
  bVar22 = SBORROW4(uVar13,uVar14) != SBORROW4(uVar13 - uVar14,(uint)bVar20);
  bVar20 = (int)(uVar13 - (uVar14 + bVar20)) < 0;
  uVar14 = (uint)(bVar20 != bVar22);
  if (uVar14 != 0) {
    uVar10 = uVar18;
  }
  uVar13 = puVar12[1];
  param_2[2] = uVar10;
  if (uVar14 != 0) {
    uVar4 = uVar1;
  }
  param_2[3] = uVar4;
  uVar4 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  puVar15 = param_3 + 6 + iVar2 * 2;
  uVar10 = puVar15[1];
  puVar8 = puVar8 + uVar14 * 2;
  uVar14 = *puVar8;
  uVar5 = puVar8[1];
  uVar1 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
  bVar21 = (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           uVar6) < (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                     (uint)((int)uVar10 >> 0x1f) >> 1) ^ *puVar15);
  bVar23 = SBORROW4(uVar4,uVar1) != SBORROW4(uVar4 - uVar1,(uint)bVar21);
  bVar21 = (int)(uVar4 - (uVar1 + bVar21)) < 0;
  iVar2 = 0;
  if (bVar21 != bVar23) {
    iVar2 = -1;
    uVar6 = *puVar15;
    uVar13 = uVar10;
  }
  puVar16 = puVar16 + (uint)(bVar20 == bVar22) * 2;
  uVar1 = *puVar16;
  iVar3 = 0;
  if (bVar21 == bVar23) {
    iVar3 = -1;
  }
  uVar10 = puVar16[1];
  param_2[0xd] = uVar13;
  uVar7 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
  puVar12 = puVar12 + iVar3 * 2;
  uVar4 = *puVar12;
  param_2[0xc] = uVar6;
  uVar13 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
  bVar20 = (((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1) ^
           uVar14) < (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                      (uint)((int)uVar10 >> 0x1f) >> 1) ^ uVar1);
  uVar6 = puVar12[1];
  bVar22 = SBORROW4(uVar7,uVar13) != SBORROW4(uVar7 - uVar13,(uint)bVar20);
  bVar20 = (int)(uVar7 - (uVar13 + bVar20)) < 0;
  uVar13 = (uint)(bVar20 != bVar22);
  if (uVar13 != 0) {
    uVar1 = uVar14;
    uVar10 = uVar5;
  }
  param_2[5] = uVar10;
  param_2[4] = uVar1;
  puVar8 = puVar8 + uVar13 * 2;
  uVar13 = *puVar8;
  puVar15 = puVar15 + iVar2 * 2;
  uVar14 = (uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6;
  uVar10 = puVar15[1];
  uVar5 = puVar8[1];
  uVar1 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
  bVar21 = (((uint)((byte)((int)uVar6 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar6 >> 0x1f) >> 1) ^
           uVar4) < (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                     (uint)((int)uVar10 >> 0x1f) >> 1) ^ *puVar15);
  bVar24 = SBORROW4(uVar14,uVar1) != SBORROW4(uVar14 - uVar1,(uint)bVar21);
  bVar23 = (int)(uVar14 - (uVar1 + bVar21)) < 0;
  bVar21 = bVar23 != bVar24;
  if (bVar21) {
    uVar6 = uVar10;
    uVar4 = *puVar15;
  }
  param_2[10] = uVar4;
  iVar2 = 0;
  if (bVar21) {
    iVar2 = -1;
  }
  puVar16 = puVar16 + (uint)(bVar20 == bVar22) * 2;
  uVar1 = *puVar16;
  uVar10 = puVar16[1];
  param_2[0xb] = uVar6;
  uVar6 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
  uVar14 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
  bVar20 = (((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1) ^
           uVar13) < (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                      (uint)((int)uVar10 >> 0x1f) >> 1) ^ uVar1);
  bVar22 = SBORROW4(uVar6,uVar14) != SBORROW4(uVar6 - uVar14,(uint)bVar20);
  bVar20 = (int)(uVar6 - (uVar14 + bVar20)) < 0;
  uVar6 = (uint)(bVar20 != bVar22);
  if (uVar6 != 0) {
    uVar10 = uVar5;
    uVar1 = uVar13;
  }
  param_2[7] = uVar10;
  iVar3 = 0;
  if (bVar23 == bVar24) {
    iVar3 = -1;
  }
  puVar15 = puVar15 + iVar2 * 2;
  uVar13 = *puVar15;
  puVar12 = puVar12 + iVar3 * 2;
  uVar10 = *puVar12;
  param_2[6] = uVar1;
  uVar1 = puVar12[1];
  uVar4 = puVar15[1];
  uVar5 = (uint)((int)uVar1 >> 0x1f) >> 1 ^ uVar1;
  bVar21 = (((uint)((byte)((int)uVar1 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar1 >> 0x1f) >> 1) ^
           uVar10) < (((uint)((byte)((int)uVar4 >> 0x1f) & 1) << 0x1f |
                      (uint)((int)uVar4 >> 0x1f) >> 1) ^ uVar13);
  uVar14 = (uint)((int)uVar4 >> 0x1f) >> 1 ^ uVar4;
  bVar24 = SBORROW4(uVar5,uVar14) != SBORROW4(uVar5 - uVar14,(uint)bVar21);
  bVar23 = (int)(uVar5 - (uVar14 + bVar21)) < 0;
  bVar21 = bVar23 != bVar24;
  iVar2 = 0;
  if (bVar23 == bVar24) {
    iVar2 = -1;
  }
  iVar3 = 0;
  if (bVar21) {
    iVar3 = -1;
    uVar1 = uVar4;
  }
  param_2[9] = uVar1;
  puVar15 = puVar15 + iVar3 * 2 + 2;
  if (bVar21) {
    uVar10 = uVar13;
  }
  bVar21 = puVar16 + (uint)(bVar20 == bVar22) * 2 == puVar15;
  puVar16 = puVar16 + (uint)(bVar20 == bVar22) * 2;
  if (bVar21) {
    puVar15 = puVar12 + iVar2 * 2 + 2;
    puVar16 = puVar8;
  }
  param_2[8] = uVar10;
  if (bVar21) {
    puVar16 = puVar16 + uVar6 * 2;
  }
  if (!bVar21 || puVar16 != puVar15) {
    FUN_00fb7254();
  }
  return;
}

