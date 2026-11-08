// FUN_00fcac6c @ 00fcac6c size=984 calls_out=0 calls_in=4
// strings: 

void FUN_00fcac6c(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
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
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  
  uVar14 = param_2[7];
  uVar10 = param_2[2];
  uVar22 = uVar14 * 0x13;
  uVar6 = param_2[6];
  uVar25 = param_2[1];
  uVar17 = param_2[3];
  uVar7 = param_2[9];
  uVar24 = *param_2;
  uVar27 = param_2[4];
  uVar26 = param_2[5];
  uVar21 = uVar7 * 0x13;
  uVar23 = uVar25 << 1;
  uVar20 = uVar17 << 1;
  uVar15 = param_2[8];
  uVar9 = uVar24 << 1;
  uVar1 = uVar26 << 1;
  uVar16 = uVar15 * 0x13;
  lVar3 = (ulonglong)uVar1 * (ulonglong)uVar21 + (ulonglong)uVar14 * (ulonglong)uVar22;
  uVar11 = (uint)lVar3;
  param_1[4] = (ulonglong)(uVar6 << 1) * (ulonglong)uVar16 +
               (ulonglong)uVar23 * (ulonglong)uVar20 + (ulonglong)uVar10 * (ulonglong)uVar10 +
               (ulonglong)uVar9 * (ulonglong)uVar27 +
               CONCAT44((int)((ulonglong)lVar3 >> 0x20) << 1 | uVar11 >> 0x1f,uVar11 * 2);
  lVar3 = (ulonglong)uVar27 * (ulonglong)uVar21 + (ulonglong)uVar6 * (ulonglong)uVar22;
  uVar11 = (uint)lVar3;
  param_1[3] = (ulonglong)uVar9 * (ulonglong)uVar17 + (ulonglong)uVar10 * (ulonglong)uVar23 +
               (ulonglong)uVar1 * (ulonglong)uVar16 +
               CONCAT44((int)((ulonglong)lVar3 >> 0x20) << 1 | uVar11 >> 0x1f,uVar11 * 2);
  uVar12 = uVar6 * 0x13;
  uVar11 = uVar10 << 1;
  lVar3 = (ulonglong)uVar10 * (ulonglong)uVar21 + (ulonglong)uVar27 * (ulonglong)uVar22;
  uVar13 = (uint)lVar3;
  uVar2 = uVar27 << 1;
  param_1[1] = (ulonglong)uVar1 * (ulonglong)uVar12 + (ulonglong)uVar25 * (ulonglong)uVar9 +
               (ulonglong)uVar20 * (ulonglong)uVar16 +
               CONCAT44((int)((ulonglong)lVar3 >> 0x20) << 1 | uVar13 >> 0x1f,uVar13 * 2);
  param_1[9] = (ulonglong)uVar9 * (ulonglong)uVar7 +
               (ulonglong)uVar23 * (ulonglong)uVar15 +
               (ulonglong)uVar11 * (ulonglong)uVar14 +
               (ulonglong)uVar20 * (ulonglong)uVar6 + (ulonglong)uVar26 * (ulonglong)uVar2;
  uVar13 = uVar14 << 1;
  lVar3 = (ulonglong)uVar23 * (ulonglong)uVar13 +
          (ulonglong)uVar11 * (ulonglong)uVar6 + (ulonglong)uVar27 * (ulonglong)uVar27 +
          (ulonglong)uVar20 * (ulonglong)uVar1 + (ulonglong)uVar9 * (ulonglong)uVar15;
  uVar8 = (uint)lVar3;
  uVar18 = (uint)((ulonglong)uVar21 * (ulonglong)uVar7);
  uVar19 = uVar18 * 2;
  *(uint *)(param_1 + 8) = uVar8 + uVar19;
  *(uint *)((int)param_1 + 0x44) =
       (int)((ulonglong)lVar3 >> 0x20) +
       ((int)((ulonglong)uVar21 * (ulonglong)uVar7 >> 0x20) << 1 | uVar18 >> 0x1f) +
       (uint)CARRY4(uVar8,uVar19);
  lVar3 = (ulonglong)uVar9 * (ulonglong)uVar14 +
          (ulonglong)uVar11 * (ulonglong)uVar26 + (ulonglong)uVar27 * (ulonglong)uVar20 +
          (ulonglong)uVar23 * (ulonglong)uVar6;
  uVar7 = (uint)lVar3;
  uVar8 = (uint)((ulonglong)uVar21 * (ulonglong)uVar15);
  uVar19 = uVar8 * 2;
  *(uint *)(param_1 + 7) = uVar7 + uVar19;
  *(uint *)((int)param_1 + 0x3c) =
       (int)((ulonglong)lVar3 >> 0x20) +
       ((int)((ulonglong)uVar21 * (ulonglong)uVar15 >> 0x20) << 1 | uVar8 >> 0x1f) +
       (uint)CARRY4(uVar7,uVar19);
  uVar19 = (uint)((ulonglong)uVar21 * (ulonglong)uVar6);
  param_1[5] = (ulonglong)uVar13 * (ulonglong)uVar16 +
               (ulonglong)uVar23 * (ulonglong)uVar27 + (ulonglong)uVar17 * (ulonglong)uVar11 +
               (ulonglong)uVar9 * (ulonglong)uVar26 +
               CONCAT44((int)((ulonglong)uVar21 * (ulonglong)uVar6 >> 0x20) << 1 | uVar19 >> 0x1f,
                        uVar19 * 2);
  lVar3 = (ulonglong)uVar9 * (ulonglong)uVar6 +
          (ulonglong)uVar17 * (ulonglong)uVar20 + (ulonglong)uVar11 * (ulonglong)uVar27 +
          (ulonglong)uVar23 * (ulonglong)uVar1 + (ulonglong)uVar15 * (ulonglong)uVar16;
  uVar7 = (uint)lVar3;
  uVar8 = (uint)((ulonglong)uVar21 * (ulonglong)uVar13);
  uVar19 = uVar8 * 2;
  *(uint *)(param_1 + 6) = uVar7 + uVar19;
  *(uint *)((int)param_1 + 0x34) =
       (int)((ulonglong)lVar3 >> 0x20) +
       ((int)((ulonglong)uVar21 * (ulonglong)uVar13 >> 0x20) << 1 | uVar8 >> 0x1f) +
       (uint)CARRY4(uVar7,uVar19);
  lVar3 = (ulonglong)uVar2 * (ulonglong)uVar16 +
          (ulonglong)uVar9 * (ulonglong)uVar10 + (ulonglong)uVar25 * (ulonglong)uVar23 +
          (ulonglong)uVar6 * (ulonglong)uVar12;
  uVar9 = (uint)lVar3;
  lVar5 = (ulonglong)uVar23 * (ulonglong)uVar21 +
          (ulonglong)uVar20 * (ulonglong)uVar22 + (ulonglong)uVar26 * (ulonglong)(uVar26 * 0x13);
  uVar23 = (uint)lVar5;
  lVar4 = (ulonglong)uVar20 * (ulonglong)uVar21 + (ulonglong)uVar1 * (ulonglong)uVar22;
  uVar20 = (uint)lVar4;
  *param_1 = (ulonglong)uVar2 * (ulonglong)uVar12 + (ulonglong)uVar24 * (ulonglong)uVar24 +
             (ulonglong)uVar11 * (ulonglong)uVar16 +
             CONCAT44((int)((ulonglong)lVar5 >> 0x20) * 2 | uVar23 >> 0x1f,uVar23 * 2);
  uVar23 = uVar20 * 2;
  *(uint *)(param_1 + 2) = uVar9 + uVar23;
  *(uint *)((int)param_1 + 0x14) =
       (int)((ulonglong)lVar3 >> 0x20) + ((int)((ulonglong)lVar4 >> 0x20) << 1 | uVar20 >> 0x1f) +
       (uint)CARRY4(uVar9,uVar23);
  return;
}

