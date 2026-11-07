// FUN_00fd203c @ 00fd203c size=1564 calls_out=0 calls_in=3
// strings: 

void FUN_00fd203c(uint *param_1,uint *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
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
  bool bVar41;
  bool bVar42;
  bool bVar43;
  uint local_28;
  
  uVar24 = param_2[3];
  uVar36 = param_2[8];
  uVar18 = param_2[9];
  local_28 = *param_2;
  uVar12 = param_2[1];
  uVar32 = param_2[2];
  uVar20 = param_2[4];
  uVar11 = param_2[5];
  uVar14 = param_2[6];
  uVar10 = param_2[7];
  do {
    uVar2 = (ulonglong)uVar14 * 0x13;
    uVar8 = uVar10 * 0x13 + (int)(uVar2 >> 0x20);
    uVar3 = (uVar2 & 0xffffffff) * (ulonglong)uVar20;
    uVar15 = (uint)uVar3;
    lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar11 + (uVar3 >> 0x20);
    uVar16 = (uint)((ulonglong)lVar1 >> 0x20);
    lVar4 = (ulonglong)uVar8 * (ulonglong)uVar20;
    uVar33 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar9 = (uint)(lVar1 + lVar4);
    uVar3 = (ulonglong)uVar36 * 0x13;
    uVar35 = uVar18 * 0x13 + (int)(uVar3 >> 0x20);
    lVar1 = (ulonglong)uVar8 * (ulonglong)uVar11 +
            (ulonglong)
            CONCAT14(CARRY4(uVar16,uVar33) ||
                     CARRY4(uVar16 + uVar33,(uint)CARRY4((uint)lVar4,(uint)lVar1)),
                     (int)((ulonglong)(lVar1 + lVar4) >> 0x20));
    uVar17 = (uint)lVar1;
    uVar5 = (uVar3 & 0xffffffff) * (ulonglong)uVar32;
    uVar33 = (uint)uVar5;
    lVar6 = (ulonglong)uVar35 * (ulonglong)uVar32;
    uVar16 = (uint)((ulonglong)lVar6 >> 0x20);
    lVar4 = (uVar3 & 0xffffffff) * (ulonglong)uVar24 + (uVar5 >> 0x20);
    uVar37 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar21 = (uint)(lVar6 + lVar4);
    lVar4 = (ulonglong)uVar35 * (ulonglong)uVar24 +
            (ulonglong)
            CONCAT14(CARRY4(uVar37,uVar16) ||
                     CARRY4(uVar37 + uVar16,(uint)CARRY4((uint)lVar6,(uint)lVar4)),
                     (int)((ulonglong)(lVar6 + lVar4) >> 0x20));
    uVar37 = (uint)lVar4;
    bVar41 = CARRY4(uVar21,uVar9) || CARRY4(uVar21 + uVar9,(uint)CARRY4(uVar33,uVar15));
    uVar9 = uVar21 + uVar9 + (uint)CARRY4(uVar33,uVar15);
    uVar13 = uVar37 + uVar17 + (uint)bVar41;
    uVar38 = uVar13 * 2 | uVar9 >> 0x1f;
    uVar25 = (uint)((ulonglong)local_28 * (ulonglong)local_28);
    uVar21 = uVar9 * 2 | uVar33 + uVar15 >> 0x1f;
    lVar6 = (ulonglong)local_28 * (ulonglong)uVar12 +
            ((ulonglong)local_28 * (ulonglong)local_28 >> 0x20);
    uVar22 = (uint)((ulonglong)lVar6 >> 0x20);
    lVar7 = (ulonglong)local_28 * (ulonglong)uVar12;
    uVar29 = (uint)((ulonglong)lVar7 >> 0x20);
    uVar16 = (uint)(lVar6 + lVar7);
    uVar9 = (uVar33 + uVar15) * 2;
    lVar6 = (ulonglong)uVar12 * (ulonglong)uVar12 +
            (ulonglong)
            CONCAT14(CARRY4(uVar22,uVar29) ||
                     CARRY4(uVar22 + uVar29,(uint)CARRY4((uint)lVar7,(uint)lVar6)),
                     (int)((ulonglong)(lVar6 + lVar7) >> 0x20));
    uVar22 = (uint)lVar6;
    bVar42 = CARRY4(uVar21,uVar16) || CARRY4(uVar21 + uVar16,(uint)CARRY4(uVar25,uVar9));
    uVar33 = uVar21 + uVar16 + (uint)CARRY4(uVar25,uVar9);
    uVar15 = uVar38 + uVar22 + (uint)bVar42;
    uVar5 = (uVar3 & 0xffffffff) * (ulonglong)uVar20;
    uVar39 = (uint)uVar5;
    uVar21 = ((((int)((ulonglong)lVar4 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) +
               (uint)(CARRY4(uVar37,uVar17) || CARRY4(uVar37 + uVar17,(uint)bVar41))) * 2 |
              uVar13 >> 0x1f) + (int)((ulonglong)lVar6 >> 0x20) +
             (uint)(CARRY4(uVar38,uVar22) || CARRY4(uVar38 + uVar22,(uint)bVar42))) * 0x2000 |
             uVar15 >> 0x13;
    lVar4 = (ulonglong)uVar35 * (ulonglong)uVar20;
    uVar16 = (uint)((ulonglong)lVar4 >> 0x20);
    lVar1 = (uVar3 & 0xffffffff) * (ulonglong)uVar11 + (uVar5 >> 0x20);
    uVar37 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar17 = (uint)(lVar4 + lVar1);
    lVar1 = (ulonglong)uVar35 * (ulonglong)uVar11 +
            (ulonglong)
            CONCAT14(CARRY4(uVar37,uVar16) ||
                     CARRY4(uVar37 + uVar16,(uint)CARRY4((uint)lVar4,(uint)lVar1)),
                     (int)((ulonglong)(lVar4 + lVar1) >> 0x20));
    uVar23 = (uint)lVar1;
    uVar19 = (uint)((ulonglong)uVar32 * (ulonglong)local_28);
    lVar4 = (ulonglong)uVar32 * (ulonglong)uVar12 +
            ((ulonglong)uVar32 * (ulonglong)local_28 >> 0x20);
    uVar37 = (uint)((ulonglong)lVar4 >> 0x20);
    lVar6 = (ulonglong)uVar24 * (ulonglong)local_28;
    uVar13 = (uint)((ulonglong)lVar6 >> 0x20);
    uVar16 = (uint)(lVar4 + lVar6);
    lVar4 = (ulonglong)uVar24 * (ulonglong)uVar12 +
            (ulonglong)
            CONCAT14(CARRY4(uVar37,uVar13) ||
                     CARRY4(uVar37 + uVar13,(uint)CARRY4((uint)lVar6,(uint)lVar4)),
                     (int)((ulonglong)(lVar4 + lVar6) >> 0x20));
    uVar13 = (uint)lVar4;
    bVar41 = CARRY4(uVar16,uVar17) || CARRY4(uVar16 + uVar17,(uint)CARRY4(uVar19,uVar39));
    uVar16 = uVar16 + uVar17 + (uint)CARRY4(uVar19,uVar39);
    uVar17 = uVar13 + uVar23 + (uint)bVar41;
    uVar26 = uVar17 * 2 | uVar16 >> 0x1f;
    uVar37 = uVar16 * 2 | uVar19 + uVar39 >> 0x1f;
    uVar5 = (ulonglong)uVar14 * (uVar2 & 0xffffffff);
    uVar30 = (uint)uVar5;
    lVar6 = (ulonglong)uVar14 * (ulonglong)uVar8 + (uVar5 >> 0x20);
    uVar38 = (uint)((ulonglong)lVar6 >> 0x20);
    lVar7 = (ulonglong)uVar10 * (uVar2 & 0xffffffff);
    uVar22 = (uint)((ulonglong)lVar7 >> 0x20);
    uVar29 = (uint)(lVar6 + lVar7);
    uVar16 = (uVar19 + uVar39) * 2;
    uVar39 = uVar30 + uVar16;
    lVar6 = (ulonglong)uVar10 * (ulonglong)uVar8 +
            (ulonglong)
            CONCAT14(CARRY4(uVar38,uVar22) ||
                     CARRY4(uVar38 + uVar22,(uint)CARRY4((uint)lVar7,(uint)lVar6)),
                     (int)((ulonglong)(lVar6 + lVar7) >> 0x20));
    uVar22 = (uint)lVar6;
    bVar42 = CARRY4(uVar37,uVar29) || CARRY4(uVar37 + uVar29,(uint)CARRY4(uVar30,uVar16));
    uVar16 = uVar37 + uVar29 + (uint)CARRY4(uVar30,uVar16);
    uVar37 = uVar26 + uVar22 + (uint)bVar42;
    uVar30 = uVar33 >> 0x13 | uVar15 * 0x2000;
    bVar43 = CARRY4(uVar16,uVar21) || CARRY4(uVar16 + uVar21,(uint)CARRY4(uVar39,uVar30));
    uVar29 = uVar16 + uVar21 + (uint)CARRY4(uVar39,uVar30);
    uVar16 = uVar37 + bVar43;
    uVar37 = ((((int)((ulonglong)lVar4 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) +
               (uint)(CARRY4(uVar13,uVar23) || CARRY4(uVar13 + uVar23,(uint)bVar41))) * 2 |
              uVar17 >> 0x1f) + (int)((ulonglong)lVar6 >> 0x20) +
              (uint)(CARRY4(uVar26,uVar22) || CARRY4(uVar26 + uVar22,(uint)bVar42)) +
             (uint)CARRY4(uVar37,(uint)bVar43)) * 0x2000 | uVar16 >> 0x13;
    uVar21 = uVar29 >> 0x13 | uVar16 * 0x2000;
    uVar5 = (ulonglong)uVar36 * (uVar2 & 0xffffffff);
    uVar40 = (uint)uVar5;
    lVar1 = (ulonglong)uVar36 * (ulonglong)uVar8 + (uVar5 >> 0x20);
    uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
    lVar4 = (ulonglong)uVar18 * (uVar2 & 0xffffffff);
    uVar16 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar13 = (uint)(lVar1 + lVar4);
    lVar1 = (ulonglong)uVar18 * (ulonglong)uVar8 +
            (ulonglong)
            CONCAT14(CARRY4(uVar15,uVar16) ||
                     CARRY4(uVar15 + uVar16,(uint)CARRY4((uint)lVar4,(uint)lVar1)),
                     (int)((ulonglong)(lVar1 + lVar4) >> 0x20));
    uVar19 = (uint)lVar1;
    uVar23 = (uint)((ulonglong)uVar20 * (ulonglong)local_28);
    lVar4 = (ulonglong)uVar20 * (ulonglong)uVar12 +
            ((ulonglong)uVar20 * (ulonglong)local_28 >> 0x20);
    uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
    lVar6 = (ulonglong)uVar11 * (ulonglong)local_28;
    uVar15 = (uint)((ulonglong)lVar6 >> 0x20);
    uVar16 = (uint)(lVar4 + lVar6);
    lVar4 = (ulonglong)uVar11 * (ulonglong)uVar12 +
            (ulonglong)
            CONCAT14(CARRY4(uVar8,uVar15) ||
                     CARRY4(uVar8 + uVar15,(uint)CARRY4((uint)lVar6,(uint)lVar4)),
                     (int)((ulonglong)(lVar4 + lVar6) >> 0x20));
    uVar15 = (uint)lVar4;
    bVar41 = CARRY4(uVar16,uVar13) || CARRY4(uVar16 + uVar13,(uint)CARRY4(uVar23,uVar40));
    uVar16 = uVar16 + uVar13 + (uint)CARRY4(uVar23,uVar40);
    uVar13 = uVar15 + uVar19 + (uint)bVar41;
    uVar27 = (uint)((ulonglong)uVar32 * (ulonglong)uVar32);
    lVar6 = (ulonglong)uVar32 * (ulonglong)uVar24 + ((ulonglong)uVar32 * (ulonglong)uVar32 >> 0x20);
    uVar38 = (uint)((ulonglong)lVar6 >> 0x20);
    uVar17 = uVar13 * 2 | uVar16 >> 0x1f;
    lVar7 = (ulonglong)uVar32 * (ulonglong)uVar24;
    uVar26 = (uint)((ulonglong)lVar7 >> 0x20);
    uVar8 = uVar16 * 2 | uVar23 + uVar40 >> 0x1f;
    uVar22 = (uint)(lVar6 + lVar7);
    uVar16 = (uVar23 + uVar40) * 2;
    uVar23 = uVar27 + uVar16;
    lVar6 = (ulonglong)uVar24 * (ulonglong)uVar24 +
            (ulonglong)
            CONCAT14(CARRY4(uVar38,uVar26) ||
                     CARRY4(uVar38 + uVar26,(uint)CARRY4((uint)lVar7,(uint)lVar6)),
                     (int)((ulonglong)(lVar6 + lVar7) >> 0x20));
    uVar38 = (uint)lVar6;
    bVar42 = CARRY4(uVar8,uVar22) || CARRY4(uVar8 + uVar22,(uint)CARRY4(uVar27,uVar16));
    uVar16 = uVar8 + uVar22 + (uint)CARRY4(uVar27,uVar16);
    uVar8 = uVar17 + uVar38 + (uint)bVar42;
    lVar7 = (ulonglong)uVar11 * (ulonglong)uVar32;
    uVar22 = (uint)((ulonglong)lVar7 >> 0x20);
    bVar43 = CARRY4(uVar16,uVar37) || CARRY4(uVar16 + uVar37,(uint)CARRY4(uVar23,uVar21));
    uVar27 = uVar16 + uVar37 + (uint)CARRY4(uVar23,uVar21);
    uVar16 = uVar8 + bVar43;
    uVar28 = (uint)((ulonglong)uVar20 * (ulonglong)uVar32);
    uVar17 = ((((int)((ulonglong)lVar4 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) +
               (uint)(CARRY4(uVar15,uVar19) || CARRY4(uVar15 + uVar19,(uint)bVar41))) * 2 |
              uVar13 >> 0x1f) + (int)((ulonglong)lVar6 >> 0x20) +
              (uint)(CARRY4(uVar17,uVar38) || CARRY4(uVar17 + uVar38,(uint)bVar42)) +
             (uint)CARRY4(uVar8,(uint)bVar43)) * 0x2000 | uVar16 >> 0x13;
    lVar1 = (ulonglong)uVar20 * (ulonglong)uVar24 + ((ulonglong)uVar20 * (ulonglong)uVar32 >> 0x20);
    uVar37 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar8 = uVar27 >> 0x13 | uVar16 * 0x2000;
    uVar13 = (uint)(lVar7 + lVar1);
    uVar19 = (uint)((ulonglong)uVar14 * (ulonglong)local_28);
    lVar1 = (ulonglong)uVar11 * (ulonglong)uVar24 +
            (ulonglong)
            CONCAT14(CARRY4(uVar37,uVar22) ||
                     CARRY4(uVar37 + uVar22,(uint)CARRY4((uint)lVar7,(uint)lVar1)),
                     (int)((ulonglong)(lVar7 + lVar1) >> 0x20));
    uVar26 = (uint)lVar1;
    lVar4 = (ulonglong)uVar14 * (ulonglong)uVar12 +
            ((ulonglong)uVar14 * (ulonglong)local_28 >> 0x20);
    uVar16 = (uint)((ulonglong)lVar4 >> 0x20);
    lVar6 = (ulonglong)uVar10 * (ulonglong)local_28;
    uVar37 = (uint)((ulonglong)lVar6 >> 0x20);
    uVar15 = (uint)(lVar4 + lVar6);
    lVar4 = (ulonglong)uVar10 * (ulonglong)uVar12 +
            (ulonglong)
            CONCAT14(CARRY4(uVar16,uVar37) ||
                     CARRY4(uVar16 + uVar37,(uint)CARRY4((uint)lVar6,(uint)lVar4)),
                     (int)((ulonglong)(lVar4 + lVar6) >> 0x20));
    uVar37 = (uint)lVar4;
    bVar41 = CARRY4(uVar15,uVar13) || CARRY4(uVar15 + uVar13,(uint)CARRY4(uVar19,uVar28));
    uVar16 = uVar15 + uVar13 + (uint)CARRY4(uVar19,uVar28);
    uVar15 = uVar37 + uVar26 + (uint)bVar41;
    uVar31 = uVar15 * 2 | uVar16 >> 0x1f;
    uVar22 = uVar16 * 2 | uVar19 + uVar28 >> 0x1f;
    uVar2 = (ulonglong)uVar36 * (uVar3 & 0xffffffff);
    uVar34 = (uint)uVar2;
    lVar6 = (ulonglong)uVar36 * (ulonglong)uVar35 + (uVar2 >> 0x20);
    uVar40 = (uint)((ulonglong)lVar6 >> 0x20);
    lVar7 = (ulonglong)uVar18 * (uVar3 & 0xffffffff);
    uVar13 = (uint)((ulonglong)lVar7 >> 0x20);
    uVar38 = (uint)(lVar6 + lVar7);
    uVar16 = (uVar19 + uVar28) * 2;
    uVar19 = uVar34 + uVar16;
    lVar6 = (ulonglong)uVar18 * (ulonglong)uVar35 +
            (ulonglong)
            CONCAT14(CARRY4(uVar40,uVar13) ||
                     CARRY4(uVar40 + uVar13,(uint)CARRY4((uint)lVar7,(uint)lVar6)),
                     (int)((ulonglong)(lVar6 + lVar7) >> 0x20));
    uVar13 = (uint)lVar6;
    bVar42 = CARRY4(uVar22,uVar38) || CARRY4(uVar22 + uVar38,(uint)CARRY4(uVar34,uVar16));
    uVar16 = uVar22 + uVar38 + (uint)CARRY4(uVar34,uVar16);
    uVar27 = uVar27 & 0x7ffff;
    uVar22 = uVar31 + uVar13 + (uint)bVar42;
    bVar43 = CARRY4(uVar16,uVar17) || CARRY4(uVar16 + uVar17,(uint)CARRY4(uVar19,uVar8));
    uVar16 = uVar16 + uVar17 + (uint)CARRY4(uVar19,uVar8);
    uVar17 = uVar22 + bVar43;
    uVar13 = ((((int)((ulonglong)lVar4 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) +
               (uint)(CARRY4(uVar37,uVar26) || CARRY4(uVar37 + uVar26,(uint)bVar41))) * 2 |
              uVar15 >> 0x1f) + (int)((ulonglong)lVar6 >> 0x20) +
              (uint)(CARRY4(uVar31,uVar13) || CARRY4(uVar31 + uVar13,(uint)bVar42)) +
             (uint)CARRY4(uVar22,(uint)bVar43)) * 0x2000 | uVar17 >> 0x13;
    uVar37 = uVar16 >> 0x13 | uVar17 * 0x2000;
    uVar16 = uVar16 & 0x7ffff;
    uVar17 = (uint)((ulonglong)uVar14 * (ulonglong)uVar32);
    lVar1 = (ulonglong)uVar14 * (ulonglong)uVar24 + ((ulonglong)uVar14 * (ulonglong)uVar32 >> 0x20);
    uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
    lVar4 = (ulonglong)uVar10 * (ulonglong)uVar32;
    uVar14 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar22 = (uint)(lVar1 + lVar4);
    lVar1 = (ulonglong)uVar10 * (ulonglong)uVar24 +
            (ulonglong)
            CONCAT14(CARRY4(uVar15,uVar14) ||
                     CARRY4(uVar15 + uVar14,(uint)CARRY4((uint)lVar4,(uint)lVar1)),
                     (int)((ulonglong)(lVar1 + lVar4) >> 0x20));
    uVar24 = (uint)lVar1;
    uVar38 = (uint)((ulonglong)uVar36 * (ulonglong)local_28);
    lVar4 = (ulonglong)uVar36 * (ulonglong)uVar12 +
            ((ulonglong)uVar36 * (ulonglong)local_28 >> 0x20);
    uVar32 = (uint)((ulonglong)lVar4 >> 0x20);
    lVar6 = (ulonglong)uVar18 * (ulonglong)local_28;
    uVar10 = (uint)((ulonglong)lVar6 >> 0x20);
    uVar14 = (uint)(lVar4 + lVar6);
    lVar4 = (ulonglong)uVar18 * (ulonglong)uVar12 +
            (ulonglong)
            CONCAT14(CARRY4(uVar32,uVar10) ||
                     CARRY4(uVar32 + uVar10,(uint)CARRY4((uint)lVar6,(uint)lVar4)),
                     (int)((ulonglong)(lVar4 + lVar6) >> 0x20));
    uVar32 = (uint)lVar4;
    bVar41 = CARRY4(uVar14,uVar22) || CARRY4(uVar14 + uVar22,(uint)CARRY4(uVar38,uVar17));
    uVar14 = uVar14 + uVar22 + (uint)CARRY4(uVar38,uVar17);
    uVar10 = uVar32 + uVar24 + (uint)bVar41;
    uVar22 = (uint)((ulonglong)uVar20 * (ulonglong)uVar20);
    uVar12 = uVar10 * 2 | uVar14 >> 0x1f;
    lVar6 = (ulonglong)uVar20 * (ulonglong)uVar11 + ((ulonglong)uVar20 * (ulonglong)uVar20 >> 0x20);
    uVar36 = (uint)((ulonglong)lVar6 >> 0x20);
    uVar14 = uVar14 * 2 | uVar38 + uVar17 >> 0x1f;
    lVar7 = (ulonglong)uVar20 * (ulonglong)uVar11;
    uVar20 = (uint)((ulonglong)lVar7 >> 0x20);
    uVar18 = (uint)(lVar6 + lVar7);
    lVar6 = (ulonglong)uVar11 * (ulonglong)uVar11 +
            (ulonglong)
            CONCAT14(CARRY4(uVar36,uVar20) ||
                     CARRY4(uVar36 + uVar20,(uint)CARRY4((uint)lVar7,(uint)lVar6)),
                     (int)((ulonglong)(lVar6 + lVar7) >> 0x20));
    uVar15 = (uint)lVar6;
    uVar20 = (uVar38 + uVar17) * 2;
    uVar11 = uVar22 + uVar20;
    bVar42 = CARRY4(uVar14,uVar18) || CARRY4(uVar14 + uVar18,(uint)CARRY4(uVar22,uVar20));
    uVar20 = uVar14 + uVar18 + (uint)CARRY4(uVar22,uVar20);
    uVar14 = uVar12 + uVar15 + (uint)bVar42;
    uVar36 = uVar11 + uVar37;
    bVar43 = CARRY4(uVar20,uVar13) || CARRY4(uVar20 + uVar13,(uint)CARRY4(uVar11,uVar37));
    uVar18 = uVar20 + uVar13 + (uint)CARRY4(uVar11,uVar37);
    uVar20 = uVar14 + bVar43;
    lVar7 = (ulonglong)(uVar18 >> 0x13 | uVar20 * 0x2000) * 0x13;
    uVar11 = (uint)lVar7;
    local_28 = uVar11 + uVar25 + uVar9;
    uVar18 = uVar18 & 0x7ffff;
    uVar12 = (((((int)((ulonglong)lVar4 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) +
                (uint)(CARRY4(uVar32,uVar24) || CARRY4(uVar32 + uVar24,(uint)bVar41))) * 2 |
               uVar10 >> 0x1f) + (int)((ulonglong)lVar6 >> 0x20) +
               (uint)(CARRY4(uVar12,uVar15) || CARRY4(uVar12 + uVar15,(uint)bVar42)) +
              (uint)CARRY4(uVar14,(uint)bVar43)) * 0x2000 | uVar20 >> 0x13) * 0x13 +
             (int)((ulonglong)lVar7 >> 0x20) + (uVar33 & 0x7ffff) +
             (uint)CARRY4(uVar11,uVar25 + uVar9);
    uVar20 = uVar12 >> 0x13;
    uVar32 = uVar39 + uVar30 + uVar20;
    uVar12 = uVar12 & 0x7ffff;
    uVar24 = (uVar29 & 0x7ffff) + (uint)CARRY4(uVar39 + uVar30,uVar20);
    param_3 = param_3 + -1;
    uVar20 = uVar23 + uVar21;
    uVar11 = uVar27;
    uVar14 = uVar19 + uVar8;
    uVar10 = uVar16;
  } while (param_3 != 0);
  param_1[3] = uVar24;
  param_1[4] = uVar23 + uVar21;
  param_1[5] = uVar27;
  param_1[7] = uVar16;
  param_1[2] = uVar32;
  param_1[6] = uVar19 + uVar8;
  param_1[8] = uVar36;
  param_1[9] = uVar18;
  *param_1 = local_28;
  param_1[1] = uVar12;
  return;
}

