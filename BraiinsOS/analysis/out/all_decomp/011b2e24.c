// FUN_011b2e24 @ 011b2e24 size=2332 calls_out=5 calls_in=0
// strings: application/json | application/json

void FUN_011b2e24(undefined4 *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
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
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint local_68;
  uint local_50;
  undefined4 local_4c;
  
  puVar5 = (undefined4 *)FUN_011e4c9c();
  uVar17 = *puVar5;
  iVar21 = puVar5[1];
  puVar6 = (uint *)FUN_011e4df8();
  uVar7 = (**(code **)(iVar21 + 0xc))(uVar17);
  uVar8 = *puVar6;
  uVar9 = puVar6[1];
  uVar10 = puVar6[8];
  uVar11 = puVar6[9];
  uVar12 = puVar6[0xc];
  uVar13 = puVar6[0xd];
  uVar14 = puVar6[0xf];
  uVar22 = puVar6[2];
  uVar18 = puVar6[3];
  uVar30 = puVar6[10];
  uVar25 = puVar6[0xb];
  uVar28 = puVar6[0xe];
  iVar21 = thunk_FUN_016d4a50(0x38);
  if (iVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x38);
  }
  uVar22 = uVar22 ^ uVar7;
  uVar23 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18;
  lVar2 = (ulonglong)uVar23 * 0xb36a80d2;
  uVar7 = (uint)lVar2;
  puVar5 = (undefined4 *)(iVar21 + 0x30);
  *puVar5 = 0xffffffff;
  *(undefined4 *)(iVar21 + 0x34) = 0xffffffff;
  uVar18 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^
           uVar18 * 0x2df45158 + uVar22 * 0x2d7f954c + (int)((ulonglong)uVar22 * 0x2df45158 >> 0x20)
  ;
  uVar15 = uVar18 ^ uVar25;
  uVar20 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18;
  lVar3 = (ulonglong)uVar20 * 0xb36a80d2;
  uVar26 = (uint)lVar3;
  uVar7 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
          uVar22 >> 0x18) * -0x4c957f2e + uVar23 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar22 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ (uint)((ulonglong)uVar22 * 0x2df45158);
  uVar7 = uVar22 ^ uVar30;
  uVar20 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
  uVar23 = (uint)((ulonglong)uVar7 * 0x2df45158) ^
           (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18) ^ uVar28;
  uVar27 = ~uVar8;
  uVar7 = uVar15 * 0x2df45158 + uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20) ^
          (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
          uVar26 >> 0x18) ^ uVar14;
  uVar20 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
  ;
  lVar2 = (ulonglong)uVar20 * 0xb36a80d2;
  uVar15 = (uint)lVar2;
  uVar29 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) ^
           uVar7 * 0x2df45158 + uVar23 * 0x2d7f954c + (int)((ulonglong)uVar23 * 0x2df45158 >> 0x20);
  uVar7 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
          uVar23 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar15 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
           uVar29 >> 0x18;
  lVar2 = (ulonglong)uVar27 * (ulonglong)uVar15;
  uVar26 = (uint)lVar2;
  uVar31 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
  ;
  uVar9 = ~uVar9;
  uVar20 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ (uint)((ulonglong)uVar23 * 0x2df45158);
  uVar7 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) * uVar27 + uVar15 * uVar9 + (int)((ulonglong)lVar2 >> 0x20);
  uVar7 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
          uVar7 >> 0x18) ^ (uint)((ulonglong)uVar31 * (ulonglong)uVar20);
  uVar23 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
  ;
  uVar15 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
           uVar26 >> 0x18) ^
           uVar29 * uVar31 + uVar20 * uVar23 + (int)((ulonglong)uVar31 * (ulonglong)uVar20 >> 0x20);
  uVar8 = uVar15;
  if ((uVar20 & 0x20) != 0) {
    uVar8 = uVar7;
    uVar7 = uVar15;
  }
  uVar19 = uVar7 << (uVar20 & 0x1f) | (uVar8 >> 1) >> (~uVar20 & 0x1f);
  uVar15 = uVar8 << (uVar20 & 0x1f) | (uVar7 >> 1) >> (~uVar20 & 0x1f);
  uVar16 = (uint)((ulonglong)uVar19 * 0x4c957f2d);
  uVar7 = uVar18 ^ uVar11;
  uVar8 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
  lVar2 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar29 = (uint)lVar2;
  uVar26 = uVar22 ^ uVar10;
  uVar8 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
          uVar26 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar20 = (uint)((ulonglong)uVar26 * 0x2df45158) ^
           (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^ uVar12;
  uVar7 = uVar7 * 0x2df45158 + uVar26 * 0x2d7f954c + (int)((ulonglong)uVar26 * 0x2df45158 >> 0x20) ^
          (uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
          uVar29 >> 0x18) ^ uVar13;
  uVar8 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
  lVar2 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar26 = (uint)lVar2;
  uVar26 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
           uVar26 >> 0x18) ^
           uVar7 * 0x2df45158 + uVar20 * 0x2d7f954c + (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20);
  uVar29 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
           uVar26 >> 0x18;
  lVar3 = (ulonglong)uVar27 * (ulonglong)uVar29;
  uVar24 = (uint)lVar3;
  uVar7 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar20 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ (uint)((ulonglong)uVar20 * 0x2df45158);
  uVar7 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) * uVar27 + uVar29 * uVar9 + (int)((ulonglong)lVar3 >> 0x20);
  uVar29 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ (uint)((ulonglong)uVar31 * (ulonglong)uVar20);
  uVar7 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
          uVar24 >> 0x18) ^
          uVar26 * uVar31 + uVar20 * uVar23 + (int)((ulonglong)uVar31 * (ulonglong)uVar20 >> 0x20);
  uVar8 = uVar29;
  if ((uVar20 & 0x20) != 0) {
    uVar8 = uVar7;
    uVar7 = uVar29;
  }
  uVar29 = uVar7 << (uVar20 & 0x1f) | (uVar8 >> 1) >> (~uVar20 & 0x1f);
  uVar20 = uVar8 << (uVar20 & 0x1f) | (uVar7 >> 1) >> (~uVar20 & 0x1f);
  uVar26 = uVar16 + uVar20;
  uVar28 = uVar22 ^ uVar28;
  uVar14 = uVar18 ^ uVar14;
  uVar7 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18;
  lVar2 = (ulonglong)uVar7 * 0xb36a80d2;
  uVar8 = (uint)lVar2;
  uVar11 = uVar14 * 0x2df45158 + uVar28 * 0x2d7f954c + (int)((ulonglong)uVar28 * 0x2df45158 >> 0x20)
           ^ (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18) ^ uVar11;
  uVar8 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18;
  lVar3 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar24 = (uint)lVar3;
  uVar7 = (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
          uVar28 >> 0x18) * -0x4c957f2e + uVar7 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar10 = (uint)((ulonglong)uVar28 * 0x2df45158) ^
           (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ uVar10;
  uVar7 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
  uVar14 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ (uint)((ulonglong)uVar10 * 0x2df45158);
  uVar7 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
          uVar24 >> 0x18) ^
          uVar11 * 0x2df45158 + uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20);
  uVar11 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
  ;
  lVar2 = (ulonglong)uVar27 * (ulonglong)uVar11;
  uVar8 = (uint)lVar2;
  uVar28 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^
           uVar7 * uVar31 + uVar14 * uVar23 + (int)((ulonglong)uVar31 * (ulonglong)uVar14 >> 0x20);
  uVar7 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18) * uVar27 + uVar11 * uVar9 + (int)((ulonglong)lVar2 >> 0x20);
  uVar7 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
          uVar7 >> 0x18) ^ (uint)((ulonglong)uVar31 * (ulonglong)uVar14);
  local_68 = ~uVar14 & 0x1f;
  uVar8 = uVar28;
  if ((uVar14 & 0x20) != 0) {
    uVar8 = uVar7;
    uVar7 = uVar28;
  }
  uVar28 = uVar7 << (uVar14 & 0x1f) | (uVar8 >> 1) >> local_68;
  uVar18 = uVar18 ^ uVar13;
  uVar11 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18;
  lVar2 = (ulonglong)uVar11 * 0xb36a80d2;
  uVar13 = (uint)lVar2;
  uVar22 = uVar22 ^ uVar12;
  uVar11 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
           uVar22 >> 0x18) * -0x4c957f2e + uVar11 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar30 = (uint)((ulonglong)uVar22 * 0x2df45158) ^
           (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18) ^ uVar30;
  uVar25 = uVar18 * 0x2df45158 + uVar22 * 0x2d7f954c + (int)((ulonglong)uVar22 * 0x2df45158 >> 0x20)
           ^ (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
             uVar13 >> 0x18) ^ uVar25;
  uVar11 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18;
  lVar2 = (ulonglong)uVar11 * 0xb36a80d2;
  uVar12 = (uint)lVar2;
  uVar13 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) ^
           uVar25 * 0x2df45158 + uVar30 * 0x2d7f954c + (int)((ulonglong)uVar30 * 0x2df45158 >> 0x20)
  ;
  uVar10 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18;
  lVar3 = (ulonglong)uVar27 * (ulonglong)uVar10;
  uVar22 = (uint)lVar3;
  uVar11 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
           uVar30 >> 0x18) * -0x4c957f2e + uVar11 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar12 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18) ^ (uint)((ulonglong)uVar30 * 0x2df45158);
  uVar9 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) * uVar27 + uVar10 * uVar9 + (int)((ulonglong)lVar3 >> 0x20);
  uVar10 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) ^ (uint)((ulonglong)uVar31 * (ulonglong)uVar12);
  uVar9 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
          uVar22 >> 0x18) ^
          uVar13 * uVar31 + uVar12 * uVar23 + (int)((ulonglong)uVar31 * (ulonglong)uVar12 >> 0x20);
  uVar11 = uVar10;
  if ((uVar12 & 0x20) != 0) {
    uVar11 = uVar9;
    uVar9 = uVar10;
  }
  uVar10 = uVar9 << (uVar12 & 0x1f) | (uVar11 >> 1) >> (~uVar12 & 0x1f);
  uVar22 = uVar10 ^ 0x74616369;
  uVar18 = uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
           uVar22 >> 0x18;
  lVar2 = (ulonglong)(uVar28 ^ 0xd0919096) * (ulonglong)uVar18;
  uVar13 = (uint)lVar2;
  uVar25 = uVar11 << (uVar12 & 0x1f) | (uVar9 >> 1) >> (~uVar12 & 0x1f);
  uVar12 = uVar25 ^ 0x6c707061;
  uVar9 = uVar8 << (uVar14 & 0x1f) | (uVar7 >> 1) >> local_68;
  uVar7 = uVar9 ^ 0x6e6f736a;
  uVar7 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
  lVar3 = (ulonglong)uVar12 * (ulonglong)uVar7;
  uVar8 = uVar28 ^ 0x2f6e6f69;
  uVar11 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18) ^
           uVar15 * 0x4c957f2d + uVar19 * 0x5851f42d + (int)((ulonglong)uVar19 * 0x4c957f2d >> 0x20)
           + uVar29 + (uint)CARRY4(uVar16,uVar20) + -0x7ae0bd2c + (uint)(0x36a80d2f < uVar26) ^
           (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) * uVar12 + uVar7 * uVar22 + (int)((ulonglong)lVar3 >> 0x20);
  uVar7 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) * (uVar28 ^ 0xd0919096) +
          uVar18 * (uVar9 ^ 0x91908c95) + (int)((ulonglong)lVar2 >> 0x20);
  uVar8 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
          uVar7 >> 0x18) ^ uVar26 + 0xc957f2d0 ^ (uint)lVar3;
  uVar7 = uVar8 >> 9;
  uVar13 = uVar11 << 0x17 | uVar7;
  uVar14 = uVar7 << 0x18 | ((uVar7 & 0xff00) >> 8) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           (uVar11 & 0x1ff) >> 1;
  uVar7 = uVar8 << 0x17 | uVar11 >> 9;
  uVar12 = uVar7 ^ 0xff;
  lVar2 = (ulonglong)uVar14 * 0xb36a80d2;
  uVar22 = (uint)lVar2;
  uVar7 = (uVar12 << 0x18 | ((uVar11 >> 9 & 0xff00) >> 8) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
          (uVar8 & 0x1ff) >> 1) * -0x4c957f2e +
          uVar14 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  bVar4 = false;
  local_4c = 0;
  uVar11 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ (uint)((ulonglong)uVar12 * 0x2df45158);
  uVar14 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
           uVar29 >> 0x18;
  lVar2 = (ulonglong)uVar14 * (ulonglong)uVar11;
  uVar7 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
          uVar22 >> 0x18) ^
          uVar13 * 0x2df45158 + uVar12 * 0x2d7f954c + (int)((ulonglong)uVar12 * 0x2df45158 >> 0x20);
  uVar8 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
  lVar3 = (ulonglong)~uVar20 * (ulonglong)uVar8;
  uVar12 = (uint)lVar3;
  uVar8 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) * ~uVar20 + uVar8 * ~uVar29 + (int)((ulonglong)lVar3 >> 0x20);
  local_50 = 3;
  uVar12 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) ^
           uVar7 * uVar14 +
           uVar11 * (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                    uVar20 >> 0x18) + (int)((ulonglong)lVar2 >> 0x20);
  uVar7 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
          uVar8 >> 0x18) ^ (uint)lVar2;
  uVar8 = uVar12;
  if ((uVar11 & 0x20) != 0) {
    uVar8 = uVar7;
    uVar7 = uVar12;
  }
  uVar8 = uVar7 << (uVar11 & 0x1f) | (uVar8 >> 1) >> (~uVar11 & 0x1f);
  uVar7 = uVar8;
  do {
    uVar12 = *(uint *)((int)puVar5 + (uVar7 & 3));
    uVar11 = uVar12 ^ (uVar8 >> 0x19) * 0x1010101;
    uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff;
    while (uVar11 != 0) {
      uVar13 = uVar11 >> 8;
      uVar14 = uVar11 >> 0x10;
      uVar22 = uVar11 >> 0x18;
      uVar18 = uVar11 << 0x18;
      uVar11 = uVar11 - 1 & uVar11;
      uVar13 = uVar7 + ((uint)LZCOUNT(uVar18 | (uVar13 & 0xff) << 0x10 | (uVar14 & 0xff) << 8 |
                                      uVar22) >> 3) & 3;
      if ((puVar5[uVar13 * -3 + -2] == 0x10) &&
         (iVar21 = thunk_FUN_016dd50a("application/json",puVar5[uVar13 * -3 + -3],0x10), iVar21 == 0
         )) goto LAB_011b3700;
    }
    uVar11 = uVar12 & 0x80808080;
    if (bVar4) goto LAB_011b367c;
    if (uVar11 == 0) {
      bVar4 = false;
    }
    else {
      local_68 = uVar7 + ((uint)LZCOUNT((uVar12 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                        (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) & 3;
LAB_011b367c:
      if ((uVar11 & uVar12 << 1) != 0) {
        uVar7 = (uint)*(char *)((int)puVar5 + local_68);
        if (-1 < (int)uVar7) {
          local_68 = 0;
        }
        bVar1 = (byte)(uVar8 >> 0x19);
        *(byte *)((int)puVar5 + local_68) = bVar1;
        if (-1 < (int)uVar7) {
          uVar7 = 0xff;
        }
        *(byte *)((int)puVar5 + (local_68 & 3) + 4) = bVar1;
        local_50 = uVar7 & 1 ^ 3;
        puVar5[local_68 * -3 + -3] = "application/json";
        puVar5[local_68 * -3 + -2] = 0x10;
        local_4c = 1;
        uVar13 = local_68;
LAB_011b3700:
        puVar5[uVar13 * -3 + -1] = FUN_011b3748;
        *param_1 = puVar5;
        param_1[1] = 3;
        param_1[2] = local_50;
        param_1[3] = local_4c;
        param_1[4] = uVar20;
        param_1[5] = uVar29;
        param_1[6] = uVar19;
        param_1[7] = uVar15;
        param_1[8] = uVar25;
        param_1[9] = uVar10;
        param_1[10] = uVar28;
        param_1[0xb] = uVar9;
        return;
      }
      bVar4 = true;
    }
    uVar7 = uVar7 & 3;
  } while( true );
}

