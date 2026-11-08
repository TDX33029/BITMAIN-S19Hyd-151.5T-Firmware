// FUN_0181f130 @ 0181f130 size=2020 calls_out=0 calls_in=17
// strings: 

undefined8 FUN_0181f130(uint *param_1,uint *param_2,uint *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
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
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  
  uVar30 = param_3[4];
  uVar13 = param_3[8];
  uVar31 = param_2[6];
  uVar32 = param_2[7];
  uVar33 = param_3[2];
  uVar34 = param_3[3];
  uVar21 = param_2[4];
  uVar36 = param_2[2];
  uVar23 = param_2[3];
  uVar37 = param_2[1];
  uVar20 = *param_2;
  uVar14 = param_2[5];
  uVar35 = param_2[8];
  uVar8 = param_2[9];
  uVar9 = *param_3;
  uVar25 = param_3[6];
  uVar27 = param_3[7];
  uVar19 = param_3[9];
  uVar6 = param_3[5];
  uVar12 = param_3[1];
  uVar1 = (ulonglong)uVar12 * (ulonglong)uVar35 +
          (ulonglong)uVar9 * (ulonglong)uVar8 +
          (ulonglong)uVar34 * (ulonglong)uVar31 +
          (ulonglong)uVar33 * (ulonglong)uVar32 +
          (ulonglong)uVar6 * (ulonglong)uVar21 +
          (ulonglong)uVar30 * (ulonglong)uVar14 +
          (ulonglong)uVar27 * (ulonglong)uVar36 +
          (ulonglong)uVar25 * (ulonglong)uVar23 +
          (ulonglong)uVar19 * (ulonglong)uVar20 + (ulonglong)uVar13 * (ulonglong)uVar37;
  uVar15 = (uint)uVar1 & 0x3ffffff;
  lVar2 = (uVar1 >> 0x1a) +
          (ulonglong)uVar12 * (ulonglong)uVar8 +
          (ulonglong)uVar34 * (ulonglong)uVar32 +
          (ulonglong)uVar35 * (ulonglong)uVar33 +
          (ulonglong)uVar6 * (ulonglong)uVar14 +
          (ulonglong)uVar31 * (ulonglong)uVar30 +
          (ulonglong)uVar27 * (ulonglong)uVar23 +
          (ulonglong)uVar21 * (ulonglong)uVar25 +
          (ulonglong)uVar37 * (ulonglong)uVar19 + (ulonglong)uVar36 * (ulonglong)uVar13;
  uVar16 = (uint)lVar2;
  uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar28 = uVar16 & 0x3ffffff;
  uVar16 = uVar16 >> 0x1a | uVar7 * 0x40;
  lVar2 = (ulonglong)uVar35 * (ulonglong)uVar34 +
          (ulonglong)uVar8 * (ulonglong)uVar33 +
          (ulonglong)uVar31 * (ulonglong)uVar6 +
          (ulonglong)uVar32 * (ulonglong)uVar30 +
          (ulonglong)uVar21 * (ulonglong)uVar27 +
          (ulonglong)uVar14 * (ulonglong)uVar25 +
          (ulonglong)uVar36 * (ulonglong)uVar19 + (ulonglong)uVar23 * (ulonglong)uVar13;
  uVar17 = (uint)lVar2;
  lVar3 = (ulonglong)uVar8 * (ulonglong)uVar34 +
          (ulonglong)uVar32 * (ulonglong)uVar6 +
          (ulonglong)uVar35 * (ulonglong)uVar30 +
          (ulonglong)uVar14 * (ulonglong)uVar27 +
          (ulonglong)uVar31 * (ulonglong)uVar25 +
          (ulonglong)uVar23 * (ulonglong)uVar19 + (ulonglong)uVar21 * (ulonglong)uVar13;
  uVar10 = (uint)lVar3;
  lVar4 = (ulonglong)uVar35 * (ulonglong)uVar6 +
          (ulonglong)uVar8 * (ulonglong)uVar30 +
          (ulonglong)uVar31 * (ulonglong)uVar27 +
          (ulonglong)uVar32 * (ulonglong)uVar25 +
          (ulonglong)uVar21 * (ulonglong)uVar19 + (ulonglong)uVar14 * (ulonglong)uVar13;
  uVar22 = (uint)lVar4;
  uVar1 = (ulonglong)uVar28 * 0x3d10 + (ulonglong)uVar9 * (ulonglong)uVar20;
  uVar29 = (uint)uVar1 & 0x3ffffff;
  uVar18 = uVar17 + uVar16;
  uVar16 = (int)((ulonglong)lVar2 >> 0x20) + (uVar7 >> 0x1a) + (uint)CARRY4(uVar17,uVar16);
  uVar7 = uVar18 & 0x3ffffff;
  uVar17 = uVar18 >> 0x1a | uVar16 * 0x40;
  uVar1 = (ulonglong)uVar7 * 0x3d10 +
          (ulonglong)uVar28 * 0x400 +
          (ulonglong)uVar12 * (ulonglong)uVar20 + (ulonglong)uVar9 * (ulonglong)uVar37 +
          (uVar1 >> 0x1a);
  uVar18 = uVar10 + uVar17;
  uVar16 = (int)((ulonglong)lVar3 >> 0x20) + (uVar16 >> 0x1a) + (uint)CARRY4(uVar10,uVar17);
  uVar10 = (uint)uVar1 & 0x3ffffff;
  uVar24 = uVar18 & 0x3ffffff;
  uVar17 = uVar18 >> 0x1a | uVar16 * 0x40;
  lVar2 = (uVar1 >> 0x1a) +
          (ulonglong)uVar24 * 0x3d10 +
          (ulonglong)uVar7 * 0x400 +
          (ulonglong)uVar9 * (ulonglong)uVar36 +
          (ulonglong)uVar33 * (ulonglong)uVar20 + (ulonglong)uVar12 * (ulonglong)uVar37;
  uVar38 = (uint)lVar2;
  uVar26 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar7 = uVar22 + uVar17;
  uVar22 = (int)((ulonglong)lVar4 >> 0x20) + (uVar16 >> 0x1a) + (uint)CARRY4(uVar22,uVar17);
  uVar17 = uVar7 & 0x3ffffff;
  uVar28 = uVar7 >> 0x1a | uVar22 * 0x40;
  uVar18 = uVar38 >> 0x1a | uVar26 * 0x40;
  lVar2 = (ulonglong)uVar17 * 0x3d10 +
          (ulonglong)uVar24 * 0x400 +
          (ulonglong)uVar12 * (ulonglong)uVar36 +
          (ulonglong)uVar9 * (ulonglong)uVar23 +
          (ulonglong)uVar34 * (ulonglong)uVar20 + (ulonglong)uVar33 * (ulonglong)uVar37;
  uVar7 = (uint)lVar2;
  uVar16 = uVar7 + uVar18;
  param_1[3] = uVar16 & 0x3ffffff;
  uVar24 = (int)((ulonglong)lVar2 >> 0x20) + (uVar26 >> 0x1a) + (uint)CARRY4(uVar7,uVar18);
  uVar7 = uVar16 >> 0x1a | uVar24 * 0x40;
  lVar2 = (ulonglong)uVar8 * (ulonglong)uVar6 +
          (ulonglong)uVar32 * (ulonglong)uVar27 +
          (ulonglong)uVar35 * (ulonglong)uVar25 +
          (ulonglong)uVar14 * (ulonglong)uVar19 + (ulonglong)uVar31 * (ulonglong)uVar13;
  uVar16 = (uint)lVar2;
  uVar18 = uVar16 + uVar28;
  uVar22 = (int)((ulonglong)lVar2 >> 0x20) + (uVar22 >> 0x1a) + (uint)CARRY4(uVar16,uVar28);
  uVar28 = uVar18 & 0x3ffffff;
  uVar16 = uVar18 >> 0x1a | uVar22 * 0x40;
  lVar2 = (ulonglong)uVar28 * 0x3d10 +
          (ulonglong)uVar17 * 0x400 +
          (ulonglong)uVar9 * (ulonglong)uVar21 +
          (ulonglong)uVar33 * (ulonglong)uVar36 +
          (ulonglong)uVar12 * (ulonglong)uVar23 +
          (ulonglong)uVar30 * (ulonglong)uVar20 + (ulonglong)uVar34 * (ulonglong)uVar37;
  uVar17 = (uint)lVar2;
  uVar18 = uVar17 + uVar7;
  uVar26 = (int)((ulonglong)lVar2 >> 0x20) + (uVar24 >> 0x1a) + (uint)CARRY4(uVar17,uVar7);
  param_1[4] = uVar18 & 0x3ffffff;
  uVar18 = uVar18 >> 0x1a | uVar26 * 0x40;
  lVar2 = (ulonglong)uVar35 * (ulonglong)uVar27 +
          (ulonglong)uVar8 * (ulonglong)uVar25 +
          (ulonglong)uVar31 * (ulonglong)uVar19 + (ulonglong)uVar32 * (ulonglong)uVar13;
  uVar7 = (uint)lVar2;
  uVar17 = uVar7 + uVar16;
  uVar24 = (int)((ulonglong)lVar2 >> 0x20) + (uVar22 >> 0x1a) + (uint)CARRY4(uVar7,uVar16);
  uVar7 = uVar17 & 0x3ffffff;
  uVar22 = uVar17 >> 0x1a | uVar24 * 0x40;
  lVar2 = (ulonglong)uVar7 * 0x3d10 +
          (ulonglong)uVar28 * 0x400 +
          (ulonglong)uVar12 * (ulonglong)uVar21 +
          (ulonglong)uVar9 * (ulonglong)uVar14 +
          (ulonglong)uVar34 * (ulonglong)uVar36 +
          (ulonglong)uVar33 * (ulonglong)uVar23 +
          (ulonglong)uVar6 * (ulonglong)uVar20 + (ulonglong)uVar30 * (ulonglong)uVar37;
  uVar16 = (uint)lVar2;
  uVar17 = uVar16 + uVar18;
  uVar28 = (int)((ulonglong)lVar2 >> 0x20) + (uVar26 >> 0x1a) + (uint)CARRY4(uVar16,uVar18);
  uVar16 = uVar17 >> 0x1a | uVar28 * 0x40;
  param_1[5] = uVar17 & 0x3ffffff;
  lVar2 = (ulonglong)uVar8 * (ulonglong)uVar27 +
          (ulonglong)uVar32 * (ulonglong)uVar19 + (ulonglong)uVar35 * (ulonglong)uVar13;
  uVar18 = (uint)lVar2;
  uVar17 = uVar18 + uVar22;
  uVar22 = (int)((ulonglong)lVar2 >> 0x20) + (uVar24 >> 0x1a) + (uint)CARRY4(uVar18,uVar22);
  uVar24 = uVar17 & 0x3ffffff;
  uVar18 = uVar17 >> 0x1a | uVar22 * 0x40;
  lVar2 = (ulonglong)uVar24 * 0x3d10 +
          (ulonglong)uVar7 * 0x400 +
          (ulonglong)uVar9 * (ulonglong)uVar31 +
          (ulonglong)uVar33 * (ulonglong)uVar21 +
          (ulonglong)uVar12 * (ulonglong)uVar14 +
          (ulonglong)uVar30 * (ulonglong)uVar36 +
          (ulonglong)uVar34 * (ulonglong)uVar23 +
          (ulonglong)uVar25 * (ulonglong)uVar20 + (ulonglong)uVar6 * (ulonglong)uVar37;
  uVar7 = (uint)lVar2;
  uVar26 = uVar7 + uVar16;
  uVar17 = (int)((ulonglong)lVar2 >> 0x20) + (uVar28 >> 0x1a) + (uint)CARRY4(uVar7,uVar16);
  lVar2 = (ulonglong)uVar35 * (ulonglong)uVar19 + (ulonglong)uVar8 * (ulonglong)uVar13;
  uVar7 = (uint)lVar2;
  uVar28 = uVar7 + uVar18;
  uVar16 = (int)((ulonglong)lVar2 >> 0x20) + (uVar22 >> 0x1a) + (uint)CARRY4(uVar7,uVar18);
  uVar18 = uVar28 & 0x3ffffff;
  lVar2 = (ulonglong)uVar18 * 0x3d10 +
          (ulonglong)uVar24 * 0x400 +
          (ulonglong)uVar12 * (ulonglong)uVar31 +
          (ulonglong)uVar9 * (ulonglong)uVar32 +
          (ulonglong)uVar34 * (ulonglong)uVar21 +
          (ulonglong)uVar33 * (ulonglong)uVar14 +
          (ulonglong)uVar6 * (ulonglong)uVar36 +
          (ulonglong)uVar30 * (ulonglong)uVar23 +
          (ulonglong)uVar27 * (ulonglong)uVar20 + (ulonglong)uVar25 * (ulonglong)uVar37;
  uVar7 = (uint)lVar2;
  uVar1 = (ulonglong)uVar8 * (ulonglong)uVar19 +
          CONCAT44(uVar16 >> 0x1a,uVar28 >> 0x1a | uVar16 * 0x40);
  uVar16 = uVar26 >> 0x1a | uVar17 * 0x40;
  uVar22 = uVar7 + uVar16;
  uVar17 = (int)((ulonglong)lVar2 >> 0x20) + (uVar17 >> 0x1a) + (uint)CARRY4(uVar7,uVar16);
  uVar5 = uVar1 >> 0x1a;
  uVar8 = uVar22 >> 0x1a | uVar17 * 0x40;
  lVar2 = (uVar1 & 0x3ffffff) * 0x3d10 +
          (ulonglong)uVar18 * 0x400 +
          (ulonglong)uVar35 * (ulonglong)uVar9 +
          (ulonglong)uVar31 * (ulonglong)uVar33 +
          (ulonglong)uVar12 * (ulonglong)uVar32 +
          (ulonglong)uVar21 * (ulonglong)uVar30 +
          (ulonglong)uVar34 * (ulonglong)uVar14 +
          (ulonglong)uVar36 * (ulonglong)uVar25 +
          (ulonglong)uVar6 * (ulonglong)uVar23 +
          (ulonglong)uVar13 * (ulonglong)uVar20 + (ulonglong)uVar27 * (ulonglong)uVar37;
  uVar7 = (uint)lVar2;
  param_1[7] = uVar22 & 0x3ffffff;
  uVar6 = (int)uVar5 * 0x4000;
  uVar16 = uVar7 + uVar8;
  uVar7 = (int)((ulonglong)lVar2 >> 0x20) + (uVar17 >> 0x1a) + (uint)CARRY4(uVar7,uVar8);
  param_1[8] = uVar16 & 0x3ffffff;
  uVar17 = uVar16 >> 0x1a | uVar7 * 0x40;
  param_1[6] = uVar26 & 0x3ffffff;
  lVar2 = (uVar1 & 0x3ffffff) * 0x400 +
          (uVar5 * 0x3d10 & 0xffffffff00000000 | (uVar5 & 0xffffffff) * 0x3d10 & 0xffffffff);
  uVar16 = (uint)lVar2;
  uVar8 = uVar16 + uVar15;
  uVar9 = uVar8 + uVar17;
  uVar8 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar16,uVar15) + (uVar7 >> 0x1a) +
          (uint)CARRY4(uVar8,uVar17);
  uVar7 = uVar9 >> 0x16 | uVar8 * 0x400;
  param_1[9] = uVar9 & 0x3fffff;
  uVar16 = uVar6 + uVar7;
  iVar11 = ((int)(uVar5 >> 0x20) << 0xe | (uint)((uVar1 & 0x3ffffff03ffffff) >> 0x2c)) +
           (uVar8 >> 0x16) + (uint)CARRY4(uVar6,uVar7);
  uVar9 = uVar16 * 0x3d1 + uVar29;
  uVar6 = iVar11 + (((iVar11 * 0x10 | uVar16 >> 0x1c) * 4 +
                     iVar11 * -3 + (uint)(uVar16 * 0x10 < uVar16) * -4 +
                     (uint)CARRY4(uVar16 * 0xf,uVar16 * 0xf) * 2 +
                     (uint)CARRY4(uVar16 * 0x1e,uVar16 * 0x1e) + (uint)CARRY4(uVar16 * 0x3c,uVar16))
                    * 0x10 | uVar16 * 0x3d >> 0x1c) + (uint)CARRY4(uVar16 * 0x3d0,uVar16) +
          (uint)CARRY4(uVar16 * 0x3d1,uVar29);
  uVar7 = uVar16 * 0x40 + uVar10;
  uVar17 = uVar9 >> 0x1a | uVar6 * 0x40;
  uVar8 = uVar7 + uVar17;
  *param_1 = uVar9 & 0x3ffffff;
  param_1[1] = uVar8 & 0x3ffffff;
  param_1[2] = (uVar38 & 0x3ffffff) +
               (uVar8 >> 0x1a |
               ((iVar11 * 0x40 | uVar16 >> 0x1a) + (uint)CARRY4(uVar16 * 0x40,uVar10) +
                (uVar6 >> 0x1a) + (uint)CARRY4(uVar7,uVar17)) * 0x40);
  return 0;
}

