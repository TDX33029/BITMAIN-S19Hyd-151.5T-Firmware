// FUN_0134f994 @ 0134f994 size=1456 calls_out=2 calls_in=1
// strings: 

void FUN_0134f994(undefined4 *param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint *puVar4;
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
  undefined4 uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  puVar3 = (undefined4 *)FUN_01351d44();
  uVar23 = *puVar3;
  iVar25 = puVar3[1];
  puVar4 = (uint *)FUN_011e4df8();
  uVar5 = (**(code **)(iVar25 + 0xc))(uVar23);
  *(undefined1 *)(param_1 + 0xc) = param_2;
  uVar16 = puVar4[3];
  param_1[3] = 0;
  uVar20 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = (ulonglong)uVar20 * 0xb36a80d2;
  uVar26 = (uint)lVar1;
  uVar8 = puVar4[2];
  *param_1 = &DAT_005674cc;
  uVar8 = uVar8 ^ uVar5;
  uVar24 = *puVar4;
  uVar28 = puVar4[1];
  uVar5 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar21 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar8 * 0x2df45158);
  uVar12 = puVar4[0xe];
  uVar13 = uVar21 ^ uVar12;
  uVar26 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
           uVar26 >> 0x18) ^
           uVar16 * 0x2df45158 + uVar8 * 0x2d7f954c + (int)((ulonglong)uVar8 * 0x2df45158 >> 0x20);
  uVar16 = puVar4[0xf];
  uVar5 = uVar26 ^ uVar16;
  uVar8 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  uVar9 = puVar4[9];
  lVar1 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar20 = (uint)lVar1;
  uVar22 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
           uVar28 >> 0x18;
  uVar8 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
          uVar13 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar20 = uVar5 * 0x2df45158 + uVar13 * 0x2d7f954c + (int)((ulonglong)uVar13 * 0x2df45158 >> 0x20)
           ^ (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ uVar9;
  uVar17 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18;
  uVar14 = puVar4[8];
  lVar1 = (ulonglong)uVar17 * 0xb36a80d2;
  uVar27 = (uint)lVar1;
  uVar5 = (uint)((ulonglong)uVar13 * 0x2df45158) ^
          (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
          uVar8 >> 0x18) ^ uVar14;
  uVar8 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
          ) * -0x4c957f2e + uVar17 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar13 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18;
  uVar17 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
  uVar24 = ~uVar24;
  uVar5 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
          uVar27 >> 0x18) ^
          uVar20 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
  uVar8 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  uVar28 = ~uVar28;
  lVar1 = (ulonglong)uVar24 * (ulonglong)uVar8;
  uVar20 = (uint)lVar1;
  uVar8 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18) * uVar24 + uVar8 * uVar28 + (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) ^
          uVar5 * uVar22 + uVar17 * uVar13 + (int)((ulonglong)uVar22 * (ulonglong)uVar17 >> 0x20);
  uVar20 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^ (uint)((ulonglong)uVar22 * (ulonglong)uVar17);
  uVar8 = uVar20;
  if ((uVar17 & 0x20) != 0) {
    uVar8 = uVar5;
    uVar5 = uVar20;
  }
  param_1[10] = uVar8 << (uVar17 & 0x1f) | (uVar5 >> 1) >> (~uVar17 & 0x1f);
  uVar6 = puVar4[0xc];
  uVar27 = uVar21 ^ uVar6;
  uVar10 = puVar4[0xd];
  uVar18 = uVar26 ^ uVar10;
  uVar19 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18;
  lVar1 = (ulonglong)uVar19 * 0xb36a80d2;
  uVar20 = (uint)lVar1;
  uVar7 = puVar4[0xb];
  uVar15 = uVar18 * 0x2df45158 + uVar27 * 0x2d7f954c + (int)((ulonglong)uVar27 * 0x2df45158 >> 0x20)
           ^ (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ uVar7;
  uVar20 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18;
  lVar2 = (ulonglong)uVar20 * 0xb36a80d2;
  uVar11 = (uint)lVar2;
  uVar18 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
           uVar27 >> 0x18) * -0x4c957f2e + uVar19 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar19 = puVar4[10];
  uVar27 = (uint)((ulonglong)uVar27 * 0x2df45158) ^
           (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18) ^ uVar19;
  uVar20 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
           uVar27 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar18 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18) ^ (uint)((ulonglong)uVar27 * 0x2df45158);
  uVar20 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18) ^
           uVar15 * 0x2df45158 + uVar27 * 0x2d7f954c + (int)((ulonglong)uVar27 * 0x2df45158 >> 0x20)
  ;
  uVar27 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18;
  lVar1 = (ulonglong)uVar24 * (ulonglong)uVar27;
  uVar11 = (uint)lVar1;
  uVar20 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18) ^
           uVar20 * uVar22 + uVar18 * uVar13 + (int)((ulonglong)uVar22 * (ulonglong)uVar18 >> 0x20);
  uVar27 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18) * uVar24 + uVar27 * uVar28 + (int)((ulonglong)lVar1 >> 0x20);
  uVar11 = (uVar27 * 0x1000000 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
           uVar27 >> 0x18) ^ (uint)((ulonglong)uVar22 * (ulonglong)uVar18);
  uVar27 = uVar11;
  if ((uVar18 & 0x20) != 0) {
    uVar27 = uVar20;
    uVar20 = uVar11;
  }
  param_1[8] = uVar27 << (uVar18 & 0x1f) | (uVar20 >> 1) >> (~uVar18 & 0x1f);
  uVar19 = uVar21 ^ uVar19;
  uVar7 = uVar26 ^ uVar7;
  uVar11 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
  ;
  lVar1 = (ulonglong)uVar11 * 0xb36a80d2;
  uVar15 = (uint)lVar1;
  uVar11 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) * -0x4c957f2e + uVar11 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar16 = uVar7 * 0x2df45158 + uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20)
           ^ (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18) ^ uVar16;
  uVar7 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18;
  lVar1 = (ulonglong)uVar7 * 0xb36a80d2;
  uVar15 = (uint)lVar1;
  uVar12 = (uint)((ulonglong)uVar19 * 0x2df45158) ^
           (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18) ^ uVar12;
  uVar7 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) * -0x4c957f2e + uVar7 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar19 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ (uint)((ulonglong)uVar12 * 0x2df45158);
  uVar16 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) ^
           uVar16 * 0x2df45158 + uVar12 * 0x2d7f954c + (int)((ulonglong)uVar12 * 0x2df45158 >> 0x20)
  ;
  uVar12 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18;
  lVar1 = (ulonglong)uVar24 * (ulonglong)uVar12;
  uVar7 = (uint)lVar1;
  uVar16 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^
           uVar16 * uVar22 + uVar19 * uVar13 + (int)((ulonglong)uVar22 * (ulonglong)uVar19 >> 0x20);
  uVar12 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) * uVar24 + uVar12 * uVar28 + (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) ^ (uint)((ulonglong)uVar22 * (ulonglong)uVar19);
  uVar12 = uVar7;
  if ((uVar19 & 0x20) != 0) {
    uVar12 = uVar16;
    uVar16 = uVar7;
  }
  param_1[6] = uVar12 << (uVar19 & 0x1f) | (uVar16 >> 1) >> (~uVar19 & 0x1f);
  uVar21 = uVar21 ^ uVar14;
  uVar26 = uVar26 ^ uVar9;
  uVar9 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
          uVar26 >> 0x18;
  lVar1 = (ulonglong)uVar9 * 0xb36a80d2;
  uVar14 = (uint)lVar1;
  uVar9 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
          uVar21 >> 0x18) * -0x4c957f2e + uVar9 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar10 = uVar26 * 0x2df45158 + uVar21 * 0x2d7f954c + (int)((ulonglong)uVar21 * 0x2df45158 >> 0x20)
           ^ (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
             uVar14 >> 0x18) ^ uVar10;
  uVar26 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18;
  lVar1 = (ulonglong)uVar26 * 0xb36a80d2;
  uVar7 = (uint)lVar1;
  uVar6 = (uint)((ulonglong)uVar21 * 0x2df45158) ^
          (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
          uVar9 >> 0x18) ^ uVar6;
  uVar26 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) * -0x4c957f2e + uVar26 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar14 = (uVar26 * 0x1000000 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
           uVar26 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
  uVar26 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^
           uVar10 * 0x2df45158 + uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
  uVar9 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
          uVar26 >> 0x18;
  lVar1 = (ulonglong)uVar24 * (ulonglong)uVar9;
  uVar21 = (uint)lVar1;
  uVar26 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) ^
           uVar26 * uVar22 + uVar14 * uVar13 + (int)((ulonglong)uVar22 * (ulonglong)uVar14 >> 0x20);
  uVar9 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18) * uVar24 + uVar9 * uVar28 + (int)((ulonglong)lVar1 >> 0x20);
  uVar13 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) ^ (uint)((ulonglong)uVar22 * (ulonglong)uVar14);
  uVar9 = uVar13;
  if ((uVar14 & 0x20) != 0) {
    uVar9 = uVar26;
    uVar26 = uVar13;
  }
  param_1[4] = uVar9 << (uVar14 & 0x1f) | (uVar26 >> 1) >> (~uVar14 & 0x1f);
  param_1[0xb] = uVar5 << (uVar17 & 0x1f) | (uVar8 >> 1) >> (~uVar17 & 0x1f);
  param_1[9] = uVar20 << (uVar18 & 0x1f) | (uVar27 >> 1) >> (~uVar18 & 0x1f);
  param_1[7] = uVar16 << (uVar19 & 0x1f) | (uVar12 >> 1) >> (~uVar19 & 0x1f);
  param_1[5] = uVar26 << (uVar14 & 0x1f) | (uVar9 >> 1) >> (~uVar14 & 0x1f);
  return;
}

