// FUN_005ebd80 @ 005ebd80 size=1444 calls_out=0 calls_in=1
// strings: 

void FUN_005ebd80(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,uint *param_7,uint param_8)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
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
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  uVar3 = param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
          param_6 >> 0x18;
  lVar1 = (ulonglong)uVar3 * 0xb36a80d2;
  uVar21 = (uint)lVar1;
  param_5 = param_5 ^ param_8;
  uVar3 = (param_5 << 0x18 | (param_5 >> 8 & 0xff) << 0x10 | (param_5 >> 0x10 & 0xff) << 8 |
          param_5 >> 0x18) * -0x4c957f2e + uVar3 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar4 = (uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
          uVar3 >> 0x18) ^ (uint)((ulonglong)param_5 * 0x2df45158);
  uVar19 = param_7[6];
  uVar20 = uVar4 ^ uVar19;
  uVar5 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
          uVar21 >> 0x18) ^
          param_6 * 0x2df45158 +
          param_5 * 0x2d7f954c + (int)((ulonglong)param_5 * 0x2df45158 >> 0x20);
  uVar16 = param_7[7];
  uVar21 = uVar5 ^ uVar16;
  uVar17 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18;
  uVar10 = param_7[2];
  lVar1 = (ulonglong)uVar17 * 0xb36a80d2;
  uVar3 = (uint)lVar1;
  uVar11 = param_7[3];
  uVar6 = param_7[1];
  uVar17 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18) * -0x4c957f2e + uVar17 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar12 = *param_7;
  uVar22 = uVar21 * 0x2df45158 + uVar20 * 0x2d7f954c + (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20)
           ^ (uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18) ^ uVar6;
  uVar3 = uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
          uVar22 >> 0x18;
  lVar1 = (ulonglong)uVar3 * 0xb36a80d2;
  uVar21 = (uint)lVar1;
  uVar17 = (uint)((ulonglong)uVar20 * 0x2df45158) ^
           (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18) ^ uVar12;
  uVar20 = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
           param_3 >> 0x18;
  uVar3 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
          uVar17 >> 0x18) * -0x4c957f2e + uVar3 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar13 = (uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
           uVar3 >> 0x18) ^ (uint)((ulonglong)uVar17 * 0x2df45158);
  uVar23 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
           param_4 >> 0x18;
  param_3 = ~param_3;
  uVar21 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) ^
           uVar22 * 0x2df45158 + uVar17 * 0x2d7f954c + (int)((ulonglong)uVar17 * 0x2df45158 >> 0x20)
  ;
  uVar17 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18;
  lVar1 = (ulonglong)param_3 * (ulonglong)uVar17;
  uVar3 = (uint)lVar1;
  uVar3 = (uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18
          ) ^ uVar21 * uVar23 +
              uVar13 * uVar20 + (int)((ulonglong)uVar23 * (ulonglong)uVar13 >> 0x20);
  param_4 = ~param_4;
  uVar21 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18) * param_3 + uVar17 * param_4 + (int)((ulonglong)lVar1 >> 0x20);
  uVar17 = (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) ^ (uint)((ulonglong)uVar23 * (ulonglong)uVar13);
  uVar21 = uVar17;
  if ((uVar13 & 0x20) != 0) {
    uVar21 = uVar3;
    uVar3 = uVar17;
  }
  param_1[6] = uVar21 << (uVar13 & 0x1f) | (uVar3 >> 1) >> (~uVar13 & 0x1f);
  uVar7 = param_7[4];
  uVar17 = uVar4 ^ uVar7;
  uVar8 = param_7[5];
  uVar22 = uVar5 ^ uVar8;
  uVar9 = uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
          uVar22 >> 0x18;
  lVar1 = (ulonglong)uVar9 * 0xb36a80d2;
  uVar14 = (uint)lVar1;
  uVar15 = uVar22 * 0x2df45158 + uVar17 * 0x2d7f954c + (int)((ulonglong)uVar17 * 0x2df45158 >> 0x20)
           ^ (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
             uVar14 >> 0x18) ^ uVar11;
  uVar18 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18;
  lVar2 = (ulonglong)uVar18 * 0xb36a80d2;
  uVar14 = (uint)lVar2;
  uVar22 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18) * -0x4c957f2e + uVar9 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar17 = (uint)((ulonglong)uVar17 * 0x2df45158) ^
           (uVar22 * 0x1000000 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
           uVar22 >> 0x18) ^ uVar10;
  uVar22 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18) * -0x4c957f2e + uVar18 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar9 = (uVar22 * 0x1000000 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
          uVar22 >> 0x18) ^ (uint)((ulonglong)uVar17 * 0x2df45158);
  uVar17 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) ^
           uVar15 * 0x2df45158 + uVar17 * 0x2d7f954c + (int)((ulonglong)uVar17 * 0x2df45158 >> 0x20)
  ;
  uVar22 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18;
  lVar1 = (ulonglong)param_3 * (ulonglong)uVar22;
  uVar14 = (uint)lVar1;
  uVar17 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) ^
           uVar17 * uVar23 + uVar9 * uVar20 + (int)((ulonglong)uVar23 * (ulonglong)uVar9 >> 0x20);
  uVar22 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) * param_3 + uVar22 * param_4 + (int)((ulonglong)lVar1 >> 0x20);
  uVar14 = (uVar22 * 0x1000000 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
           uVar22 >> 0x18) ^ (uint)((ulonglong)uVar23 * (ulonglong)uVar9);
  uVar22 = uVar14;
  if ((uVar9 & 0x20) != 0) {
    uVar22 = uVar17;
    uVar17 = uVar14;
  }
  param_1[4] = uVar22 << (uVar9 & 0x1f) | (uVar17 >> 1) >> (~uVar9 & 0x1f);
  uVar10 = uVar4 ^ uVar10;
  uVar11 = uVar5 ^ uVar11;
  uVar14 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18;
  lVar1 = (ulonglong)uVar14 * 0xb36a80d2;
  uVar15 = (uint)lVar1;
  uVar14 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) * -0x4c957f2e + uVar14 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar16 = uVar11 * 0x2df45158 + uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20)
           ^ (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18) ^ uVar16;
  uVar11 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18;
  lVar1 = (ulonglong)uVar11 * 0xb36a80d2;
  uVar15 = (uint)lVar1;
  uVar19 = (uint)((ulonglong)uVar10 * 0x2df45158) ^
           (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) ^ uVar19;
  uVar10 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) * -0x4c957f2e + uVar11 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar11 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) ^ (uint)((ulonglong)uVar19 * 0x2df45158);
  uVar10 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18) ^
           uVar16 * 0x2df45158 + uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20)
  ;
  uVar19 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18;
  lVar1 = (ulonglong)param_3 * (ulonglong)uVar19;
  uVar16 = (uint)lVar1;
  uVar10 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18) ^
           uVar10 * uVar23 + uVar11 * uVar20 + (int)((ulonglong)uVar23 * (ulonglong)uVar11 >> 0x20);
  uVar19 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18) * param_3 + uVar19 * param_4 + (int)((ulonglong)lVar1 >> 0x20);
  uVar16 = (uVar19 * 0x1000000 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18) ^ (uint)((ulonglong)uVar23 * (ulonglong)uVar11);
  uVar19 = uVar16;
  if ((uVar11 & 0x20) != 0) {
    uVar19 = uVar10;
    uVar10 = uVar16;
  }
  param_1[2] = uVar19 << (uVar11 & 0x1f) | (uVar10 >> 1) >> (~uVar11 & 0x1f);
  uVar4 = uVar4 ^ uVar12;
  uVar5 = uVar5 ^ uVar6;
  uVar6 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
  uVar16 = (uint)lVar1;
  uVar6 = (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18
          ) * -0x4c957f2e + uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = uVar5 * 0x2df45158 + uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20) ^
          (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18) ^ uVar8;
  uVar5 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar12 = (uint)lVar1;
  uVar7 = (uint)((ulonglong)uVar4 * 0x2df45158) ^
          (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ uVar7;
  uVar4 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
          ) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar16 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
           uVar4 >> 0x18) ^ (uint)((ulonglong)uVar7 * 0x2df45158);
  uVar4 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) ^
          uVar8 * 0x2df45158 + uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
  uVar5 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
  lVar1 = (ulonglong)param_3 * (ulonglong)uVar5;
  uVar6 = (uint)lVar1;
  uVar4 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
          ) ^ uVar4 * uVar23 +
              uVar16 * uVar20 + (int)((ulonglong)uVar23 * (ulonglong)uVar16 >> 0x20);
  uVar5 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
          uVar16 >> 0x18) * param_3 + uVar5 * param_4 + (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar23 * (ulonglong)uVar16);
  uVar5 = uVar6;
  if ((uVar16 & 0x20) != 0) {
    uVar5 = uVar4;
    uVar4 = uVar6;
  }
  *param_1 = uVar5 << (uVar16 & 0x1f) | (uVar4 >> 1) >> (~uVar16 & 0x1f);
  param_1[1] = uVar4 << (uVar16 & 0x1f) | (uVar5 >> 1) >> (~uVar16 & 0x1f);
  param_1[7] = uVar3 << (uVar13 & 0x1f) | (uVar21 >> 1) >> (~uVar13 & 0x1f);
  param_1[5] = uVar17 << (uVar9 & 0x1f) | (uVar22 >> 1) >> (~uVar9 & 0x1f);
  param_1[3] = uVar10 << (uVar11 & 0x1f) | (uVar19 >> 1) >> (~uVar11 & 0x1f);
  return;
}

