// FUN_01820328 @ 01820328 size=3064 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01820328(int *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  bool bVar36;
  bool bVar37;
  
  uVar19 = *(uint *)((int)param_2 + 0x24);
  uVar33 = *(uint *)(param_2 + 6);
  uVar20 = *(uint *)(param_2 + 7);
  uVar27 = *(uint *)((int)param_2 + 0x2c);
  uVar12 = *(uint *)((int)param_2 + 0x34);
  uVar26 = *(uint *)(param_2 + 4);
  uVar18 = *(uint *)(param_2 + 5);
  uVar34 = *(uint *)((int)param_2 + 0x3c);
  lVar2 = (ulonglong)uVar33 * 0x45512319;
  lVar3 = (ulonglong)uVar26 * 0x2fc9bebf + *param_2;
  uVar23 = (uint)((ulonglong)uVar26 * 0x402da173);
  uVar13 = (uint)((ulonglong)uVar19 * 0x2fc9bebf);
  uVar15 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar14 = uVar15 + uVar13;
  iVar21 = *(uint *)(param_2 + 1) +
           (int)((ulonglong)uVar19 * 0x2fc9bebf >> 0x20) +
           (int)((ulonglong)uVar26 * 0x402da173 >> 0x20);
  uVar24 = uVar14 + uVar23;
  if (uVar15 < *(uint *)((int)param_2 + 4)) {
    iVar21 = iVar21 + 1;
  }
  uVar25 = (uint)CARRY4(uVar14,uVar23) + iVar21 + (uint)CARRY4(uVar15,uVar13);
  uVar13 = (uint)((ulonglong)uVar19 * 0x402da173);
  uVar15 = (uint)((ulonglong)uVar18 * 0x2fc9bebf);
  uVar23 = uVar25 + uVar15;
  uVar16 = uVar23 + uVar13;
  uVar14 = (uint)((ulonglong)uVar26 * 0x50b75fc4);
  iVar21 = *(uint *)((int)param_2 + 0xc) +
           (int)((ulonglong)uVar18 * 0x2fc9bebf >> 0x20) +
           (int)((ulonglong)uVar19 * 0x402da173 >> 0x20) +
           (int)((ulonglong)uVar26 * 0x50b75fc4 >> 0x20);
  uVar17 = uVar16 + uVar14;
  if (uVar25 < *(uint *)(param_2 + 1)) {
    iVar21 = iVar21 + 1;
  }
  uVar13 = (uint)CARRY4(uVar16,uVar14) +
           iVar21 + (uint)CARRY4(uVar25,uVar15) + (uint)CARRY4(uVar23,uVar13);
  uVar14 = (uint)((ulonglong)uVar27 * 0x2fc9bebf);
  uVar15 = uVar13 + uVar14;
  uVar16 = (uint)((ulonglong)uVar18 * 0x402da173);
  uVar23 = uVar15 + uVar16;
  uVar25 = (uint)((ulonglong)uVar19 * 0x50b75fc4);
  iVar21 = (int)((ulonglong)uVar27 * 0x2fc9bebf >> 0x20) +
           (int)((ulonglong)uVar18 * 0x402da173 >> 0x20) +
           (int)((ulonglong)uVar19 * 0x50b75fc4 >> 0x20);
  if (uVar13 < *(uint *)((int)param_2 + 0xc)) {
    iVar21 = iVar21 + 1;
  }
  uVar16 = iVar21 + (uint)CARRY4(uVar13,uVar14) + (uint)CARRY4(uVar15,uVar16) +
           (uint)CARRY4(uVar23,uVar25);
  lVar4 = (ulonglong)uVar26 * 0x45512319 + (ulonglong)(uVar23 + uVar25);
  uVar29 = (uint)lVar4;
  uVar13 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar14 = uVar16 + uVar13;
  uVar15 = *(uint *)(param_2 + 2) + uVar14;
  uVar25 = (uint)((ulonglong)uVar33 * 0x2fc9bebf);
  uVar23 = uVar15 + uVar25;
  uVar22 = (uint)((ulonglong)uVar27 * 0x402da173);
  iVar21 = (int)((ulonglong)uVar27 * 0x402da173 >> 0x20);
  uVar28 = (uint)((ulonglong)uVar18 * 0x50b75fc4);
  iVar30 = (int)((ulonglong)uVar33 * 0x2fc9bebf >> 0x20) + iVar21;
  if (!CARRY4(uVar23,uVar22)) {
    iVar21 = 0;
  }
  if (CARRY4(uVar23,uVar22)) {
    iVar21 = 1;
  }
  uVar15 = iVar30 + (int)((ulonglong)uVar18 * 0x50b75fc4 >> 0x20) + (uint)CARRY4(uVar16,uVar13) +
           (uint)CARRY4(*(uint *)(param_2 + 2),uVar14) + (uint)CARRY4(uVar15,uVar25) + iVar21 +
           (uint)CARRY4(uVar23 + uVar22,uVar28);
  uVar31 = (uint)((ulonglong)uVar27 * 0x50b75fc4);
  lVar4 = (ulonglong)uVar19 * 0x45512319 + (ulonglong)(uVar23 + uVar22 + uVar28);
  uVar23 = (uint)lVar4;
  uVar14 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar13 = uVar15 + uVar14;
  uVar32 = uVar26 + uVar23;
  uVar26 = (uint)CARRY4(uVar26,uVar23);
  uVar23 = uVar13 + uVar26;
  uVar35 = (uint)((ulonglong)uVar12 * 0x2fc9bebf);
  uVar28 = (uint)((ulonglong)uVar33 * 0x402da173);
  uVar16 = *(uint *)((int)param_2 + 0x14) + uVar23;
  uVar25 = uVar16 + uVar35;
  uVar22 = uVar25 + uVar28;
  uVar26 = (int)((ulonglong)uVar12 * 0x2fc9bebf >> 0x20) +
           (int)((ulonglong)uVar33 * 0x402da173 >> 0x20) +
           (int)((ulonglong)uVar27 * 0x50b75fc4 >> 0x20) + (uint)CARRY4(uVar15,uVar14) +
           (uint)CARRY4(uVar13,uVar26) + (uint)CARRY4(*(uint *)((int)param_2 + 0x14),uVar23) +
           (uint)CARRY4(uVar16,uVar35) + (uint)CARRY4(uVar25,uVar28) + (uint)CARRY4(uVar22,uVar31);
  lVar4 = (ulonglong)uVar18 * 0x45512319 + (ulonglong)(uVar22 + uVar31);
  uVar15 = (uint)lVar4;
  uVar13 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar14 = uVar26 + uVar13;
  uVar23 = uVar19 + uVar15;
  uVar15 = (uint)CARRY4(uVar19,uVar15);
  uVar19 = uVar14 + uVar15;
  uVar1 = (ulonglong)uVar33 * 0x50b75fc4 +
          (ulonglong)uVar12 * 0x402da173 +
          (ulonglong)uVar20 * 0x2fc9bebf +
          CONCAT44((uint)CARRY4(uVar26,uVar13) + (uint)CARRY4(uVar14,uVar15) +
                   (uint)CARRY4(*(uint *)(param_2 + 3),uVar19),*(uint *)(param_2 + 3) + uVar19);
  uVar15 = (uint)(uVar1 >> 0x20);
  lVar4 = (ulonglong)uVar27 * 0x45512319 + (uVar1 & 0xffffffff);
  uVar13 = (uint)lVar4;
  uVar26 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar16 = uVar15 + uVar26;
  uVar19 = uVar18 + uVar13;
  uVar13 = (uint)CARRY4(uVar18,uVar13);
  uVar14 = uVar16 + uVar13;
  lVar4 = (ulonglong)uVar20 * 0x402da173 +
          (ulonglong)uVar34 * 0x2fc9bebf +
          CONCAT44((uint)CARRY4(uVar15,uVar26) + (uint)CARRY4(uVar16,uVar13) +
                   (uint)CARRY4(*(uint *)((int)param_2 + 0x1c),uVar14),
                   *(uint *)((int)param_2 + 0x1c) + uVar14) + (ulonglong)uVar12 * 0x50b75fc4;
  lVar5 = lVar4 + lVar2;
  uVar15 = (uint)(lVar5 + (ulonglong)uVar27);
  uVar1 = (ulonglong)uVar20 * 0x50b75fc4 +
          (ulonglong)uVar34 * 0x402da173 +
          CONCAT44((uint)CARRY4((uint)((ulonglong)lVar4 >> 0x20),
                                (int)((ulonglong)lVar2 >> 0x20) +
                                (uint)CARRY4((uint)lVar4,(uint)lVar2)) +
                   (uint)CARRY4((uint)((ulonglong)lVar5 >> 0x20),(uint)CARRY4(uVar27,(uint)lVar5)),
                   (int)(lVar5 + (ulonglong)uVar27 >> 0x20));
  uVar26 = (uint)(uVar1 >> 0x20);
  lVar2 = (ulonglong)uVar12 * 0x45512319 + (uVar1 & 0xffffffff);
  uVar13 = (uint)lVar2;
  uVar18 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar27 = uVar26 + uVar18;
  uVar14 = uVar33 + uVar13;
  uVar13 = (uint)CARRY4(uVar33,uVar13);
  lVar2 = (ulonglong)uVar20 * 0x45512319 +
          (ulonglong)uVar34 * 0x50b75fc4 +
          CONCAT44((uint)CARRY4(uVar26,uVar18) + (uint)CARRY4(uVar27,uVar13),uVar27 + uVar13);
  uVar9 = lVar2 + (ulonglong)uVar12;
  uVar11 = (ulonglong)uVar34 * 0x45512319 +
           (ulonglong)
           CONCAT14(CARRY4((uint)((ulonglong)lVar2 >> 0x20),(uint)CARRY4(uVar12,(uint)lVar2)),
                    (int)(uVar9 >> 0x20)) + (ulonglong)uVar20;
  uVar13 = (uint)uVar11;
  uVar12 = (uint)(uVar11 >> 0x20);
  uVar26 = uVar34 + uVar12;
  uVar18 = (uint)CARRY4(uVar34,uVar12);
  uVar12 = (uint)((ulonglong)uVar26 * 0x45512319);
  uVar1 = (ulonglong)uVar14 * 0x2fc9bebf + CONCAT44(uVar24,(int)lVar3);
  uVar20 = (uint)(uVar1 >> 0x20);
  lVar2 = (uVar9 & 0xffffffff) * 0x2fc9bebf + (ulonglong)uVar20;
  iVar21 = (int)((ulonglong)lVar2 >> 0x20);
  if (uVar20 < uVar24) {
    iVar21 = iVar21 + 1;
  }
  uVar10 = (ulonglong)uVar14 * 0x402da173 + CONCAT44(iVar21,(int)lVar2);
  uVar20 = (uint)(uVar10 >> 0x20);
  uVar6 = (ulonglong)uVar14 * 0x50b75fc4 +
          (uVar9 & 0xffffffff) * 0x402da173 +
          (uVar11 & 0xffffffff) * 0x2fc9bebf +
          (ulonglong)CONCAT14(CARRY4(uVar17,uVar20),uVar17 + uVar20);
  uVar20 = (uint)(uVar6 >> 0x20);
  uVar7 = (uVar9 & 0xffffffff) * 0x50b75fc4 +
          (uVar11 & 0xffffffff) * 0x402da173 +
          (ulonglong)uVar26 * 0x2fc9bebf +
          (ulonglong)CONCAT14(CARRY4(uVar29,uVar20),uVar29 + uVar20);
  uVar20 = (uint)(uVar7 >> 0x20);
  uVar7 = (ulonglong)uVar14 * 0x45512319 + (uVar7 & 0xffffffff);
  uVar33 = (uint)(uVar7 >> 0x20);
  uVar24 = uVar20 + uVar33;
  uVar27 = uVar32 + uVar24;
  uVar8 = (uVar11 & 0xffffffff) * 0x50b75fc4 +
          (ulonglong)uVar26 * 0x402da173 +
          CONCAT44((uint)CARRY4(uVar27,uVar18 * 0x2fc9bebf) +
                   (uint)CARRY4(uVar20,uVar33) + (uint)CARRY4(uVar32,uVar24),
                   uVar27 + uVar18 * 0x2fc9bebf);
  uVar34 = (uint)(uVar8 >> 0x20);
  lVar2 = (uVar9 & 0xffffffff) * 0x45512319 + (uVar8 & 0xffffffff);
  uVar20 = (uint)lVar2;
  uVar33 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar16 = uVar34 + uVar33;
  uVar24 = uVar14 + uVar20;
  uVar14 = (uint)CARRY4(uVar14,uVar20);
  uVar20 = uVar16 + uVar14;
  uVar27 = uVar23 + uVar20;
  lVar2 = (uVar11 & 0xffffffff) * 0x45512319 +
          (ulonglong)uVar26 * 0x50b75fc4 +
          CONCAT44((uint)CARRY4(uVar27,uVar18 * 0x402da173) +
                   (uint)CARRY4(uVar34,uVar33) + (uint)CARRY4(uVar16,uVar14) +
                   (uint)CARRY4(uVar23,uVar20),uVar27 + uVar18 * 0x402da173);
  lVar3 = lVar2 + (uVar9 & 0xffffffff);
  uVar20 = (uint)lVar3;
  uVar23 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar27 = uVar19 + uVar23;
  uVar33 = uVar27 + uVar18 * 0x50b75fc4;
  uVar14 = uVar33 + uVar12;
  bVar36 = CARRY4(uVar13,uVar14);
  uVar13 = uVar13 + uVar14;
  if (!bVar36) {
    uVar14 = 0;
  }
  if (bVar36) {
    uVar14 = 1;
  }
  uVar14 = (uint)CARRY4(uVar27,uVar18 * 0x50b75fc4) +
           (uint)CARRY4((uint)((ulonglong)lVar2 >> 0x20),(uint)CARRY4((uint)uVar9,(uint)lVar2)) +
           (uint)CARRY4(uVar19,uVar23) +
           (uint)CARRY4(uVar33,uVar12) + (int)((ulonglong)uVar26 * 0x45512319 >> 0x20) + uVar14;
  uVar12 = uVar15 + uVar14;
  uVar19 = uVar12 + uVar18 * 0x45512319;
  uVar23 = uVar26 + uVar19;
  uVar33 = CARRY4(uVar15,uVar14) + uVar18 + (uint)CARRY4(uVar12,uVar18 * 0x45512319) +
           (uint)CARRY4(uVar26,uVar19);
  uVar1 = (ulonglong)uVar33 * 0x2fc9bebf + (uVar1 & 0xffffffff);
  uVar18 = (uint)uVar1;
  uVar1 = (ulonglong)uVar33 * 0x402da173 + (uVar10 & 0xffffffff) + (uVar1 >> 0x20);
  uVar27 = (uint)uVar1;
  uVar1 = (ulonglong)uVar33 * 0x50b75fc4 + (uVar6 & 0xffffffff) + (uVar1 >> 0x20);
  uVar26 = (uint)uVar1;
  lVar2 = (ulonglong)uVar33 * 0x45512319 + (uVar7 & 0xffffffff) + (uVar1 >> 0x20);
  uVar19 = (uint)lVar2;
  uVar15 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar12 = uVar24 + uVar33;
  uVar14 = uVar12 + uVar15;
  uVar12 = (uint)CARRY4(uVar24,uVar33) + (uint)CARRY4(uVar12,uVar15);
  uVar24 = uVar20 + uVar12;
  uVar12 = (uint)CARRY4(uVar20,uVar12);
  uVar15 = uVar13 + uVar12;
  uVar12 = (uint)CARRY4(uVar13,uVar12);
  uVar13 = uVar23 + uVar12;
  bVar37 = 0xd036413f < uVar18;
  bVar36 = uVar18 == 0xd0364140;
  if (uVar18 < 0xd0364141) {
    bVar37 = 0xbfd25e8b < uVar27;
    bVar36 = uVar27 == 0xbfd25e8c;
  }
  uVar20 = (uint)((uVar24 & uVar15 & uVar13) != 0xffffffff || uVar14 < 0xfffffffe);
  uVar33 = (uint)(uVar14 == 0xffffffff) & ~uVar20;
  if (uVar19 < 0xbaaedce6) {
    uVar34 = ~uVar33 & 1;
  }
  else {
    uVar34 = 0;
  }
  uVar34 = uVar34 | uVar20;
  if (uVar19 < 0xbaaedce7) {
    uVar20 = 0;
  }
  else {
    uVar20 = ~uVar34 & 1;
  }
  uVar20 = uVar20 | uVar33;
  if (uVar26 < 0xaf48a03b) {
    uVar33 = ~uVar20 & 1;
  }
  else {
    uVar33 = 0;
  }
  uVar33 = uVar33 | uVar34;
  if (uVar26 < 0xaf48a03c) {
    uVar34 = 0;
  }
  else {
    uVar34 = ~uVar33 & 1;
  }
  uVar34 = uVar34 | uVar20;
  if (uVar27 < 0xbfd25e8c) {
    uVar20 = ~uVar34 & 1;
  }
  else {
    uVar20 = 0;
  }
  uVar20 = ((uint)(bVar37 && !bVar36) & ~(uVar20 | uVar33) | uVar34) + (uint)CARRY4(uVar23,uVar12);
  *param_1 = uVar18 + uVar20 * 0x2fc9bebf;
  uVar12 = (uint)CARRY4(uVar18,uVar20 * 0x2fc9bebf);
  uVar18 = uVar27 + uVar20 * 0x402da173;
  uVar33 = (uint)CARRY4(uVar27,uVar20 * 0x402da173) + (uint)CARRY4(uVar18,uVar12);
  uVar27 = uVar26 + uVar20 * 0x50b75fc4;
  param_1[1] = uVar18 + uVar12;
  uVar18 = (uint)CARRY4(uVar26,uVar20 * 0x50b75fc4) + (uint)CARRY4(uVar27,uVar33);
  uVar26 = uVar19 + uVar20 * 0x45512319;
  uVar23 = (uint)CARRY4(uVar19,uVar20 * 0x45512319) + (uint)CARRY4(uVar26,uVar18);
  uVar19 = (uint)CARRY4(uVar14,uVar20) + (uint)CARRY4(uVar14 + uVar20,uVar23);
  param_1[2] = uVar27 + uVar33;
  uVar12 = (uint)CARRY4(uVar24,uVar19);
  param_1[3] = uVar26 + uVar18;
  param_1[4] = uVar14 + uVar20 + uVar23;
  param_1[5] = uVar24 + uVar19;
  param_1[6] = uVar15 + uVar12;
  param_1[7] = uVar13 + CARRY4(uVar15,uVar12);
  return 0;
}

