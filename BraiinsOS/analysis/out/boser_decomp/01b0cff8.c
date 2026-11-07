// FUN_01b0cff8 @ 01b0cff8 size=1328 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b0cff8(uint *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
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
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  
  uVar14 = param_2[9];
  uVar22 = param_2[6];
  uVar15 = param_2[8];
  uVar17 = param_2[4];
  uVar26 = uVar22 * 0x13;
  uVar18 = param_2[3];
  uVar16 = uVar15 * 0x13;
  uVar19 = param_2[2];
  uVar25 = uVar15 * 0x26;
  uVar20 = param_2[1];
  uVar24 = (uint)CARRY4(uVar16,uVar16);
  uVar6 = param_2[7];
  uVar12 = uVar14 * 0x26;
  uVar28 = param_2[5];
  uVar4 = uVar6 * 2;
  uVar29 = uVar6 * 0x26;
  uVar5 = uVar28 * 2;
  uVar13 = uVar22 << 1;
  uVar27 = uVar17 << 1;
  uVar23 = uVar18 << 1;
  uVar7 = *param_2;
  lVar1 = (ulonglong)(uVar28 * 0x26) * (ulonglong)uVar28 + (ulonglong)uVar7 * (ulonglong)uVar7;
  uVar8 = (uint)lVar1;
  lVar3 = (ulonglong)(uVar22 * 0x26) * (ulonglong)uVar17;
  uVar32 = (uint)lVar3;
  uVar9 = uVar8 + uVar32;
  uVar30 = (uint)((ulonglong)uVar25 * (ulonglong)uVar19);
  uVar10 = uVar9 + uVar30;
  lVar2 = (ulonglong)uVar18 * (ulonglong)uVar29 + (ulonglong)uVar20 * (ulonglong)uVar12;
  uVar21 = (uint)lVar2;
  uVar11 = uVar10 + uVar21 * 2;
  uVar31 = uVar19 * uVar24 + (int)((ulonglong)uVar25 * (ulonglong)uVar19 >> 0x20) +
           uVar17 * CARRY4(uVar26,uVar26) + (int)((ulonglong)lVar3 >> 0x20) +
           (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar8,uVar32) + (uint)CARRY4(uVar9,uVar30)
           + (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar21,uVar21) +
           (uint)CARRY4(uVar10,uVar21 * 2);
  lVar1 = (ulonglong)uVar7 * (ulonglong)(uVar20 << 1) +
          (ulonglong)uVar17 * (ulonglong)uVar29 + (ulonglong)uVar19 * (ulonglong)uVar12;
  uVar21 = (uint)lVar1;
  lVar2 = (ulonglong)(uVar22 * 0x26) * (ulonglong)uVar28;
  uVar8 = (uint)lVar2;
  uVar9 = uVar21 + uVar8;
  uVar30 = (uint)((ulonglong)uVar25 * (ulonglong)uVar18);
  uVar32 = uVar9 + uVar30;
  uVar10 = uVar11 >> 0x1a | uVar31 * 0x40;
  uVar33 = uVar32 + uVar10;
  uVar21 = uVar18 * uVar24 + (int)((ulonglong)uVar25 * (ulonglong)uVar18 >> 0x20) +
           uVar28 * CARRY4(uVar26,uVar26) + (int)((ulonglong)lVar2 >> 0x20) +
           (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar21,uVar8) + (uint)CARRY4(uVar9,uVar30)
           + (uVar31 >> 0x1a) + (uint)CARRY4(uVar32,uVar10);
  lVar1 = (ulonglong)uVar7 * (ulonglong)(uVar19 << 1) +
          (ulonglong)uVar22 * (ulonglong)uVar26 + (ulonglong)(uVar20 << 1) * (ulonglong)uVar20;
  uVar26 = (uint)lVar1;
  uVar31 = (uint)((ulonglong)uVar25 * (ulonglong)uVar17);
  uVar30 = uVar26 + uVar31;
  lVar2 = (ulonglong)uVar28 * (ulonglong)uVar29 + (ulonglong)uVar18 * (ulonglong)uVar12;
  uVar8 = (uint)lVar2;
  uVar9 = uVar30 + uVar8 * 2;
  uVar32 = uVar33 >> 0x19 | uVar21 * 0x80;
  uVar10 = uVar9 + uVar32;
  uVar8 = uVar17 * uVar24 + (int)((ulonglong)uVar25 * (ulonglong)uVar17 >> 0x20) +
          (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar26,uVar31) +
          (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar8,uVar8) +
          (uint)CARRY4(uVar30,uVar8 * 2) + (uVar21 >> 0x19) + (uint)CARRY4(uVar9,uVar32);
  lVar1 = (ulonglong)uVar7 * (ulonglong)uVar23 +
          (ulonglong)(uVar19 << 1) * (ulonglong)uVar20 +
          (ulonglong)uVar22 * (ulonglong)uVar29 + (ulonglong)uVar17 * (ulonglong)uVar12;
  uVar9 = (uint)lVar1;
  uVar26 = (uint)((ulonglong)uVar25 * (ulonglong)uVar28);
  uVar21 = uVar9 + uVar26;
  uVar30 = uVar10 >> 0x1a | uVar8 * 0x40;
  uVar34 = uVar21 + uVar30;
  uVar30 = uVar28 * uVar24 + (int)((ulonglong)uVar25 * (ulonglong)uVar28 >> 0x20) +
           (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar9,uVar26) + (uVar8 >> 0x1a) +
           (uint)CARRY4(uVar21,uVar30);
  lVar1 = (ulonglong)uVar7 * (ulonglong)uVar27 +
          (ulonglong)uVar19 * (ulonglong)uVar19 +
          (ulonglong)uVar29 * (ulonglong)uVar6 + (ulonglong)uVar20 * (ulonglong)(uVar18 << 2);
  uVar32 = (uint)lVar1;
  uVar21 = (uint)((ulonglong)uVar25 * (ulonglong)uVar22);
  uVar29 = uVar32 + uVar21;
  uVar8 = (uint)((ulonglong)uVar5 * (ulonglong)uVar12);
  uVar9 = uVar29 + uVar8;
  uVar31 = uVar34 >> 0x19 | uVar30 * 0x80;
  uVar26 = uVar9 + uVar31;
  uVar30 = uVar12 * CARRY4(uVar28,uVar28) + (int)((ulonglong)uVar5 * (ulonglong)uVar12 >> 0x20) +
           uVar22 * uVar24 + (int)((ulonglong)uVar25 * (ulonglong)uVar22 >> 0x20) +
           (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar32,uVar21) +
           (uint)CARRY4(uVar29,uVar8) + (uVar30 >> 0x19) + (uint)CARRY4(uVar9,uVar31);
  lVar1 = (ulonglong)uVar7 * (ulonglong)uVar5 +
          (ulonglong)uVar20 * (ulonglong)uVar27 +
          (ulonglong)uVar22 * (ulonglong)uVar12 + (ulonglong)uVar19 * (ulonglong)uVar23;
  uVar22 = (uint)lVar1;
  uVar8 = (uint)((ulonglong)uVar25 * (ulonglong)uVar6);
  uVar9 = uVar22 + uVar8;
  uVar32 = uVar26 >> 0x1a | uVar30 * 0x40;
  uVar21 = uVar9 + uVar32;
  uVar9 = uVar6 * uVar24 + (int)((ulonglong)uVar25 * (ulonglong)uVar6 >> 0x20) +
          (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar22,uVar8) + (uVar30 >> 0x1a) +
          (uint)CARRY4(uVar9,uVar32);
  lVar1 = (ulonglong)uVar7 * (ulonglong)uVar13 +
          (ulonglong)uVar20 * (ulonglong)(uVar28 << 2) +
          (ulonglong)uVar19 * (ulonglong)uVar27 +
          (ulonglong)uVar15 * (ulonglong)uVar16 + (ulonglong)uVar23 * (ulonglong)uVar18;
  uVar23 = (uint)lVar1;
  uVar8 = (uint)((ulonglong)uVar4 * (ulonglong)uVar12);
  uVar24 = uVar23 + uVar8;
  uVar16 = uVar21 >> 0x19 | uVar9 * 0x80;
  uVar25 = uVar24 + uVar16;
  uVar24 = uVar12 * CARRY4(uVar6,uVar6) + (int)((ulonglong)uVar4 * (ulonglong)uVar12 >> 0x20) +
           (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar23,uVar8) + (uVar9 >> 0x19) +
           (uint)CARRY4(uVar24,uVar16);
  lVar1 = (ulonglong)uVar4 * (ulonglong)uVar7 +
          (ulonglong)uVar20 * (ulonglong)uVar13 +
          (ulonglong)uVar19 * (ulonglong)uVar5 +
          (ulonglong)uVar15 * (ulonglong)uVar12 + (ulonglong)uVar27 * (ulonglong)uVar18;
  uVar27 = (uint)lVar1;
  uVar8 = uVar25 >> 0x1a | uVar24 * 0x40;
  uVar23 = uVar27 + uVar8;
  uVar8 = (int)((ulonglong)lVar1 >> 0x20) + (uVar24 >> 0x1a) + (uint)CARRY4(uVar27,uVar8);
  uVar27 = uVar23 >> 0x19 | uVar8 * 0x80;
  lVar1 = (ulonglong)uVar7 * (ulonglong)(uVar15 << 1) +
          (ulonglong)(uVar6 << 2) * (ulonglong)uVar20 +
          (ulonglong)uVar19 * (ulonglong)uVar13 +
          (ulonglong)uVar17 * (ulonglong)uVar17 +
          (ulonglong)uVar12 * (ulonglong)uVar14 + (ulonglong)(uVar28 << 2) * (ulonglong)uVar18;
  uVar24 = (uint)lVar1;
  uVar6 = uVar24 + uVar27;
  uVar24 = (int)((ulonglong)lVar1 >> 0x20) + (uVar8 >> 0x19) + (uint)CARRY4(uVar24,uVar27);
  uVar8 = uVar6 >> 0x1a | uVar24 * 0x40;
  lVar1 = (ulonglong)(uVar14 << 1) * (ulonglong)uVar7 +
          (ulonglong)(uVar15 << 1) * (ulonglong)uVar20 +
          (ulonglong)uVar4 * (ulonglong)uVar19 +
          (ulonglong)uVar17 * (ulonglong)uVar5 + (ulonglong)uVar13 * (ulonglong)uVar18;
  uVar13 = (uint)lVar1;
  uVar27 = uVar13 + uVar8;
  uVar13 = (int)((ulonglong)lVar1 >> 0x20) + (uVar24 >> 0x1a) + (uint)CARRY4(uVar13,uVar8);
  lVar1 = (ulonglong)(uVar27 >> 0x19 | uVar13 * 0x80) * 0x13 +
          (CONCAT44((uVar13 >> 0x19) * 0x13,uVar11) & 0xffffffff03ffffff);
  uVar13 = (uint)lVar1;
  *param_1 = uVar13 & 0x3ffffff;
  uVar13 = (uVar33 & 0x1ffffff) + (uVar13 >> 0x1a | (int)((ulonglong)lVar1 >> 0x20) * 0x40);
  param_1[3] = uVar34 & 0x1ffffff;
  param_1[4] = uVar26 & 0x3ffffff;
  param_1[2] = (uVar10 & 0x3ffffff) + (uVar13 >> 0x19);
  param_1[1] = uVar13 & 0x1ffffff;
  param_1[6] = uVar25 & 0x3ffffff;
  param_1[7] = uVar23 & 0x1ffffff;
  param_1[5] = uVar21 & 0x1ffffff;
  param_1[8] = uVar6 & 0x3ffffff;
  param_1[9] = uVar27 & 0x1ffffff;
  return 0;
}

