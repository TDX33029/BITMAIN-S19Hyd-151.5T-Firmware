// FUN_01bc7bec @ 01bc7bec size=1712 calls_out=0 calls_in=11
// strings: 

undefined8 FUN_01bc7bec(uint *param_1,uint *param_2,uint *param_3)

{
  ulonglong uVar1;
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
  
  uVar7 = param_2[9];
  uVar8 = param_3[9];
  uVar9 = uVar8 * 0x26;
  uVar10 = param_3[8];
  uVar31 = uVar10 * 0x13;
  uVar11 = param_3[7];
  uVar23 = uVar11 * 0x26;
  uVar12 = param_3[6];
  uVar32 = uVar12 * 0x13;
  uVar13 = param_3[5];
  uVar14 = uVar13 * 0x26;
  uVar15 = param_3[4];
  uVar20 = uVar15 * 0x13;
  uVar16 = param_3[3];
  uVar17 = param_3[2];
  uVar18 = param_3[1];
  uVar19 = param_2[8];
  uVar34 = uVar8 * 0x13;
  uVar35 = uVar11 * 0x13;
  uVar24 = param_2[7];
  uVar3 = *param_3;
  uVar25 = param_2[6];
  uVar21 = uVar18 << 1;
  uVar26 = param_2[5];
  uVar33 = uVar16 << 1;
  uVar27 = param_2[4];
  uVar4 = *param_2;
  uVar28 = param_2[3];
  uVar29 = param_2[2];
  uVar30 = param_2[1];
  uVar1 = (ulonglong)uVar4 * (ulonglong)uVar3 +
          (ulonglong)uVar30 * (ulonglong)uVar9 +
          (ulonglong)uVar29 * (ulonglong)uVar31 +
          (ulonglong)uVar28 * (ulonglong)uVar23 +
          (ulonglong)uVar27 * (ulonglong)uVar32 +
          (ulonglong)uVar26 * (ulonglong)uVar14 +
          (ulonglong)uVar25 * (ulonglong)uVar20 +
          (ulonglong)uVar24 * (ulonglong)(uVar16 * 0x26) +
          (ulonglong)(uVar18 * 0x26) * (ulonglong)uVar7 +
          (ulonglong)uVar19 * (ulonglong)(uVar17 * 0x13);
  lVar2 = (ulonglong)uVar4 * (ulonglong)uVar18 +
          (ulonglong)uVar3 * (ulonglong)uVar30 +
          (ulonglong)uVar29 * (ulonglong)uVar34 +
          (ulonglong)uVar28 * (ulonglong)uVar31 +
          (ulonglong)uVar27 * (ulonglong)uVar35 +
          (ulonglong)uVar26 * (ulonglong)uVar32 +
          (ulonglong)uVar25 * (ulonglong)(uVar13 * 0x13) +
          (ulonglong)uVar24 * (ulonglong)uVar20 +
          (ulonglong)(uVar17 * 0x13) * (ulonglong)uVar7 +
          (ulonglong)uVar19 * (ulonglong)(uVar16 * 0x13) + (uVar1 >> 0x1a);
  uVar5 = (uint)lVar2;
  uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
  lVar2 = (ulonglong)uVar4 * (ulonglong)uVar17 +
          (ulonglong)uVar21 * (ulonglong)uVar30 +
          (ulonglong)uVar3 * (ulonglong)uVar29 +
          (ulonglong)uVar28 * (ulonglong)uVar9 +
          (ulonglong)uVar27 * (ulonglong)uVar31 +
          (ulonglong)uVar26 * (ulonglong)uVar23 +
          (ulonglong)uVar25 * (ulonglong)uVar32 +
          (ulonglong)uVar24 * (ulonglong)uVar14 +
          (ulonglong)(uVar16 * 0x26) * (ulonglong)uVar7 + (ulonglong)uVar19 * (ulonglong)uVar20;
  uVar37 = (uint)lVar2;
  uVar22 = uVar5 >> 0x19 | uVar6 * 0x80;
  uVar38 = uVar37 + uVar22;
  uVar6 = (int)((ulonglong)lVar2 >> 0x20) + (uVar6 >> 0x19) + (uint)CARRY4(uVar37,uVar22);
  lVar2 = (ulonglong)uVar4 * (ulonglong)uVar16 +
          (ulonglong)uVar17 * (ulonglong)uVar30 +
          (ulonglong)uVar18 * (ulonglong)uVar29 +
          (ulonglong)uVar3 * (ulonglong)uVar28 +
          (ulonglong)uVar27 * (ulonglong)uVar34 +
          (ulonglong)uVar26 * (ulonglong)uVar31 +
          (ulonglong)uVar25 * (ulonglong)uVar35 +
          (ulonglong)uVar24 * (ulonglong)uVar32 +
          (ulonglong)uVar20 * (ulonglong)uVar7 + (ulonglong)(uVar13 * 0x13) * (ulonglong)uVar19;
  uVar22 = (uint)lVar2;
  uVar20 = uVar38 >> 0x1a | uVar6 * 0x40;
  uVar36 = uVar22 + uVar20;
  uVar20 = (int)((ulonglong)lVar2 >> 0x20) + (uVar6 >> 0x1a) + (uint)CARRY4(uVar22,uVar20);
  lVar2 = (ulonglong)uVar4 * (ulonglong)uVar15 +
          (ulonglong)uVar33 * (ulonglong)uVar30 +
          (ulonglong)uVar17 * (ulonglong)uVar29 +
          (ulonglong)uVar21 * (ulonglong)uVar28 +
          (ulonglong)uVar3 * (ulonglong)uVar27 +
          (ulonglong)uVar26 * (ulonglong)uVar9 +
          (ulonglong)uVar25 * (ulonglong)uVar31 +
          (ulonglong)uVar24 * (ulonglong)uVar23 +
          (ulonglong)uVar14 * (ulonglong)uVar7 + (ulonglong)uVar19 * (ulonglong)uVar32;
  uVar14 = (uint)lVar2;
  uVar6 = uVar36 >> 0x19 | uVar20 * 0x80;
  uVar37 = uVar14 + uVar6;
  uVar14 = (int)((ulonglong)lVar2 >> 0x20) + (uVar20 >> 0x19) + (uint)CARRY4(uVar14,uVar6);
  lVar2 = (ulonglong)uVar4 * (ulonglong)uVar13 +
          (ulonglong)uVar15 * (ulonglong)uVar30 +
          (ulonglong)uVar16 * (ulonglong)uVar29 +
          (ulonglong)uVar17 * (ulonglong)uVar28 +
          (ulonglong)uVar18 * (ulonglong)uVar27 +
          (ulonglong)uVar3 * (ulonglong)uVar26 +
          (ulonglong)uVar25 * (ulonglong)uVar34 +
          (ulonglong)uVar24 * (ulonglong)uVar31 +
          (ulonglong)uVar32 * (ulonglong)uVar7 + (ulonglong)uVar35 * (ulonglong)uVar19;
  uVar6 = (uint)lVar2;
  uVar22 = uVar37 >> 0x1a | uVar14 * 0x40;
  uVar20 = uVar6 + uVar22;
  uVar6 = (int)((ulonglong)lVar2 >> 0x20) + (uVar14 >> 0x1a) + (uint)CARRY4(uVar6,uVar22);
  lVar2 = (ulonglong)uVar4 * (ulonglong)uVar12 +
          (ulonglong)(uVar13 << 1) * (ulonglong)uVar30 +
          (ulonglong)uVar15 * (ulonglong)uVar29 +
          (ulonglong)uVar33 * (ulonglong)uVar28 +
          (ulonglong)uVar17 * (ulonglong)uVar27 +
          (ulonglong)uVar21 * (ulonglong)uVar26 +
          (ulonglong)uVar3 * (ulonglong)uVar25 +
          (ulonglong)uVar24 * (ulonglong)uVar9 +
          (ulonglong)uVar23 * (ulonglong)uVar7 + (ulonglong)uVar19 * (ulonglong)uVar31;
  uVar14 = (uint)lVar2;
  uVar22 = uVar20 >> 0x19 | uVar6 * 0x80;
  uVar23 = uVar14 + uVar22;
  uVar22 = (int)((ulonglong)lVar2 >> 0x20) + (uVar6 >> 0x19) + (uint)CARRY4(uVar14,uVar22);
  lVar2 = (ulonglong)uVar4 * (ulonglong)uVar11 +
          (ulonglong)uVar12 * (ulonglong)uVar30 +
          (ulonglong)uVar13 * (ulonglong)uVar29 +
          (ulonglong)uVar15 * (ulonglong)uVar28 +
          (ulonglong)uVar16 * (ulonglong)uVar27 +
          (ulonglong)uVar17 * (ulonglong)uVar26 +
          (ulonglong)uVar18 * (ulonglong)uVar25 +
          (ulonglong)uVar3 * (ulonglong)uVar24 +
          (ulonglong)uVar31 * (ulonglong)uVar7 + (ulonglong)uVar34 * (ulonglong)uVar19;
  uVar6 = (uint)lVar2;
  uVar31 = uVar23 >> 0x1a | uVar22 * 0x40;
  uVar14 = uVar6 + uVar31;
  uVar22 = (int)((ulonglong)lVar2 >> 0x20) + (uVar22 >> 0x1a) + (uint)CARRY4(uVar6,uVar31);
  lVar2 = (ulonglong)uVar4 * (ulonglong)uVar10 +
          (ulonglong)(uVar11 << 1) * (ulonglong)uVar30 +
          (ulonglong)uVar12 * (ulonglong)uVar29 +
          (ulonglong)(uVar13 << 1) * (ulonglong)uVar28 +
          (ulonglong)uVar15 * (ulonglong)uVar27 +
          (ulonglong)uVar33 * (ulonglong)uVar26 +
          (ulonglong)uVar17 * (ulonglong)uVar25 +
          (ulonglong)uVar21 * (ulonglong)uVar24 +
          (ulonglong)uVar9 * (ulonglong)uVar7 + (ulonglong)uVar3 * (ulonglong)uVar19;
  uVar21 = (uint)lVar2;
  uVar33 = uVar14 >> 0x19 | uVar22 * 0x80;
  uVar6 = uVar21 + uVar33;
  uVar9 = (int)((ulonglong)lVar2 >> 0x20) + (uVar22 >> 0x19) + (uint)CARRY4(uVar21,uVar33);
  lVar2 = (ulonglong)uVar8 * (ulonglong)uVar4 +
          (ulonglong)uVar10 * (ulonglong)uVar30 +
          (ulonglong)uVar11 * (ulonglong)uVar29 +
          (ulonglong)uVar12 * (ulonglong)uVar28 +
          (ulonglong)uVar13 * (ulonglong)uVar27 +
          (ulonglong)uVar15 * (ulonglong)uVar26 +
          (ulonglong)uVar16 * (ulonglong)uVar25 +
          (ulonglong)uVar17 * (ulonglong)uVar24 +
          (ulonglong)uVar3 * (ulonglong)uVar7 + (ulonglong)uVar18 * (ulonglong)uVar19;
  uVar21 = (uint)lVar2;
  uVar3 = uVar6 >> 0x1a | uVar9 * 0x40;
  uVar33 = uVar21 + uVar3;
  uVar21 = (int)((ulonglong)lVar2 >> 0x20) + (uVar9 >> 0x1a) + (uint)CARRY4(uVar21,uVar3);
  lVar2 = (ulonglong)(uVar33 >> 0x19 | uVar21 * 0x80) * 0x13 +
          (CONCAT44((uVar21 >> 0x19) * 0x13,(int)uVar1) & 0xffffffff03ffffff);
  uVar21 = (uint)lVar2;
  *param_1 = uVar21 & 0x3ffffff;
  uVar21 = (uVar5 & 0x1ffffff) + (uVar21 >> 0x1a | (int)((ulonglong)lVar2 >> 0x20) * 0x40);
  param_1[1] = uVar21 & 0x1ffffff;
  param_1[2] = (uVar38 & 0x3ffffff) + (uVar21 >> 0x19);
  param_1[3] = uVar36 & 0x1ffffff;
  param_1[4] = uVar37 & 0x3ffffff;
  param_1[5] = uVar20 & 0x1ffffff;
  param_1[6] = uVar23 & 0x3ffffff;
  param_1[7] = uVar14 & 0x1ffffff;
  param_1[8] = uVar6 & 0x3ffffff;
  param_1[9] = uVar33 & 0x1ffffff;
  return 0;
}

