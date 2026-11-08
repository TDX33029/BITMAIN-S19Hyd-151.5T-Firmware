// FUN_00b81714 @ 00b81714 size=2136 calls_out=1 calls_in=1
// strings: 

void FUN_00b81714(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  byte in_Q;
  
  uVar2 = param_1[9];
  uVar13 = param_1[0xd];
  uVar3 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
  uVar14 = param_1[1];
  bVar20 = (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           param_1[0xc]) <
           (((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
           param_1[8]);
  uVar13 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  uVar2 = param_1[5];
  iVar7 = 0x30;
  iVar4 = 0x20;
  if ((int)(uVar13 - (uVar3 + bVar20)) < 0 !=
      (SBORROW4(uVar13,uVar3) != SBORROW4(uVar13 - uVar3,(uint)bVar20))) {
    iVar7 = 0x20;
    iVar4 = 0x30;
  }
  uVar3 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  uVar13 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
  bVar20 = (((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
           param_1[4]) <
           (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           *param_1);
  bVar22 = SBORROW4(uVar13,uVar3) != SBORROW4(uVar13 - uVar3,(uint)bVar20);
  bVar20 = (int)(uVar13 - (uVar3 + bVar20)) < 0;
  puVar9 = param_1 + (uint)(bVar20 != bVar22) * 4;
  puVar12 = (uint *)((int)param_1 + iVar4);
  puVar5 = (uint *)((int)param_1 + iVar7);
  uVar3 = puVar9[1];
  puVar6 = param_1 + (uint)(bVar20 == bVar22) * 4;
  uVar2 = puVar12[1];
  uVar14 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
  uVar18 = puVar6[1];
  uVar15 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
  uVar13 = puVar5[1];
  bVar20 = (((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
           *puVar12) <
           (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar3 >> 0x1f) >> 1) ^
           *puVar9);
  bVar22 = SBORROW4(uVar15,uVar14) != SBORROW4(uVar15 - uVar14,(uint)bVar20);
  bVar20 = (int)(uVar15 - (uVar14 + bVar20)) < 0;
  puVar8 = puVar12;
  if (bVar20 != bVar22) {
    puVar8 = puVar6;
  }
  uVar3 = (uint)((int)uVar18 >> 0x1f) >> 1 ^ uVar18;
  uVar2 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  bVar21 = (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *puVar5) <
           (((uint)((byte)((int)uVar18 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar18 >> 0x1f) >> 1) ^
           *puVar6);
  puVar10 = puVar6;
  puVar11 = puVar5;
  if ((int)(uVar2 - (uVar3 + bVar21)) < 0 !=
      (SBORROW4(uVar2,uVar3) != SBORROW4(uVar2 - uVar3,(uint)bVar21))) {
    puVar10 = puVar12;
    puVar11 = puVar6;
    puVar8 = puVar5;
  }
  uVar2 = (byte)(bVar20 << 4 | bVar22 << 1 | in_Q) & 0x1f;
  if ((uVar2 >> 4 != 0) == ((uVar2 >> 1 & 1) != 0)) {
    puVar12 = puVar9;
  }
  else {
    puVar10 = puVar9;
  }
  uVar2 = puVar12[1];
  uVar15 = *puVar8;
  uVar18 = puVar8[1];
  uVar3 = puVar12[2];
  uVar14 = puVar12[3];
  uVar13 = *puVar10;
  uVar16 = puVar10[1];
  *param_3 = *puVar12;
  param_3[2] = uVar3;
  uVar3 = (uint)((int)uVar18 >> 0x1f) >> 1 ^ uVar18;
  uVar19 = (uint)((int)uVar16 >> 0x1f) >> 1 ^ uVar16;
  bVar20 = (((uint)((byte)((int)uVar18 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar18 >> 0x1f) >> 1) ^
           uVar15) < (((uint)((byte)((int)uVar16 >> 0x1f) & 1) << 0x1f |
                      (uint)((int)uVar16 >> 0x1f) >> 1) ^ uVar13);
  iVar7 = 0x30;
  if ((int)(uVar3 - (uVar19 + bVar20)) < 0 ==
      (SBORROW4(uVar3,uVar19) != SBORROW4(uVar3 - uVar19,(uint)bVar20))) {
    puVar12 = puVar10;
    puVar10 = puVar8;
  }
  else {
    puVar12 = puVar8;
  }
  uVar3 = *puVar12;
  uVar13 = puVar12[2];
  param_3[3] = uVar14;
  param_3[1] = uVar2;
  uVar14 = puVar12[1];
  uVar2 = puVar12[3];
  param_3[4] = uVar3;
  param_3[6] = uVar13;
  uVar3 = *puVar10;
  uVar13 = puVar10[2];
  param_3[5] = uVar14;
  param_3[7] = uVar2;
  uVar2 = puVar10[1];
  uVar14 = puVar10[3];
  param_3[8] = uVar3;
  param_3[9] = uVar2;
  param_3[10] = uVar13;
  param_3[0xb] = uVar14;
  uVar13 = puVar11[2];
  uVar2 = *puVar11;
  uVar3 = puVar11[3];
  param_3[0xd] = puVar11[1];
  puVar8 = param_3 + 0xc;
  *puVar8 = uVar2;
  param_3[0xe] = uVar13;
  param_3[0xf] = uVar3;
  puVar12 = param_1 + 0x10;
  iVar4 = 0x20;
  uVar2 = param_1[0x19];
  uVar14 = param_1[0x1d];
  uVar18 = param_1[0x15];
  uVar3 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
  uVar15 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  uVar13 = param_1[0x11];
  bVar20 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           param_1[0x1c]) <
           (((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
           param_1[0x18]);
  if ((int)(uVar15 - (uVar3 + bVar20)) < 0 !=
      (SBORROW4(uVar15,uVar3) != SBORROW4(uVar15 - uVar3,(uint)bVar20))) {
    iVar7 = 0x20;
    iVar4 = 0x30;
  }
  uVar2 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  uVar3 = (uint)((int)uVar18 >> 0x1f) >> 1 ^ uVar18;
  bVar20 = (((uint)((byte)((int)uVar18 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar18 >> 0x1f) >> 1) ^
           param_1[0x14]) <
           (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *puVar12);
  bVar22 = SBORROW4(uVar3,uVar2) != SBORROW4(uVar3 - uVar2,(uint)bVar20);
  bVar20 = (int)(uVar3 - (uVar2 + bVar20)) < 0;
  puVar6 = (uint *)((int)puVar12 + iVar4);
  puVar11 = puVar12 + (uint)(bVar20 != bVar22) * 4;
  puVar9 = (uint *)((int)puVar12 + iVar7);
  uVar13 = puVar11[1];
  puVar12 = puVar12 + (uint)(bVar20 == bVar22) * 4;
  uVar2 = puVar6[1];
  uVar15 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  uVar3 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
  uVar18 = puVar12[1];
  uVar14 = puVar9[1];
  bVar20 = (((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
           *puVar6) <
           (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *puVar11);
  bVar22 = SBORROW4(uVar3,uVar15) != SBORROW4(uVar3 - uVar15,(uint)bVar20);
  bVar20 = (int)(uVar3 - (uVar15 + bVar20)) < 0;
  puVar5 = puVar6;
  if (bVar20 != bVar22) {
    puVar5 = puVar12;
  }
  uVar3 = (uint)((int)uVar18 >> 0x1f) >> 1 ^ uVar18;
  uVar2 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  bVar21 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           *puVar9) <
           (((uint)((byte)((int)uVar18 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar18 >> 0x1f) >> 1) ^
           *puVar12);
  puVar1 = puVar12;
  puVar10 = puVar9;
  if ((int)(uVar2 - (uVar3 + bVar21)) < 0 !=
      (SBORROW4(uVar2,uVar3) != SBORROW4(uVar2 - uVar3,(uint)bVar21))) {
    puVar1 = puVar6;
    puVar10 = puVar12;
    puVar5 = puVar9;
  }
  if (bVar20 == bVar22) {
    puVar6 = puVar11;
  }
  else {
    puVar1 = puVar11;
  }
  uVar14 = puVar6[1];
  uVar2 = puVar1[1];
  uVar18 = *puVar5;
  uVar16 = puVar5[1];
  uVar15 = *puVar6;
  uVar17 = puVar6[3];
  uVar13 = *puVar1;
  param_3[0x12] = puVar6[2];
  uVar19 = (uint)((int)uVar16 >> 0x1f) >> 1 ^ uVar16;
  uVar3 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
  bVar20 = (((uint)((byte)((int)uVar16 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar16 >> 0x1f) >> 1) ^
           uVar18) < (((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f |
                      (uint)((int)uVar2 >> 0x1f) >> 1) ^ uVar13);
  puVar12 = param_3 + 0x10;
  *puVar12 = uVar15;
  if ((int)(uVar19 - (uVar3 + bVar20)) < 0 ==
      (SBORROW4(uVar19,uVar3) != SBORROW4(uVar19 - uVar3,(uint)bVar20))) {
    puVar6 = puVar5;
  }
  else {
    puVar6 = puVar1;
    puVar1 = puVar5;
  }
  uVar3 = *puVar1;
  uVar15 = puVar1[2];
  param_3[0x13] = uVar17;
  param_3[0x11] = uVar14;
  uVar13 = puVar1[1];
  uVar2 = puVar1[3];
  param_3[0x14] = uVar3;
  param_3[0x15] = uVar13;
  param_3[0x16] = uVar15;
  param_3[0x17] = uVar2;
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  uVar13 = puVar6[2];
  param_3[0x1b] = puVar6[3];
  param_3[0x18] = uVar2;
  param_3[0x19] = uVar3;
  param_3[0x1a] = uVar13;
  uVar3 = puVar10[2];
  uVar13 = puVar10[3];
  uVar2 = *puVar10;
  param_3[0x1d] = puVar10[1];
  param_3[0x1e] = uVar3;
  param_3[0x1f] = uVar13;
  uVar14 = param_3[0x11];
  puVar6 = param_3 + 0x1c;
  *puVar6 = uVar2;
  uVar2 = param_3[1];
  uVar3 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
  uVar13 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  bVar20 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           *puVar12) <
           (((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
           *param_3);
  bVar22 = SBORROW4(uVar13,uVar3) != SBORROW4(uVar13 - uVar3,(uint)bVar20);
  bVar20 = (int)(uVar13 - (uVar3 + bVar20)) < 0;
  uVar2 = (uint)(bVar20 != bVar22);
  puVar5 = param_3;
  if (uVar2 != 0) {
    puVar5 = puVar12;
  }
  uVar3 = *puVar5;
  uVar13 = puVar5[1];
  uVar14 = puVar5[2];
  param_2[3] = puVar5[3];
  *param_2 = uVar3;
  param_2[1] = uVar13;
  param_2[2] = uVar14;
  uVar13 = param_3[0xd];
  uVar14 = param_3[0x1d];
  uVar3 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  bVar21 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           *puVar6) <
           (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *puVar8);
  uVar13 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  bVar23 = SBORROW4(uVar3,uVar13) != SBORROW4(uVar3 - uVar13,(uint)bVar21);
  bVar21 = (int)(uVar3 - (uVar13 + bVar21)) < 0;
  puVar5 = puVar6;
  if (bVar21 != bVar23) {
    puVar5 = puVar8;
  }
  uVar3 = *puVar5;
  uVar13 = puVar5[1];
  uVar14 = puVar5[2];
  param_2[0x1f] = puVar5[3];
  param_2[0x1c] = uVar3;
  param_2[0x1d] = uVar13;
  param_2[0x1e] = uVar14;
  puVar12 = puVar12 + uVar2 * 4;
  param_3 = param_3 + (uint)(bVar20 == bVar22) * 4;
  uVar2 = puVar12[1];
  uVar13 = param_3[1];
  uVar3 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
  uVar14 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  bVar20 = (((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
           *puVar12) <
           (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *param_3);
  bVar22 = SBORROW4(uVar3,uVar14) != SBORROW4(uVar3 - uVar14,(uint)bVar20);
  bVar20 = (int)(uVar3 - (uVar14 + bVar20)) < 0;
  uVar2 = (uint)(bVar20 != bVar22);
  puVar5 = param_3;
  if (uVar2 != 0) {
    puVar5 = puVar12;
  }
  uVar3 = *puVar5;
  uVar13 = puVar5[1];
  uVar14 = puVar5[2];
  iVar7 = 0;
  if (bVar21 != bVar23) {
    iVar7 = -1;
  }
  iVar4 = 0;
  if (bVar21 == bVar23) {
    iVar4 = -1;
  }
  param_2[7] = puVar5[3];
  param_2[4] = uVar3;
  param_2[5] = uVar13;
  param_2[6] = uVar14;
  puVar8 = puVar8 + iVar7 * 4;
  puVar6 = puVar6 + iVar4 * 4;
  uVar13 = puVar8[1];
  uVar15 = puVar6[1];
  uVar14 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  uVar3 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
  bVar21 = (((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar15 >> 0x1f) >> 1) ^
           *puVar6) <
           (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *puVar8);
  bVar24 = SBORROW4(uVar3,uVar14) != SBORROW4(uVar3 - uVar14,(uint)bVar21);
  bVar23 = (int)(uVar3 - (uVar14 + bVar21)) < 0;
  bVar21 = bVar23 != bVar24;
  puVar5 = puVar6;
  if (bVar21) {
    puVar5 = puVar8;
  }
  uVar3 = *puVar5;
  uVar13 = puVar5[1];
  uVar14 = puVar5[2];
  param_2[0x1b] = puVar5[3];
  param_2[0x18] = uVar3;
  param_2[0x19] = uVar13;
  param_2[0x1a] = uVar14;
  param_3 = param_3 + (uint)(bVar20 == bVar22) * 4;
  puVar12 = puVar12 + uVar2 * 4;
  uVar3 = param_3[1];
  uVar14 = puVar12[1];
  uVar13 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
  uVar2 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  bVar20 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           *puVar12) <
           (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar3 >> 0x1f) >> 1) ^
           *param_3);
  bVar22 = SBORROW4(uVar2,uVar13) != SBORROW4(uVar2 - uVar13,(uint)bVar20);
  bVar20 = (int)(uVar2 - (uVar13 + bVar20)) < 0;
  uVar2 = (uint)(bVar20 != bVar22);
  puVar5 = param_3;
  if (uVar2 != 0) {
    puVar5 = puVar12;
  }
  uVar3 = *puVar5;
  uVar13 = puVar5[1];
  uVar14 = puVar5[2];
  iVar7 = 0;
  if (bVar23 == bVar24) {
    iVar7 = -1;
  }
  iVar4 = 0;
  if (bVar21) {
    iVar4 = -1;
  }
  param_2[0xb] = puVar5[3];
  param_2[8] = uVar3;
  param_2[9] = uVar13;
  param_2[10] = uVar14;
  puVar6 = puVar6 + iVar7 * 4;
  puVar8 = puVar8 + iVar4 * 4;
  uVar13 = puVar6[1];
  uVar15 = puVar8[1];
  uVar14 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  uVar3 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
  bVar21 = (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           *puVar6) <
           (((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar15 >> 0x1f) >> 1) ^
           *puVar8);
  bVar24 = SBORROW4(uVar14,uVar3) != SBORROW4(uVar14 - uVar3,(uint)bVar21);
  bVar23 = (int)(uVar14 - (uVar3 + bVar21)) < 0;
  bVar21 = bVar23 != bVar24;
  puVar5 = puVar6;
  if (bVar21) {
    puVar5 = puVar8;
  }
  uVar3 = *puVar5;
  uVar13 = puVar5[1];
  uVar14 = puVar5[2];
  param_2[0x17] = puVar5[3];
  param_2[0x14] = uVar3;
  param_2[0x15] = uVar13;
  param_2[0x16] = uVar14;
  param_3 = param_3 + (uint)(bVar20 == bVar22) * 4;
  puVar12 = puVar12 + uVar2 * 4;
  uVar3 = param_3[1];
  uVar14 = puVar12[1];
  uVar13 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
  uVar2 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  bVar20 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           *puVar12) <
           (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar3 >> 0x1f) >> 1) ^
           *param_3);
  bVar22 = SBORROW4(uVar2,uVar13) != SBORROW4(uVar2 - uVar13,(uint)bVar20);
  bVar20 = (int)(uVar2 - (uVar13 + bVar20)) < 0;
  uVar2 = (uint)(bVar20 != bVar22);
  puVar5 = param_3;
  if (uVar2 != 0) {
    puVar5 = puVar12;
  }
  uVar3 = *puVar5;
  uVar13 = puVar5[1];
  uVar14 = puVar5[2];
  iVar7 = 0;
  if (bVar23 == bVar24) {
    iVar7 = -1;
  }
  iVar4 = 0;
  if (bVar21) {
    iVar4 = -1;
  }
  param_2[0xf] = puVar5[3];
  param_2[0xc] = uVar3;
  param_2[0xd] = uVar13;
  param_2[0xe] = uVar14;
  puVar6 = puVar6 + iVar7 * 4;
  puVar8 = puVar8 + iVar4 * 4;
  uVar3 = puVar6[1];
  uVar14 = puVar8[1];
  uVar13 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
  uVar15 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
  bVar21 = (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar3 >> 0x1f) >> 1) ^
           *puVar6) <
           (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
           *puVar8);
  bVar23 = SBORROW4(uVar13,uVar15) != SBORROW4(uVar13 - uVar15,(uint)bVar21);
  bVar21 = (int)(uVar13 - (uVar15 + bVar21)) < 0;
  puVar5 = puVar6;
  if (bVar21 != bVar23) {
    puVar5 = puVar8;
  }
  uVar13 = *puVar5;
  uVar14 = puVar5[2];
  uVar3 = puVar5[3];
  param_2[0x11] = puVar5[1];
  param_2[0x13] = uVar3;
  param_2[0x10] = uVar13;
  iVar7 = 0;
  if (bVar21 == bVar23) {
    iVar7 = -1;
  }
  iVar4 = 0;
  if (bVar21 != bVar23) {
    iVar4 = -1;
  }
  param_3 = param_3 + (uint)(bVar20 == bVar22) * 4;
  param_2[0x12] = uVar14;
  puVar8 = puVar8 + iVar4 * 4 + 4;
  bVar20 = param_3 == puVar8;
  if (bVar20) {
    param_3 = puVar12 + uVar2 * 4;
    puVar8 = puVar6 + iVar7 * 4 + 4;
  }
  if (!bVar20 || param_3 != puVar8) {
    FUN_00fb7254();
  }
  return;
}

