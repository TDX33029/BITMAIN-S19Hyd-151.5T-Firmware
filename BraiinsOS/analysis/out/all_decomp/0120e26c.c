// FUN_0120e26c @ 0120e26c size=1508 calls_out=3 calls_in=2
// strings: 

void FUN_0120e26c(undefined4 *param_1,undefined4 param_2)

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
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar3 = (undefined4 *)FUN_011e4c9c();
  uVar21 = *puVar3;
  iVar25 = puVar3[1];
  puVar4 = (uint *)FUN_011e4df8();
  uVar5 = (**(code **)(iVar25 + 0xc))(uVar21);
  uVar6 = puVar4[8];
  uVar7 = puVar4[10];
  uVar8 = puVar4[0xb];
  uVar9 = puVar4[0xc];
  uVar10 = puVar4[0xd];
  uVar11 = *puVar4;
  uVar12 = puVar4[1];
  uVar26 = puVar4[9];
  uVar27 = puVar4[0xe];
  uVar29 = puVar4[0xf];
  uVar17 = puVar4[2];
  uVar24 = puVar4[3];
  FUN_011a5370(&local_38,4,4,param_2);
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  uVar13 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18;
  lVar1 = (ulonglong)uVar13 * 0xb36a80d2;
  uVar15 = (uint)lVar1;
  uVar17 = uVar17 ^ uVar5;
  uVar5 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18) * -0x4c957f2e + uVar13 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar14 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar17 * 0x2df45158);
  uVar5 = uVar14 ^ uVar27;
  uVar17 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) ^
           uVar24 * 0x2df45158 + uVar17 * 0x2d7f954c + (int)((ulonglong)uVar17 * 0x2df45158 >> 0x20)
  ;
  uVar15 = uVar17 ^ uVar29;
  uVar13 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18;
  lVar1 = (ulonglong)uVar13 * 0xb36a80d2;
  uVar24 = (uint)lVar1;
  uVar13 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) * -0x4c957f2e + uVar13 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar15 = uVar15 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20) ^
           (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18) ^ uVar26;
  uVar24 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18;
  lVar1 = (ulonglong)uVar24 * 0xb36a80d2;
  uVar28 = (uint)lVar1;
  uVar5 = (uint)((ulonglong)uVar5 * 0x2df45158) ^
          (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
          uVar13 >> 0x18) ^ uVar6;
  uVar13 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) * -0x4c957f2e + uVar24 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar24 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18;
  uVar22 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
  uVar18 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18;
  uVar5 = (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
          uVar28 >> 0x18) ^
          uVar15 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
  uVar11 = ~uVar11;
  uVar13 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
  ;
  lVar1 = (ulonglong)uVar11 * (ulonglong)uVar13;
  uVar15 = (uint)lVar1;
  uVar5 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
          uVar15 >> 0x18) ^
          uVar5 * uVar18 + uVar22 * uVar24 + (int)((ulonglong)uVar18 * (ulonglong)uVar22 >> 0x20);
  uVar12 = ~uVar12;
  uVar13 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
           uVar22 >> 0x18) * uVar11 + uVar13 * uVar12 + (int)((ulonglong)lVar1 >> 0x20);
  uVar15 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18) ^ (uint)((ulonglong)uVar18 * (ulonglong)uVar22);
  uVar13 = uVar15;
  if ((uVar22 & 0x20) != 0) {
    uVar13 = uVar5;
    uVar5 = uVar15;
  }
  param_1[10] = uVar13 << (uVar22 & 0x1f) | (uVar5 >> 1) >> (~uVar22 & 0x1f);
  uVar15 = uVar14 ^ uVar9;
  uVar19 = uVar17 ^ uVar10;
  uVar20 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18;
  lVar1 = (ulonglong)uVar20 * 0xb36a80d2;
  uVar28 = (uint)lVar1;
  uVar16 = uVar19 * 0x2df45158 + uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20)
           ^ (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
             uVar28 >> 0x18) ^ uVar8;
  uVar23 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18;
  lVar2 = (ulonglong)uVar23 * 0xb36a80d2;
  uVar19 = (uint)lVar2;
  uVar28 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar15 = (uint)((ulonglong)uVar15 * 0x2df45158) ^
           (uVar28 * 0x1000000 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
           uVar28 >> 0x18) ^ uVar7;
  uVar28 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) * -0x4c957f2e + uVar23 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar20 = (uVar28 * 0x1000000 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
           uVar28 >> 0x18) ^ (uint)((ulonglong)uVar15 * 0x2df45158);
  uVar15 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) ^
           uVar16 * 0x2df45158 + uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20)
  ;
  uVar28 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18;
  lVar1 = (ulonglong)uVar11 * (ulonglong)uVar28;
  uVar19 = (uint)lVar1;
  uVar15 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) ^
           uVar15 * uVar18 + uVar20 * uVar24 + (int)((ulonglong)uVar18 * (ulonglong)uVar20 >> 0x20);
  uVar28 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18) * uVar11 + uVar28 * uVar12 + (int)((ulonglong)lVar1 >> 0x20);
  uVar19 = (uVar28 * 0x1000000 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
           uVar28 >> 0x18) ^ (uint)((ulonglong)uVar18 * (ulonglong)uVar20);
  uVar28 = uVar19;
  if ((uVar20 & 0x20) != 0) {
    uVar28 = uVar15;
    uVar15 = uVar19;
  }
  param_1[8] = uVar28 << (uVar20 & 0x1f) | (uVar15 >> 1) >> (~uVar20 & 0x1f);
  uVar7 = uVar14 ^ uVar7;
  uVar8 = uVar17 ^ uVar8;
  uVar19 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
  ;
  lVar1 = (ulonglong)uVar19 * 0xb36a80d2;
  uVar16 = (uint)lVar1;
  uVar29 = uVar8 * 0x2df45158 + uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20) ^
           (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18) ^ uVar29;
  uVar23 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
           uVar29 >> 0x18;
  lVar2 = (ulonglong)uVar23 * 0xb36a80d2;
  uVar16 = (uint)lVar2;
  uVar8 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
          ) * -0x4c957f2e + uVar19 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar27 = (uint)((ulonglong)uVar7 * 0x2df45158) ^
           (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^ uVar27;
  uVar8 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
          uVar27 >> 0x18) * -0x4c957f2e + uVar23 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar19 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^ (uint)((ulonglong)uVar27 * 0x2df45158);
  uVar8 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18) ^
          uVar29 * 0x2df45158 + uVar27 * 0x2d7f954c + (int)((ulonglong)uVar27 * 0x2df45158 >> 0x20);
  uVar7 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
  lVar1 = (ulonglong)uVar11 * (ulonglong)uVar7;
  uVar27 = (uint)lVar1;
  uVar8 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
          uVar27 >> 0x18) ^
          uVar8 * uVar18 + uVar19 * uVar24 + (int)((ulonglong)uVar18 * (ulonglong)uVar19 >> 0x20);
  uVar7 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
          uVar19 >> 0x18) * uVar11 + uVar7 * uVar12 + (int)((ulonglong)lVar1 >> 0x20);
  uVar27 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ (uint)((ulonglong)uVar18 * (ulonglong)uVar19);
  uVar7 = uVar27;
  if ((uVar19 & 0x20) != 0) {
    uVar7 = uVar8;
    uVar8 = uVar27;
  }
  param_1[6] = uVar7 << (uVar19 & 0x1f) | (uVar8 >> 1) >> (~uVar19 & 0x1f);
  uVar14 = uVar14 ^ uVar6;
  uVar17 = uVar17 ^ uVar26;
  uVar6 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18;
  lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
  uVar27 = (uint)lVar1;
  uVar6 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18) * -0x4c957f2e + uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar10 = uVar17 * 0x2df45158 + uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20)
           ^ (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
             uVar27 >> 0x18) ^ uVar10;
  uVar27 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18;
  lVar1 = (ulonglong)uVar27 * 0xb36a80d2;
  uVar17 = (uint)lVar1;
  uVar9 = (uint)((ulonglong)uVar14 * 0x2df45158) ^
          (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ uVar9;
  uVar6 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) * -0x4c957f2e + uVar27 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar14 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) ^ (uint)((ulonglong)uVar9 * 0x2df45158);
  uVar6 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18) ^
          uVar10 * 0x2df45158 + uVar9 * 0x2d7f954c + (int)((ulonglong)uVar9 * 0x2df45158 >> 0x20);
  uVar10 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
  ;
  lVar1 = (ulonglong)uVar11 * (ulonglong)uVar10;
  uVar27 = (uint)lVar1;
  uVar6 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
          uVar27 >> 0x18) ^
          uVar6 * uVar18 + uVar14 * uVar24 + (int)((ulonglong)uVar18 * (ulonglong)uVar14 >> 0x20);
  uVar10 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) * uVar11 + uVar10 * uVar12 + (int)((ulonglong)lVar1 >> 0x20);
  uVar11 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) ^ (uint)((ulonglong)uVar18 * (ulonglong)uVar14);
  uVar10 = uVar11;
  if ((uVar14 & 0x20) != 0) {
    uVar10 = uVar6;
    uVar6 = uVar11;
  }
  param_1[4] = uVar10 << (uVar14 & 0x1f) | (uVar6 >> 1) >> (~uVar14 & 0x1f);
  param_1[5] = uVar6 << (uVar14 & 0x1f) | (uVar10 >> 1) >> (~uVar14 & 0x1f);
  param_1[0xb] = uVar5 << (uVar22 & 0x1f) | (uVar13 >> 1) >> (~uVar22 & 0x1f);
  param_1[9] = uVar15 << (uVar20 & 0x1f) | (uVar28 >> 1) >> (~uVar20 & 0x1f);
  param_1[7] = uVar8 << (uVar19 & 0x1f) | (uVar7 >> 1) >> (~uVar19 & 0x1f);
  return;
}

