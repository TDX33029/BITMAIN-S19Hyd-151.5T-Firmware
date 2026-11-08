// FUN_0170b0e8 @ 0170b0e8 size=2488 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_0170b0e8(uint *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint *local_74;
  uint local_70;
  
  uVar3 = *param_1;
  uVar24 = param_3[1] ^ param_1[1];
  param_3[1] = uVar24;
  uVar3 = *param_3 ^ uVar3;
  *param_3 = uVar3;
  uVar6 = param_3[2] ^ param_1[2];
  uVar4 = param_1[3];
  param_3[2] = uVar6;
  uVar4 = param_3[3] ^ uVar4;
  param_3[3] = uVar4;
  uVar1 = param_3[4] ^ param_1[4];
  uVar9 = param_1[5];
  param_3[4] = uVar1;
  uVar9 = param_3[5] ^ uVar9;
  param_3[5] = uVar9;
  uVar22 = param_3[6] ^ param_1[6];
  uVar10 = param_1[7];
  param_3[6] = uVar22;
  uVar10 = param_3[7] ^ uVar10;
  param_3[7] = uVar10;
  if (1 < param_2) {
    local_70 = 1;
    local_74 = param_1;
    do {
      uVar9 = uVar9 ^ uVar22;
      uVar16 = uVar10 ^ uVar24;
      local_70 = local_70 + 1;
      uVar11 = uVar9 ^ uVar3;
      uVar23 = uVar1 ^ uVar6;
      uVar24 = uVar11 ^ uVar24;
      uVar25 = uVar23 ^ uVar16;
      uVar19 = uVar10 ^ uVar1;
      uVar22 = uVar22 ^ uVar4 ^ uVar25;
      uVar4 = uVar4 ^ uVar25 ^ uVar6;
      uVar26 = uVar19 ^ uVar22;
      uVar6 = uVar10 ^ uVar6;
      uVar20 = uVar9 ^ uVar4;
      uVar9 = uVar9 ^ uVar26;
      uVar2 = uVar23 & (uVar20 ^ uVar26) ^ uVar19 & uVar26;
      uVar5 = uVar11 & uVar24 ^ uVar16 ^ uVar9 ^ uVar16 & uVar9 ^ uVar2;
      uVar2 = (uVar6 ^ uVar24) & (uVar4 ^ uVar3) ^ uVar22 ^ uVar25 & uVar4 ^ uVar2;
      uVar22 = uVar6 & uVar20 ^ uVar19 & uVar26;
      uVar12 = (uVar11 ^ uVar1) & uVar3 ^ uVar6 ^ uVar20 ^ uVar25 & uVar4 ^ uVar22;
      uVar22 = uVar10 ^ uVar9 ^ uVar16 & uVar9 ^ (uVar11 ^ uVar10) & (uVar26 ^ uVar3) ^ uVar22;
      uVar7 = uVar2 & uVar5;
      uVar17 = (uVar5 ^ uVar22) & (uVar12 ^ uVar7);
      uVar18 = uVar17 ^ uVar22;
      uVar2 = uVar2 ^ uVar12;
      uVar8 = (uVar7 ^ uVar17) & uVar22;
      uVar17 = uVar5 ^ uVar18 ^ uVar8;
      uVar12 = (uVar22 ^ uVar7) & uVar2 ^ uVar12;
      uVar13 = (uVar6 ^ uVar24) & uVar17;
      uVar14 = (uVar26 ^ uVar3) & uVar12;
      uVar2 = (uVar8 ^ uVar22 ^ uVar7) & uVar12 ^ uVar2;
      uVar21 = uVar17 ^ uVar2;
      uVar22 = uVar12 ^ uVar18;
      uVar15 = uVar24 & uVar2 ^ uVar14;
      uVar9 = uVar9 & (uVar2 ^ uVar12);
      uVar16 = (uVar2 ^ uVar12) & uVar16;
      uVar5 = uVar4 & (uVar17 ^ uVar18) ^ uVar9;
      uVar23 = uVar23 & (uVar22 ^ uVar21);
      uVar24 = (uVar22 ^ uVar21) & (uVar20 ^ uVar26);
      uVar7 = uVar26 & uVar22 ^ uVar9 ^ uVar24;
      uVar9 = uVar19 & uVar22 ^ uVar23;
      uVar26 = uVar3 & uVar18 ^ uVar16 ^ uVar5;
      uVar8 = uVar9 ^ uVar11 & uVar2;
      uVar22 = uVar11 & uVar2 ^ uVar7;
      uVar19 = uVar13 ^ (uVar17 ^ uVar18) & uVar25 ^ uVar8;
      uVar8 = uVar8 ^ uVar20 & uVar21 ^ uVar24;
      uVar7 = uVar7 ^ uVar19;
      uVar19 = (uVar4 ^ uVar3) & uVar17 ^ uVar19;
      uVar5 = uVar5 ^ uVar19;
      uVar19 = uVar3 & uVar18 ^ uVar14 ^ uVar19;
      uVar14 = (uVar11 ^ uVar10) & uVar12 ^ uVar26 ^ uVar8;
      uVar8 = uVar16 ^ uVar15 ^ uVar8;
      uVar15 = uVar26 ^ uVar9 ^ uVar15;
      uVar20 = (uVar11 ^ uVar1) & uVar18 ^ uVar13 ^ uVar14;
      uVar12 = uVar22 ^ uVar5;
      uVar14 = uVar6 & uVar21 ^ uVar23 ^ uVar22 ^ uVar14;
      uVar17 = (uVar7 & 0x30303030) >> 0x10 | (uVar7 & 0x30303030) << 0x10 |
               (uVar7 & 0xc0c0c0c) >> 8 | (uVar7 & 0xc0c0c0c) << 0x18;
      uVar25 = (~uVar15 & 0x30303030) >> 0x10 | (~uVar15 & 0x30303030) << 0x10 |
               (~uVar15 & 0xc0c0c0c) >> 8 | (~uVar15 & 0xc0c0c0c) << 0x18;
      uVar16 = (~uVar8 & 0x30303030) >> 0x10 | (~uVar8 & 0x30303030) << 0x10 |
               (~uVar8 & 0xc0c0c0c) >> 8 | (~uVar8 & 0xc0c0c0c) << 0x18;
      uVar26 = (uVar20 & 0x30303030) >> 0x10 | (uVar20 & 0x30303030) << 0x10 |
               (uVar20 & 0xc0c0c0c) >> 8 | (uVar20 & 0xc0c0c0c) << 0x18;
      uVar21 = (uVar19 & 0x30303030) >> 0x10 | (uVar19 & 0x30303030) << 0x10 |
               (uVar19 & 0xc0c0c0c) >> 8 | (uVar19 & 0xc0c0c0c) << 0x18;
      uVar23 = (uVar5 & 0x30303030) >> 0x10 | (uVar5 & 0x30303030) << 0x10 |
               (uVar5 & 0xc0c0c0c) >> 8 | (uVar5 & 0xc0c0c0c) << 0x18;
      uVar13 = (~uVar14 & 0x30303030) >> 0x10 | (~uVar14 & 0x30303030) << 0x10 |
               (~uVar14 & 0xc0c0c0c) >> 8 | (~uVar14 & 0xc0c0c0c) << 0x18;
      uVar11 = (~uVar12 & 0x30303030) >> 0x10 | (~uVar12 & 0x30303030) << 0x10 |
               (~uVar12 & 0xc0c0c0c) >> 8 | (~uVar12 & 0xc0c0c0c) << 0x18;
      uVar1 = (uVar7 & 0xc0c0c0c0) >> 0x18 | (uVar7 & 0xc0c0c0c0) << 8;
      uVar22 = (~uVar15 & 0xc0c0c0c0) >> 0x18 | (~uVar15 & 0xc0c0c0c0) << 8;
      uVar4 = (~uVar8 & 0xc0c0c0c0) >> 0x18 | (~uVar8 & 0xc0c0c0c0) << 8;
      uVar6 = (uVar20 & 0xc0c0c0c0) >> 0x18 | (uVar20 & 0xc0c0c0c0) << 8;
      uVar3 = (uVar19 & 0xc0c0c0c0) >> 0x18 | (uVar19 & 0xc0c0c0c0) << 8;
      uVar9 = (uVar5 & 0xc0c0c0c0) >> 0x18 | (uVar5 & 0xc0c0c0c0) << 8;
      uVar24 = (~uVar14 & 0xc0c0c0c0) >> 0x18 | (~uVar14 & 0xc0c0c0c0) << 8;
      uVar2 = (~uVar12 & 0xc0c0c0c0) >> 0x18 | (~uVar12 & 0xc0c0c0c0) << 8;
      uVar10 = (uVar17 | uVar1) >> 2 | (uVar7 & 0x3030303) << 6;
      uVar17 = (uVar17 | uVar7 & 0x3030303 | uVar1) ^ uVar10;
      uVar18 = (uVar25 | uVar22) >> 2 | (~uVar15 & 0x3030303) << 6;
      uVar25 = (uVar25 | ~uVar15 & 0x3030303 | uVar22) ^ uVar18;
      uVar15 = (uVar16 | uVar4) >> 2 | (~uVar8 & 0x3030303) << 6;
      uVar4 = (uVar16 | ~uVar8 & 0x3030303 | uVar4) ^ uVar15;
      uVar8 = (uVar26 | uVar6) >> 2 | (uVar20 & 0x3030303) << 6;
      uVar1 = (uVar26 | uVar20 & 0x3030303 | uVar6) ^ uVar8;
      uVar16 = (uVar21 | uVar3) >> 2 | (uVar19 & 0x3030303) << 6;
      uVar21 = (uVar21 | uVar19 & 0x3030303 | uVar3) ^ uVar16;
      uVar20 = (uVar23 | uVar9) >> 2 | (uVar5 & 0x3030303) << 6;
      uVar19 = uVar20 ^ (uVar23 | uVar5 & 0x3030303 | uVar9);
      uVar9 = (uVar13 | uVar24) >> 2 | (~uVar14 & 0x3030303) << 6;
      uVar5 = (uVar13 | ~uVar14 & 0x3030303 | uVar24) ^ uVar9;
      uVar7 = (uVar11 | uVar2) >> 2 | (~uVar12 & 0x3030303) << 6;
      uVar22 = (uVar11 | ~uVar12 & 0x3030303 | uVar2) ^ uVar7;
      uVar10 = (uVar17 >> 4 & 0xf0f0f0f | (uVar17 & 0xf0f0f0f) << 4) ^ uVar22 ^ uVar10;
      param_3[7] = uVar10;
      uVar3 = (uVar25 >> 4 & 0xf0f0f0f | (uVar25 & 0xf0f0f0f) << 4) ^ uVar18 ^ uVar17;
      *param_3 = uVar3;
      uVar24 = (uVar4 >> 4 & 0xf0f0f0f | (uVar4 & 0xf0f0f0f) << 4) ^ uVar15 ^ uVar25 ^ uVar17;
      param_3[1] = uVar24;
      uVar6 = (uVar1 >> 4 & 0xf0f0f0f | (uVar1 & 0xf0f0f0f) << 4) ^ uVar4 ^ uVar8;
      param_3[2] = uVar6;
      uVar4 = (uVar21 >> 4 & 0xf0f0f0f | (uVar21 & 0xf0f0f0f) << 4) ^ uVar16 ^ uVar17 ^ uVar1;
      param_3[3] = uVar4;
      uVar1 = (uVar19 >> 4 & 0xf0f0f0f | (uVar19 & 0xf0f0f0f) << 4) ^ uVar20 ^ uVar17 ^ uVar21;
      param_3[4] = uVar1;
      uVar9 = (uVar5 >> 4 & 0xf0f0f0f | (uVar5 & 0xf0f0f0f) << 4) ^ uVar19 ^ uVar9;
      param_3[5] = uVar9;
      uVar22 = (uVar22 >> 4 & 0xf0f0f0f | (uVar22 & 0xf0f0f0f) << 4) ^ uVar5 ^ uVar7;
      param_3[6] = uVar22;
      uVar3 = uVar3 ^ local_74[8];
      *param_3 = uVar3;
      uVar24 = local_74[9] ^ uVar24;
      param_3[1] = uVar24;
      uVar6 = uVar6 ^ local_74[10];
      param_3[2] = uVar6;
      uVar4 = local_74[0xb] ^ uVar4;
      param_3[3] = uVar4;
      uVar1 = uVar1 ^ local_74[0xc];
      param_3[4] = uVar1;
      uVar9 = local_74[0xd] ^ uVar9;
      param_3[5] = uVar9;
      uVar22 = local_74[0xe] ^ uVar22;
      param_3[6] = uVar22;
      uVar10 = local_74[0xf] ^ uVar10;
      param_3[7] = uVar10;
      local_74 = local_74 + 8;
    } while (param_2 != local_70);
  }
  FUN_016f1b50(param_3);
  uVar10 = *param_3;
  uVar1 = param_3[7];
  uVar3 = param_3[5];
  uVar24 = param_3[4];
  uVar9 = param_3[6];
  uVar4 = param_3[1];
  uVar2 = param_3[2];
  uVar6 = param_3[3];
  uVar22 = (uVar10 & 0xc0c0c0c) >> 8 | (uVar10 & 0xc0c0c0c) << 0x18 |
           (uVar10 & 0x30303030) >> 0x10 | (uVar10 & 0x30303030) << 0x10 | uVar10 & 0x3030303 |
           (uVar10 & 0xc0c0c0c0) >> 0x18 | (uVar10 & 0xc0c0c0c0) << 8;
  *param_3 = uVar22;
  uVar4 = (uVar4 & 0xc0c0c0c) >> 8 | (uVar4 & 0xc0c0c0c) << 0x18 |
          (uVar4 & 0x30303030) >> 0x10 | (uVar4 & 0x30303030) << 0x10 | uVar4 & 0x3030303 |
          (uVar4 & 0xc0c0c0c0) >> 0x18 | (uVar4 & 0xc0c0c0c0) << 8;
  uVar2 = (uVar2 & 0xc0c0c0c) >> 8 | (uVar2 & 0xc0c0c0c) << 0x18 |
          (uVar2 & 0x30303030) >> 0x10 | (uVar2 & 0x30303030) << 0x10 | uVar2 & 0x3030303 |
          (uVar2 & 0xc0c0c0c0) >> 0x18 | (uVar2 & 0xc0c0c0c0) << 8;
  param_3[1] = uVar4;
  param_3[2] = uVar2;
  uVar6 = (uVar6 & 0xc0c0c0c) >> 8 | (uVar6 & 0xc0c0c0c) << 0x18 |
          (uVar6 & 0x30303030) >> 0x10 | (uVar6 & 0x30303030) << 0x10 | uVar6 & 0x3030303 |
          (uVar6 & 0xc0c0c0c0) >> 0x18 | (uVar6 & 0xc0c0c0c0) << 8;
  param_3[3] = uVar6;
  uVar10 = (uVar24 & 0xc0c0c0c) >> 8 | (uVar24 & 0xc0c0c0c) << 0x18 |
           (uVar24 & 0x30303030) >> 0x10 | (uVar24 & 0x30303030) << 0x10 | uVar24 & 0x3030303 |
           (uVar24 & 0xc0c0c0c0) >> 0x18 | (uVar24 & 0xc0c0c0c0) << 8;
  param_3[4] = uVar10;
  uVar3 = (uVar3 & 0xc0c0c0c) >> 8 | (uVar3 & 0xc0c0c0c) << 0x18 |
          (uVar3 & 0x30303030) >> 0x10 | (uVar3 & 0x30303030) << 0x10 | uVar3 & 0x3030303 |
          (uVar3 & 0xc0c0c0c0) >> 0x18 | (uVar3 & 0xc0c0c0c0) << 8;
  param_3[5] = uVar3;
  uVar9 = (uVar9 & 0xc0c0c0c) >> 8 | (uVar9 & 0xc0c0c0c) << 0x18 |
          (uVar9 & 0x30303030) >> 0x10 | (uVar9 & 0x30303030) << 0x10 | uVar9 & 0x3030303 |
          (uVar9 & 0xc0c0c0c0) >> 0x18 | (uVar9 & 0xc0c0c0c0) << 8;
  param_3[6] = uVar9;
  uVar24 = (uVar1 & 0x30303030) >> 0x10 | (uVar1 & 0x30303030) << 0x10 |
           (uVar1 & 0xc0c0c0c) >> 8 | (uVar1 & 0xc0c0c0c) << 0x18 | uVar1 & 0x3030303 |
           (uVar1 & 0xc0c0c0c0) >> 0x18 | (uVar1 & 0xc0c0c0c0) << 8;
  param_3[7] = uVar24;
  uVar1 = param_1[param_2 * 8 + 1];
  *param_3 = uVar22 ^ param_1[param_2 * 8];
  param_3[1] = uVar4 ^ uVar1;
  uVar1 = param_1[param_2 * 8 + 3];
  param_3[2] = param_1[param_2 * 8 + 2] ^ uVar2;
  param_3[3] = uVar1 ^ uVar6;
  uVar1 = param_1[param_2 * 8 + 5];
  param_3[4] = param_1[param_2 * 8 + 4] ^ uVar10;
  param_3[5] = uVar1 ^ uVar3;
  uVar1 = param_1[param_2 * 8 + 7];
  param_3[6] = param_1[param_2 * 8 + 6] ^ uVar9;
  param_3[7] = uVar1 ^ uVar24;
  return 0;
}

