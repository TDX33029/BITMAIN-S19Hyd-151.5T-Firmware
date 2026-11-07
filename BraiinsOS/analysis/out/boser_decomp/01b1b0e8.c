// FUN_01b1b0e8 @ 01b1b0e8 size=3076 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b1b0e8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
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
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  
  uVar13 = param_2[0x12];
  uVar39 = param_2[0xc];
  uVar14 = param_2[0x11];
  uVar15 = param_2[0x10];
  uVar16 = param_2[0xf];
  uVar17 = param_2[0xe];
  uVar18 = param_2[0xd];
  uVar19 = param_2[9];
  uVar35 = param_2[10];
  uVar54 = param_2[0xb];
  uVar20 = param_2[8];
  uVar21 = param_2[7];
  uVar22 = param_2[6];
  uVar23 = param_2[5];
  uVar24 = param_2[4];
  uVar25 = param_2[3];
  uVar26 = param_2[2];
  uVar49 = param_2[1];
  uVar52 = uVar13 << 2;
  uVar37 = uVar14 << 1;
  uVar47 = uVar13 << 1;
  uVar45 = uVar14 << 2;
  uVar48 = uVar15 << 1;
  uVar38 = uVar16 << 1;
  uVar1 = uVar16 << 2;
  uVar2 = uVar17 << 1;
  uVar44 = uVar18 << 1;
  uVar34 = uVar15 << 2;
  uVar3 = uVar18 << 2;
  uVar4 = uVar39 << 2;
  uVar5 = uVar35 << 1;
  uVar6 = uVar54 << 1;
  uVar7 = uVar35 << 2;
  uVar46 = *param_2;
  uVar8 = uVar19 << 1;
  uVar53 = uVar20 << 1;
  uVar36 = uVar20 << 2;
  uVar11 = uVar21 << 1;
  uVar43 = uVar22 << 2;
  uVar12 = uVar22 << 1;
  uVar51 = uVar23 << 2;
  uVar32 = uVar25 << 1;
  uVar33 = uVar24 << 1;
  uVar9 = (ulonglong)uVar49 * (ulonglong)uVar52 +
          (ulonglong)uVar26 * (ulonglong)uVar45 +
          (ulonglong)uVar25 * (ulonglong)uVar34 +
          (ulonglong)uVar24 * (ulonglong)uVar1 +
          (ulonglong)uVar23 * (ulonglong)(uVar17 << 2) +
          (ulonglong)uVar22 * (ulonglong)uVar3 +
          (ulonglong)uVar21 * (ulonglong)(uVar39 << 2) +
          (ulonglong)uVar46 * (ulonglong)uVar46 +
          (ulonglong)(uVar35 << 2) * (ulonglong)uVar19 +
          (ulonglong)uVar20 * (ulonglong)(uVar54 << 2);
  lVar10 = (ulonglong)uVar46 * (ulonglong)(uVar49 << 1) +
           (ulonglong)uVar26 * (ulonglong)uVar47 +
           (ulonglong)uVar25 * (ulonglong)uVar45 +
           (ulonglong)uVar24 * (ulonglong)uVar48 +
           (ulonglong)uVar23 * (ulonglong)uVar1 +
           (ulonglong)uVar22 * (ulonglong)uVar2 +
           (ulonglong)uVar21 * (ulonglong)uVar44 +
           (ulonglong)uVar20 * (ulonglong)(uVar39 << 2) +
           (ulonglong)(uVar35 << 1) * (ulonglong)uVar35 +
           (ulonglong)(uVar54 << 1) * (ulonglong)uVar19 + (uVar9 >> 0x1c);
  uVar27 = (uint)lVar10;
  uVar28 = (uint)((ulonglong)lVar10 >> 0x20);
  lVar10 = (ulonglong)uVar46 * (ulonglong)(uVar26 << 1) +
           (ulonglong)(uVar49 << 1) * (ulonglong)uVar49 +
           (ulonglong)uVar25 * (ulonglong)uVar52 +
           (ulonglong)uVar24 * (ulonglong)uVar45 +
           (ulonglong)uVar23 * (ulonglong)uVar34 +
           (ulonglong)uVar22 * (ulonglong)uVar1 +
           (ulonglong)uVar21 * (ulonglong)uVar2 +
           (ulonglong)uVar20 * (ulonglong)uVar3 +
           (ulonglong)(uVar54 << 2) * (ulonglong)uVar35 +
           (ulonglong)uVar19 * (ulonglong)(uVar39 << 2);
  uVar29 = (uint)lVar10;
  uVar30 = uVar27 >> 0x1b | uVar28 * 0x20;
  uVar31 = uVar29 + uVar30;
  uVar28 = (int)((ulonglong)lVar10 >> 0x20) + (uVar28 >> 0x1b) + (uint)CARRY4(uVar29,uVar30);
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar32 +
           (ulonglong)(uVar26 << 1) * (ulonglong)uVar49 +
           (ulonglong)uVar24 * (ulonglong)uVar47 +
           (ulonglong)uVar23 * (ulonglong)uVar45 +
           (ulonglong)uVar22 * (ulonglong)uVar48 +
           (ulonglong)uVar21 * (ulonglong)uVar38 +
           (ulonglong)uVar20 * (ulonglong)uVar2 +
           (ulonglong)uVar54 * (ulonglong)uVar54 +
           (ulonglong)uVar35 * (ulonglong)(uVar39 << 2) + (ulonglong)uVar19 * (ulonglong)uVar44;
  uVar29 = (uint)lVar10;
  uVar40 = uVar31 >> 0x1c | uVar28 * 0x10;
  uVar30 = uVar29 + uVar40;
  uVar28 = (int)((ulonglong)lVar10 >> 0x20) + (uVar28 >> 0x1c) + (uint)CARRY4(uVar29,uVar40);
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar33 +
           (ulonglong)(uVar25 << 2) * (ulonglong)uVar49 +
           (ulonglong)uVar23 * (ulonglong)uVar52 +
           (ulonglong)uVar22 * (ulonglong)uVar45 +
           (ulonglong)uVar21 * (ulonglong)uVar48 +
           (ulonglong)uVar20 * (ulonglong)uVar1 +
           (ulonglong)uVar19 * (ulonglong)uVar2 +
           (ulonglong)uVar26 * (ulonglong)uVar26 +
           (ulonglong)(uVar39 << 2) * (ulonglong)uVar54 + (ulonglong)uVar35 * (ulonglong)uVar3;
  uVar29 = (uint)lVar10;
  uVar41 = uVar30 >> 0x1b | uVar28 * 0x20;
  uVar40 = uVar29 + uVar41;
  uVar28 = (int)((ulonglong)lVar10 >> 0x20) + (uVar28 >> 0x1b) + (uint)CARRY4(uVar29,uVar41);
  lVar10 = (ulonglong)uVar46 * (ulonglong)(uVar23 << 1) +
           (ulonglong)uVar49 * (ulonglong)uVar33 +
           (ulonglong)uVar26 * (ulonglong)uVar32 +
           (ulonglong)uVar22 * (ulonglong)uVar47 +
           (ulonglong)uVar21 * (ulonglong)uVar37 +
           (ulonglong)uVar20 * (ulonglong)uVar48 +
           (ulonglong)uVar19 * (ulonglong)uVar38 +
           (ulonglong)uVar35 * (ulonglong)uVar2 +
           (ulonglong)(uVar39 << 1) * (ulonglong)uVar39 + (ulonglong)uVar54 * (ulonglong)uVar44;
  uVar29 = (uint)lVar10;
  uVar42 = uVar40 >> 0x1c | uVar28 * 0x10;
  uVar41 = uVar29 + uVar42;
  uVar28 = (int)((ulonglong)lVar10 >> 0x20) + (uVar28 >> 0x1c) + (uint)CARRY4(uVar29,uVar42);
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar12 +
           (ulonglong)uVar49 * (ulonglong)uVar51 +
           (ulonglong)uVar33 * (ulonglong)uVar26 +
           (ulonglong)uVar32 * (ulonglong)uVar25 +
           (ulonglong)uVar21 * (ulonglong)uVar47 +
           (ulonglong)uVar20 * (ulonglong)uVar45 +
           (ulonglong)uVar19 * (ulonglong)uVar48 +
           (ulonglong)uVar35 * (ulonglong)uVar1 +
           (ulonglong)uVar3 * (ulonglong)uVar39 + (ulonglong)uVar54 * (ulonglong)uVar2;
  uVar32 = (uint)lVar10;
  uVar29 = uVar41 >> 0x1b | uVar28 * 0x20;
  uVar33 = uVar32 + uVar29;
  uVar32 = (int)((ulonglong)lVar10 >> 0x20) + (uVar28 >> 0x1b) + (uint)CARRY4(uVar32,uVar29);
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar11 +
           (ulonglong)uVar49 * (ulonglong)uVar43 +
           (ulonglong)uVar26 * (ulonglong)uVar51 +
           (ulonglong)(uVar24 << 2) * (ulonglong)uVar25 +
           (ulonglong)uVar20 * (ulonglong)uVar52 +
           (ulonglong)uVar19 * (ulonglong)uVar45 +
           (ulonglong)uVar35 * (ulonglong)uVar34 +
           (ulonglong)uVar54 * (ulonglong)uVar1 +
           (ulonglong)uVar44 * (ulonglong)uVar18 + (ulonglong)(uVar17 << 2) * (ulonglong)uVar39;
  uVar28 = (uint)lVar10;
  uVar42 = uVar33 >> 0x1b | uVar32 * 0x20;
  uVar29 = uVar28 + uVar42;
  uVar32 = (int)((ulonglong)lVar10 >> 0x20) + (uVar32 >> 0x1b) + (uint)CARRY4(uVar28,uVar42);
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar53 +
           (ulonglong)uVar49 * (ulonglong)uVar11 +
           (ulonglong)uVar26 * (ulonglong)uVar12 +
           (ulonglong)uVar25 * (ulonglong)uVar51 +
           (ulonglong)uVar19 * (ulonglong)uVar47 +
           (ulonglong)uVar35 * (ulonglong)uVar45 +
           (ulonglong)uVar54 * (ulonglong)uVar48 +
           (ulonglong)uVar24 * (ulonglong)uVar24 +
           (ulonglong)uVar2 * (ulonglong)uVar18 + (ulonglong)uVar39 * (ulonglong)uVar1;
  uVar28 = (uint)lVar10;
  uVar50 = uVar29 >> 0x1c | uVar32 * 0x10;
  uVar42 = uVar28 + uVar50;
  uVar32 = (int)((ulonglong)lVar10 >> 0x20) + (uVar32 >> 0x1c) + (uint)CARRY4(uVar28,uVar50);
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar8 +
           (ulonglong)uVar49 * (ulonglong)uVar36 +
           (ulonglong)uVar26 * (ulonglong)uVar11 +
           (ulonglong)uVar25 * (ulonglong)uVar43 +
           (ulonglong)uVar51 * (ulonglong)uVar24 +
           (ulonglong)uVar35 * (ulonglong)uVar52 +
           (ulonglong)uVar54 * (ulonglong)uVar45 +
           (ulonglong)uVar17 * (ulonglong)uVar17 +
           (ulonglong)uVar1 * (ulonglong)uVar18 + (ulonglong)uVar34 * (ulonglong)uVar39;
  uVar34 = (uint)lVar10;
  uVar51 = uVar42 >> 0x1b | uVar32 * 0x20;
  uVar28 = uVar34 + uVar51;
  uVar34 = (int)((ulonglong)lVar10 >> 0x20) + (uVar32 >> 0x1b) + (uint)CARRY4(uVar34,uVar51);
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar5 +
           (ulonglong)uVar49 * (ulonglong)uVar8 +
           (ulonglong)uVar26 * (ulonglong)uVar53 +
           (ulonglong)uVar25 * (ulonglong)uVar11 +
           (ulonglong)uVar12 * (ulonglong)uVar24 +
           (ulonglong)(uVar23 << 1) * (ulonglong)uVar23 +
           (ulonglong)uVar54 * (ulonglong)uVar47 +
           (ulonglong)uVar39 * (ulonglong)uVar45 +
           (ulonglong)uVar17 * (ulonglong)uVar38 + (ulonglong)uVar18 * (ulonglong)uVar48;
  uVar12 = (uint)lVar10;
  uVar32 = uVar28 >> 0x1c | uVar34 * 0x10;
  uVar51 = uVar12 + uVar32;
  uVar12 = (int)((ulonglong)lVar10 >> 0x20) + (uVar34 >> 0x1c) + (uint)CARRY4(uVar12,uVar32);
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar6 +
           (ulonglong)uVar49 * (ulonglong)uVar7 +
           (ulonglong)uVar26 * (ulonglong)uVar8 +
           (ulonglong)uVar25 * (ulonglong)uVar36 +
           (ulonglong)uVar24 * (ulonglong)uVar11 +
           (ulonglong)uVar43 * (ulonglong)uVar23 +
           (ulonglong)uVar39 * (ulonglong)uVar52 +
           (ulonglong)uVar18 * (ulonglong)uVar45 +
           (ulonglong)uVar38 * (ulonglong)uVar16 + (ulonglong)uVar17 * (ulonglong)uVar48;
  uVar43 = (uint)lVar10;
  uVar34 = uVar51 >> 0x1b | uVar12 * 0x20;
  uVar35 = uVar43 + uVar34;
  uVar43 = (int)((ulonglong)lVar10 >> 0x20) + (uVar12 >> 0x1b) + (uint)CARRY4(uVar43,uVar34);
  lVar10 = (ulonglong)uVar46 * (ulonglong)(uVar39 << 1) +
           (ulonglong)uVar49 * (ulonglong)uVar6 +
           (ulonglong)uVar26 * (ulonglong)uVar5 +
           (ulonglong)uVar25 * (ulonglong)uVar8 +
           (ulonglong)uVar24 * (ulonglong)uVar53 +
           (ulonglong)uVar23 * (ulonglong)uVar11 +
           (ulonglong)uVar18 * (ulonglong)uVar47 +
           (ulonglong)uVar22 * (ulonglong)uVar22 +
           (ulonglong)uVar48 * (ulonglong)uVar16 + (ulonglong)uVar17 * (ulonglong)uVar37;
  uVar12 = (uint)lVar10;
  uVar34 = uVar35 >> 0x1c | uVar43 * 0x10;
  uVar32 = uVar12 + uVar34;
  uVar43 = (int)((ulonglong)lVar10 >> 0x20) + (uVar43 >> 0x1c) + (uint)CARRY4(uVar12,uVar34);
  uVar12 = uVar32 >> 0x1b | uVar43 * 0x20;
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar44 +
           (ulonglong)uVar49 * (ulonglong)uVar4 +
           (ulonglong)uVar26 * (ulonglong)uVar6 +
           (ulonglong)uVar25 * (ulonglong)uVar7 +
           (ulonglong)uVar24 * (ulonglong)uVar8 +
           (ulonglong)uVar23 * (ulonglong)uVar36 +
           (ulonglong)uVar11 * (ulonglong)uVar22 +
           (ulonglong)uVar15 * (ulonglong)uVar15 +
           (ulonglong)uVar16 * (ulonglong)uVar45 + (ulonglong)uVar17 * (ulonglong)uVar47;
  uVar34 = (uint)lVar10;
  uVar11 = uVar34 + uVar12;
  uVar34 = (int)((ulonglong)lVar10 >> 0x20) + (uVar43 >> 0x1b) + (uint)CARRY4(uVar34,uVar12);
  uVar12 = uVar11 >> 0x1b | uVar34 * 0x20;
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar2 +
           (ulonglong)uVar49 * (ulonglong)uVar3 +
           (ulonglong)uVar26 * (ulonglong)uVar4 +
           (ulonglong)uVar25 * (ulonglong)(uVar54 << 2) +
           (ulonglong)uVar24 * (ulonglong)uVar7 +
           (ulonglong)(uVar19 << 2) * (ulonglong)uVar23 +
           (ulonglong)uVar36 * (ulonglong)uVar22 +
           (ulonglong)uVar21 * (ulonglong)uVar21 +
           (ulonglong)uVar45 * (ulonglong)uVar15 + (ulonglong)uVar16 * (ulonglong)uVar52;
  uVar36 = (uint)lVar10;
  uVar43 = uVar36 + uVar12;
  uVar34 = (int)((ulonglong)lVar10 >> 0x20) + (uVar34 >> 0x1b) + (uint)CARRY4(uVar36,uVar12);
  uVar36 = uVar43 >> 0x1c | uVar34 * 0x10;
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar38 +
           (ulonglong)uVar49 * (ulonglong)uVar2 +
           (ulonglong)uVar26 * (ulonglong)uVar44 +
           (ulonglong)uVar25 * (ulonglong)uVar4 +
           (ulonglong)uVar24 * (ulonglong)uVar6 +
           (ulonglong)uVar23 * (ulonglong)uVar7 +
           (ulonglong)uVar22 * (ulonglong)uVar8 +
           (ulonglong)uVar21 * (ulonglong)uVar53 +
           (ulonglong)uVar37 * (ulonglong)uVar14 + (ulonglong)uVar47 * (ulonglong)uVar15;
  uVar12 = (uint)lVar10;
  uVar15 = uVar12 + uVar36;
  uVar34 = (int)((ulonglong)lVar10 >> 0x20) + (uVar34 >> 0x1c) + (uint)CARRY4(uVar12,uVar36);
  uVar36 = uVar15 >> 0x1b | uVar34 * 0x20;
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar48 +
           (ulonglong)uVar49 * (ulonglong)uVar1 +
           (ulonglong)uVar26 * (ulonglong)uVar2 +
           (ulonglong)uVar25 * (ulonglong)uVar3 +
           (ulonglong)uVar24 * (ulonglong)uVar4 +
           (ulonglong)uVar23 * (ulonglong)(uVar54 << 2) +
           (ulonglong)uVar22 * (ulonglong)uVar7 +
           (ulonglong)uVar21 * (ulonglong)uVar8 +
           (ulonglong)uVar52 * (ulonglong)uVar14 + (ulonglong)uVar53 * (ulonglong)uVar20;
  uVar52 = (uint)lVar10;
  uVar53 = uVar52 + uVar36;
  uVar34 = (int)((ulonglong)lVar10 >> 0x20) + (uVar34 >> 0x1b) + (uint)CARRY4(uVar52,uVar36);
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar37 +
           (ulonglong)uVar49 * (ulonglong)uVar48 +
           (ulonglong)uVar26 * (ulonglong)uVar38 +
           (ulonglong)uVar25 * (ulonglong)uVar2 +
           (ulonglong)uVar24 * (ulonglong)uVar44 +
           (ulonglong)uVar23 * (ulonglong)uVar4 +
           (ulonglong)uVar22 * (ulonglong)uVar6 +
           (ulonglong)uVar13 * (ulonglong)uVar13 +
           (ulonglong)uVar8 * (ulonglong)uVar20 + (ulonglong)uVar21 * (ulonglong)uVar5;
  uVar37 = (uint)lVar10;
  uVar52 = uVar53 >> 0x1c | uVar34 * 0x10;
  uVar38 = uVar37 + uVar52;
  uVar44 = (int)((ulonglong)lVar10 >> 0x20) + (uVar34 >> 0x1c) + (uint)CARRY4(uVar37,uVar52);
  lVar10 = (ulonglong)uVar46 * (ulonglong)uVar47 +
           (ulonglong)uVar49 * (ulonglong)uVar45 +
           (ulonglong)uVar26 * (ulonglong)uVar48 +
           (ulonglong)uVar25 * (ulonglong)uVar1 +
           (ulonglong)uVar24 * (ulonglong)uVar2 +
           (ulonglong)uVar23 * (ulonglong)uVar3 +
           (ulonglong)uVar22 * (ulonglong)uVar4 +
           (ulonglong)uVar19 * (ulonglong)uVar19 +
           (ulonglong)uVar20 * (ulonglong)uVar7 + (ulonglong)uVar21 * (ulonglong)uVar6;
  uVar52 = (uint)lVar10;
  uVar47 = uVar38 >> 0x1b | uVar44 * 0x20;
  uVar37 = uVar52 + uVar47;
  uVar52 = (int)((ulonglong)lVar10 >> 0x20) + (uVar44 >> 0x1b) + (uint)CARRY4(uVar52,uVar47);
  uVar47 = (uint)uVar9 & 0xfffffff;
  uVar48 = uVar37 >> 0x1b | uVar52 * 0x20;
  uVar45 = uVar47 + uVar48;
  uVar52 = (uVar27 & 0x7ffffff) +
           (uVar45 >> 0x1c | ((uVar52 >> 0x1b) + (uint)CARRY4(uVar47,uVar48)) * 0x10);
  *param_1 = uVar45 & 0xfffffff;
  param_1[1] = uVar52 & 0x7ffffff;
  param_1[0xb] = uVar35 & 0xfffffff;
  param_1[0xc] = uVar32 & 0x7ffffff;
  param_1[2] = (uVar31 & 0xfffffff) + (uVar52 >> 0x1b);
  param_1[3] = uVar30 & 0x7ffffff;
  param_1[4] = uVar40 & 0xfffffff;
  param_1[5] = uVar41 & 0x7ffffff;
  param_1[6] = uVar33 & 0x7ffffff;
  param_1[7] = uVar29 & 0xfffffff;
  param_1[8] = uVar42 & 0x7ffffff;
  param_1[9] = uVar28 & 0xfffffff;
  param_1[10] = uVar51 & 0x7ffffff;
  param_1[0xd] = uVar11 & 0x7ffffff;
  param_1[0xe] = uVar43 & 0xfffffff;
  param_1[0xf] = uVar15 & 0x7ffffff;
  param_1[0x10] = uVar53 & 0xfffffff;
  param_1[0x11] = uVar38 & 0x7ffffff;
  param_1[0x12] = uVar37 & 0x7ffffff;
  return 0;
}

