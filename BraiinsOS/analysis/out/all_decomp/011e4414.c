// FUN_011e4414 @ 011e4414 size=2088 calls_out=15 calls_in=7
// strings: properties

void FUN_011e4414(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
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
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint *puVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined8 uVar35;
  uint *local_1e8;
  int local_1e4;
  undefined4 uStack_1e0;
  int local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  undefined1 auStack_1b8 [148];
  uint local_124 [3];
  int local_118;
  uint local_114;
  undefined4 local_110;
  int local_10c;
  int local_108;
  int local_104;
  uint *local_100;
  int iStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined1 local_78;
  int local_70 [5];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar21 = param_3[2];
  puVar4 = (undefined4 *)FUN_011e4c9c();
  uVar16 = *puVar4;
  iVar19 = puVar4[1];
  puVar5 = (uint *)FUN_011e4df8();
  uVar6 = (**(code **)(iVar19 + 0xc))(uVar16);
  uVar7 = puVar5[8];
  uVar8 = puVar5[10];
  uVar9 = puVar5[0xb];
  uVar10 = puVar5[0xc];
  uVar11 = puVar5[0xd];
  uVar12 = *puVar5;
  uVar13 = puVar5[1];
  uVar32 = puVar5[9];
  uVar20 = puVar5[0xe];
  uVar30 = puVar5[0xf];
  uVar17 = puVar5[2];
  uVar28 = puVar5[3];
  FUN_011a5370(&local_100,0x20,4,iVar21);
  local_1e8 = local_100;
  local_1e4 = iStack_fc;
  uStack_1e0 = uStack_f8;
  local_1dc = iStack_f4;
  uVar14 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
           uVar28 >> 0x18;
  lVar1 = (ulonglong)uVar14 * 0xb36a80d2;
  uVar15 = (uint)lVar1;
  uVar17 = uVar17 ^ uVar6;
  uVar6 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18) * -0x4c957f2e + uVar14 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar14 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) ^ (uint)((ulonglong)uVar17 * 0x2df45158);
  uVar6 = uVar14 ^ uVar20;
  uVar17 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) ^
           uVar28 * 0x2df45158 + uVar17 * 0x2d7f954c + (int)((ulonglong)uVar17 * 0x2df45158 >> 0x20)
  ;
  uVar28 = uVar17 ^ uVar30;
  uVar15 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
           uVar28 >> 0x18;
  lVar1 = (ulonglong)uVar15 * 0xb36a80d2;
  uVar22 = (uint)lVar1;
  uVar31 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18;
  uVar15 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) * -0x4c957f2e + uVar15 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar25 = uVar28 * 0x2df45158 + uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20) ^
           (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
           uVar22 >> 0x18) ^ uVar32;
  uVar28 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18;
  lVar1 = (ulonglong)uVar28 * 0xb36a80d2;
  uVar33 = (uint)lVar1;
  uVar6 = (uint)((ulonglong)uVar6 * 0x2df45158) ^
          (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
          uVar15 >> 0x18) ^ uVar7;
  uVar15 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) * -0x4c957f2e + uVar28 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar29 = ~uVar12;
  uVar22 = (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
  uVar28 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18;
  uVar6 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
          uVar33 >> 0x18) ^
          uVar25 * 0x2df45158 + uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
  uVar12 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
  ;
  uVar13 = ~uVar13;
  lVar1 = (ulonglong)uVar29 * (ulonglong)uVar12;
  uVar15 = (uint)lVar1;
  uVar12 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
           uVar22 >> 0x18) * uVar29 + uVar12 * uVar13 + (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
          uVar15 >> 0x18) ^
          uVar6 * uVar31 + uVar22 * uVar28 + (int)((ulonglong)uVar31 * (ulonglong)uVar22 >> 0x20);
  uVar15 = (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) ^ (uint)((ulonglong)uVar31 * (ulonglong)uVar22);
  uVar12 = uVar15;
  if ((uVar22 & 0x20) != 0) {
    uVar12 = uVar6;
    uVar6 = uVar15;
  }
  local_1c0 = uVar12 << (uVar22 & 0x1f) | (uVar6 >> 1) >> (~uVar22 & 0x1f);
  uVar15 = uVar14 ^ uVar10;
  uVar33 = uVar17 ^ uVar11;
  uVar18 = uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
           uVar33 >> 0x18;
  lVar1 = (ulonglong)uVar18 * 0xb36a80d2;
  uVar25 = (uint)lVar1;
  uVar33 = uVar33 * 0x2df45158 + uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20)
           ^ (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
             uVar25 >> 0x18) ^ uVar9;
  uVar23 = uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
           uVar33 >> 0x18;
  lVar2 = (ulonglong)uVar23 * 0xb36a80d2;
  uVar34 = (uint)lVar2;
  uVar25 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) * -0x4c957f2e + uVar18 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar15 = (uint)((ulonglong)uVar15 * 0x2df45158) ^
           (uVar25 * 0x1000000 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18) ^ uVar8;
  uVar25 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) * -0x4c957f2e + uVar23 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar18 = (uVar25 * 0x1000000 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18) ^ (uint)((ulonglong)uVar15 * 0x2df45158);
  uVar15 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
           uVar34 >> 0x18) ^
           uVar33 * 0x2df45158 + uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20)
  ;
  uVar25 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18;
  lVar1 = (ulonglong)uVar29 * (ulonglong)uVar25;
  uVar33 = (uint)lVar1;
  uVar15 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
           uVar33 >> 0x18) ^
           uVar15 * uVar31 + uVar18 * uVar28 + (int)((ulonglong)uVar31 * (ulonglong)uVar18 >> 0x20);
  uVar25 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18) * uVar29 + uVar25 * uVar13 + (int)((ulonglong)lVar1 >> 0x20);
  uVar33 = (uVar25 * 0x1000000 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18) ^ (uint)((ulonglong)uVar31 * (ulonglong)uVar18);
  uVar25 = uVar33;
  if ((uVar18 & 0x20) != 0) {
    uVar25 = uVar15;
    uVar15 = uVar33;
  }
  local_1c8 = uVar25 << (uVar18 & 0x1f) | (uVar15 >> 1) >> (~uVar18 & 0x1f);
  uVar8 = uVar14 ^ uVar8;
  uVar9 = uVar17 ^ uVar9;
  uVar33 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
  ;
  lVar1 = (ulonglong)uVar33 * 0xb36a80d2;
  uVar23 = (uint)lVar1;
  uVar30 = uVar9 * 0x2df45158 + uVar8 * 0x2d7f954c + (int)((ulonglong)uVar8 * 0x2df45158 >> 0x20) ^
           (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
           uVar23 >> 0x18) ^ uVar30;
  uVar23 = uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
           uVar30 >> 0x18;
  lVar2 = (ulonglong)uVar23 * 0xb36a80d2;
  uVar34 = (uint)lVar2;
  uVar9 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) * -0x4c957f2e + uVar33 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar20 = (uint)((ulonglong)uVar8 * 0x2df45158) ^
           (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) ^ uVar20;
  uVar9 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) * -0x4c957f2e + uVar23 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar33 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) ^ (uint)((ulonglong)uVar20 * 0x2df45158);
  uVar9 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
          uVar34 >> 0x18) ^
          uVar30 * 0x2df45158 + uVar20 * 0x2d7f954c + (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20);
  uVar8 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18;
  lVar1 = (ulonglong)uVar29 * (ulonglong)uVar8;
  uVar20 = (uint)lVar1;
  uVar9 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) ^
          uVar9 * uVar31 + uVar33 * uVar28 + (int)((ulonglong)uVar31 * (ulonglong)uVar33 >> 0x20);
  uVar8 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
          uVar33 >> 0x18) * uVar29 + uVar8 * uVar13 + (int)((ulonglong)lVar1 >> 0x20);
  uVar20 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^ (uint)((ulonglong)uVar31 * (ulonglong)uVar33);
  uVar8 = uVar20;
  if ((uVar33 & 0x20) != 0) {
    uVar8 = uVar9;
    uVar9 = uVar20;
  }
  local_1d0 = uVar8 << (uVar33 & 0x1f) | (uVar9 >> 1) >> (~uVar33 & 0x1f);
  uVar14 = uVar14 ^ uVar7;
  uVar17 = uVar17 ^ uVar32;
  uVar7 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18;
  lVar1 = (ulonglong)uVar7 * 0xb36a80d2;
  uVar20 = (uint)lVar1;
  uVar7 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18) * -0x4c957f2e + uVar7 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar11 = uVar17 * 0x2df45158 + uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20)
           ^ (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ uVar11;
  uVar20 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18;
  lVar1 = (ulonglong)uVar20 * 0xb36a80d2;
  uVar17 = (uint)lVar1;
  uVar10 = (uint)((ulonglong)uVar14 * 0x2df45158) ^
           (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ uVar10;
  uVar7 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar14 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ (uint)((ulonglong)uVar10 * 0x2df45158);
  uVar7 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18) ^
          uVar11 * 0x2df45158 + uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20);
  uVar11 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
  ;
  lVar1 = (ulonglong)uVar29 * (ulonglong)uVar11;
  uVar20 = (uint)lVar1;
  uVar7 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) ^
          uVar7 * uVar31 + uVar14 * uVar28 + (int)((ulonglong)uVar31 * (ulonglong)uVar14 >> 0x20);
  uVar11 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) * uVar29 + uVar11 * uVar13 + (int)((ulonglong)lVar1 >> 0x20);
  uVar13 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18) ^ (uint)((ulonglong)uVar31 * (ulonglong)uVar14);
  uVar11 = uVar13;
  if ((uVar14 & 0x20) != 0) {
    uVar11 = uVar7;
    uVar7 = uVar13;
  }
  local_1d8 = uVar11 << (uVar14 & 0x1f) | (uVar7 >> 1) >> (~uVar14 & 0x1f);
  local_1d4 = uVar7 << (uVar14 & 0x1f) | (uVar11 >> 1) >> (~uVar14 & 0x1f);
  local_1bc = uVar6 << (uVar22 & 0x1f) | (uVar12 >> 1) >> (~uVar22 & 0x1f);
  local_1c4 = uVar15 << (uVar18 & 0x1f) | (uVar25 >> 1) >> (~uVar18 & 0x1f);
  local_1cc = uVar9 << (uVar33 & 0x1f) | (uVar8 >> 1) >> (~uVar33 & 0x1f);
  FUN_0119d4b4(auStack_1b8,param_2,"properties",10);
  local_110 = 0;
  local_124[2] = *param_3;
  local_118 = param_3[1];
  local_104 = iVar21;
  if (local_124[2] == 0) {
    local_104 = 0;
  }
  local_124[0] = (uint)(local_124[2] != 0);
  local_124[1] = 0;
  local_114 = local_124[0];
  local_10c = local_124[2];
  local_108 = local_118;
  while( true ) {
    uVar35 = FUN_00f45584(local_124);
    uVar16 = (undefined4)((ulonglong)uVar35 >> 0x20);
    iVar19 = (int)uVar35;
    if (iVar19 == 0) {
      *param_1 = local_1e8;
      param_1[1] = local_1e4;
      param_1[2] = uStack_1e0;
      param_1[3] = local_1dc;
      param_1[4] = local_1d8;
      param_1[5] = local_1d4;
      param_1[6] = local_1d0;
      param_1[7] = local_1cc;
      param_1[8] = local_1c8;
      param_1[9] = local_1c4;
      param_1[10] = local_1c0;
      param_1[0xb] = local_1bc;
      FUN_01161600(auStack_1b8);
      return;
    }
    FUN_0119d4b4(&local_100,auStack_1b8,*(undefined4 *)(iVar19 + 4),*(undefined4 *)(iVar19 + 8));
    uVar24 = *(undefined4 *)(iVar19 + 4);
    iVar19 = *(int *)(iVar19 + 8);
    if (iVar19 == 0) {
      iVar21 = 1;
    }
    else {
      iVar21 = thunk_FUN_016d4a50(iVar19);
      if (iVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar19);
      }
    }
    FUN_016dd1aa(iVar21,uVar24,iVar19);
    local_5c = iVar19;
    local_58 = iVar21;
    local_54 = iVar19;
    uVar3 = FUN_01352d48(local_78,uVar16);
    FUN_0125acb4(&local_50,&local_100,uVar16,uVar3);
    if (local_50 == 0) break;
    local_34 = local_4c;
    local_30 = local_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    local_38 = local_50;
    FUN_01224bd8(local_70,&local_1e8,&local_5c,&local_38);
    if (local_70[0] != 0) {
      FUN_011e4f30(local_70);
    }
    FUN_01161600(&local_100);
  }
  *param_1 = 0;
  param_1[1] = local_4c;
  if (iVar19 != 0) {
    thunk_FUN_016d3fb4(iVar21);
  }
  FUN_01161600(&local_100);
  FUN_01161600(auStack_1b8);
  iVar19 = local_1e4;
  if (local_1e4 == 0) {
    return;
  }
  if (local_1dc != 0) {
    puVar27 = local_1e8 + 1;
    uVar6 = ~*local_1e8 & 0x80808080;
    puVar5 = local_1e8;
    iVar21 = local_1dc;
    do {
      puVar26 = puVar27;
      if (uVar6 == 0) {
        do {
          puVar27 = puVar26 + 1;
          uVar6 = *puVar26;
          puVar5 = puVar5 + -0x20;
          puVar26 = puVar27;
        } while ((uVar6 & 0x80808080) == 0x80808080);
        uVar6 = uVar6 & 0x80808080 ^ 0x80808080;
      }
      uVar12 = LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                       uVar6 >> 0x18) & 0x38;
      if (puVar5[-8 - uVar12] != 0) {
        thunk_FUN_016d3fb4(puVar5[-7 - uVar12]);
      }
      iVar21 = iVar21 + -1;
      uVar6 = uVar6 - 1 & uVar6;
      FUN_0115ccf0(puVar5 + (-5 - uVar12));
    } while (iVar21 != 0);
  }
  if (iVar19 * 0x21 == -0x25) {
    return;
  }
  thunk_FUN_016d3fb4(local_1e8 + iVar19 * -8 + -8);
  return;
}

