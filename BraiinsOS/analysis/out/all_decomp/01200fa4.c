// FUN_01200fa4 @ 01200fa4 size=2764 calls_out=16 calls_in=1
// strings: 

int FUN_01200fa4(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5
                )

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
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
  int iVar19;
  int iVar20;
  int *piVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  undefined4 *puVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  undefined8 uVar39;
  int local_10c;
  uint local_108;
  int local_104;
  int iStack_100;
  int local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  uint local_c8;
  int iStack_c4;
  int iStack_c0;
  int local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  uint local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  undefined4 local_94;
  undefined8 local_90;
  int local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  iVar5 = 0;
  if (*param_2 == '\x05') {
    iVar36 = *(int *)(param_2 + 0xc);
    puVar6 = (undefined4 *)FUN_011e4c9c();
    uVar26 = *puVar6;
    iVar5 = puVar6[1];
    puVar7 = (uint *)FUN_011e4df8();
    uVar8 = (**(code **)(iVar5 + 0xc))(uVar26);
    uVar9 = puVar7[8];
    uVar10 = puVar7[9];
    uVar11 = puVar7[10];
    uVar12 = puVar7[0xb];
    uVar13 = puVar7[0xc];
    uVar14 = puVar7[0xd];
    uVar15 = puVar7[0xf];
    uVar16 = *puVar7;
    uVar17 = puVar7[1];
    uVar35 = puVar7[0xe];
    uVar28 = puVar7[2];
    uVar33 = puVar7[3];
    FUN_011a5370(&local_a8,4,4,iVar36);
    local_108 = local_a8;
    local_104 = local_a4;
    iStack_100 = local_a0;
    local_fc = local_9c;
    uVar22 = uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
             uVar33 >> 0x18;
    lVar3 = (ulonglong)uVar22 * 0xb36a80d2;
    uVar24 = (uint)lVar3;
    uVar28 = uVar28 ^ uVar8;
    uVar8 = (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
            uVar28 >> 0x18) * -0x4c957f2e + uVar22 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
    uVar18 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18) ^ (uint)((ulonglong)uVar28 * 0x2df45158);
    uVar29 = uVar18 ^ uVar35;
    uVar28 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
             uVar24 >> 0x18) ^
             uVar33 * 0x2df45158 +
             uVar28 * 0x2d7f954c + (int)((ulonglong)uVar28 * 0x2df45158 >> 0x20);
    uVar8 = uVar28 ^ uVar15;
    uVar22 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18;
    lVar3 = (ulonglong)uVar22 * 0xb36a80d2;
    uVar24 = (uint)lVar3;
    uVar33 = uVar8 * 0x2df45158 +
             uVar29 * 0x2d7f954c + (int)((ulonglong)uVar29 * 0x2df45158 >> 0x20) ^
             (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
             uVar24 >> 0x18) ^ uVar10;
    uVar24 = uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
             uVar33 >> 0x18;
    lVar4 = (ulonglong)uVar24 * 0xb36a80d2;
    uVar38 = (uint)lVar4;
    uVar8 = (uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
            uVar29 >> 0x18) * -0x4c957f2e + uVar22 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
    uVar22 = (uint)((ulonglong)uVar29 * 0x2df45158) ^
             (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18) ^ uVar9;
    uVar34 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
             uVar17 >> 0x18;
    uVar8 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
            uVar22 >> 0x18) * -0x4c957f2e + uVar24 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar24 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18) ^ (uint)((ulonglong)uVar22 * 0x2df45158);
    uVar29 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
             uVar16 >> 0x18;
    uVar17 = ~uVar17;
    uVar16 = ~uVar16;
    uVar8 = (uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
            uVar38 >> 0x18) ^
            uVar33 * 0x2df45158 +
            uVar22 * 0x2d7f954c + (int)((ulonglong)uVar22 * 0x2df45158 >> 0x20);
    uVar22 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18;
    lVar3 = (ulonglong)uVar16 * (ulonglong)uVar22;
    uVar33 = (uint)lVar3;
    uVar22 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
             uVar24 >> 0x18) * uVar16 + uVar22 * uVar17 + (int)((ulonglong)lVar3 >> 0x20);
    uVar8 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
            uVar33 >> 0x18) ^
            uVar8 * uVar34 + uVar24 * uVar29 + (int)((ulonglong)uVar34 * (ulonglong)uVar24 >> 0x20);
    uVar33 = (uVar22 * 0x1000000 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
             uVar22 >> 0x18) ^ (uint)((ulonglong)uVar34 * (ulonglong)uVar24);
    uVar22 = uVar33;
    if ((uVar24 & 0x20) != 0) {
      uVar22 = uVar8;
      uVar8 = uVar33;
    }
    local_e0 = uVar22 << (uVar24 & 0x1f) | (uVar8 >> 1) >> (~uVar24 & 0x1f);
    uVar33 = uVar18 ^ uVar13;
    uVar38 = uVar28 ^ uVar14;
    uVar27 = uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
             uVar38 >> 0x18;
    lVar3 = (ulonglong)uVar27 * 0xb36a80d2;
    uVar30 = (uint)lVar3;
    uVar30 = uVar38 * 0x2df45158 +
             uVar33 * 0x2d7f954c + (int)((ulonglong)uVar33 * 0x2df45158 >> 0x20) ^
             (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
             uVar30 >> 0x18) ^ uVar12;
    uVar31 = uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
             uVar30 >> 0x18;
    lVar4 = (ulonglong)uVar31 * 0xb36a80d2;
    uVar37 = (uint)lVar4;
    uVar38 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
             uVar33 >> 0x18) * -0x4c957f2e + uVar27 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
    uVar33 = (uint)((ulonglong)uVar33 * 0x2df45158) ^
             (uVar38 * 0x1000000 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
             uVar38 >> 0x18) ^ uVar11;
    uVar38 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
             uVar33 >> 0x18) * -0x4c957f2e + uVar31 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar27 = (uVar38 * 0x1000000 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
             uVar38 >> 0x18) ^ (uint)((ulonglong)uVar33 * 0x2df45158);
    uVar33 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
             uVar37 >> 0x18) ^
             uVar30 * 0x2df45158 +
             uVar33 * 0x2d7f954c + (int)((ulonglong)uVar33 * 0x2df45158 >> 0x20);
    uVar38 = uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
             uVar33 >> 0x18;
    lVar3 = (ulonglong)uVar16 * (ulonglong)uVar38;
    uVar30 = (uint)lVar3;
    uVar33 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
             uVar30 >> 0x18) ^
             uVar33 * uVar34 +
             uVar27 * uVar29 + (int)((ulonglong)uVar34 * (ulonglong)uVar27 >> 0x20);
    uVar38 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
             uVar27 >> 0x18) * uVar16 + uVar38 * uVar17 + (int)((ulonglong)lVar3 >> 0x20);
    uVar30 = (uVar38 * 0x1000000 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
             uVar38 >> 0x18) ^ (uint)((ulonglong)uVar34 * (ulonglong)uVar27);
    uVar38 = uVar30;
    if ((uVar27 & 0x20) != 0) {
      uVar38 = uVar33;
      uVar33 = uVar30;
    }
    local_e8 = uVar38 << (uVar27 & 0x1f) | (uVar33 >> 1) >> (~uVar27 & 0x1f);
    uVar11 = uVar18 ^ uVar11;
    uVar12 = uVar28 ^ uVar12;
    uVar30 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
             uVar12 >> 0x18;
    lVar3 = (ulonglong)uVar30 * 0xb36a80d2;
    uVar31 = (uint)lVar3;
    uVar15 = uVar12 * 0x2df45158 +
             uVar11 * 0x2d7f954c + (int)((ulonglong)uVar11 * 0x2df45158 >> 0x20) ^
             (uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
             uVar31 >> 0x18) ^ uVar15;
    uVar31 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18;
    lVar4 = (ulonglong)uVar31 * 0xb36a80d2;
    uVar37 = (uint)lVar4;
    uVar12 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
             uVar11 >> 0x18) * -0x4c957f2e + uVar30 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
    uVar35 = (uint)((ulonglong)uVar11 * 0x2df45158) ^
             (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
             uVar12 >> 0x18) ^ uVar35;
    uVar11 = (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
             uVar35 >> 0x18) * -0x4c957f2e + uVar31 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar30 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
             uVar11 >> 0x18) ^ (uint)((ulonglong)uVar35 * 0x2df45158);
    uVar11 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
             uVar37 >> 0x18) ^
             uVar15 * 0x2df45158 +
             uVar35 * 0x2d7f954c + (int)((ulonglong)uVar35 * 0x2df45158 >> 0x20);
    uVar12 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
             uVar11 >> 0x18;
    lVar3 = (ulonglong)uVar16 * (ulonglong)uVar12;
    uVar15 = (uint)lVar3;
    uVar11 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18) ^
             uVar11 * uVar34 +
             uVar30 * uVar29 + (int)((ulonglong)uVar34 * (ulonglong)uVar30 >> 0x20);
    uVar12 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
             uVar30 >> 0x18) * uVar16 + uVar12 * uVar17 + (int)((ulonglong)lVar3 >> 0x20);
    uVar15 = (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
             uVar12 >> 0x18) ^ (uint)((ulonglong)uVar34 * (ulonglong)uVar30);
    uVar12 = uVar15;
    if ((uVar30 & 0x20) != 0) {
      uVar12 = uVar11;
      uVar11 = uVar15;
    }
    local_f0 = uVar12 << (uVar30 & 0x1f) | (uVar11 >> 1) >> (~uVar30 & 0x1f);
    uVar18 = uVar18 ^ uVar9;
    uVar28 = uVar28 ^ uVar10;
    uVar9 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
            uVar28 >> 0x18;
    lVar3 = (ulonglong)uVar9 * 0xb36a80d2;
    uVar10 = (uint)lVar3;
    uVar9 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
            uVar18 >> 0x18) * -0x4c957f2e + uVar9 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
    uVar14 = uVar28 * 0x2df45158 +
             uVar18 * 0x2d7f954c + (int)((ulonglong)uVar18 * 0x2df45158 >> 0x20) ^
             (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) ^ uVar14;
    uVar10 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
             uVar14 >> 0x18;
    lVar3 = (ulonglong)uVar10 * 0xb36a80d2;
    uVar35 = (uint)lVar3;
    uVar13 = (uint)((ulonglong)uVar18 * 0x2df45158) ^
             (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
             uVar9 >> 0x18) ^ uVar13;
    uVar9 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
            uVar13 >> 0x18) * -0x4c957f2e + uVar10 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
    uVar15 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
             uVar9 >> 0x18) ^ (uint)((ulonglong)uVar13 * 0x2df45158);
    uVar9 = (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
            uVar35 >> 0x18) ^
            uVar14 * 0x2df45158 +
            uVar13 * 0x2d7f954c + (int)((ulonglong)uVar13 * 0x2df45158 >> 0x20);
    uVar10 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
             uVar9 >> 0x18;
    lVar3 = (ulonglong)uVar16 * (ulonglong)uVar10;
    uVar14 = (uint)lVar3;
    uVar9 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
            uVar14 >> 0x18) ^
            uVar9 * uVar34 + uVar15 * uVar29 + (int)((ulonglong)uVar34 * (ulonglong)uVar15 >> 0x20);
    uVar10 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18) * uVar16 + uVar10 * uVar17 + (int)((ulonglong)lVar3 >> 0x20);
    uVar14 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) ^ (uint)((ulonglong)uVar34 * (ulonglong)uVar15);
    uVar10 = uVar14;
    if ((uVar15 & 0x20) != 0) {
      uVar10 = uVar9;
      uVar9 = uVar14;
    }
    local_f8 = uVar10 << (uVar15 & 0x1f) | (uVar9 >> 1) >> (~uVar15 & 0x1f);
    local_f4 = uVar9 << (uVar15 & 0x1f) | (uVar10 >> 1) >> (~uVar15 & 0x1f);
    local_dc = uVar8 << (uVar24 & 0x1f) | (uVar22 >> 1) >> (~uVar24 & 0x1f);
    local_e4 = uVar33 << (uVar27 & 0x1f) | (uVar38 >> 1) >> (~uVar27 & 0x1f);
    local_ec = uVar11 << (uVar30 & 0x1f) | (uVar12 >> 1) >> (~uVar30 & 0x1f);
    FUN_01202da8(param_1 + 2,param_2,&local_108,param_5,1);
    iVar5 = 0;
    if (local_fc != iVar36) {
      local_a0 = *(int *)(param_2 + 4);
      local_9c = *(int *)(param_2 + 8);
      iVar5 = param_1[0x13];
      local_88 = iVar36;
      if (local_a0 == 0) {
        local_88 = 0;
      }
      local_a8 = (uint)(local_a0 != 0);
      local_d0 = 0;
      local_10c = 4;
      local_d4 = 4;
      local_d8 = 0;
      local_94 = 0;
      local_a4 = 0;
      iVar32 = 0;
      local_98 = local_a8;
      local_90._0_4_ = local_a0;
      local_90._4_4_ = local_9c;
      if (iVar5 != 0) {
LAB_01201660:
        do {
          uVar39 = FUN_00f45584(&local_a8);
          uVar26 = (undefined4)((ulonglong)uVar39 >> 0x20);
          iVar20 = (int)uVar39;
          iVar36 = extraout_r2;
          if (iVar20 == 0) goto LAB_012017cc;
          iVar36 = FUN_012246f4(&local_108,*(undefined4 *)(iVar20 + 4),*(undefined4 *)(iVar20 + 8));
          if (iVar36 == 0) {
            uVar8 = 1;
            if ((int)*(uint *)(iVar5 + 8) < 0) {
              uVar8 = *(uint *)(iVar5 + 8) ^ 0x80000000;
            }
            if (uVar8 == 0) {
              if (*(int *)(iVar5 + 0xc) == 0) goto LAB_01201660;
            }
            else if (uVar8 == 1) {
              iVar36 = *(int *)(iVar5 + 0x10);
              puVar6 = *(undefined4 **)(iVar5 + 0xc);
              if (iVar36 != 1) {
                if (iVar36 != 0) {
                  puVar25 = puVar6 + iVar36 * 8;
                  do {
                    iVar36 = (**(code **)(puVar6[1] + 0x10))(*puVar6,uVar26,param_5);
                    if (iVar36 == 0) goto LAB_0120171c;
                    puVar6 = puVar6 + 8;
                  } while (puVar6 != puVar25);
                }
                goto LAB_01201660;
              }
              iVar36 = (**(code **)(puVar6[1] + 0x10))(*puVar6,uVar26,param_5);
              if (iVar36 != 0) goto LAB_01201660;
            }
            else {
              puVar6 = *(undefined4 **)(iVar5 + 0x10);
              iVar36 = *(int *)(iVar5 + 0x14) << 5;
              do {
                if (iVar36 == 0) goto LAB_01201660;
                iVar19 = (**(code **)(puVar6[1] + 0x10))(*puVar6,uVar26,param_5);
                iVar36 = iVar36 + -0x20;
                puVar6 = puVar6 + 8;
              } while (iVar19 != 0);
            }
LAB_0120171c:
            iVar36 = *(int *)(iVar20 + 8);
            uVar26 = *(undefined4 *)(iVar20 + 4);
            if (iVar36 == 0) {
              iVar20 = 1;
            }
            else {
              iVar20 = thunk_FUN_016d4a50(iVar36);
              if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,iVar36);
              }
            }
            FUN_016dd1aa(iVar20,uVar26,iVar36);
            if (iVar32 == local_d8) {
              FUN_015f37b0(&local_d8);
              local_10c = local_d4;
            }
            local_d0 = iVar32 + 1;
            piVar23 = (int *)(local_10c + iVar32 * 0xc);
            *piVar23 = iVar36;
            piVar23[1] = iVar20;
            piVar23[2] = iVar36;
            iVar32 = local_d0;
          }
        } while( true );
      }
      iVar5 = 4;
      while( true ) {
        iVar20 = FUN_00f45584(&local_a8);
        iVar36 = extraout_r2_00;
        if (iVar20 == 0) break;
        uVar26 = *(undefined4 *)(iVar20 + 4);
        iVar20 = *(int *)(iVar20 + 8);
        iVar36 = FUN_012246f4(&local_108,uVar26,iVar20);
        if (iVar36 == 0) {
          if (iVar20 == 0) {
            iVar36 = 1;
          }
          else {
            iVar36 = thunk_FUN_016d4a50(iVar20);
            if (iVar36 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar20);
            }
          }
          FUN_016dd1aa(iVar36,uVar26,iVar20);
          if (iVar32 == local_d8) {
            FUN_015f37b0(&local_d8);
            iVar5 = local_d4;
          }
          local_d0 = iVar32 + 1;
          piVar23 = (int *)(iVar5 + iVar32 * 0xc);
          *piVar23 = iVar20;
          piVar23[1] = iVar36;
          piVar23[2] = iVar20;
          iVar32 = local_d0;
        }
      }
LAB_012017cc:
      if (iVar32 == 0) {
        iVar5 = 0;
        if (local_d8 != 0) {
          thunk_FUN_016d3fb4(local_d4);
          iVar5 = 0;
          iVar36 = extraout_r2_01;
        }
      }
      else {
        piVar23 = (int *)*param_1;
        do {
          iVar5 = *piVar23;
          bVar2 = (bool)hasExclusiveAccess(piVar23);
        } while (!bVar2);
        *piVar23 = iVar5 + 1;
        if (iVar5 < 0) {
LAB_01201a74:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1201a74);
          (*pcVar1)();
        }
        uVar8 = param_1[1];
        if (param_4 == 0) {
          local_c8 = 0;
        }
        else {
          DataMemoryBarrier(0xb);
          if (*(int *)(param_4 + 0x14) != 0) {
            FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
          }
          piVar21 = *(int **)(param_4 + 0xc);
          do {
            iVar5 = *piVar21;
            bVar2 = (bool)hasExclusiveAccess(piVar21);
          } while (!bVar2);
          *piVar21 = iVar5 + 1;
          if (iVar5 < 0) goto LAB_01201a74;
          uVar10 = *(uint *)(param_4 + 0xc);
          uVar26 = *(undefined4 *)(param_4 + 0x10);
          uVar22 = 0;
          uVar9 = (*(int **)(param_4 + 4))[1];
          if (uVar9 <= uVar8) {
            iVar5 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar23 + 2,uVar9);
            uVar22 = uVar9;
            if (iVar5 != 0) {
              uVar22 = 0;
            }
          }
          local_b0 = FUN_011e1508((int)(piVar23 + 2) + uVar22,uVar8 - uVar22);
          local_bc = 3;
          local_c8 = 2;
          local_b8 = uVar10;
          local_b4 = uVar26;
        }
        local_38 = FUN_01238114(param_3);
        local_88 = -0x7fffffd6;
        local_84 = local_d8;
        iStack_80 = local_d4;
        iStack_7c = local_d0;
        local_50 = 6;
        local_a8 = local_c8;
        local_a4 = iStack_c4;
        local_a0 = iStack_c0;
        local_9c = local_bc;
        local_98 = local_b8;
        local_94 = local_b4;
        local_4c = param_2;
        local_30 = piVar23;
        local_2c = uVar8;
        local_90 = local_b0;
        iVar5 = thunk_FUN_016d4a50(0x80);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar5,&local_a8,0x80);
        iVar36 = extraout_r2_02;
      }
    }
    if (local_104 != 0) {
      iVar36 = local_104 * 5;
    }
    if (local_104 != 0 && iVar36 != -9) {
      thunk_FUN_016d3fb4(local_108 + local_104 * -4 + -4);
      return iVar5;
    }
  }
  return iVar5;
}

