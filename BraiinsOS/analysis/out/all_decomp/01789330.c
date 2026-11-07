// FUN_01789330 @ 01789330 size=3052 calls_out=0 calls_in=3
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01789330(int *param_1,undefined1 (*param_2) [16],int param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  uint uVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 (*pauVar26) [16];
  bool bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined8 uVar42;
  ulonglong uVar43;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 (*local_3c) [16];
  
  local_3c = param_2 + 4;
  auVar28 = vrev(*param_2,1);
  auVar29 = vrev(param_2[1],1);
  auVar30 = vrev(param_2[2],1);
  auVar31 = vrev(param_2[3],1);
  auVar32 = VectorAdd(_DAT_01788420,auVar28,4);
  auVar33 = VectorAdd(_DAT_01788430,auVar29,4);
  local_78 = auVar32._8_8_;
  auVar34 = VectorAdd(_DAT_01788440,auVar30,4);
  local_70 = auVar33._0_8_;
  local_68 = auVar33._8_8_;
  auVar33 = VectorAdd(_DAT_01788450,auVar31,4);
  local_60 = auVar34._0_8_;
  local_58 = auVar34._8_8_;
  local_50 = auVar33._0_8_;
  local_48 = auVar33._8_8_;
  iVar12 = *param_1;
  uVar13 = param_1[1];
  uVar14 = param_1[2];
  uVar15 = param_1[3];
  uVar17 = param_1[4];
  uVar18 = param_1[5];
  uVar20 = param_1[6];
  uVar21 = param_1[7];
  local_80._0_4_ = auVar32._0_4_;
  uVar24 = 0;
  uVar11 = uVar13 ^ uVar14;
  iVar22 = (int)local_80;
  pauVar10 = (undefined1 (*) [16])&DAT_01788460;
  uVar42 = auVar32._0_8_;
  while( true ) {
    do {
      local_80 = uVar42;
      pauVar26 = pauVar10;
      auVar1._16_16_ = auVar29;
      auVar1._0_16_ = auVar28;
      auVar32 = auVar1._4_16_;
      auVar2._16_16_ = auVar31;
      auVar2._0_16_ = auVar30;
      uVar24 = iVar12 + uVar24;
      uVar25 = uVar17 ^ (uVar17 >> 5 | uVar17 << 0x1b) ^ (uVar17 >> 0x13 | uVar17 << 0xd);
      auVar34 = VectorUnsignedFixedToFloat(auVar32,7);
      auVar28 = VectorAdd(auVar28,auVar2._4_16_,4);
      auVar33 = VectorUnsignedFixedToFloat(auVar32,3);
      uVar9 = uVar24 ^ (uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 0x14 | uVar24 * 0x1000);
      iVar22 = uVar21 + iVar22 + (uVar25 >> 6 | uVar25 << 0x1a) +
               ((uVar18 ^ uVar20) & uVar17 ^ uVar20);
      auVar34 = VectorShiftLeftInsert(auVar34,auVar32,0x19);
      auVar35 = VectorUnsignedFixedToFloat(auVar32,0x12);
      uVar15 = uVar15 + iVar22;
      auVar32 = VectorShiftLeftInsert(auVar35,auVar32,0xe);
      uVar42 = auVar31._8_8_;
      uVar39 = VectorShiftRight(uVar42,0x11);
      uVar23 = iVar22 + (uVar9 >> 2 | uVar9 << 0x1e) + (uVar11 & (uVar24 ^ uVar13) ^ uVar13);
      uVar21 = uVar15 ^ (uVar15 >> 5 | uVar15 * 0x8000000) ^ (uVar15 >> 0x13 | uVar15 * 0x2000);
      uVar40 = VectorShiftLeftInsert(uVar39,uVar42,0xf);
      uVar43 = VectorShiftRight(uVar42,10);
      uVar11 = uVar23 ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 0x14 | uVar23 * 0x1000);
      auVar32 = VectorAdd(auVar28,auVar33 ^ auVar34 ^ auVar32,4);
      iVar22 = uVar20 + local_80._4_4_ + (uVar21 >> 6 | uVar21 << 0x1a) +
               ((uVar17 ^ uVar18) & uVar15 ^ uVar18);
      uVar14 = uVar14 + iVar22;
      uVar39 = VectorShiftRight(uVar42,0x13);
      uVar41 = VectorShiftLeftInsert(uVar39,uVar42,0xd);
      uVar20 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
               ((uVar24 ^ uVar13) & (uVar23 ^ uVar24) ^ uVar24);
      auVar28._0_8_ = VectorAdd(auVar32._0_8_,uVar43 ^ uVar40 ^ uVar41,4);
      uVar21 = uVar14 ^ (uVar14 >> 5 | uVar14 * 0x8000000) ^ (uVar14 >> 0x13 | uVar14 * 0x2000);
      uVar42 = VectorShiftRight(auVar28._0_8_,0x11);
      uVar40 = VectorShiftLeftInsert(uVar42,auVar28._0_8_,0xf);
      uVar43 = VectorShiftRight(auVar28._0_8_,10);
      uVar11 = uVar20 ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 0x14 | uVar20 * 0x1000);
      iVar22 = uVar18 + (int)local_78 + (uVar21 >> 6 | uVar21 << 0x1a) +
               ((uVar15 ^ uVar17) & uVar14 ^ uVar17);
      uVar42 = VectorShiftRight(auVar28._0_8_,0x13);
      uVar13 = uVar13 + iVar22;
      uVar41 = VectorShiftLeftInsert(uVar42,auVar28._0_8_,0xd);
      uVar19 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
               ((uVar23 ^ uVar24) & (uVar20 ^ uVar23) ^ uVar23);
      auVar28._8_8_ = VectorAdd(auVar32._8_8_,uVar43 ^ uVar40 ^ uVar41,4);
      uVar18 = uVar13 ^ (uVar13 >> 5 | uVar13 * 0x8000000) ^ (uVar13 >> 0x13 | uVar13 * 0x2000);
      auVar33 = VectorAdd(*pauVar26,auVar28,4);
      uVar11 = uVar19 ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 0x14 | uVar19 * 0x1000);
      iVar22 = uVar17 + local_78._4_4_ + (uVar18 >> 6 | uVar18 << 0x1a) +
               ((uVar14 ^ uVar15) & uVar13 ^ uVar15);
      uVar24 = uVar24 + iVar22;
      local_78 = auVar33._8_8_;
      auVar3._16_16_ = auVar30;
      auVar3._0_16_ = auVar29;
      auVar32 = auVar3._4_16_;
      auVar4._16_16_ = auVar28;
      auVar4._0_16_ = auVar31;
      uVar17 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
               ((uVar20 ^ uVar23) & (uVar19 ^ uVar20) ^ uVar20);
      uVar18 = uVar24 ^ (uVar24 >> 5 | uVar24 * 0x8000000) ^ (uVar24 >> 0x13 | uVar24 * 0x2000);
      auVar35 = VectorUnsignedFixedToFloat(auVar32,7);
      auVar29 = VectorAdd(auVar29,auVar4._4_16_,4);
      auVar34 = VectorUnsignedFixedToFloat(auVar32,3);
      uVar11 = uVar17 ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 0x14 | uVar17 * 0x1000);
      iVar22 = uVar15 + (int)local_70 + (uVar18 >> 6 | uVar18 << 0x1a) +
               ((uVar13 ^ uVar14) & uVar24 ^ uVar14);
      auVar35 = VectorShiftLeftInsert(auVar35,auVar32,0x19);
      auVar36 = VectorUnsignedFixedToFloat(auVar32,0x12);
      uVar23 = uVar23 + iVar22;
      auVar32 = VectorShiftLeftInsert(auVar36,auVar32,0xe);
      uVar42 = VectorShiftRight(auVar28._8_8_,0x11);
      uVar16 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
               ((uVar19 ^ uVar20) & (uVar17 ^ uVar19) ^ uVar19);
      uVar15 = uVar23 ^ (uVar23 >> 5 | uVar23 * 0x8000000) ^ (uVar23 >> 0x13 | uVar23 * 0x2000);
      uVar40 = VectorShiftLeftInsert(uVar42,auVar28._8_8_,0xf);
      uVar43 = VectorShiftRight(auVar28._8_8_,10);
      uVar11 = uVar16 ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 0x14 | uVar16 * 0x1000);
      auVar32 = VectorAdd(auVar29,auVar34 ^ auVar35 ^ auVar32,4);
      iVar22 = uVar14 + local_70._4_4_ + (uVar15 >> 6 | uVar15 << 0x1a) +
               ((uVar24 ^ uVar13) & uVar23 ^ uVar13);
      uVar20 = uVar20 + iVar22;
      uVar42 = VectorShiftRight(auVar28._8_8_,0x13);
      uVar41 = VectorShiftLeftInsert(uVar42,auVar28._8_8_,0xd);
      uVar14 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
               ((uVar17 ^ uVar19) & (uVar16 ^ uVar17) ^ uVar17);
      auVar29._0_8_ = VectorAdd(auVar32._0_8_,uVar43 ^ uVar40 ^ uVar41,4);
      uVar15 = uVar20 ^ (uVar20 >> 5 | uVar20 * 0x8000000) ^ (uVar20 >> 0x13 | uVar20 * 0x2000);
      uVar42 = VectorShiftRight(auVar29._0_8_,0x11);
      uVar40 = VectorShiftLeftInsert(uVar42,auVar29._0_8_,0xf);
      uVar43 = VectorShiftRight(auVar29._0_8_,10);
      uVar11 = uVar14 ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 0x14 | uVar14 * 0x1000);
      iVar22 = uVar13 + (int)local_68 + (uVar15 >> 6 | uVar15 << 0x1a) +
               ((uVar23 ^ uVar24) & uVar20 ^ uVar24);
      uVar42 = VectorShiftRight(auVar29._0_8_,0x13);
      uVar19 = uVar19 + iVar22;
      uVar41 = VectorShiftLeftInsert(uVar42,auVar29._0_8_,0xd);
      uVar9 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
              ((uVar16 ^ uVar17) & (uVar14 ^ uVar16) ^ uVar16);
      auVar29._8_8_ = VectorAdd(auVar32._8_8_,uVar43 ^ uVar40 ^ uVar41,4);
      uVar13 = uVar19 ^ (uVar19 >> 5 | uVar19 * 0x8000000) ^ (uVar19 >> 0x13 | uVar19 * 0x2000);
      auVar34 = VectorAdd(pauVar26[1],auVar29,4);
      uVar11 = uVar9 ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 0x14 | uVar9 * 0x1000);
      iVar22 = uVar24 + local_68._4_4_ + (uVar13 >> 6 | uVar13 << 0x1a) +
               ((uVar20 ^ uVar23) & uVar19 ^ uVar23);
      uVar17 = uVar17 + iVar22;
      local_70 = auVar34._0_8_;
      local_68 = auVar34._8_8_;
      auVar5._16_16_ = auVar31;
      auVar5._0_16_ = auVar30;
      auVar32 = auVar5._4_16_;
      auVar6._16_16_ = auVar29;
      auVar6._0_16_ = auVar28;
      uVar25 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
               ((uVar14 ^ uVar16) & (uVar9 ^ uVar14) ^ uVar14);
      uVar24 = uVar17 ^ (uVar17 >> 5 | uVar17 * 0x8000000) ^ (uVar17 >> 0x13 | uVar17 * 0x2000);
      auVar36 = VectorUnsignedFixedToFloat(auVar32,7);
      auVar30 = VectorAdd(auVar30,auVar6._4_16_,4);
      auVar35 = VectorUnsignedFixedToFloat(auVar32,3);
      uVar11 = uVar25 ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^ (uVar25 >> 0x14 | uVar25 * 0x1000);
      iVar22 = uVar23 + (int)local_60 + (uVar24 >> 6 | uVar24 << 0x1a) +
               ((uVar19 ^ uVar20) & uVar17 ^ uVar20);
      auVar36 = VectorShiftLeftInsert(auVar36,auVar32,0x19);
      auVar37 = VectorUnsignedFixedToFloat(auVar32,0x12);
      uVar16 = uVar16 + iVar22;
      auVar32 = VectorShiftLeftInsert(auVar37,auVar32,0xe);
      uVar42 = VectorShiftRight(auVar29._8_8_,0x11);
      uVar21 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
               ((uVar9 ^ uVar14) & (uVar25 ^ uVar9) ^ uVar9);
      uVar24 = uVar16 ^ (uVar16 >> 5 | uVar16 * 0x8000000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000);
      uVar40 = VectorShiftLeftInsert(uVar42,auVar29._8_8_,0xf);
      uVar43 = VectorShiftRight(auVar29._8_8_,10);
      uVar11 = uVar21 ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 0x14 | uVar21 * 0x1000);
      auVar32 = VectorAdd(auVar30,auVar35 ^ auVar36 ^ auVar32,4);
      iVar22 = uVar20 + local_60._4_4_ + (uVar24 >> 6 | uVar24 << 0x1a) +
               ((uVar17 ^ uVar19) & uVar16 ^ uVar19);
      uVar14 = uVar14 + iVar22;
      uVar42 = VectorShiftRight(auVar29._8_8_,0x13);
      uVar41 = VectorShiftLeftInsert(uVar42,auVar29._8_8_,0xd);
      uVar20 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
               ((uVar25 ^ uVar9) & (uVar21 ^ uVar25) ^ uVar25);
      auVar30._0_8_ = VectorAdd(auVar32._0_8_,uVar43 ^ uVar40 ^ uVar41,4);
      uVar24 = uVar14 ^ (uVar14 >> 5 | uVar14 * 0x8000000) ^ (uVar14 >> 0x13 | uVar14 * 0x2000);
      uVar42 = VectorShiftRight(auVar30._0_8_,0x11);
      uVar40 = VectorShiftLeftInsert(uVar42,auVar30._0_8_,0xf);
      uVar43 = VectorShiftRight(auVar30._0_8_,10);
      uVar11 = uVar20 ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 0x14 | uVar20 * 0x1000);
      iVar22 = uVar19 + (int)local_58 + (uVar24 >> 6 | uVar24 << 0x1a) +
               ((uVar16 ^ uVar17) & uVar14 ^ uVar17);
      uVar42 = VectorShiftRight(auVar30._0_8_,0x13);
      uVar9 = uVar9 + iVar22;
      uVar41 = VectorShiftLeftInsert(uVar42,auVar30._0_8_,0xd);
      uVar18 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
               ((uVar21 ^ uVar25) & (uVar20 ^ uVar21) ^ uVar21);
      auVar30._8_8_ = VectorAdd(auVar32._8_8_,uVar43 ^ uVar40 ^ uVar41,4);
      uVar24 = uVar9 ^ (uVar9 >> 5 | uVar9 * 0x8000000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000);
      auVar35 = VectorAdd(pauVar26[2],auVar30,4);
      uVar11 = uVar18 ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^ (uVar18 >> 0x14 | uVar18 * 0x1000);
      iVar22 = uVar17 + local_58._4_4_ + (uVar24 >> 6 | uVar24 << 0x1a) +
               ((uVar14 ^ uVar16) & uVar9 ^ uVar16);
      uVar25 = uVar25 + iVar22;
      local_60 = auVar35._0_8_;
      local_58 = auVar35._8_8_;
      auVar7._16_16_ = auVar28;
      auVar7._0_16_ = auVar31;
      auVar32 = auVar7._4_16_;
      auVar8._16_16_ = auVar30;
      auVar8._0_16_ = auVar29;
      uVar17 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
               ((uVar20 ^ uVar21) & (uVar18 ^ uVar20) ^ uVar20);
      uVar24 = uVar25 ^ (uVar25 >> 5 | uVar25 * 0x8000000) ^ (uVar25 >> 0x13 | uVar25 * 0x2000);
      auVar37 = VectorUnsignedFixedToFloat(auVar32,7);
      auVar31 = VectorAdd(auVar31,auVar8._4_16_,4);
      auVar36 = VectorUnsignedFixedToFloat(auVar32,3);
      uVar11 = uVar17 ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 0x14 | uVar17 * 0x1000);
      iVar22 = uVar16 + (int)local_50 + (uVar24 >> 6 | uVar24 << 0x1a) +
               ((uVar9 ^ uVar14) & uVar25 ^ uVar14);
      auVar37 = VectorShiftLeftInsert(auVar37,auVar32,0x19);
      auVar38 = VectorUnsignedFixedToFloat(auVar32,0x12);
      uVar21 = uVar21 + iVar22;
      auVar32 = VectorShiftLeftInsert(auVar38,auVar32,0xe);
      uVar42 = VectorShiftRight(auVar30._8_8_,0x11);
      uVar15 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
               ((uVar18 ^ uVar20) & (uVar17 ^ uVar18) ^ uVar18);
      uVar24 = uVar21 ^ (uVar21 >> 5 | uVar21 * 0x8000000) ^ (uVar21 >> 0x13 | uVar21 * 0x2000);
      uVar40 = VectorShiftLeftInsert(uVar42,auVar30._8_8_,0xf);
      uVar43 = VectorShiftRight(auVar30._8_8_,10);
      uVar11 = uVar15 ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^ (uVar15 >> 0x14 | uVar15 * 0x1000);
      auVar32 = VectorAdd(auVar31,auVar36 ^ auVar37 ^ auVar32,4);
      iVar22 = uVar14 + local_50._4_4_ + (uVar24 >> 6 | uVar24 << 0x1a) +
               ((uVar25 ^ uVar9) & uVar21 ^ uVar9);
      uVar20 = uVar20 + iVar22;
      uVar42 = VectorShiftRight(auVar30._8_8_,0x13);
      uVar41 = VectorShiftLeftInsert(uVar42,auVar30._8_8_,0xd);
      uVar14 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
               ((uVar17 ^ uVar18) & (uVar15 ^ uVar17) ^ uVar17);
      auVar31._0_8_ = VectorAdd(auVar32._0_8_,uVar43 ^ uVar40 ^ uVar41,4);
      uVar24 = uVar20 ^ (uVar20 >> 5 | uVar20 * 0x8000000) ^ (uVar20 >> 0x13 | uVar20 * 0x2000);
      uVar42 = VectorShiftRight(auVar31._0_8_,0x11);
      uVar40 = VectorShiftLeftInsert(uVar42,auVar31._0_8_,0xf);
      uVar43 = VectorShiftRight(auVar31._0_8_,10);
      uVar11 = uVar14 ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 0x14 | uVar14 * 0x1000);
      iVar22 = uVar9 + (int)local_48 + (uVar24 >> 6 | uVar24 << 0x1a) +
               ((uVar21 ^ uVar25) & uVar20 ^ uVar25);
      uVar42 = VectorShiftRight(auVar31._0_8_,0x13);
      uVar18 = uVar18 + iVar22;
      uVar41 = VectorShiftLeftInsert(uVar42,auVar31._0_8_,0xd);
      uVar13 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
               ((uVar15 ^ uVar17) & (uVar14 ^ uVar15) ^ uVar15);
      auVar31._8_8_ = VectorAdd(auVar32._8_8_,uVar43 ^ uVar40 ^ uVar41,4);
      uVar9 = uVar18 ^ (uVar18 >> 5 | uVar18 * 0x8000000) ^ (uVar18 >> 0x13 | uVar18 * 0x2000);
      auVar32 = VectorAdd(pauVar26[3],auVar31,4);
      uVar11 = uVar13 ^ uVar14;
      uVar24 = uVar13 ^ (uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 0x14 | uVar13 * 0x1000);
      iVar12 = uVar25 + local_48._4_4_ + (uVar9 >> 6 | uVar9 << 0x1a) +
               ((uVar20 ^ uVar21) & uVar18 ^ uVar21);
      uVar17 = uVar17 + iVar12;
      local_50 = auVar32._0_8_;
      local_48 = auVar32._8_8_;
      iVar12 = iVar12 + (uVar24 >> 2 | uVar24 << 0x1e);
      uVar24 = (uVar14 ^ uVar15) & uVar11 ^ uVar14;
      local_80._0_4_ = auVar33._0_4_;
      iVar22 = (int)local_80;
      pauVar10 = pauVar26 + 4;
      uVar42 = auVar33._0_8_;
    } while (*(int *)pauVar26[4] != 0);
    bVar27 = local_3c == param_2 + param_3 * 4;
    pauVar10 = local_3c;
    if (bVar27) {
      pauVar10 = local_3c + -4;
    }
    if (!bVar27) {
      local_3c = pauVar10 + 4;
    }
    uVar24 = iVar12 + uVar24;
    uVar25 = uVar17 ^ (uVar17 >> 5 | uVar17 * 0x8000000) ^ (uVar17 >> 0x13 | uVar17 * 0x2000);
    auVar28 = vrev(*pauVar10,1);
    uVar9 = uVar24 ^ (uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 0x14 | uVar24 * 0x1000);
    iVar22 = uVar21 + (int)local_80 + (uVar25 >> 6 | uVar25 << 0x1a) +
             ((uVar18 ^ uVar20) & uVar17 ^ uVar20);
    auVar36 = VectorAdd(pauVar26[-0xc],auVar28,4);
    local_80._4_4_ = auVar33._4_4_;
    uVar15 = uVar15 + iVar22;
    uVar23 = iVar22 + (uVar9 >> 2 | uVar9 << 0x1e) + (uVar11 & (uVar24 ^ uVar13) ^ uVar13);
    uVar21 = uVar15 ^ (uVar15 >> 5 | uVar15 * 0x8000000) ^ (uVar15 >> 0x13 | uVar15 * 0x2000);
    uVar11 = uVar23 ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 0x14 | uVar23 * 0x1000);
    iVar22 = uVar20 + local_80._4_4_ + (uVar21 >> 6 | uVar21 << 0x1a) +
             ((uVar17 ^ uVar18) & uVar15 ^ uVar18);
    local_78._0_4_ = auVar33._8_4_;
    uVar14 = uVar14 + iVar22;
    uVar20 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar24 ^ uVar13) & (uVar23 ^ uVar24) ^ uVar24);
    uVar21 = uVar14 ^ (uVar14 >> 5 | uVar14 * 0x8000000) ^ (uVar14 >> 0x13 | uVar14 * 0x2000);
    uVar11 = uVar20 ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 0x14 | uVar20 * 0x1000);
    iVar22 = uVar18 + (int)local_78 + (uVar21 >> 6 | uVar21 << 0x1a) +
             ((uVar15 ^ uVar17) & uVar14 ^ uVar17);
    local_78._4_4_ = auVar33._12_4_;
    uVar13 = uVar13 + iVar22;
    uVar19 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar23 ^ uVar24) & (uVar20 ^ uVar23) ^ uVar23);
    uVar18 = uVar13 ^ (uVar13 >> 5 | uVar13 * 0x8000000) ^ (uVar13 >> 0x13 | uVar13 * 0x2000);
    uVar11 = uVar19 ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 0x14 | uVar19 * 0x1000);
    iVar22 = uVar17 + local_78._4_4_ + (uVar18 >> 6 | uVar18 << 0x1a) +
             ((uVar14 ^ uVar15) & uVar13 ^ uVar15);
    local_70._0_4_ = auVar34._0_4_;
    uVar24 = uVar24 + iVar22;
    local_78 = auVar36._8_8_;
    uVar16 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar20 ^ uVar23) & (uVar19 ^ uVar20) ^ uVar20);
    uVar17 = uVar24 ^ (uVar24 >> 5 | uVar24 * 0x8000000) ^ (uVar24 >> 0x13 | uVar24 * 0x2000);
    auVar29 = vrev(pauVar10[1],1);
    uVar11 = uVar16 ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 0x14 | uVar16 * 0x1000);
    iVar22 = uVar15 + (int)local_70 + (uVar17 >> 6 | uVar17 << 0x1a) +
             ((uVar13 ^ uVar14) & uVar24 ^ uVar14);
    auVar30 = VectorAdd(pauVar26[-0xb],auVar29,4);
    local_70._4_4_ = auVar34._4_4_;
    uVar23 = uVar23 + iVar22;
    uVar25 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar19 ^ uVar20) & (uVar16 ^ uVar19) ^ uVar19);
    uVar15 = uVar23 ^ (uVar23 >> 5 | uVar23 * 0x8000000) ^ (uVar23 >> 0x13 | uVar23 * 0x2000);
    uVar11 = uVar25 ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^ (uVar25 >> 0x14 | uVar25 * 0x1000);
    iVar22 = uVar14 + local_70._4_4_ + (uVar15 >> 6 | uVar15 << 0x1a) +
             ((uVar24 ^ uVar13) & uVar23 ^ uVar13);
    local_68._0_4_ = auVar34._8_4_;
    uVar20 = uVar20 + iVar22;
    uVar14 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar16 ^ uVar19) & (uVar25 ^ uVar16) ^ uVar16);
    uVar15 = uVar20 ^ (uVar20 >> 5 | uVar20 * 0x8000000) ^ (uVar20 >> 0x13 | uVar20 * 0x2000);
    uVar11 = uVar14 ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 0x14 | uVar14 * 0x1000);
    iVar22 = uVar13 + (int)local_68 + (uVar15 >> 6 | uVar15 << 0x1a) +
             ((uVar23 ^ uVar24) & uVar20 ^ uVar24);
    local_68._4_4_ = auVar34._12_4_;
    uVar19 = uVar19 + iVar22;
    uVar9 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
            ((uVar25 ^ uVar16) & (uVar14 ^ uVar25) ^ uVar25);
    uVar13 = uVar19 ^ (uVar19 >> 5 | uVar19 * 0x8000000) ^ (uVar19 >> 0x13 | uVar19 * 0x2000);
    uVar11 = uVar9 ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 0x14 | uVar9 * 0x1000);
    iVar22 = uVar24 + local_68._4_4_ + (uVar13 >> 6 | uVar13 << 0x1a) +
             ((uVar20 ^ uVar23) & uVar19 ^ uVar23);
    local_60._0_4_ = auVar35._0_4_;
    uVar16 = uVar16 + iVar22;
    local_70 = auVar30._0_8_;
    local_68 = auVar30._8_8_;
    uVar17 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar14 ^ uVar25) & (uVar9 ^ uVar14) ^ uVar14);
    uVar24 = uVar16 ^ (uVar16 >> 5 | uVar16 * 0x8000000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000);
    auVar30 = vrev(pauVar10[2],1);
    uVar11 = uVar17 ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 0x14 | uVar17 * 0x1000);
    iVar22 = uVar23 + (int)local_60 + (uVar24 >> 6 | uVar24 << 0x1a) +
             ((uVar19 ^ uVar20) & uVar16 ^ uVar20);
    auVar31 = VectorAdd(pauVar26[-10],auVar30,4);
    local_60._4_4_ = auVar35._4_4_;
    uVar25 = uVar25 + iVar22;
    uVar21 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar9 ^ uVar14) & (uVar17 ^ uVar9) ^ uVar9)
    ;
    uVar24 = uVar25 ^ (uVar25 >> 5 | uVar25 * 0x8000000) ^ (uVar25 >> 0x13 | uVar25 * 0x2000);
    uVar11 = uVar21 ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 0x14 | uVar21 * 0x1000);
    iVar22 = uVar20 + local_60._4_4_ + (uVar24 >> 6 | uVar24 << 0x1a) +
             ((uVar16 ^ uVar19) & uVar25 ^ uVar19);
    local_58._0_4_ = auVar35._8_4_;
    uVar14 = uVar14 + iVar22;
    uVar20 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar17 ^ uVar9) & (uVar21 ^ uVar17) ^ uVar17);
    uVar24 = uVar14 ^ (uVar14 >> 5 | uVar14 * 0x8000000) ^ (uVar14 >> 0x13 | uVar14 * 0x2000);
    uVar11 = uVar20 ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 0x14 | uVar20 * 0x1000);
    iVar22 = uVar19 + (int)local_58 + (uVar24 >> 6 | uVar24 << 0x1a) +
             ((uVar25 ^ uVar16) & uVar14 ^ uVar16);
    local_58._4_4_ = auVar35._12_4_;
    uVar9 = uVar9 + iVar22;
    uVar18 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar21 ^ uVar17) & (uVar20 ^ uVar21) ^ uVar21);
    uVar24 = uVar9 ^ (uVar9 >> 5 | uVar9 * 0x8000000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000);
    uVar11 = uVar18 ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^ (uVar18 >> 0x14 | uVar18 * 0x1000);
    iVar22 = uVar16 + local_58._4_4_ + (uVar24 >> 6 | uVar24 << 0x1a) +
             ((uVar14 ^ uVar25) & uVar9 ^ uVar25);
    local_50._0_4_ = auVar32._0_4_;
    uVar17 = uVar17 + iVar22;
    local_60 = auVar31._0_8_;
    local_58 = auVar31._8_8_;
    uVar16 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar20 ^ uVar21) & (uVar18 ^ uVar20) ^ uVar20);
    uVar24 = uVar17 ^ (uVar17 >> 5 | uVar17 * 0x8000000) ^ (uVar17 >> 0x13 | uVar17 * 0x2000);
    auVar31 = vrev(pauVar10[3],1);
    uVar11 = uVar16 ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 0x14 | uVar16 * 0x1000);
    iVar22 = uVar25 + (int)local_50 + (uVar24 >> 6 | uVar24 << 0x1a) +
             ((uVar9 ^ uVar14) & uVar17 ^ uVar14);
    auVar33 = VectorAdd(pauVar26[-9],auVar31,4);
    local_50._4_4_ = auVar32._4_4_;
    uVar21 = uVar21 + iVar22;
    uVar15 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar18 ^ uVar20) & (uVar16 ^ uVar18) ^ uVar18);
    uVar24 = uVar21 ^ (uVar21 >> 5 | uVar21 * 0x8000000) ^ (uVar21 >> 0x13 | uVar21 * 0x2000);
    uVar11 = uVar15 ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^ (uVar15 >> 0x14 | uVar15 * 0x1000);
    iVar22 = uVar14 + local_50._4_4_ + (uVar24 >> 6 | uVar24 << 0x1a) +
             ((uVar17 ^ uVar9) & uVar21 ^ uVar9);
    local_48._0_4_ = auVar32._8_4_;
    uVar20 = uVar20 + iVar22;
    uVar14 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar16 ^ uVar18) & (uVar15 ^ uVar16) ^ uVar16);
    uVar24 = uVar20 ^ (uVar20 >> 5 | uVar20 * 0x8000000) ^ (uVar20 >> 0x13 | uVar20 * 0x2000);
    uVar11 = uVar14 ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 0x14 | uVar14 * 0x1000);
    iVar22 = uVar9 + (int)local_48 + (uVar24 >> 6 | uVar24 << 0x1a) +
             ((uVar21 ^ uVar17) & uVar20 ^ uVar17);
    local_48._4_4_ = auVar32._12_4_;
    uVar18 = uVar18 + iVar22;
    uVar13 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar15 ^ uVar16) & (uVar14 ^ uVar15) ^ uVar15);
    uVar24 = uVar18 ^ (uVar18 >> 5 | uVar18 * 0x8000000) ^ (uVar18 >> 0x13 | uVar18 * 0x2000);
    uVar11 = uVar13 ^ (uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 0x14 | uVar13 * 0x1000);
    iVar22 = uVar17 + local_48._4_4_ + (uVar24 >> 6 | uVar24 << 0x1a) +
             ((uVar20 ^ uVar21) & uVar18 ^ uVar21);
    local_50 = auVar33._0_8_;
    local_48 = auVar33._8_8_;
    iVar12 = iVar22 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar14 ^ uVar15) & (uVar13 ^ uVar14) ^ uVar14) + *param_1;
    uVar13 = uVar13 + param_1[1];
    uVar14 = uVar14 + param_1[2];
    uVar15 = uVar15 + param_1[3];
    uVar17 = uVar16 + iVar22 + param_1[4];
    *param_1 = iVar12;
    uVar18 = uVar18 + param_1[5];
    param_1[1] = uVar13;
    uVar20 = uVar20 + param_1[6];
    param_1[2] = uVar14;
    uVar21 = uVar21 + param_1[7];
    param_1[3] = uVar15;
    param_1[4] = uVar17;
    param_1[5] = uVar18;
    param_1[6] = uVar20;
    param_1[7] = uVar21;
    if (bVar27) break;
    local_80._0_4_ = auVar36._0_4_;
    uVar24 = 0;
    uVar11 = uVar13 ^ uVar14;
    iVar22 = (int)local_80;
    pauVar10 = pauVar26 + -8;
    uVar42 = auVar36._0_8_;
  }
  return;
}

