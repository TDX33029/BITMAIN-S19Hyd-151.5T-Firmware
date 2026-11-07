// FUN_011685d0 @ 011685d0 size=1660 calls_out=3 calls_in=2
// strings: 

void FUN_011685d0(undefined4 *param_1,undefined4 *param_2,int *param_3,int param_4)

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
  undefined4 uVar10;
  uint uVar11;
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
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  puVar3 = (undefined4 *)FUN_011e4c9c();
  uVar10 = *puVar3;
  iVar13 = puVar3[1];
  puVar4 = (uint *)FUN_011e4df8();
  uVar5 = (**(code **)(iVar13 + 0xc))(uVar10);
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  uVar21 = puVar4[3];
  uVar5 = puVar4[2] ^ uVar5;
  uVar18 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18;
  lVar1 = (ulonglong)uVar18 * 0xb36a80d2;
  uVar15 = (uint)lVar1;
  uVar18 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) * -0x4c957f2e + uVar18 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar11 = (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
  uVar14 = uVar11 ^ puVar4[0xe];
  uVar15 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) ^
           uVar21 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
  uVar5 = uVar15 ^ puVar4[0xf];
  uVar18 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
  ;
  lVar1 = (ulonglong)uVar18 * 0xb36a80d2;
  uVar21 = (uint)lVar1;
  uVar18 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) * -0x4c957f2e + uVar18 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar21 = uVar5 * 0x2df45158 + uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20)
           ^ (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
             uVar21 >> 0x18) ^ puVar4[9];
  uVar8 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
          uVar21 >> 0x18;
  lVar1 = (ulonglong)uVar8 * 0xb36a80d2;
  uVar20 = (uint)lVar1;
  uVar5 = (uint)((ulonglong)uVar14 * 0x2df45158) ^
          (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
          uVar18 >> 0x18) ^ puVar4[8];
  uVar18 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar22 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
  ;
  uVar14 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
  ;
  uVar8 = (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
          uVar18 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
  uVar5 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
          uVar20 >> 0x18) ^
          uVar21 * 0x2df45158 + uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
  uVar6 = ~uVar6;
  uVar18 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
  ;
  uVar7 = ~uVar7;
  lVar1 = (ulonglong)uVar6 * (ulonglong)uVar18;
  uVar21 = (uint)lVar1;
  uVar5 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
          uVar21 >> 0x18) ^
          uVar5 * uVar22 + uVar8 * uVar14 + (int)((ulonglong)uVar22 * (ulonglong)uVar8 >> 0x20);
  uVar18 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18) * uVar6 + uVar18 * uVar7 + (int)((ulonglong)lVar1 >> 0x20);
  uVar21 = (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18) ^ (uint)((ulonglong)uVar22 * (ulonglong)uVar8);
  uVar18 = uVar21;
  if ((uVar8 & 0x20) != 0) {
    uVar18 = uVar5;
    uVar5 = uVar21;
  }
  uVar21 = uVar11 ^ puVar4[0xc];
  uVar20 = uVar15 ^ puVar4[0xd];
  uVar12 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18;
  lVar1 = (ulonglong)uVar12 * 0xb36a80d2;
  uVar16 = (uint)lVar1;
  uVar9 = uVar20 * 0x2df45158 + uVar21 * 0x2d7f954c + (int)((ulonglong)uVar21 * 0x2df45158 >> 0x20)
          ^ (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
            uVar16 >> 0x18) ^ puVar4[0xb];
  uVar17 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
  ;
  lVar2 = (ulonglong)uVar17 * 0xb36a80d2;
  uVar16 = (uint)lVar2;
  uVar20 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) * -0x4c957f2e + uVar12 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar21 = (uint)((ulonglong)uVar21 * 0x2df45158) ^
           (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18) ^ puVar4[10];
  uVar20 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) * -0x4c957f2e + uVar17 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar12 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18) ^ (uint)((ulonglong)uVar21 * 0x2df45158);
  uVar21 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18) ^
           uVar9 * 0x2df45158 + uVar21 * 0x2d7f954c + (int)((ulonglong)uVar21 * 0x2df45158 >> 0x20);
  uVar20 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18;
  lVar1 = (ulonglong)uVar6 * (ulonglong)uVar20;
  uVar16 = (uint)lVar1;
  uVar20 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18) * uVar6 + uVar20 * uVar7 + (int)((ulonglong)lVar1 >> 0x20);
  uVar21 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18) ^
           uVar21 * uVar22 + uVar12 * uVar14 + (int)((ulonglong)uVar22 * (ulonglong)uVar12 >> 0x20);
  uVar16 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18) ^ (uint)((ulonglong)uVar22 * (ulonglong)uVar12);
  uVar20 = uVar16;
  if ((uVar12 & 0x20) != 0) {
    uVar20 = uVar21;
    uVar21 = uVar16;
  }
  uVar16 = uVar11 ^ puVar4[10];
  uVar17 = uVar15 ^ puVar4[0xb];
  uVar19 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18;
  lVar1 = (ulonglong)uVar19 * 0xb36a80d2;
  uVar9 = (uint)lVar1;
  uVar25 = uVar17 * 0x2df45158 + uVar16 * 0x2d7f954c + (int)((ulonglong)uVar16 * 0x2df45158 >> 0x20)
           ^ (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
             uVar9 >> 0x18) ^ puVar4[0xf];
  uVar17 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18;
  lVar2 = (ulonglong)uVar17 * 0xb36a80d2;
  uVar23 = (uint)lVar2;
  uVar9 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18) * -0x4c957f2e + uVar19 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar16 = (uint)((ulonglong)uVar16 * 0x2df45158) ^
           (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) ^ puVar4[0xe];
  uVar9 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18) * -0x4c957f2e + uVar17 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar19 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) ^ (uint)((ulonglong)uVar16 * 0x2df45158);
  uVar16 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
           uVar23 >> 0x18) ^
           uVar25 * 0x2df45158 + uVar16 * 0x2d7f954c + (int)((ulonglong)uVar16 * 0x2df45158 >> 0x20)
  ;
  uVar9 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18;
  lVar1 = (ulonglong)uVar6 * (ulonglong)uVar9;
  uVar17 = (uint)lVar1;
  uVar16 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18) ^
           uVar16 * uVar22 + uVar19 * uVar14 + (int)((ulonglong)uVar22 * (ulonglong)uVar19 >> 0x20);
  uVar9 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
          uVar19 >> 0x18) * uVar6 + uVar9 * uVar7 + (int)((ulonglong)lVar1 >> 0x20);
  uVar17 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) ^ (uint)((ulonglong)uVar22 * (ulonglong)uVar19);
  uVar9 = uVar17;
  if ((uVar19 & 0x20) != 0) {
    uVar9 = uVar16;
    uVar16 = uVar17;
  }
  uVar11 = uVar11 ^ puVar4[8];
  uVar15 = uVar15 ^ puVar4[9];
  uVar17 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18;
  lVar1 = (ulonglong)uVar17 * 0xb36a80d2;
  uVar23 = (uint)lVar1;
  uVar17 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18) * -0x4c957f2e + uVar17 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar25 = uVar15 * 0x2df45158 + uVar11 * 0x2d7f954c + (int)((ulonglong)uVar11 * 0x2df45158 >> 0x20)
           ^ (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
             uVar23 >> 0x18) ^ puVar4[0xd];
  uVar23 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18;
  lVar1 = (ulonglong)uVar23 * 0xb36a80d2;
  uVar24 = (uint)lVar1;
  uVar15 = (uint)((ulonglong)uVar11 * 0x2df45158) ^
           (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18) ^ puVar4[0xc];
  uVar11 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) * -0x4c957f2e + uVar23 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar17 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18) ^ (uint)((ulonglong)uVar15 * 0x2df45158);
  uVar15 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18) ^
           uVar25 * 0x2df45158 + uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20)
  ;
  uVar11 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18;
  lVar1 = (ulonglong)uVar6 * (ulonglong)uVar11;
  uVar23 = (uint)lVar1;
  uVar15 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
           uVar23 >> 0x18) ^
           uVar15 * uVar22 + uVar17 * uVar14 + (int)((ulonglong)uVar22 * (ulonglong)uVar17 >> 0x20);
  uVar6 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18) * uVar6 + uVar11 * uVar7 + (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ (uint)((ulonglong)uVar22 * (ulonglong)uVar17);
  uVar6 = uVar7;
  if ((uVar17 & 0x20) != 0) {
    uVar6 = uVar15;
    uVar15 = uVar7;
  }
  local_60 = *param_2;
  uStack_5c = param_2[1];
  uStack_58 = param_2[2];
  uStack_54 = param_2[3];
  local_50 = param_2[4];
  uStack_4c = param_2[5];
  uStack_48 = param_2[6];
  uStack_44 = param_2[7];
  uStack_40 = param_2[8];
  do {
    iVar13 = FUN_00f45584(&local_60);
    if (iVar13 == 0) {
      *param_1 = &DAT_005674cc;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = uVar6 << (uVar17 & 0x1f) | (uVar15 >> 1) >> (~uVar17 & 0x1f);
      param_1[5] = uVar15 << (uVar17 & 0x1f) | (uVar6 >> 1) >> (~uVar17 & 0x1f);
      param_1[6] = uVar9 << (uVar19 & 0x1f) | (uVar16 >> 1) >> (~uVar19 & 0x1f);
      param_1[7] = uVar16 << (uVar19 & 0x1f) | (uVar9 >> 1) >> (~uVar19 & 0x1f);
      param_1[8] = uVar20 << (uVar12 & 0x1f) | (uVar21 >> 1) >> (~uVar12 & 0x1f);
      param_1[9] = uVar21 << (uVar12 & 0x1f) | (uVar20 >> 1) >> (~uVar12 & 0x1f);
      param_1[10] = uVar18 << (uVar8 & 0x1f) | (uVar5 >> 1) >> (~uVar8 & 0x1f);
      param_1[0xb] = uVar5 << (uVar8 & 0x1f) | (uVar18 >> 1) >> (~uVar8 & 0x1f);
      return;
    }
  } while (param_3 == param_3 + param_4 * 10);
                    /* WARNING: Could not recover jumptable at 0x01168c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01168c30 + *(int *)(&DAT_01168c30 + *param_3 * 4)))(param_3);
  return;
}

