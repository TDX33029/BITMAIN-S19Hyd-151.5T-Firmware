// FUN_01210fb4 @ 01210fb4 size=1700 calls_out=5 calls_in=0
// strings: base64 | base64url | base32 | base32hex | base16

void FUN_01210fb4(undefined4 *param_1)

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
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  puVar3 = (undefined4 *)FUN_011e4c9c();
  uVar16 = *puVar3;
  iVar18 = puVar3[1];
  puVar4 = (uint *)FUN_011e4df8();
  uVar5 = (**(code **)(iVar18 + 0xc))(uVar16);
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  uVar8 = puVar4[8];
  uVar9 = puVar4[9];
  uVar10 = puVar4[10];
  uVar11 = puVar4[0xb];
  uVar12 = puVar4[0xc];
  uVar13 = puVar4[0xd];
  uVar14 = puVar4[0xf];
  uVar17 = puVar4[2];
  uVar24 = puVar4[3];
  uVar23 = puVar4[0xe];
  iVar18 = thunk_FUN_016d4a50(0x8c);
  if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x8c);
  }
  uVar15 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18;
  lVar1 = (ulonglong)uVar15 * 0xb36a80d2;
  uVar19 = (uint)lVar1;
  uVar17 = uVar17 ^ uVar5;
  local_58 = (undefined4 *)(iVar18 + 0x80);
  *local_58 = 0xffffffff;
  *(undefined4 *)(iVar18 + 0x88) = 0xffffffff;
  *(undefined4 *)(iVar18 + 0x84) = 0xffffffff;
  uVar5 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18) * -0x4c957f2e + uVar15 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar15 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar17 * 0x2df45158);
  uVar20 = uVar15 ^ uVar23;
  uVar24 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) ^
           uVar24 * 0x2df45158 + uVar17 * 0x2d7f954c + (int)((ulonglong)uVar17 * 0x2df45158 >> 0x20)
  ;
  uVar17 = uVar24 ^ uVar14;
  uVar19 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18;
  lVar1 = (ulonglong)uVar19 * 0xb36a80d2;
  uVar5 = (uint)lVar1;
  uVar19 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18) * -0x4c957f2e + uVar19 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = uVar17 * 0x2df45158 + uVar20 * 0x2d7f954c + (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20)
          ^ (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
            uVar5 >> 0x18) ^ uVar9;
  uVar17 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
  ;
  lVar1 = (ulonglong)uVar17 * 0xb36a80d2;
  uVar26 = (uint)lVar1;
  uVar20 = (uint)((ulonglong)uVar20 * 0x2df45158) ^
           (uVar19 * 0x1000000 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) ^ uVar8;
  uVar17 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18) * -0x4c957f2e + uVar17 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar19 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
  ;
  uVar21 = (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18) ^ (uint)((ulonglong)uVar20 * 0x2df45158);
  uVar25 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
  ;
  uVar6 = ~uVar6;
  uVar5 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
          uVar26 >> 0x18) ^
          uVar5 * 0x2df45158 + uVar20 * 0x2d7f954c + (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20);
  uVar20 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
  ;
  lVar1 = (ulonglong)uVar6 * (ulonglong)uVar20;
  uVar17 = (uint)lVar1;
  uVar5 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18) ^
          uVar5 * uVar25 + uVar21 * uVar19 + (int)((ulonglong)uVar25 * (ulonglong)uVar21 >> 0x20);
  uVar7 = ~uVar7;
  uVar17 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) * uVar6 + uVar20 * uVar7 + (int)((ulonglong)lVar1 >> 0x20);
  uVar20 = (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18) ^ (uint)((ulonglong)uVar25 * (ulonglong)uVar21);
  uVar17 = uVar20;
  if ((uVar21 & 0x20) != 0) {
    uVar17 = uVar5;
    uVar5 = uVar20;
  }
  local_2c = uVar5 << (uVar21 & 0x1f) | (uVar17 >> 1) >> (~uVar21 & 0x1f);
  local_30 = uVar17 << (uVar21 & 0x1f) | (uVar5 >> 1) >> (~uVar21 & 0x1f);
  uVar5 = uVar24 ^ uVar13;
  uVar17 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
  ;
  lVar1 = (ulonglong)uVar17 * 0xb36a80d2;
  uVar26 = (uint)lVar1;
  uVar21 = uVar15 ^ uVar12;
  uVar17 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) * -0x4c957f2e + uVar17 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar20 = (uint)((ulonglong)uVar21 * 0x2df45158) ^
           (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18) ^ uVar10;
  uVar5 = uVar5 * 0x2df45158 + uVar21 * 0x2d7f954c + (int)((ulonglong)uVar21 * 0x2df45158 >> 0x20) ^
          (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
          uVar26 >> 0x18) ^ uVar11;
  uVar17 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
  ;
  lVar1 = (ulonglong)uVar17 * 0xb36a80d2;
  uVar21 = (uint)lVar1;
  uVar21 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) ^
           uVar5 * 0x2df45158 + uVar20 * 0x2d7f954c + (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20);
  uVar26 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18;
  lVar2 = (ulonglong)uVar6 * (ulonglong)uVar26;
  uVar22 = (uint)lVar2;
  uVar5 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) * -0x4c957f2e + uVar17 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar20 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar20 * 0x2df45158);
  uVar5 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) * uVar6 + uVar26 * uVar7 + (int)((ulonglong)lVar2 >> 0x20);
  uVar26 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar25 * (ulonglong)uVar20);
  uVar5 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
          uVar22 >> 0x18) ^
          uVar21 * uVar25 + uVar20 * uVar19 + (int)((ulonglong)uVar25 * (ulonglong)uVar20 >> 0x20);
  uVar17 = uVar26;
  if ((uVar20 & 0x20) != 0) {
    uVar17 = uVar5;
    uVar5 = uVar26;
  }
  local_34 = uVar5 << (uVar20 & 0x1f) | (uVar17 >> 1) >> (~uVar20 & 0x1f);
  local_38 = uVar17 << (uVar20 & 0x1f) | (uVar5 >> 1) >> (~uVar20 & 0x1f);
  uVar11 = uVar24 ^ uVar11;
  uVar5 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar17 = (uint)lVar1;
  uVar10 = uVar15 ^ uVar10;
  uVar5 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar23 = (uint)((ulonglong)uVar10 * 0x2df45158) ^
           (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ uVar23;
  uVar14 = uVar11 * 0x2df45158 + uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20)
           ^ (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
             uVar17 >> 0x18) ^ uVar14;
  uVar5 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar10 = (uint)lVar1;
  uVar10 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) ^
           uVar14 * 0x2df45158 + uVar23 * 0x2d7f954c + (int)((ulonglong)uVar23 * 0x2df45158 >> 0x20)
  ;
  uVar14 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18;
  lVar2 = (ulonglong)uVar6 * (ulonglong)uVar14;
  uVar17 = (uint)lVar2;
  uVar5 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
          uVar23 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar11 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar23 * 0x2df45158);
  uVar5 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) * uVar6 + uVar14 * uVar7 + (int)((ulonglong)lVar2 >> 0x20);
  uVar14 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ (uint)((ulonglong)uVar25 * (ulonglong)uVar11);
  uVar5 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18) ^
          uVar10 * uVar25 + uVar11 * uVar19 + (int)((ulonglong)uVar25 * (ulonglong)uVar11 >> 0x20);
  uVar10 = uVar14;
  if ((uVar11 & 0x20) != 0) {
    uVar10 = uVar5;
    uVar5 = uVar14;
  }
  local_3c = uVar5 << (uVar11 & 0x1f) | (uVar10 >> 1) >> (~uVar11 & 0x1f);
  local_40 = uVar10 << (uVar11 & 0x1f) | (uVar5 >> 1) >> (~uVar11 & 0x1f);
  uVar15 = uVar15 ^ uVar8;
  uVar24 = uVar24 ^ uVar9;
  uVar5 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
          uVar24 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar8 = (uint)lVar1;
  uVar5 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
          uVar15 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar13 = uVar24 * 0x2df45158 + uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20)
           ^ (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18) ^ uVar13;
  uVar8 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
          uVar13 >> 0x18;
  lVar1 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar10 = (uint)lVar1;
  uVar12 = (uint)((ulonglong)uVar15 * 0x2df45158) ^
           (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) ^ uVar12;
  uVar5 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar9 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar12 * 0x2df45158);
  uVar8 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18) ^
          uVar13 * 0x2df45158 + uVar12 * 0x2d7f954c + (int)((ulonglong)uVar12 * 0x2df45158 >> 0x20);
  uVar5 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
  lVar1 = (ulonglong)uVar6 * (ulonglong)uVar5;
  uVar10 = (uint)lVar1;
  uVar5 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) * uVar6 + uVar5 * uVar7 + (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar25 * (ulonglong)uVar9);
  uVar8 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18) ^
          uVar8 * uVar25 + uVar9 * uVar19 + (int)((ulonglong)uVar25 * (ulonglong)uVar9 >> 0x20);
  uVar6 = uVar8;
  if ((uVar9 & 0x20) != 0) {
    uVar6 = uVar5;
    uVar5 = uVar8;
  }
  local_44 = uVar6 << (uVar9 & 0x1f) | (uVar5 >> 1) >> (~uVar9 & 0x1f);
  local_48 = uVar5 << (uVar9 & 0x1f) | (uVar6 >> 1) >> (~uVar9 & 0x1f);
  local_4c = 0;
  local_50 = 7;
  local_54 = 7;
  FUN_012117f8(&local_58,"base64",6,FUN_012116d0,FUN_0121172c);
  FUN_012117f8(&local_58,"base64url",9,FUN_01211ae8,FUN_01211b44);
  FUN_012117f8(&local_58,"base32",6,FUN_01211c10,FUN_01211c6c);
  FUN_012117f8(&local_58,"base32hex",9,FUN_01211d38,FUN_01211d94);
  FUN_012117f8(&local_58,"base16",6,FUN_01211e60,FUN_01211f64);
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[2] = local_50;
  param_1[3] = local_4c;
  param_1[4] = local_48;
  param_1[5] = local_44;
  param_1[6] = local_40;
  param_1[7] = local_3c;
  param_1[8] = local_38;
  param_1[9] = local_34;
  param_1[10] = local_30;
  param_1[0xb] = local_2c;
  return;
}

