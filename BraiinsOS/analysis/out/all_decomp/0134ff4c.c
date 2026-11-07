// FUN_0134ff4c @ 0134ff4c size=1484 calls_out=2 calls_in=1
// strings: 

void FUN_0134ff4c(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint *puVar3;
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
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  
  puVar2 = (undefined4 *)FUN_01351d44();
  uVar15 = *puVar2;
  iVar17 = puVar2[1];
  puVar3 = (uint *)FUN_011e4df8();
  uVar4 = (**(code **)(iVar17 + 0xc))(uVar15);
  *param_1 = &DAT_005674cc;
  *(undefined1 *)(param_1 + 0xc) = 0;
  uVar6 = puVar3[3];
  param_1[3] = 0;
  uVar18 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
  ;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = (ulonglong)uVar18 * 0xb36a80d2;
  uVar23 = (uint)lVar1;
  uVar4 = puVar3[2] ^ uVar4;
  uVar18 = (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
           uVar4 >> 0x18) * -0x4c957f2e + uVar18 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar25 = puVar3[1];
  uVar27 = *puVar3;
  uVar12 = (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
  uVar19 = puVar3[0xe];
  uVar16 = uVar12 ^ uVar19;
  uVar7 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
          uVar23 >> 0x18) ^
          uVar6 * 0x2df45158 + uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
  uVar18 = puVar3[0xf];
  uVar4 = uVar7 ^ uVar18;
  uVar10 = puVar3[9];
  uVar6 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
  lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
  uVar23 = (uint)lVar1;
  uVar6 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18) * -0x4c957f2e + uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar23 = uVar4 * 0x2df45158 + uVar16 * 0x2d7f954c + (int)((ulonglong)uVar16 * 0x2df45158 >> 0x20)
           ^ (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
             uVar23 >> 0x18) ^ uVar10;
  uVar20 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
           uVar23 >> 0x18;
  lVar1 = (ulonglong)uVar20 * 0xb36a80d2;
  uVar24 = (uint)lVar1;
  uVar21 = puVar3[8];
  uVar4 = (uint)((ulonglong)uVar16 * 0x2df45158) ^
          (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ uVar21;
  uVar22 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18;
  uVar6 = (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18
          ) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar20 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
  uVar16 = uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
           uVar27 >> 0x18;
  uVar27 = ~uVar27;
  uVar25 = ~uVar25;
  uVar4 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
          uVar24 >> 0x18) ^
          uVar23 * 0x2df45158 + uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
  uVar6 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
  lVar1 = (ulonglong)uVar27 * (ulonglong)uVar6;
  uVar23 = (uint)lVar1;
  uVar6 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) * uVar27 + uVar6 * uVar25 + (int)((ulonglong)lVar1 >> 0x20);
  uVar4 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
          uVar23 >> 0x18) ^
          uVar4 * uVar22 + uVar20 * uVar16 + (int)((ulonglong)uVar22 * (ulonglong)uVar20 >> 0x20);
  uVar23 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) ^ (uint)((ulonglong)uVar22 * (ulonglong)uVar20);
  uVar6 = uVar23;
  if ((uVar20 & 0x20) != 0) {
    uVar6 = uVar4;
    uVar4 = uVar23;
  }
  param_1[10] = uVar6 << (uVar20 & 0x1f) | (uVar4 >> 1) >> (~uVar20 & 0x1f);
  uVar5 = puVar3[0xc];
  uVar24 = uVar12 ^ uVar5;
  uVar9 = puVar3[0xd];
  uVar23 = uVar7 ^ uVar9;
  uVar11 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
           uVar23 >> 0x18;
  lVar1 = (ulonglong)uVar11 * 0xb36a80d2;
  uVar13 = (uint)lVar1;
  uVar8 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
          uVar24 >> 0x18) * -0x4c957f2e + uVar11 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar11 = puVar3[0xb];
  uVar14 = uVar23 * 0x2df45158 + uVar24 * 0x2d7f954c + (int)((ulonglong)uVar24 * 0x2df45158 >> 0x20)
           ^ (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
             uVar13 >> 0x18) ^ uVar11;
  uVar23 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18;
  lVar1 = (ulonglong)uVar23 * 0xb36a80d2;
  uVar26 = (uint)lVar1;
  uVar13 = puVar3[10];
  uVar24 = (uint)((ulonglong)uVar24 * 0x2df45158) ^
           (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^ uVar13;
  uVar23 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18) * -0x4c957f2e + uVar23 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
          uVar23 >> 0x18) ^ (uint)((ulonglong)uVar24 * 0x2df45158);
  uVar23 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
           uVar26 >> 0x18) ^
           uVar14 * 0x2df45158 + uVar24 * 0x2d7f954c + (int)((ulonglong)uVar24 * 0x2df45158 >> 0x20)
  ;
  uVar24 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
           uVar23 >> 0x18;
  lVar1 = (ulonglong)uVar27 * (ulonglong)uVar24;
  uVar14 = (uint)lVar1;
  uVar23 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) ^
           uVar23 * uVar22 + uVar8 * uVar16 + (int)((ulonglong)uVar22 * (ulonglong)uVar8 >> 0x20);
  uVar24 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) * uVar27 + uVar24 * uVar25 + (int)((ulonglong)lVar1 >> 0x20);
  uVar14 = (uVar24 * 0x1000000 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18) ^ (uint)((ulonglong)uVar22 * (ulonglong)uVar8);
  uVar24 = uVar14;
  if ((uVar8 & 0x20) != 0) {
    uVar24 = uVar23;
    uVar23 = uVar14;
  }
  param_1[8] = uVar24 << (uVar8 & 0x1f) | (uVar23 >> 1) >> (~uVar8 & 0x1f);
  uVar13 = uVar12 ^ uVar13;
  uVar11 = uVar7 ^ uVar11;
  uVar14 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18;
  lVar1 = (ulonglong)uVar14 * 0xb36a80d2;
  uVar26 = (uint)lVar1;
  uVar14 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18) * -0x4c957f2e + uVar14 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar18 = uVar11 * 0x2df45158 + uVar13 * 0x2d7f954c + (int)((ulonglong)uVar13 * 0x2df45158 >> 0x20)
           ^ (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
             uVar26 >> 0x18) ^ uVar18;
  uVar11 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18;
  lVar1 = (ulonglong)uVar11 * 0xb36a80d2;
  uVar26 = (uint)lVar1;
  uVar19 = (uint)((ulonglong)uVar13 * 0x2df45158) ^
           (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) ^ uVar19;
  uVar11 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) * -0x4c957f2e + uVar11 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar13 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18) ^ (uint)((ulonglong)uVar19 * 0x2df45158);
  uVar18 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
           uVar26 >> 0x18) ^
           uVar18 * 0x2df45158 + uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20)
  ;
  uVar19 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18;
  lVar1 = (ulonglong)uVar27 * (ulonglong)uVar19;
  uVar11 = (uint)lVar1;
  uVar18 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18) ^
           uVar18 * uVar22 + uVar13 * uVar16 + (int)((ulonglong)uVar22 * (ulonglong)uVar13 >> 0x20);
  uVar19 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18) * uVar27 + uVar19 * uVar25 + (int)((ulonglong)lVar1 >> 0x20);
  uVar11 = (uVar19 * 0x1000000 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) ^ (uint)((ulonglong)uVar22 * (ulonglong)uVar13);
  uVar19 = uVar11;
  if ((uVar13 & 0x20) != 0) {
    uVar19 = uVar18;
    uVar18 = uVar11;
  }
  param_1[6] = uVar19 << (uVar13 & 0x1f) | (uVar18 >> 1) >> (~uVar13 & 0x1f);
  uVar12 = uVar12 ^ uVar21;
  uVar7 = uVar7 ^ uVar10;
  uVar10 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
  ;
  lVar1 = (ulonglong)uVar10 * 0xb36a80d2;
  uVar21 = (uint)lVar1;
  uVar10 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) * -0x4c957f2e + uVar10 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar9 = uVar7 * 0x2df45158 + uVar12 * 0x2d7f954c + (int)((ulonglong)uVar12 * 0x2df45158 >> 0x20) ^
          (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
          uVar21 >> 0x18) ^ uVar9;
  uVar7 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18;
  lVar1 = (ulonglong)uVar7 * 0xb36a80d2;
  uVar21 = (uint)lVar1;
  uVar5 = (uint)((ulonglong)uVar12 * 0x2df45158) ^
          (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18) ^ uVar5;
  uVar7 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
          ) * -0x4c957f2e + uVar7 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar12 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
  uVar7 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
          uVar21 >> 0x18) ^
          uVar9 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
  uVar10 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
  ;
  lVar1 = (ulonglong)uVar27 * (ulonglong)uVar10;
  uVar21 = (uint)lVar1;
  uVar7 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
          uVar21 >> 0x18) ^
          uVar7 * uVar22 + uVar12 * uVar16 + (int)((ulonglong)uVar22 * (ulonglong)uVar12 >> 0x20);
  uVar25 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) * uVar27 + uVar10 * uVar25 + (int)((ulonglong)lVar1 >> 0x20);
  uVar10 = (uVar25 * 0x1000000 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18) ^ (uint)((ulonglong)uVar22 * (ulonglong)uVar12);
  uVar25 = uVar10;
  if ((uVar12 & 0x20) != 0) {
    uVar25 = uVar7;
    uVar7 = uVar10;
  }
  param_1[4] = uVar25 << (uVar12 & 0x1f) | (uVar7 >> 1) >> (~uVar12 & 0x1f);
  param_1[0xb] = uVar4 << (uVar20 & 0x1f) | (uVar6 >> 1) >> (~uVar20 & 0x1f);
  param_1[9] = uVar23 << (uVar8 & 0x1f) | (uVar24 >> 1) >> (~uVar8 & 0x1f);
  param_1[7] = uVar18 << (uVar13 & 0x1f) | (uVar19 >> 1) >> (~uVar13 & 0x1f);
  param_1[5] = uVar7 << (uVar12 & 0x1f) | (uVar25 >> 1) >> (~uVar12 & 0x1f);
  return;
}

