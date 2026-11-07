// FUN_01160954 @ 01160954 size=1640 calls_out=3 calls_in=2
// strings: 

void FUN_01160954(undefined4 *param_1,undefined4 *param_2,uint *param_3,int param_4)

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
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
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
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  puVar3 = (undefined4 *)FUN_011e4c9c();
  uVar11 = *puVar3;
  iVar13 = puVar3[1];
  puVar4 = (uint *)FUN_011e4df8();
  uVar5 = (**(code **)(iVar13 + 0xc))(uVar11);
  uVar6 = puVar4[1];
  uVar22 = *puVar4;
  uVar8 = puVar4[3];
  uVar5 = puVar4[2] ^ uVar5;
  uVar20 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
  ;
  lVar1 = (ulonglong)uVar20 * 0xb36a80d2;
  uVar15 = (uint)lVar1;
  uVar20 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
  uVar12 = uVar7 ^ puVar4[0xe];
  uVar20 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) ^
           uVar8 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
  uVar5 = uVar20 ^ puVar4[0xf];
  uVar8 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar1 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar15 = (uint)lVar1;
  uVar8 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar15 = uVar5 * 0x2df45158 + uVar12 * 0x2d7f954c + (int)((ulonglong)uVar12 * 0x2df45158 >> 0x20)
           ^ (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18) ^ puVar4[9];
  uVar9 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
          uVar15 >> 0x18;
  uVar24 = uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
           uVar22 >> 0x18;
  lVar1 = (ulonglong)uVar9 * 0xb36a80d2;
  uVar16 = (uint)lVar1;
  uVar5 = (uint)((ulonglong)uVar12 * 0x2df45158) ^
          (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
          uVar8 >> 0x18) ^ puVar4[8];
  uVar8 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
          ) * -0x4c957f2e + uVar9 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar12 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
  ;
  uVar9 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
          uVar8 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
  uVar22 = ~uVar22;
  uVar5 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18) ^
          uVar15 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
  uVar8 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  uVar6 = ~uVar6;
  lVar1 = (ulonglong)uVar22 * (ulonglong)uVar8;
  uVar15 = (uint)lVar1;
  uVar5 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
          uVar15 >> 0x18) ^
          uVar5 * uVar12 + uVar9 * uVar24 + (int)((ulonglong)uVar12 * (ulonglong)uVar9 >> 0x20);
  uVar8 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) * uVar22 + uVar8 * uVar6 + (int)((ulonglong)lVar1 >> 0x20);
  uVar15 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) ^ (uint)((ulonglong)uVar12 * (ulonglong)uVar9);
  uVar8 = uVar15;
  if ((uVar9 & 0x20) != 0) {
    uVar8 = uVar5;
    uVar5 = uVar15;
  }
  uVar15 = uVar7 ^ puVar4[0xc];
  uVar16 = uVar20 ^ puVar4[0xd];
  uVar14 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18;
  lVar1 = (ulonglong)uVar14 * 0xb36a80d2;
  uVar17 = (uint)lVar1;
  uVar10 = uVar16 * 0x2df45158 + uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20)
           ^ (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
             uVar17 >> 0x18) ^ puVar4[0xb];
  uVar18 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18;
  lVar2 = (ulonglong)uVar18 * 0xb36a80d2;
  uVar17 = (uint)lVar2;
  uVar16 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) * -0x4c957f2e + uVar14 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar15 = (uint)((ulonglong)uVar15 * 0x2df45158) ^
           (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18) ^ puVar4[10];
  uVar16 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) * -0x4c957f2e + uVar18 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar14 = (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18) ^ (uint)((ulonglong)uVar15 * 0x2df45158);
  uVar15 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18) ^
           uVar10 * 0x2df45158 + uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20)
  ;
  uVar16 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18;
  lVar1 = (ulonglong)uVar22 * (ulonglong)uVar16;
  uVar17 = (uint)lVar1;
  uVar15 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18) ^
           uVar15 * uVar12 + uVar14 * uVar24 + (int)((ulonglong)uVar12 * (ulonglong)uVar14 >> 0x20);
  uVar16 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) * uVar22 + uVar16 * uVar6 + (int)((ulonglong)lVar1 >> 0x20);
  uVar17 = (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18) ^ (uint)((ulonglong)uVar12 * (ulonglong)uVar14);
  uVar16 = uVar17;
  if ((uVar14 & 0x20) != 0) {
    uVar16 = uVar15;
    uVar15 = uVar17;
  }
  uVar17 = uVar7 ^ puVar4[10];
  uVar18 = uVar20 ^ puVar4[0xb];
  uVar21 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18;
  lVar1 = (ulonglong)uVar21 * 0xb36a80d2;
  uVar10 = (uint)lVar1;
  uVar18 = uVar18 * 0x2df45158 + uVar17 * 0x2d7f954c + (int)((ulonglong)uVar17 * 0x2df45158 >> 0x20)
           ^ (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) ^ puVar4[0xf];
  uVar19 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18;
  lVar2 = (ulonglong)uVar19 * 0xb36a80d2;
  uVar23 = (uint)lVar2;
  uVar10 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18) * -0x4c957f2e + uVar21 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar17 = (uint)((ulonglong)uVar17 * 0x2df45158) ^
           (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) ^ puVar4[0xe];
  uVar10 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18) * -0x4c957f2e + uVar19 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar19 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) ^ (uint)((ulonglong)uVar17 * 0x2df45158);
  uVar17 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
           uVar23 >> 0x18) ^
           uVar18 * 0x2df45158 + uVar17 * 0x2d7f954c + (int)((ulonglong)uVar17 * 0x2df45158 >> 0x20)
  ;
  uVar10 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18;
  lVar1 = (ulonglong)uVar22 * (ulonglong)uVar10;
  uVar18 = (uint)lVar1;
  uVar17 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18) ^
           uVar17 * uVar12 + uVar19 * uVar24 + (int)((ulonglong)uVar12 * (ulonglong)uVar19 >> 0x20);
  uVar10 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) * uVar22 + uVar10 * uVar6 + (int)((ulonglong)lVar1 >> 0x20);
  uVar18 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) ^ (uint)((ulonglong)uVar12 * (ulonglong)uVar19);
  uVar10 = uVar18;
  if ((uVar19 & 0x20) != 0) {
    uVar10 = uVar17;
    uVar17 = uVar18;
  }
  uVar7 = uVar7 ^ puVar4[8];
  uVar20 = uVar20 ^ puVar4[9];
  uVar18 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18;
  lVar1 = (ulonglong)uVar18 * 0xb36a80d2;
  uVar21 = (uint)lVar1;
  uVar18 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) * -0x4c957f2e + uVar18 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar23 = uVar20 * 0x2df45158 + uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20) ^
           (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) ^ puVar4[0xd];
  uVar21 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
           uVar23 >> 0x18;
  lVar1 = (ulonglong)uVar21 * 0xb36a80d2;
  uVar25 = (uint)lVar1;
  uVar20 = (uint)((ulonglong)uVar7 * 0x2df45158) ^
           (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18) ^ puVar4[0xc];
  uVar7 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) * -0x4c957f2e + uVar21 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar18 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18) ^ (uint)((ulonglong)uVar20 * 0x2df45158);
  uVar20 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18) ^
           uVar23 * 0x2df45158 + uVar20 * 0x2d7f954c + (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20)
  ;
  uVar7 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18;
  lVar1 = (ulonglong)uVar22 * (ulonglong)uVar7;
  uVar21 = (uint)lVar1;
  uVar20 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) ^
           uVar20 * uVar12 + uVar18 * uVar24 + (int)((ulonglong)uVar12 * (ulonglong)uVar18 >> 0x20);
  uVar6 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
          uVar18 >> 0x18) * uVar22 + uVar7 * uVar6 + (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ (uint)((ulonglong)uVar12 * (ulonglong)uVar18);
  uVar6 = uVar7;
  if ((uVar18 & 0x20) != 0) {
    uVar6 = uVar20;
    uVar20 = uVar7;
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = param_2[4];
  uStack_54 = param_2[5];
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  uStack_48 = param_2[8];
  do {
    iVar13 = FUN_00f45584(&local_68);
    if (iVar13 == 0) {
      *param_1 = &DAT_005674cc;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = uVar6 << (uVar18 & 0x1f) | (uVar20 >> 1) >> (~uVar18 & 0x1f);
      param_1[5] = uVar20 << (uVar18 & 0x1f) | (uVar6 >> 1) >> (~uVar18 & 0x1f);
      param_1[6] = uVar10 << (uVar19 & 0x1f) | (uVar17 >> 1) >> (~uVar19 & 0x1f);
      param_1[7] = uVar17 << (uVar19 & 0x1f) | (uVar10 >> 1) >> (~uVar19 & 0x1f);
      param_1[8] = uVar16 << (uVar14 & 0x1f) | (uVar15 >> 1) >> (~uVar14 & 0x1f);
      param_1[9] = uVar15 << (uVar14 & 0x1f) | (uVar16 >> 1) >> (~uVar14 & 0x1f);
      param_1[10] = uVar8 << (uVar9 & 0x1f) | (uVar5 >> 1) >> (~uVar9 & 0x1f);
      param_1[0xb] = uVar5 << (uVar9 & 0x1f) | (uVar8 >> 1) >> (~uVar9 & 0x1f);
      return;
    }
  } while (param_3 == param_3 + param_4 * 0x19);
  iVar13 = 4;
  if (2 < *param_3) {
    iVar13 = *param_3 - 3;
  }
                    /* WARNING: Could not recover jumptable at 0x01160f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01160fa0 + *(int *)(&DAT_01160fa0 + iVar13 * 4)))
            (*(int *)(&DAT_01160fa0 + iVar13 * 4),param_3);
  return;
}

