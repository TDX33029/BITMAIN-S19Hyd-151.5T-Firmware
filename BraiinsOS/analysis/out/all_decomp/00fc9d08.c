// FUN_00fc9d08 @ 00fc9d08 size=1916 calls_out=0 calls_in=4
// strings: 

void FUN_00fc9d08(uint *param_1,uint *param_2,uint *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
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
  uint uVar39;
  uint uVar40;
  
  uVar4 = param_2[1];
  uVar24 = param_3[3];
  uVar28 = param_2[3];
  uVar10 = uVar4 << 1;
  uVar19 = param_3[1];
  uVar22 = param_3[9];
  uVar11 = uVar28 << 1;
  uVar23 = uVar22 * 0x13;
  uVar29 = param_2[5];
  uVar14 = uVar29 << 1;
  uVar38 = *param_2;
  uVar30 = param_3[7];
  uVar32 = param_3[4];
  uVar36 = param_2[2];
  uVar37 = param_3[2];
  uVar25 = uVar30 * 0x13;
  uVar20 = param_2[7];
  uVar40 = *param_3;
  uVar35 = uVar20 << 1;
  uVar15 = param_3[5];
  uVar16 = uVar15 * 0x13;
  uVar33 = param_2[9];
  uVar31 = uVar33 << 1;
  uVar17 = param_2[4];
  uVar26 = param_2[6];
  uVar18 = param_3[8];
  uVar12 = param_3[6];
  uVar39 = uVar18 * 0x13;
  uVar6 = param_2[8];
  uVar21 = uVar12 * 0x13;
  uVar1 = (ulonglong)uVar21 * (ulonglong)uVar6 +
          (ulonglong)uVar40 * (ulonglong)uVar17 +
          (ulonglong)uVar37 * (ulonglong)uVar36 +
          (ulonglong)uVar16 * (ulonglong)uVar31 +
          (ulonglong)uVar25 * (ulonglong)uVar35 +
          (ulonglong)uVar19 * (ulonglong)uVar11 + (ulonglong)uVar24 * (ulonglong)uVar10 +
          (ulonglong)uVar23 * (ulonglong)uVar14 + (ulonglong)uVar32 * (ulonglong)uVar38 +
          (ulonglong)uVar39 * (ulonglong)uVar26;
  lVar2 = (uVar1 >> 0x1a) +
          (ulonglong)uVar25 * (ulonglong)uVar6 +
          (ulonglong)uVar19 * (ulonglong)uVar17 +
          (ulonglong)uVar29 * (ulonglong)uVar40 +
          (ulonglong)uVar15 * (ulonglong)uVar38 +
          (ulonglong)uVar21 * (ulonglong)uVar33 +
          (ulonglong)uVar37 * (ulonglong)uVar28 + (ulonglong)uVar32 * (ulonglong)uVar4 +
          (ulonglong)uVar39 * (ulonglong)uVar20 + (ulonglong)uVar24 * (ulonglong)uVar36 +
          (ulonglong)uVar23 * (ulonglong)uVar26;
  uVar13 = (uint)lVar2;
  uVar27 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar7 = uVar13 >> 0x19 | uVar27 * 0x80;
  lVar2 = (ulonglong)uVar39 * (ulonglong)uVar6 +
          (ulonglong)uVar40 * (ulonglong)uVar26 +
          (ulonglong)uVar37 * (ulonglong)uVar17 +
          (ulonglong)uVar25 * (ulonglong)uVar31 +
          (ulonglong)uVar12 * (ulonglong)uVar38 +
          (ulonglong)uVar23 * (ulonglong)uVar35 +
          (ulonglong)uVar24 * (ulonglong)uVar11 + (ulonglong)uVar15 * (ulonglong)uVar10 +
          (ulonglong)uVar19 * (ulonglong)uVar14 + (ulonglong)uVar32 * (ulonglong)uVar36;
  uVar8 = (uint)lVar2;
  uVar9 = uVar8 + uVar7;
  uVar27 = (int)((ulonglong)lVar2 >> 0x20) + (uVar27 >> 0x19) + (uint)CARRY4(uVar8,uVar7);
  param_1[6] = uVar9 & 0x3ffffff;
  uVar7 = uVar9 >> 0x1a | uVar27 * 0x40;
  lVar2 = (ulonglong)uVar23 * (ulonglong)uVar6 +
          (ulonglong)uVar19 * (ulonglong)uVar26 +
          (ulonglong)uVar24 * (ulonglong)uVar17 +
          (ulonglong)uVar20 * (ulonglong)uVar40 +
          (ulonglong)uVar30 * (ulonglong)uVar38 +
          (ulonglong)uVar39 * (ulonglong)uVar33 +
          (ulonglong)uVar32 * (ulonglong)uVar28 + (ulonglong)uVar12 * (ulonglong)uVar4 +
          (ulonglong)uVar37 * (ulonglong)uVar29 + (ulonglong)uVar15 * (ulonglong)uVar36;
  uVar8 = (uint)lVar2;
  uVar9 = uVar8 + uVar7;
  uVar34 = (int)((ulonglong)lVar2 >> 0x20) + (uVar27 >> 0x1a) + (uint)CARRY4(uVar8,uVar7);
  uVar8 = uVar9 >> 0x19 | uVar34 * 0x80;
  lVar2 = (ulonglong)uVar40 * (ulonglong)uVar6 +
          (ulonglong)uVar37 * (ulonglong)uVar26 +
          (ulonglong)uVar32 * (ulonglong)uVar17 +
          (ulonglong)uVar23 * (ulonglong)uVar31 +
          (ulonglong)uVar19 * (ulonglong)uVar35 +
          (ulonglong)uVar15 * (ulonglong)uVar11 + (ulonglong)uVar30 * (ulonglong)uVar10 +
          (ulonglong)uVar24 * (ulonglong)uVar14 + (ulonglong)uVar18 * (ulonglong)uVar38 +
          (ulonglong)uVar12 * (ulonglong)uVar36;
  uVar7 = (uint)lVar2;
  uVar27 = uVar7 + uVar8;
  uVar34 = (int)((ulonglong)lVar2 >> 0x20) + (uVar34 >> 0x19) + (uint)CARRY4(uVar7,uVar8);
  uVar7 = uVar27 >> 0x1a | uVar34 * 0x40;
  lVar2 = (ulonglong)uVar19 * (ulonglong)uVar6 +
          (ulonglong)uVar24 * (ulonglong)uVar26 +
          (ulonglong)uVar15 * (ulonglong)uVar17 +
          (ulonglong)uVar33 * (ulonglong)uVar40 +
          (ulonglong)uVar37 * (ulonglong)uVar20 +
          (ulonglong)uVar12 * (ulonglong)uVar28 + (ulonglong)uVar18 * (ulonglong)uVar4 +
          (ulonglong)uVar32 * (ulonglong)uVar29 + (ulonglong)uVar22 * (ulonglong)uVar38 +
          (ulonglong)uVar30 * (ulonglong)uVar36;
  uVar8 = (uint)lVar2;
  uVar12 = uVar8 + uVar7;
  iVar5 = (int)((ulonglong)lVar2 >> 0x20) + (uVar34 >> 0x1a) + (uint)CARRY4(uVar8,uVar7);
  uVar18 = uVar24 * 0x13;
  uVar32 = uVar32 * 0x13;
  uVar3 = (ulonglong)(uVar37 * 0x13) * (ulonglong)uVar6 +
          (ulonglong)uVar21 * (ulonglong)uVar17 +
          (ulonglong)uVar39 * (ulonglong)uVar36 +
          (ulonglong)uVar38 * (ulonglong)uVar40 +
          (ulonglong)uVar18 * (ulonglong)uVar35 +
          (ulonglong)uVar25 * (ulonglong)uVar11 + (ulonglong)uVar23 * (ulonglong)uVar10 +
          (ulonglong)uVar16 * (ulonglong)uVar14 + (ulonglong)(uVar19 * 0x13) * (ulonglong)uVar31 +
          (ulonglong)uVar32 * (ulonglong)uVar26;
  lVar2 = (ulonglong)uVar18 * (ulonglong)uVar6 +
          (ulonglong)uVar16 * (ulonglong)uVar26 +
          (ulonglong)uVar25 * (ulonglong)uVar17 +
          (ulonglong)uVar4 * (ulonglong)uVar40 +
          (ulonglong)(uVar37 * 0x13) * (ulonglong)uVar33 +
          (ulonglong)uVar21 * (ulonglong)uVar29 + (ulonglong)uVar39 * (ulonglong)uVar28 +
          (ulonglong)uVar32 * (ulonglong)uVar20 + (ulonglong)uVar19 * (ulonglong)uVar38 +
          (ulonglong)uVar23 * (ulonglong)uVar36 + (uVar3 >> 0x1a);
  uVar15 = (uint)lVar2;
  uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar8 = uVar15 >> 0x19 | uVar7 * 0x80;
  lVar2 = (ulonglong)uVar32 * (ulonglong)uVar6 +
          (ulonglong)uVar21 * (ulonglong)uVar26 +
          (ulonglong)uVar39 * (ulonglong)uVar17 +
          (ulonglong)uVar40 * (ulonglong)uVar36 +
          (ulonglong)uVar18 * (ulonglong)uVar31 +
          (ulonglong)uVar16 * (ulonglong)uVar35 +
          (ulonglong)uVar23 * (ulonglong)uVar11 + (ulonglong)uVar19 * (ulonglong)uVar10 +
          (ulonglong)uVar25 * (ulonglong)uVar14 + (ulonglong)uVar37 * (ulonglong)uVar38;
  uVar10 = (uint)lVar2;
  uVar11 = uVar10 + uVar8;
  param_1[2] = uVar11 & 0x3ffffff;
  param_1[7] = uVar9 & 0x1ffffff;
  uVar35 = (int)((ulonglong)lVar2 >> 0x20) + (uVar7 >> 0x19) + (uint)CARRY4(uVar10,uVar8);
  uVar14 = uVar11 >> 0x1a | uVar35 * 0x40;
  lVar2 = (ulonglong)uVar16 * (ulonglong)uVar6 +
          (ulonglong)uVar23 * (ulonglong)uVar17 +
          (ulonglong)uVar28 * (ulonglong)uVar40 +
          (ulonglong)uVar32 * (ulonglong)uVar33 +
          (ulonglong)uVar39 * (ulonglong)uVar29 + (ulonglong)uVar37 * (ulonglong)uVar4 +
          (ulonglong)uVar21 * (ulonglong)uVar20 + (ulonglong)uVar24 * (ulonglong)uVar38 +
          (ulonglong)uVar19 * (ulonglong)uVar36 + (ulonglong)uVar25 * (ulonglong)uVar26;
  uVar10 = (uint)lVar2;
  uVar11 = uVar10 + uVar14;
  param_1[3] = uVar11 & 0x1ffffff;
  uVar10 = (int)((ulonglong)lVar2 >> 0x20) + (uVar35 >> 0x1a) + (uint)CARRY4(uVar10,uVar14);
  param_1[8] = uVar27 & 0x3ffffff;
  uVar11 = uVar11 >> 0x19 | uVar10 * 0x80;
  uVar35 = (uint)uVar1 & 0x3ffffff;
  uVar14 = uVar11 + uVar35;
  param_1[4] = uVar14 & 0x3ffffff;
  lVar2 = (ulonglong)(uVar12 >> 0x19 | iVar5 * 0x80) * 0x13 +
          (CONCAT44((short)(ushort)((uint)iVar5 >> 0x19) * 0x13,(int)uVar3) & 0xffffffff03ffffff);
  uVar31 = (uint)lVar2;
  param_1[9] = uVar12 & 0x1ffffff;
  param_1[5] = (uVar14 >> 0x1a | ((uVar10 >> 0x19) + (uint)CARRY4(uVar11,uVar35)) * 0x40) +
               (uVar13 & 0x1ffffff);
  *param_1 = uVar31 & 0x3ffffff;
  param_1[1] = (uVar31 >> 0x1a | (int)((ulonglong)lVar2 >> 0x20) << 6) + (uVar15 & 0x1ffffff);
  return;
}

