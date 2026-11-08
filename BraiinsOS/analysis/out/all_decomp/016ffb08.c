// FUN_016ffb08 @ 016ffb08 size=2948 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_016ffb08(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
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
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
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
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  
  uVar24 = param_2[0xf];
  uVar54 = param_2[0xb];
  uVar34 = param_2[0xe];
  uVar41 = param_2[0xc];
  uVar39 = param_2[10];
  uVar25 = param_2[0xd];
  uVar21 = param_2[0x12];
  uVar48 = param_2[0x10];
  uVar49 = uVar54 << 2;
  uVar51 = param_2[0x11];
  uVar23 = uVar25 << 2;
  uVar43 = param_2[8];
  uVar55 = param_2[9];
  uVar37 = uVar34 << 1;
  uVar20 = *param_2;
  uVar38 = uVar54 << 1;
  uVar50 = uVar39 << 2;
  uVar1 = uVar41 << 2;
  uVar42 = param_2[6];
  uVar22 = param_2[7];
  uVar58 = uVar39 << 1;
  uVar2 = uVar25 << 1;
  uVar3 = uVar24 << 2;
  uVar44 = param_2[5];
  uVar45 = param_2[4];
  uVar35 = param_2[2];
  uVar40 = param_2[1];
  uVar56 = param_2[3];
  uVar4 = uVar48 << 1;
  uVar5 = uVar51 << 2;
  uVar6 = uVar24 << 1;
  uVar31 = uVar48 << 2;
  uVar7 = uVar51 << 1;
  uVar8 = uVar21 << 1;
  uVar53 = uVar21 << 2;
  uVar32 = uVar56 << 1;
  uVar33 = uVar45 << 1;
  uVar36 = uVar44 << 2;
  uVar52 = uVar42 << 2;
  uVar9 = uVar42 << 1;
  uVar10 = uVar43 << 1;
  uVar11 = uVar43 << 2;
  uVar12 = uVar55 << 1;
  uVar13 = (ulonglong)uVar40 * (ulonglong)uVar53 +
           (ulonglong)uVar35 * (ulonglong)uVar5 +
           (ulonglong)uVar56 * (ulonglong)uVar31 +
           (ulonglong)uVar45 * (ulonglong)uVar3 +
           (ulonglong)uVar44 * (ulonglong)(uVar34 << 2) +
           (ulonglong)uVar42 * (ulonglong)uVar23 +
           (ulonglong)uVar22 * (ulonglong)uVar1 +
           (ulonglong)uVar20 * (ulonglong)uVar20 +
           (ulonglong)uVar50 * (ulonglong)uVar55 + (ulonglong)uVar43 * (ulonglong)uVar49;
  lVar14 = (ulonglong)uVar20 * (ulonglong)(uVar22 << 1) +
           (ulonglong)uVar40 * (ulonglong)uVar52 +
           (ulonglong)uVar35 * (ulonglong)uVar36 +
           (ulonglong)(uVar45 << 2) * (ulonglong)uVar56 +
           (ulonglong)uVar43 * (ulonglong)uVar53 +
           (ulonglong)uVar55 * (ulonglong)uVar5 +
           (ulonglong)uVar39 * (ulonglong)uVar31 +
           (ulonglong)uVar54 * (ulonglong)uVar3 +
           (ulonglong)uVar2 * (ulonglong)uVar25 + (ulonglong)(uVar34 << 2) * (ulonglong)uVar41;
  uVar26 = (uint)lVar14;
  uVar27 = (uint)uVar13 & 0xfffffff;
  lVar15 = (uVar13 >> 0x1c) +
           (ulonglong)uVar20 * (ulonglong)(uVar40 << 1) +
           (ulonglong)uVar35 * (ulonglong)uVar8 +
           (ulonglong)uVar56 * (ulonglong)uVar5 +
           (ulonglong)uVar45 * (ulonglong)uVar4 +
           (ulonglong)uVar44 * (ulonglong)uVar3 +
           (ulonglong)uVar42 * (ulonglong)uVar37 +
           (ulonglong)uVar22 * (ulonglong)uVar2 +
           (ulonglong)uVar43 * (ulonglong)uVar1 +
           (ulonglong)uVar58 * (ulonglong)uVar39 + (ulonglong)uVar38 * (ulonglong)uVar55;
  uVar28 = (uint)lVar15;
  uVar46 = (uint)((ulonglong)lVar15 >> 0x20);
  uVar29 = uVar28 >> 0x1b | uVar46 * 0x20;
  lVar15 = (ulonglong)uVar20 * (ulonglong)(uVar35 << 1) +
           (ulonglong)(uVar40 << 1) * (ulonglong)uVar40 +
           (ulonglong)uVar56 * (ulonglong)uVar53 +
           (ulonglong)uVar45 * (ulonglong)uVar5 +
           (ulonglong)uVar44 * (ulonglong)uVar31 +
           (ulonglong)uVar42 * (ulonglong)uVar3 +
           (ulonglong)uVar22 * (ulonglong)uVar37 +
           (ulonglong)uVar43 * (ulonglong)uVar23 +
           (ulonglong)uVar49 * (ulonglong)uVar39 + (ulonglong)uVar55 * (ulonglong)uVar1;
  uVar57 = (uint)lVar15;
  uVar30 = uVar57 + uVar29;
  uVar29 = (int)((ulonglong)lVar15 >> 0x20) + (uVar46 >> 0x1b) + (uint)CARRY4(uVar57,uVar29);
  lVar15 = (ulonglong)uVar20 * (ulonglong)uVar12 +
           (ulonglong)uVar40 * (ulonglong)uVar11 +
           (ulonglong)uVar35 * (ulonglong)(uVar22 << 1) +
           (ulonglong)uVar56 * (ulonglong)uVar52 +
           (ulonglong)uVar36 * (ulonglong)uVar45 +
           (ulonglong)uVar39 * (ulonglong)uVar53 +
           (ulonglong)uVar54 * (ulonglong)uVar5 +
           (ulonglong)uVar34 * (ulonglong)uVar34 +
           (ulonglong)uVar3 * (ulonglong)uVar25 + (ulonglong)uVar31 * (ulonglong)uVar41;
  uVar57 = (uint)lVar15;
  uVar47 = uVar30 >> 0x1c | uVar29 * 0x10;
  lVar16 = (ulonglong)uVar20 * (ulonglong)uVar32 +
           (ulonglong)(uVar35 << 1) * (ulonglong)uVar40 +
           (ulonglong)uVar45 * (ulonglong)uVar8 +
           (ulonglong)uVar44 * (ulonglong)uVar5 +
           (ulonglong)uVar42 * (ulonglong)uVar4 +
           (ulonglong)uVar22 * (ulonglong)uVar6 +
           (ulonglong)uVar43 * (ulonglong)uVar37 +
           (ulonglong)uVar54 * (ulonglong)uVar54 +
           (ulonglong)uVar39 * (ulonglong)uVar1 + (ulonglong)uVar55 * (ulonglong)uVar2;
  uVar31 = (uint)lVar16;
  uVar46 = uVar31 + uVar47;
  uVar47 = (int)((ulonglong)lVar16 >> 0x20) + (uVar29 >> 0x1c) + (uint)CARRY4(uVar31,uVar47);
  param_1[3] = uVar46 & 0x7ffffff;
  uVar46 = uVar46 >> 0x1b | uVar47 * 0x20;
  lVar16 = (ulonglong)uVar20 * (ulonglong)uVar33 +
           (ulonglong)(uVar56 << 2) * (ulonglong)uVar40 +
           (ulonglong)uVar44 * (ulonglong)uVar53 +
           (ulonglong)uVar42 * (ulonglong)uVar5 +
           (ulonglong)uVar22 * (ulonglong)uVar4 +
           (ulonglong)uVar43 * (ulonglong)uVar3 +
           (ulonglong)uVar55 * (ulonglong)uVar37 +
           (ulonglong)uVar35 * (ulonglong)uVar35 +
           (ulonglong)uVar1 * (ulonglong)uVar54 + (ulonglong)uVar39 * (ulonglong)uVar23;
  uVar31 = (uint)lVar16;
  uVar29 = uVar31 + uVar46;
  uVar46 = (int)((ulonglong)lVar16 >> 0x20) + (uVar47 >> 0x1b) + (uint)CARRY4(uVar31,uVar46);
  param_1[4] = uVar29 & 0xfffffff;
  uVar47 = uVar29 >> 0x1c | uVar46 * 0x10;
  lVar16 = (ulonglong)uVar20 * (ulonglong)(uVar44 << 1) +
           (ulonglong)uVar40 * (ulonglong)uVar33 +
           (ulonglong)uVar35 * (ulonglong)uVar32 +
           (ulonglong)uVar42 * (ulonglong)uVar8 +
           (ulonglong)uVar22 * (ulonglong)uVar7 +
           (ulonglong)uVar43 * (ulonglong)uVar4 +
           (ulonglong)uVar55 * (ulonglong)uVar6 +
           (ulonglong)uVar39 * (ulonglong)uVar37 +
           (ulonglong)(uVar41 << 1) * (ulonglong)uVar41 + (ulonglong)uVar54 * (ulonglong)uVar2;
  uVar31 = (uint)lVar16;
  uVar29 = uVar31 + uVar47;
  uVar46 = (int)((ulonglong)lVar16 >> 0x20) + (uVar46 >> 0x1c) + (uint)CARRY4(uVar31,uVar47);
  param_1[5] = uVar29 & 0x7ffffff;
  uVar31 = uVar29 >> 0x1b | uVar46 * 0x20;
  lVar16 = (ulonglong)uVar20 * (ulonglong)uVar9 +
           (ulonglong)uVar40 * (ulonglong)uVar36 +
           (ulonglong)uVar33 * (ulonglong)uVar35 +
           (ulonglong)uVar32 * (ulonglong)uVar56 +
           (ulonglong)uVar22 * (ulonglong)uVar8 +
           (ulonglong)uVar43 * (ulonglong)uVar5 +
           (ulonglong)uVar55 * (ulonglong)uVar4 +
           (ulonglong)uVar39 * (ulonglong)uVar3 +
           (ulonglong)uVar23 * (ulonglong)uVar41 + (ulonglong)uVar54 * (ulonglong)uVar37;
  uVar32 = (uint)lVar16;
  uVar33 = uVar32 + uVar31;
  uVar29 = (int)((ulonglong)lVar16 >> 0x20) + (uVar46 >> 0x1b) + (uint)CARRY4(uVar32,uVar31);
  param_1[6] = uVar33 & 0x7ffffff;
  uVar31 = uVar33 >> 0x1b | uVar29 * 0x20;
  uVar32 = uVar26 + uVar31;
  uVar33 = (int)((ulonglong)lVar14 >> 0x20) + (uVar29 >> 0x1b) + (uint)CARRY4(uVar26,uVar31);
  param_1[7] = uVar32 & 0xfffffff;
  uVar29 = uVar32 >> 0x1c | uVar33 * 0x10;
  lVar14 = (ulonglong)uVar20 * (ulonglong)uVar10 +
           (ulonglong)uVar40 * (ulonglong)(uVar22 << 1) +
           (ulonglong)uVar35 * (ulonglong)uVar9 +
           (ulonglong)uVar56 * (ulonglong)uVar36 +
           (ulonglong)uVar55 * (ulonglong)uVar8 +
           (ulonglong)uVar39 * (ulonglong)uVar5 +
           (ulonglong)uVar54 * (ulonglong)uVar4 +
           (ulonglong)uVar45 * (ulonglong)uVar45 +
           (ulonglong)uVar37 * (ulonglong)uVar25 + (ulonglong)uVar41 * (ulonglong)uVar3;
  uVar31 = (uint)lVar14;
  uVar32 = uVar31 + uVar29;
  uVar33 = (int)((ulonglong)lVar14 >> 0x20) + (uVar33 >> 0x1c) + (uint)CARRY4(uVar31,uVar29);
  uVar31 = uVar32 >> 0x1b | uVar33 * 0x20;
  param_1[8] = uVar32 & 0x7ffffff;
  uVar32 = uVar57 + uVar31;
  uVar36 = (int)((ulonglong)lVar15 >> 0x20) + (uVar33 >> 0x1b) + (uint)CARRY4(uVar57,uVar31);
  param_1[9] = uVar32 & 0xfffffff;
  uVar31 = uVar32 >> 0x1c | uVar36 * 0x10;
  lVar14 = (ulonglong)uVar20 * (ulonglong)uVar58 +
           (ulonglong)uVar40 * (ulonglong)uVar12 +
           (ulonglong)uVar35 * (ulonglong)uVar10 +
           (ulonglong)uVar56 * (ulonglong)(uVar22 << 1) +
           (ulonglong)uVar9 * (ulonglong)uVar45 +
           (ulonglong)(uVar44 << 1) * (ulonglong)uVar44 +
           (ulonglong)uVar54 * (ulonglong)uVar8 +
           (ulonglong)uVar41 * (ulonglong)uVar5 +
           (ulonglong)uVar34 * (ulonglong)uVar6 + (ulonglong)uVar25 * (ulonglong)uVar4;
  uVar33 = (uint)lVar14;
  uVar32 = uVar33 + uVar31;
  param_1[10] = uVar32 & 0x7ffffff;
  uVar36 = (int)((ulonglong)lVar14 >> 0x20) + (uVar36 >> 0x1c) + (uint)CARRY4(uVar33,uVar31);
  uVar31 = uVar32 >> 0x1b | uVar36 * 0x20;
  lVar14 = (ulonglong)uVar20 * (ulonglong)uVar38 +
           (ulonglong)uVar40 * (ulonglong)uVar50 +
           (ulonglong)uVar35 * (ulonglong)uVar12 +
           (ulonglong)uVar56 * (ulonglong)uVar11 +
           (ulonglong)uVar45 * (ulonglong)(uVar22 << 1) +
           (ulonglong)uVar52 * (ulonglong)uVar44 +
           (ulonglong)uVar41 * (ulonglong)uVar53 +
           (ulonglong)uVar25 * (ulonglong)uVar5 +
           (ulonglong)uVar6 * (ulonglong)uVar24 + (ulonglong)uVar34 * (ulonglong)uVar4;
  uVar33 = (uint)lVar14;
  uVar32 = uVar33 + uVar31;
  uVar36 = (int)((ulonglong)lVar14 >> 0x20) + (uVar36 >> 0x1b) + (uint)CARRY4(uVar33,uVar31);
  uVar31 = uVar32 >> 0x1c | uVar36 * 0x10;
  param_1[0xb] = uVar32 & 0xfffffff;
  lVar14 = (ulonglong)uVar20 * (ulonglong)(uVar41 << 1) +
           (ulonglong)uVar40 * (ulonglong)uVar38 +
           (ulonglong)uVar35 * (ulonglong)uVar58 +
           (ulonglong)uVar56 * (ulonglong)uVar12 +
           (ulonglong)uVar45 * (ulonglong)uVar10 +
           (ulonglong)uVar44 * (ulonglong)(uVar22 << 1) +
           (ulonglong)uVar25 * (ulonglong)uVar8 +
           (ulonglong)uVar42 * (ulonglong)uVar42 +
           (ulonglong)uVar4 * (ulonglong)uVar24 + (ulonglong)uVar34 * (ulonglong)uVar7;
  uVar32 = (uint)lVar14;
  uVar33 = uVar32 + uVar31;
  uVar31 = (int)((ulonglong)lVar14 >> 0x20) + (uVar36 >> 0x1c) + (uint)CARRY4(uVar32,uVar31);
  lVar14 = (ulonglong)uVar20 * (ulonglong)uVar2 +
           (ulonglong)uVar40 * (ulonglong)uVar1 +
           (ulonglong)uVar35 * (ulonglong)uVar38 +
           (ulonglong)uVar56 * (ulonglong)uVar50 +
           (ulonglong)uVar45 * (ulonglong)uVar12 +
           (ulonglong)uVar44 * (ulonglong)uVar11 +
           (ulonglong)(uVar22 << 1) * (ulonglong)uVar42 +
           (ulonglong)uVar48 * (ulonglong)uVar48 +
           (ulonglong)uVar24 * (ulonglong)uVar5 + (ulonglong)uVar34 * (ulonglong)uVar8;
  uVar52 = (uint)lVar14;
  lVar15 = (ulonglong)uVar20 * (ulonglong)uVar37 +
           (ulonglong)uVar40 * (ulonglong)uVar23 +
           (ulonglong)uVar35 * (ulonglong)uVar1 +
           (ulonglong)uVar56 * (ulonglong)uVar49 +
           (ulonglong)uVar45 * (ulonglong)uVar50 +
           (ulonglong)(uVar55 << 2) * (ulonglong)uVar44 +
           (ulonglong)uVar11 * (ulonglong)uVar42 +
           (ulonglong)uVar22 * (ulonglong)uVar22 +
           (ulonglong)uVar5 * (ulonglong)uVar48 + (ulonglong)uVar24 * (ulonglong)uVar53;
  uVar36 = (uint)lVar15;
  lVar16 = (ulonglong)uVar20 * (ulonglong)uVar6 +
           (ulonglong)uVar40 * (ulonglong)uVar37 +
           (ulonglong)uVar35 * (ulonglong)uVar2 +
           (ulonglong)uVar56 * (ulonglong)uVar1 +
           (ulonglong)uVar45 * (ulonglong)uVar38 +
           (ulonglong)uVar44 * (ulonglong)uVar50 +
           (ulonglong)uVar42 * (ulonglong)uVar12 +
           (ulonglong)uVar22 * (ulonglong)uVar10 +
           (ulonglong)uVar7 * (ulonglong)uVar51 + (ulonglong)uVar8 * (ulonglong)uVar48;
  uVar32 = (uint)lVar16;
  lVar17 = (ulonglong)uVar20 * (ulonglong)uVar4 +
           (ulonglong)uVar40 * (ulonglong)uVar3 +
           (ulonglong)uVar35 * (ulonglong)uVar37 +
           (ulonglong)uVar56 * (ulonglong)uVar23 +
           (ulonglong)uVar45 * (ulonglong)uVar1 +
           (ulonglong)uVar44 * (ulonglong)uVar49 +
           (ulonglong)uVar42 * (ulonglong)uVar50 +
           (ulonglong)uVar22 * (ulonglong)uVar12 +
           (ulonglong)uVar53 * (ulonglong)uVar51 + (ulonglong)uVar10 * (ulonglong)uVar43;
  uVar53 = (uint)lVar17;
  lVar18 = (ulonglong)uVar20 * (ulonglong)uVar7 +
           (ulonglong)uVar40 * (ulonglong)uVar4 +
           (ulonglong)uVar35 * (ulonglong)uVar6 +
           (ulonglong)uVar56 * (ulonglong)uVar37 +
           (ulonglong)uVar45 * (ulonglong)uVar2 +
           (ulonglong)uVar44 * (ulonglong)uVar1 +
           (ulonglong)uVar42 * (ulonglong)uVar38 +
           (ulonglong)uVar21 * (ulonglong)uVar21 +
           (ulonglong)uVar12 * (ulonglong)uVar43 + (ulonglong)uVar22 * (ulonglong)uVar58;
  uVar58 = (uint)lVar18;
  lVar19 = (ulonglong)uVar20 * (ulonglong)uVar8 +
           (ulonglong)uVar40 * (ulonglong)uVar5 +
           (ulonglong)uVar35 * (ulonglong)uVar4 +
           (ulonglong)uVar56 * (ulonglong)uVar3 +
           (ulonglong)uVar45 * (ulonglong)uVar37 +
           (ulonglong)uVar44 * (ulonglong)uVar23 +
           (ulonglong)uVar42 * (ulonglong)uVar1 +
           (ulonglong)uVar55 * (ulonglong)uVar55 +
           (ulonglong)uVar43 * (ulonglong)uVar50 + (ulonglong)uVar22 * (ulonglong)uVar38;
  uVar23 = (uint)lVar19;
  uVar49 = uVar33 >> 0x1b | uVar31 * 0x20;
  uVar50 = uVar52 + uVar49;
  uVar49 = (int)((ulonglong)lVar14 >> 0x20) + (uVar31 >> 0x1b) + (uint)CARRY4(uVar52,uVar49);
  param_1[0xc] = uVar33 & 0x7ffffff;
  uVar37 = uVar50 >> 0x1b | uVar49 * 0x20;
  uVar38 = uVar36 + uVar37;
  uVar49 = (int)((ulonglong)lVar15 >> 0x20) + (uVar49 >> 0x1b) + (uint)CARRY4(uVar36,uVar37);
  param_1[0xd] = uVar50 & 0x7ffffff;
  uVar37 = uVar38 >> 0x1c | uVar49 * 0x10;
  param_1[0xe] = uVar38 & 0xfffffff;
  uVar38 = uVar32 + uVar37;
  uVar49 = (int)((ulonglong)lVar16 >> 0x20) + (uVar49 >> 0x1c) + (uint)CARRY4(uVar32,uVar37);
  param_1[0xf] = uVar38 & 0x7ffffff;
  uVar37 = uVar38 >> 0x1b | uVar49 * 0x20;
  uVar38 = uVar53 + uVar37;
  uVar49 = (int)((ulonglong)lVar17 >> 0x20) + (uVar49 >> 0x1b) + (uint)CARRY4(uVar53,uVar37);
  param_1[0x10] = uVar38 & 0xfffffff;
  uVar37 = uVar38 >> 0x1c | uVar49 * 0x10;
  uVar38 = uVar58 + uVar37;
  uVar49 = (int)((ulonglong)lVar18 >> 0x20) + (uVar49 >> 0x1c) + (uint)CARRY4(uVar58,uVar37);
  param_1[0x11] = uVar38 & 0x7ffffff;
  uVar37 = uVar38 >> 0x1b | uVar49 * 0x20;
  uVar38 = uVar23 + uVar37;
  uVar49 = (int)((ulonglong)lVar19 >> 0x20) + (uVar49 >> 0x1b) + (uint)CARRY4(uVar23,uVar37);
  uVar23 = uVar38 >> 0x1b | uVar49 * 0x20;
  uVar37 = uVar27 + uVar23;
  param_1[0x12] = uVar38 & 0x7ffffff;
  *param_1 = uVar37 & 0xfffffff;
  uVar49 = (uVar28 & 0x7ffffff) +
           (uVar37 >> 0x1c | ((uVar49 >> 0x1b) + (uint)CARRY4(uVar27,uVar23)) * 0x10);
  param_1[2] = (uVar30 & 0xfffffff) + (uVar49 >> 0x1b);
  param_1[1] = uVar49 & 0x7ffffff;
  return 0;
}

