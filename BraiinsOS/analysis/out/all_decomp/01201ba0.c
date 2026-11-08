// FUN_01201ba0 @ 01201ba0 size=3388 calls_out=22 calls_in=0
// strings: $ref~! | a Display implementation returned an error unexpectedly

void FUN_01201ba0(undefined4 *param_1,undefined4 *param_2,char *param_3,undefined4 param_4,
                 int param_5,undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined8 uVar37;
  int local_188;
  int local_184;
  int local_180;
  uint local_178;
  int local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_138;
  int local_134;
  int local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  uint local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  uint local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  if (*param_3 != '\x05') {
    param_1[2] = 4;
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar29 = *(undefined4 *)(param_3 + 0xc);
  puVar5 = (undefined4 *)FUN_011e4c9c();
  uVar20 = *puVar5;
  iVar23 = puVar5[1];
  puVar6 = (uint *)FUN_011e4df8();
  uVar7 = (**(code **)(iVar23 + 0xc))(uVar20);
  uVar8 = puVar6[10];
  uVar9 = puVar6[0xb];
  uVar10 = puVar6[0xc];
  uVar11 = puVar6[0xd];
  uVar12 = *puVar6;
  uVar13 = puVar6[1];
  uVar34 = puVar6[8];
  uVar35 = puVar6[9];
  uVar21 = puVar6[0xe];
  uVar32 = puVar6[0xf];
  uVar24 = puVar6[2];
  uVar31 = puVar6[3];
  FUN_011a5370(&local_a8,4,4,uVar29);
  local_178 = local_a8;
  local_174 = local_a4;
  uStack_170 = local_a0;
  uStack_16c = local_9c;
  uVar14 = uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
           uVar31 >> 0x18;
  lVar3 = (ulonglong)uVar14 * 0xb36a80d2;
  uVar19 = (uint)lVar3;
  uVar24 = uVar24 ^ uVar7;
  uVar7 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
          uVar24 >> 0x18) * -0x4c957f2e + uVar14 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
  uVar15 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ (uint)((ulonglong)uVar24 * 0x2df45158);
  uVar7 = uVar15 ^ uVar21;
  uVar24 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) ^
           uVar31 * 0x2df45158 + uVar24 * 0x2d7f954c + (int)((ulonglong)uVar24 * 0x2df45158 >> 0x20)
  ;
  uVar19 = uVar24 ^ uVar32;
  uVar14 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18;
  lVar3 = (ulonglong)uVar14 * 0xb36a80d2;
  uVar31 = (uint)lVar3;
  uVar33 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18;
  uVar14 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) * -0x4c957f2e + uVar14 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
  uVar19 = uVar19 * 0x2df45158 + uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20) ^
           (uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
           uVar31 >> 0x18) ^ uVar35;
  uVar31 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18;
  lVar3 = (ulonglong)uVar31 * 0xb36a80d2;
  uVar36 = (uint)lVar3;
  uVar7 = (uint)((ulonglong)uVar7 * 0x2df45158) ^
          (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18) ^ uVar34;
  uVar14 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) * -0x4c957f2e + uVar31 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
  uVar30 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) ^ (uint)((ulonglong)uVar7 * 0x2df45158);
  uVar31 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18;
  uVar7 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
          uVar36 >> 0x18) ^
          uVar19 * 0x2df45158 + uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
  uVar12 = ~uVar12;
  uVar14 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
  ;
  lVar3 = (ulonglong)uVar12 * (ulonglong)uVar14;
  uVar19 = (uint)lVar3;
  uVar7 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
          uVar19 >> 0x18) ^
          uVar7 * uVar33 + uVar30 * uVar31 + (int)((ulonglong)uVar33 * (ulonglong)uVar30 >> 0x20);
  uVar13 = ~uVar13;
  uVar14 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
           uVar30 >> 0x18) * uVar12 + uVar14 * uVar13 + (int)((ulonglong)lVar3 >> 0x20);
  uVar19 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) ^ (uint)((ulonglong)uVar33 * (ulonglong)uVar30);
  uVar14 = uVar19;
  if ((uVar30 & 0x20) != 0) {
    uVar14 = uVar7;
    uVar7 = uVar19;
  }
  local_150 = uVar14 << (uVar30 & 0x1f) | (uVar7 >> 1) >> (~uVar30 & 0x1f);
  uVar19 = uVar15 ^ uVar10;
  uVar25 = uVar24 ^ uVar11;
  uVar26 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18;
  lVar3 = (ulonglong)uVar26 * 0xb36a80d2;
  uVar36 = (uint)lVar3;
  uVar28 = uVar25 * 0x2df45158 + uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20)
           ^ (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18) ^ uVar9;
  uVar22 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
           uVar28 >> 0x18;
  lVar4 = (ulonglong)uVar22 * 0xb36a80d2;
  uVar25 = (uint)lVar4;
  uVar36 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) * -0x4c957f2e + uVar26 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
  uVar19 = (uint)((ulonglong)uVar19 * 0x2df45158) ^
           (uVar36 * 0x1000000 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
           uVar36 >> 0x18) ^ uVar8;
  uVar36 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) * -0x4c957f2e + uVar22 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
  uVar22 = (uVar36 * 0x1000000 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
           uVar36 >> 0x18) ^ (uint)((ulonglong)uVar19 * 0x2df45158);
  uVar19 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18) ^
           uVar28 * 0x2df45158 + uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20)
  ;
  uVar36 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18;
  lVar3 = (ulonglong)uVar12 * (ulonglong)uVar36;
  uVar25 = (uint)lVar3;
  uVar36 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
           uVar22 >> 0x18) * uVar12 + uVar36 * uVar13 + (int)((ulonglong)lVar3 >> 0x20);
  uVar19 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18) ^
           uVar19 * uVar33 + uVar22 * uVar31 + (int)((ulonglong)uVar33 * (ulonglong)uVar22 >> 0x20);
  uVar25 = (uVar36 * 0x1000000 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
           uVar36 >> 0x18) ^ (uint)((ulonglong)uVar33 * (ulonglong)uVar22);
  uVar36 = uVar25;
  if ((uVar22 & 0x20) != 0) {
    uVar36 = uVar19;
    uVar19 = uVar25;
  }
  uVar9 = uVar24 ^ uVar9;
  local_158 = uVar36 << (uVar22 & 0x1f) | (uVar19 >> 1) >> (~uVar22 & 0x1f);
  uVar8 = uVar15 ^ uVar8;
  uVar25 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
  ;
  lVar3 = (ulonglong)uVar25 * 0xb36a80d2;
  uVar26 = (uint)lVar3;
  uVar32 = uVar9 * 0x2df45158 + uVar8 * 0x2d7f954c + (int)((ulonglong)uVar8 * 0x2df45158 >> 0x20) ^
           (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
           uVar26 >> 0x18) ^ uVar32;
  uVar26 = uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
           uVar32 >> 0x18;
  lVar4 = (ulonglong)uVar26 * 0xb36a80d2;
  uVar28 = (uint)lVar4;
  uVar9 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) * -0x4c957f2e + uVar25 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
  uVar21 = (uint)((ulonglong)uVar8 * 0x2df45158) ^
           (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) ^ uVar21;
  uVar9 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
          uVar21 >> 0x18) * -0x4c957f2e + uVar26 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
  uVar25 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) ^ (uint)((ulonglong)uVar21 * 0x2df45158);
  uVar9 = (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
          uVar28 >> 0x18) ^
          uVar32 * 0x2df45158 + uVar21 * 0x2d7f954c + (int)((ulonglong)uVar21 * 0x2df45158 >> 0x20);
  uVar8 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18;
  lVar3 = (ulonglong)uVar12 * (ulonglong)uVar8;
  uVar21 = (uint)lVar3;
  uVar9 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
          uVar21 >> 0x18) ^
          uVar9 * uVar33 + uVar25 * uVar31 + (int)((ulonglong)uVar33 * (ulonglong)uVar25 >> 0x20);
  uVar8 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
          uVar25 >> 0x18) * uVar12 + uVar8 * uVar13 + (int)((ulonglong)lVar3 >> 0x20);
  uVar21 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^ (uint)((ulonglong)uVar33 * (ulonglong)uVar25);
  uVar8 = uVar21;
  if ((uVar25 & 0x20) != 0) {
    uVar8 = uVar9;
    uVar9 = uVar21;
  }
  local_160 = uVar8 << (uVar25 & 0x1f) | (uVar9 >> 1) >> (~uVar25 & 0x1f);
  uVar15 = uVar15 ^ uVar34;
  uVar24 = uVar24 ^ uVar35;
  uVar21 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18;
  lVar3 = (ulonglong)uVar21 * 0xb36a80d2;
  uVar32 = (uint)lVar3;
  uVar11 = uVar24 * 0x2df45158 + uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20)
           ^ (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
             uVar32 >> 0x18) ^ uVar11;
  uVar21 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) * -0x4c957f2e + uVar21 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
  uVar24 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18;
  lVar3 = (ulonglong)uVar24 * 0xb36a80d2;
  uVar32 = (uint)lVar3;
  uVar10 = (uint)((ulonglong)uVar15 * 0x2df45158) ^
           (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) ^ uVar10;
  uVar15 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) * -0x4c957f2e + uVar24 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
  uVar21 = (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) ^ (uint)((ulonglong)uVar10 * 0x2df45158);
  uVar11 = (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
           uVar32 >> 0x18) ^
           uVar11 * 0x2df45158 + uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20)
  ;
  uVar15 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18;
  lVar3 = (ulonglong)uVar12 * (ulonglong)uVar15;
  uVar10 = (uint)lVar3;
  uVar11 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) ^
           uVar11 * uVar33 + uVar21 * uVar31 + (int)((ulonglong)uVar33 * (ulonglong)uVar21 >> 0x20);
  uVar12 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) * uVar12 + uVar15 * uVar13 + (int)((ulonglong)lVar3 >> 0x20);
  uVar13 = (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) ^ (uint)((ulonglong)uVar33 * (ulonglong)uVar21);
  uVar12 = uVar13;
  if ((uVar21 & 0x20) != 0) {
    uVar12 = uVar11;
    uVar11 = uVar13;
  }
  local_168 = uVar12 << (uVar21 & 0x1f) | (uVar11 >> 1) >> (~uVar21 & 0x1f);
  local_164 = uVar11 << (uVar21 & 0x1f) | (uVar12 >> 1) >> (~uVar21 & 0x1f);
  local_14c = uVar7 << (uVar30 & 0x1f) | (uVar14 >> 1) >> (~uVar30 & 0x1f);
  local_154 = uVar19 << (uVar22 & 0x1f) | (uVar36 >> 1) >> (~uVar22 & 0x1f);
  local_15c = uVar9 << (uVar25 & 0x1f) | (uVar8 >> 1) >> (~uVar25 & 0x1f);
  FUN_01202da8(param_2 + 2,param_3,&local_178,param_6,0);
  local_a0 = *(int *)(param_3 + 4);
  local_9c = *(undefined4 *)(param_3 + 8);
  local_144 = 4;
  local_134 = 4;
  if (local_a0 == 0) {
    uVar29 = 0;
  }
  local_a8 = (uint)(local_a0 != 0);
  local_140 = 0;
  local_148 = 0;
  local_130 = 0;
  local_138 = 0;
  local_94 = 0;
  local_a4 = 0;
  local_98 = local_a8;
  local_90._0_4_ = local_a0;
  local_90._4_4_ = local_9c;
  local_88 = uVar29;
  if (param_2[0x13] == 0) {
    bVar2 = false;
    iVar23 = 4;
    local_180 = 0;
    while (iVar16 = FUN_00f45584(&local_a8), iVar16 != 0) {
      uVar29 = *(undefined4 *)(iVar16 + 4);
      iVar27 = *(int *)(iVar16 + 8);
      iVar16 = FUN_012246f4(&local_178,uVar29,iVar27);
      if (iVar16 == 0) {
        if (iVar27 == 0) {
          iVar16 = 1;
        }
        else {
          iVar16 = thunk_FUN_016d4a50(iVar27);
          if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar27);
          }
        }
        FUN_016dd1aa(iVar16,uVar29,iVar27);
        if (local_180 == local_138) {
          FUN_015f37b0(&local_138);
          iVar23 = local_134;
        }
        local_130 = local_180 + 1;
        piVar18 = (int *)(iVar23 + local_180 * 0xc);
        *piVar18 = iVar27;
        bVar2 = true;
        piVar18[1] = iVar16;
        piVar18[2] = iVar27;
        local_180 = local_130;
      }
    }
  }
  else {
    local_184 = 0;
    local_188 = 4;
    local_180 = 0;
    bVar2 = false;
    while( true ) {
      uVar37 = FUN_00f45584(&local_a8);
      iVar23 = (int)uVar37;
      if (iVar23 == 0) break;
      uVar29 = *(undefined4 *)(iVar23 + 4);
      uVar20 = *(undefined4 *)(iVar23 + 8);
      iVar16 = FUN_012246f4(&local_178,uVar29,uVar20);
      if (iVar16 == 0) {
        local_d8 = 0x80000000;
        local_d4 = uVar29;
        local_d0 = uVar20;
        local_cc = param_4;
        FUN_011c9534(&local_128,param_2 + 0x13,(int)((ulonglong)uVar37 >> 0x20),&local_d8,param_5,
                     param_6);
        if ((char)local_ec == '\0') {
          iVar16 = *(int *)(iVar23 + 8);
          uVar29 = *(undefined4 *)(iVar23 + 4);
          if (iVar16 == 0) {
            iVar23 = 1;
          }
          else {
            iVar23 = thunk_FUN_016d4a50(iVar16);
            if (iVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar16);
            }
          }
          FUN_016dd1aa(iVar23,uVar29,iVar16);
          if (local_180 == local_138) {
            FUN_015f37b0(&local_138);
            local_188 = local_134;
          }
          local_130 = local_180 + 1;
          piVar18 = (int *)(local_188 + local_180 * 0xc);
          *piVar18 = iVar16;
          piVar18[1] = iVar23;
          piVar18[2] = iVar16;
          bVar2 = true;
          local_184 = local_140;
          local_180 = local_130;
        }
        else {
        }
        if (local_184 == local_148) {
          FUN_011ca644(&local_148);
        }
        puVar5 = (undefined4 *)(local_144 + local_184 * 0x40);
        local_184 = local_184 + 1;
        *puVar5 = local_128;
        puVar5[1] = uStack_124;
        puVar5[2] = uStack_120;
        puVar5[3] = uStack_11c;
        puVar5[4] = uStack_118;
        puVar5[5] = local_114;
        puVar5[6] = uStack_110;
        puVar5[7] = uStack_10c;
        puVar5[8] = uStack_108;
        puVar5[9] = uStack_104;
        puVar5[10] = local_100;
        puVar5[0xb] = uStack_fc;
        puVar5[0xc] = uStack_f8;
        puVar5[0xd] = uStack_f4;
        puVar5[0xe] = uStack_f0;
        puVar5[0xf] = local_ec;
        local_140 = local_184;
      }
    }
  }
  iVar23 = 0;
  local_e0 = 0;
  local_e4 = 4;
  local_e8 = 0;
  if (local_180 == 0) {
    iVar16 = local_144;
    if (bVar2) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      param_1[3] = local_148;
      param_1[4] = local_144;
      param_1[5] = local_140;
      param_1[6] = 0;
    }
    else {
      puVar5 = (undefined4 *)&DAT_00000014;
      *param_1 = 0x80000000;
      param_1[1] = local_148;
      param_1[2] = local_144;
      param_1[3] = local_140;
      param_1[4] = 0;
      for (; iVar23 != 0; iVar23 = iVar23 + -1) {
        if (puVar5[-4] != 0) {
          thunk_FUN_016d3fb4(puVar5[-3]);
          iVar16 = extraout_r1;
        }
        if (puVar5[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar5);
          iVar16 = extraout_r1_00;
        }
        puVar5 = puVar5 + 6;
      }
      if (local_e8 != 0) {
        thunk_FUN_016d3fb4(4);
        iVar16 = extraout_r1_01;
      }
    }
    iVar23 = local_134;
    puVar5 = (undefined4 *)(local_134 + 4);
    for (iVar27 = local_130; iVar27 != 0; iVar27 = iVar27 + -1) {
      if (puVar5[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar5);
        iVar16 = extraout_r1_02;
      }
      puVar5 = puVar5 + 3;
    }
    if (local_138 != 0) {
      thunk_FUN_016d3fb4(iVar23);
      iVar16 = extraout_r1_03;
    }
    if (local_174 != 0) {
      iVar16 = local_174 * 5;
    }
    if (!(local_174 != 0 && iVar16 != -9)) {
      return;
    }
    thunk_FUN_016d3fb4(local_178 + local_174 * -4 + -4);
    return;
  }
  piVar18 = (int *)*param_2;
  uVar7 = param_2[1];
  do {
    iVar23 = *piVar18;
    bVar2 = (bool)hasExclusiveAccess(piVar18);
  } while (!bVar2);
  *piVar18 = iVar23 + 1;
  if (iVar23 < 0) {
LAB_01202b4c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1202b4c);
    (*pcVar1)();
  }
  if (param_5 == 0) {
    local_d8 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_5 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
    }
    piVar17 = *(int **)(param_5 + 0xc);
    do {
      iVar23 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = iVar23 + 1;
    if (iVar23 < 0) goto LAB_01202b4c;
    uVar29 = *(undefined4 *)(param_5 + 0xc);
    uVar20 = *(undefined4 *)(param_5 + 0x10);
    uVar14 = 0;
    uVar9 = (*(int **)(param_5 + 4))[1];
    if (uVar9 <= uVar7) {
      iVar23 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar18 + 2,uVar9);
      uVar14 = uVar9;
      if (iVar23 != 0) {
        uVar14 = 0;
      }
    }
    local_c0 = FUN_011e1508((int)(piVar18 + 2) + uVar14,uVar7 - uVar14);
    local_cc = 3;
    local_d8 = 2;
    local_c8 = uVar29;
    local_c4 = uVar20;
  }
  local_38 = FUN_01238114(param_4);
  local_88 = 0x8000002a;
  local_84 = local_138;
  iStack_80 = local_134;
  iStack_7c = local_130;
  local_50 = 6;
  local_a8 = local_d8;
  local_a4 = local_d4;
  local_a0 = local_d0;
  local_9c = local_cc;
  local_98 = local_c8;
  local_94 = local_c4;
  local_4c = param_3;
  local_30 = piVar18;
  local_2c = uVar7;
  local_90 = local_c0;
  iVar23 = thunk_FUN_016d4a50(0x80);
  if (iVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar23,&local_a8,0x80);
  iVar16 = 0x22;
  if (0x80000009 < *(uint *)(iVar23 + 0x20)) {
    iVar16 = *(uint *)(iVar23 + 0x20) + 0x7ffffff6;
  }
                    /* WARNING: Could not recover jumptable at 0x0120264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  local_dc = iVar23;
  (*(code *)(&DAT_01202650 + *(int *)(&DAT_01202650 + iVar16 * 4)))();
  return;
}

