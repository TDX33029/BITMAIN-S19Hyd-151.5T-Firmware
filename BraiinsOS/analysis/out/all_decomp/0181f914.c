// FUN_0181f914 @ 0181f914 size=1500 calls_out=0 calls_in=17
// strings: 

undefined8 FUN_0181f914(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
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
  
  uVar25 = param_2[9];
  uVar22 = param_2[6];
  uVar12 = param_2[1];
  uVar28 = param_2[3];
  uVar27 = param_2[5];
  uVar26 = param_2[8];
  uVar29 = *param_2;
  uVar19 = param_2[2];
  uVar16 = uVar27 << 1;
  uVar6 = param_2[7];
  uVar13 = uVar29 << 1;
  uVar9 = param_2[4];
  uVar14 = uVar28 << 1;
  uVar11 = uVar9 << 1;
  uVar18 = uVar12 << 1;
  uVar17 = uVar22 << 1;
  uVar1 = uVar19 << 1;
  uVar2 = (ulonglong)uVar27 * (ulonglong)uVar11 +
          (ulonglong)uVar6 * (ulonglong)uVar1 +
          (ulonglong)uVar22 * (ulonglong)uVar14 +
          (ulonglong)uVar25 * (ulonglong)uVar13 + (ulonglong)uVar26 * (ulonglong)uVar18;
  uVar23 = (uint)uVar2 & 0x3ffffff;
  lVar3 = (uVar2 >> 0x1a) +
          (ulonglong)uVar6 * (ulonglong)uVar14 +
          (ulonglong)uVar11 * (ulonglong)uVar22 +
          (ulonglong)uVar27 * (ulonglong)uVar27 +
          (ulonglong)uVar18 * (ulonglong)uVar25 + (ulonglong)uVar1 * (ulonglong)uVar26;
  uVar10 = (uint)lVar3;
  uVar24 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar7 = uVar10 & 0x3ffffff;
  uVar10 = uVar10 >> 0x1a | uVar24 * 0x40;
  uVar2 = (ulonglong)uVar7 * 0x3d10 + (ulonglong)uVar29 * (ulonglong)uVar29;
  uVar20 = (uint)uVar2 & 0x3ffffff;
  lVar3 = (ulonglong)uVar11 * (ulonglong)uVar6 +
          (ulonglong)uVar16 * (ulonglong)uVar22 +
          (ulonglong)uVar1 * (ulonglong)uVar25 + (ulonglong)uVar14 * (ulonglong)uVar26;
  uVar29 = (uint)lVar3;
  lVar4 = (ulonglong)uVar16 * (ulonglong)uVar6 +
          (ulonglong)uVar22 * (ulonglong)uVar22 +
          (ulonglong)uVar14 * (ulonglong)uVar25 + (ulonglong)uVar11 * (ulonglong)uVar26;
  uVar21 = (uint)lVar4;
  uVar15 = uVar29 + uVar10;
  uVar10 = (int)((ulonglong)lVar3 >> 0x20) + (uVar24 >> 0x1a) + (uint)CARRY4(uVar29,uVar10);
  uVar30 = uVar15 & 0x3ffffff;
  uVar29 = uVar15 >> 0x1a | uVar10 * 0x40;
  uVar15 = uVar21 + uVar29;
  uVar24 = (int)((ulonglong)lVar4 >> 0x20) + (uVar10 >> 0x1a) + (uint)CARRY4(uVar21,uVar29);
  uVar2 = (ulonglong)uVar30 * 0x3d10 +
          (ulonglong)uVar7 * 0x400 + (ulonglong)uVar12 * (ulonglong)uVar13 + (uVar2 >> 0x1a);
  uVar31 = uVar15 & 0x3ffffff;
  uVar29 = uVar15 >> 0x1a | uVar24 * 0x40;
  lVar3 = (uVar2 >> 0x1a) +
          (ulonglong)uVar31 * 0x3d10 +
          (ulonglong)uVar30 * 0x400 +
          (ulonglong)uVar19 * (ulonglong)uVar13 + (ulonglong)uVar12 * (ulonglong)uVar12;
  uVar12 = (uint)lVar3;
  uVar7 = (uint)uVar2 & 0x3ffffff;
  uVar30 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar21 = uVar12 >> 0x1a | uVar30 * 0x40;
  lVar3 = (ulonglong)uVar17 * (ulonglong)uVar6 +
          (ulonglong)uVar11 * (ulonglong)uVar25 + (ulonglong)uVar16 * (ulonglong)uVar26;
  uVar11 = (uint)lVar3;
  uVar10 = uVar11 + uVar29;
  uVar11 = (int)((ulonglong)lVar3 >> 0x20) + (uVar24 >> 0x1a) + (uint)CARRY4(uVar11,uVar29);
  uVar24 = uVar10 & 0x3ffffff;
  uVar10 = uVar10 >> 0x1a | uVar11 * 0x40;
  lVar3 = (ulonglong)uVar24 * 0x3d10 +
          (ulonglong)uVar31 * 0x400 +
          (ulonglong)uVar28 * (ulonglong)uVar13 + (ulonglong)uVar19 * (ulonglong)uVar18;
  uVar29 = (uint)lVar3;
  uVar15 = uVar29 + uVar21;
  uVar30 = (int)((ulonglong)lVar3 >> 0x20) + (uVar30 >> 0x1a) + (uint)CARRY4(uVar29,uVar21);
  uVar29 = uVar15 >> 0x1a | uVar30 * 0x40;
  param_1[3] = uVar15 & 0x3ffffff;
  lVar3 = (ulonglong)uVar6 * (ulonglong)uVar6 +
          (ulonglong)uVar16 * (ulonglong)uVar25 + (ulonglong)uVar17 * (ulonglong)uVar26;
  uVar16 = (uint)lVar3;
  uVar15 = uVar16 + uVar10;
  uVar16 = (int)((ulonglong)lVar3 >> 0x20) + (uVar11 >> 0x1a) + (uint)CARRY4(uVar16,uVar10);
  uVar21 = uVar15 & 0x3ffffff;
  uVar10 = uVar15 >> 0x1a | uVar16 * 0x40;
  lVar3 = (ulonglong)uVar21 * 0x3d10 +
          (ulonglong)uVar24 * 0x400 +
          (ulonglong)uVar19 * (ulonglong)uVar19 +
          (ulonglong)uVar9 * (ulonglong)uVar13 + (ulonglong)uVar28 * (ulonglong)uVar18;
  uVar11 = (uint)lVar3;
  uVar19 = uVar11 + uVar29;
  param_1[4] = uVar19 & 0x3ffffff;
  uVar15 = (int)((ulonglong)lVar3 >> 0x20) + (uVar30 >> 0x1a) + (uint)CARRY4(uVar11,uVar29);
  uVar11 = uVar19 >> 0x1a | uVar15 * 0x40;
  lVar3 = (ulonglong)uVar17 * (ulonglong)uVar25 + (ulonglong)(uVar6 << 1) * (ulonglong)uVar26;
  uVar29 = (uint)lVar3;
  uVar17 = uVar29 + uVar10;
  uVar24 = uVar17 & 0x3ffffff;
  uVar16 = (int)((ulonglong)lVar3 >> 0x20) + (uVar16 >> 0x1a) + (uint)CARRY4(uVar29,uVar10);
  uVar29 = uVar17 >> 0x1a | uVar16 * 0x40;
  lVar3 = (ulonglong)uVar24 * 0x3d10 +
          (ulonglong)uVar21 * 0x400 +
          (ulonglong)uVar28 * (ulonglong)uVar1 +
          (ulonglong)uVar27 * (ulonglong)uVar13 + (ulonglong)uVar9 * (ulonglong)uVar18;
  uVar17 = (uint)lVar3;
  uVar10 = uVar17 + uVar11;
  param_1[5] = uVar10 & 0x3ffffff;
  uVar15 = (int)((ulonglong)lVar3 >> 0x20) + (uVar15 >> 0x1a) + (uint)CARRY4(uVar17,uVar11);
  uVar10 = uVar10 >> 0x1a | uVar15 * 0x40;
  lVar3 = (ulonglong)(uVar6 << 1) * (ulonglong)uVar25 + (ulonglong)uVar26 * (ulonglong)uVar26;
  uVar11 = (uint)lVar3;
  uVar17 = uVar11 + uVar29;
  uVar16 = (int)((ulonglong)lVar3 >> 0x20) + (uVar16 >> 0x1a) + (uint)CARRY4(uVar11,uVar29);
  uVar21 = uVar17 & 0x3ffffff;
  uVar2 = (ulonglong)(uVar26 << 1) * (ulonglong)uVar25 +
          CONCAT44(uVar16 >> 0x1a,uVar17 >> 0x1a | uVar16 * 0x40);
  uVar19 = (uint)uVar2 & 0x3ffffff;
  uVar2 = (ulonglong)uVar25 * (ulonglong)uVar25 + (uVar2 >> 0x1a);
  uVar5 = uVar2 >> 0x1a;
  uVar16 = (int)uVar5 * 0x4000;
  lVar3 = (uVar2 & 0x3ffffff) * 0x400 +
          (uVar5 * 0x3d10 & 0xffffffff00000000 | (uVar5 & 0xffffffff) * 0x3d10 & 0xffffffff);
  uVar29 = (uint)lVar3;
  lVar4 = (ulonglong)uVar21 * 0x3d10 +
          (ulonglong)uVar24 * 0x400 +
          (ulonglong)uVar9 * (ulonglong)uVar1 +
          (ulonglong)uVar28 * (ulonglong)uVar28 +
          (ulonglong)uVar22 * (ulonglong)uVar13 + (ulonglong)uVar27 * (ulonglong)uVar18;
  uVar11 = (uint)lVar4;
  uVar17 = uVar11 + uVar10;
  uVar15 = (int)((ulonglong)lVar4 >> 0x20) + (uVar15 >> 0x1a) + (uint)CARRY4(uVar11,uVar10);
  param_1[6] = uVar17 & 0x3ffffff;
  uVar11 = uVar17 >> 0x1a | uVar15 * 0x40;
  lVar4 = (ulonglong)uVar19 * 0x3d10 +
          (ulonglong)uVar21 * 0x400 +
          (ulonglong)uVar27 * (ulonglong)uVar1 +
          (ulonglong)uVar9 * (ulonglong)uVar14 +
          (ulonglong)uVar6 * (ulonglong)uVar13 + (ulonglong)uVar22 * (ulonglong)uVar18;
  uVar17 = (uint)lVar4;
  uVar10 = uVar17 + uVar11;
  uVar17 = (int)((ulonglong)lVar4 >> 0x20) + (uVar15 >> 0x1a) + (uint)CARRY4(uVar17,uVar11);
  lVar4 = (uVar2 & 0x3ffffff) * 0x3d10 +
          (ulonglong)uVar19 * 0x400 +
          (ulonglong)uVar1 * (ulonglong)uVar22 +
          (ulonglong)uVar27 * (ulonglong)uVar14 +
          (ulonglong)uVar9 * (ulonglong)uVar9 +
          (ulonglong)uVar26 * (ulonglong)uVar13 + (ulonglong)uVar6 * (ulonglong)uVar18;
  uVar11 = (uint)lVar4;
  uVar13 = uVar10 >> 0x1a | uVar17 * 0x40;
  uVar14 = uVar11 + uVar13;
  uVar17 = (int)((ulonglong)lVar4 >> 0x20) + (uVar17 >> 0x1a) + (uint)CARRY4(uVar11,uVar13);
  param_1[7] = uVar10 & 0x3ffffff;
  uVar11 = uVar29 + uVar23;
  uVar13 = uVar14 >> 0x1a | uVar17 * 0x40;
  uVar18 = uVar11 + uVar13;
  uVar13 = (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4(uVar29,uVar23) + (uVar17 >> 0x1a) +
           (uint)CARRY4(uVar11,uVar13);
  param_1[8] = uVar14 & 0x3ffffff;
  uVar14 = uVar18 >> 0x16 | uVar13 * 0x400;
  param_1[9] = uVar18 & 0x3fffff;
  uVar11 = uVar16 + uVar14;
  iVar8 = ((int)(uVar5 >> 0x20) << 0xe | (uint)((uVar2 & 0x3ffffff03ffffff) >> 0x2c)) +
          (uVar13 >> 0x16) + (uint)CARRY4(uVar16,uVar14);
  uVar18 = uVar11 * 0x3d1 + uVar20;
  uVar16 = iVar8 + (((iVar8 * 0x10 | uVar11 >> 0x1c) * 4 +
                     iVar8 * -3 + (uint)(uVar11 * 0x10 < uVar11) * -4 +
                     (uint)CARRY4(uVar11 * 0xf,uVar11 * 0xf) * 2 +
                     (uint)CARRY4(uVar11 * 0x1e,uVar11 * 0x1e) + (uint)CARRY4(uVar11 * 0x3c,uVar11))
                    * 0x10 | uVar11 * 0x3d >> 0x1c) + (uint)CARRY4(uVar11 * 0x3d0,uVar11) +
           (uint)CARRY4(uVar11 * 0x3d1,uVar20);
  uVar13 = uVar11 * 0x40 + uVar7;
  uVar17 = uVar18 >> 0x1a | uVar16 * 0x40;
  uVar14 = uVar13 + uVar17;
  *param_1 = uVar18 & 0x3ffffff;
  param_1[1] = uVar14 & 0x3ffffff;
  param_1[2] = (uVar12 & 0x3ffffff) +
               (uVar14 >> 0x1a |
               ((iVar8 * 0x40 | uVar11 >> 0x1a) + (uint)CARRY4(uVar11 * 0x40,uVar7) +
                (uVar16 >> 0x1a) + (uint)CARRY4(uVar13,uVar17)) * 0x40);
  return 0;
}

