// FUN_01787520 @ 01787520 size=3332 calls_out=0 calls_in=2
// strings: 

void FUN_01787520(uint *param_1,undefined1 (*param_2) [16],int param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  uint *puVar40;
  uint *puVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40 [6];
  
  puVar41 = (uint *)&local_70;
  uVar31 = *param_1;
  uVar32 = param_1[1];
  uVar34 = param_1[2];
  uVar35 = param_1[3];
  uVar36 = param_1[4];
  auVar43 = vrev(*param_2,1);
  auVar44 = vrev(param_2[1],1);
  auVar45 = vrev(param_2[2],1);
  auVar46._8_8_ = 0x5a8279995a827999;
  auVar46._0_8_ = 0x5a8279995a827999;
  auVar47 = VectorAdd(auVar43,auVar46,4);
  auVar46 = vrev(param_2[3],1);
  auVar48._8_8_ = 0x5a8279995a827999;
  auVar48._0_8_ = 0x5a8279995a827999;
  auVar48 = VectorAdd(auVar44,auVar48,4);
  local_70 = auVar47._0_8_;
  local_68 = auVar47._8_8_;
  auVar49._8_8_ = 0x5a8279995a827999;
  auVar49._0_8_ = 0x5a8279995a827999;
  auVar49 = VectorAdd(auVar45,auVar49,4);
  local_60 = auVar48._0_8_;
  local_58 = auVar48._8_8_;
  local_50 = auVar49._0_8_;
  local_48 = auVar49._8_8_;
  puVar40 = local_40;
  local_70._0_4_ = auVar47._0_4_;
  pauVar29 = param_2;
  while( true ) {
    auVar1._16_16_ = auVar44;
    auVar1._0_16_ = auVar43;
    auVar47._8_8_ = 0x5a8279995a827999;
    auVar47._0_8_ = 0x5a8279995a827999;
    auVar48 = VectorAdd(auVar46,auVar47,4);
    iVar38 = puVar41[1];
    uVar33 = uVar32 >> 2 | uVar32 << 0x1e;
    uVar37 = uVar36 + (uint)local_70 + (uVar31 >> 0x1b | uVar31 << 5) +
             (uVar34 & uVar32 ^ uVar35 & ~uVar32);
    iVar39 = puVar41[2];
    auVar47 = auVar46 >> 0x20 ^ auVar45 ^ auVar1._8_16_ ^ auVar43;
    *(longlong *)puVar40 = auVar48._0_8_;
    *(longlong *)(puVar40 + 2) = auVar48._8_8_;
    uVar36 = uVar31 >> 2 | uVar31 << 0x1e;
    uVar32 = uVar35 + iVar38 + (uVar37 >> 0x1b | uVar37 * 0x20) +
             (uVar33 & uVar31 ^ uVar34 & ~uVar31);
    auVar48 = SUB3216(ZEXT1632(auVar47) << 0x80,4) | SUB3216(ZEXT1632((undefined1  [16])0x0),4);
    auVar49 = VectorAdd(auVar47,auVar47,4);
    auVar49 = VectorShiftRightInsert(auVar49,auVar47,0x1f);
    uVar35 = uVar37 >> 2 | uVar37 * 0x40000000;
    auVar50 = VectorUnsignedFixedToFloat(auVar48,0x1e);
    uVar34 = uVar34 + iVar39 + (uVar32 >> 0x1b | uVar32 * 0x20) +
             (uVar36 & uVar37 ^ uVar33 & ~uVar37);
    auVar47 = VectorShiftLeft(auVar48,2,0x20,0);
    auVar47 = auVar49 ^ auVar50 ^ auVar47;
    uVar31 = uVar32 >> 2 | uVar32 * 0x40000000;
    uVar33 = uVar33 + puVar41[3] + (uVar34 >> 0x1b | uVar34 * 0x20) +
             (uVar35 & uVar32 ^ uVar36 & ~uVar32);
    auVar2._16_16_ = auVar45;
    auVar2._0_16_ = auVar44;
    auVar50._8_8_ = 0x5a8279995a827999;
    auVar50._0_8_ = 0x5a8279995a827999;
    auVar48 = VectorAdd(auVar47,auVar50,4);
    iVar38 = puVar41[5];
    uVar32 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar36 + puVar41[4] + (uVar33 >> 0x1b | uVar33 * 0x20) +
             (uVar31 & uVar34 ^ uVar35 & ~uVar34);
    iVar39 = puVar41[6];
    auVar50 = auVar47 >> 0x20 ^ auVar46 ^ auVar2._8_16_ ^ auVar44;
    *(longlong *)(puVar40 + -0xc) = auVar48._0_8_;
    *(longlong *)(puVar40 + -10) = auVar48._8_8_;
    uVar36 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar37 = uVar35 + iVar38 + (uVar34 >> 0x1b | uVar34 * 0x20) +
             (uVar32 & uVar33 ^ uVar31 & ~uVar33);
    auVar48 = SUB3216(ZEXT1632(auVar50) << 0x80,4) | SUB3216(ZEXT1632((undefined1  [16])0x0),4);
    auVar49 = VectorAdd(auVar50,auVar50,4);
    auVar49 = VectorShiftRightInsert(auVar49,auVar50,0x1f);
    uVar35 = uVar34 >> 2 | uVar34 * 0x40000000;
    auVar51 = VectorUnsignedFixedToFloat(auVar48,0x1e);
    uVar33 = uVar31 + iVar39 + (uVar37 >> 0x1b | uVar37 * 0x20) +
             (uVar36 & uVar34 ^ uVar32 & ~uVar34);
    auVar50 = VectorShiftLeft(auVar48,2,0x20,0);
    auVar50 = auVar49 ^ auVar51 ^ auVar50;
    uVar31 = uVar37 >> 2 | uVar37 * 0x40000000;
    uVar34 = uVar32 + puVar41[7] + (uVar33 >> 0x1b | uVar33 * 0x20) +
             (uVar35 & uVar37 ^ uVar36 & ~uVar37);
    auVar3._16_16_ = auVar46;
    auVar3._0_16_ = auVar45;
    auVar51._8_8_ = 0x6ed9eba16ed9eba1;
    auVar51._0_8_ = 0x6ed9eba16ed9eba1;
    auVar48 = VectorAdd(auVar50,auVar51,4);
    iVar38 = puVar41[9];
    uVar32 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar33 = uVar36 + puVar41[8] + (uVar34 >> 0x1b | uVar34 * 0x20) +
             (uVar31 & uVar33 ^ uVar35 & ~uVar33);
    iVar39 = puVar41[10];
    auVar51 = auVar50 >> 0x20 ^ auVar47 ^ auVar3._8_16_ ^ auVar45;
    *(longlong *)(puVar40 + -8) = auVar48._0_8_;
    *(longlong *)(puVar40 + -6) = auVar48._8_8_;
    uVar36 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar35 + iVar38 + (uVar33 >> 0x1b | uVar33 * 0x20) +
             (uVar32 & uVar34 ^ uVar31 & ~uVar34);
    auVar48 = SUB3216(ZEXT1632(auVar51) << 0x80,4) | SUB3216(ZEXT1632((undefined1  [16])0x0),4);
    auVar49 = VectorAdd(auVar51,auVar51,4);
    auVar49 = VectorShiftRightInsert(auVar49,auVar51,0x1f);
    uVar35 = uVar33 >> 2 | uVar33 * 0x40000000;
    auVar52 = VectorUnsignedFixedToFloat(auVar48,0x1e);
    uVar37 = uVar31 + iVar39 + (uVar34 >> 0x1b | uVar34 * 0x20) +
             (uVar36 & uVar33 ^ uVar32 & ~uVar33);
    auVar51 = VectorShiftLeft(auVar48,2,0x20,0);
    auVar51 = auVar49 ^ auVar52 ^ auVar51;
    uVar31 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar33 = uVar32 + puVar41[0xb] + (uVar37 >> 0x1b | uVar37 * 0x20) +
             (uVar35 & uVar34 ^ uVar36 & ~uVar34);
    auVar4._16_16_ = auVar47;
    auVar4._0_16_ = auVar46;
    auVar52._8_8_ = 0x6ed9eba16ed9eba1;
    auVar52._0_8_ = 0x6ed9eba16ed9eba1;
    auVar48 = VectorAdd(auVar51,auVar52,4);
    iVar38 = puVar41[0xd];
    uVar32 = uVar37 >> 2 | uVar37 * 0x40000000;
    uVar34 = uVar36 + puVar41[0xc] + (uVar33 >> 0x1b | uVar33 * 0x20) +
             (uVar31 & uVar37 ^ uVar35 & ~uVar37);
    iVar39 = puVar41[0xe];
    auVar52 = auVar51 >> 0x20 ^ auVar50 ^ auVar4._8_16_ ^ auVar46;
    *(longlong *)(puVar40 + -4) = auVar48._0_8_;
    *(longlong *)(puVar40 + -2) = auVar48._8_8_;
    uVar36 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar33 = uVar35 + iVar38 + (uVar34 >> 0x1b | uVar34 * 0x20) +
             (uVar32 & uVar33 ^ uVar31 & ~uVar33);
    auVar48 = SUB3216(ZEXT1632(auVar52) << 0x80,4) | SUB3216(ZEXT1632((undefined1  [16])0x0),4);
    auVar49 = VectorAdd(auVar52,auVar52,4);
    auVar49 = VectorShiftRightInsert(auVar49,auVar52,0x1f);
    uVar35 = uVar34 >> 2 | uVar34 * 0x40000000;
    auVar53 = VectorUnsignedFixedToFloat(auVar48,0x1e);
    uVar34 = uVar31 + iVar39 + (uVar33 >> 0x1b | uVar33 * 0x20) +
             (uVar36 & uVar34 ^ uVar32 & ~uVar34);
    auVar52 = VectorShiftLeft(auVar48,2,0x20,0);
    auVar52 = auVar49 ^ auVar53 ^ auVar52;
    uVar31 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar37 = uVar32 + puVar41[0xf] + (uVar34 >> 0x1b | uVar34 * 0x20) +
             (uVar35 & uVar33 ^ uVar36 & ~uVar33);
    auVar5._16_16_ = auVar52;
    auVar5._0_16_ = auVar51;
    iVar38 = puVar41[1];
    uVar32 = uVar34 >> 2 | uVar34 * 0x40000000;
    auVar53._8_8_ = 0x6ed9eba16ed9eba1;
    auVar53._0_8_ = 0x6ed9eba16ed9eba1;
    auVar53 = VectorAdd(auVar52,auVar53,4);
    uVar33 = uVar36 + *puVar41 + (uVar37 >> 0x1b | uVar37 * 0x20) +
             (uVar31 & uVar34 ^ uVar35 & ~uVar34);
    auVar49 = auVar5._8_16_ ^ auVar43 ^ auVar47 ^ auVar44;
    auVar48 = VectorUnsignedFixedToFloat(auVar49,0x1e);
    iVar39 = puVar41[2];
    *(longlong *)puVar40 = auVar53._0_8_;
    *(longlong *)(puVar40 + 2) = auVar53._8_8_;
    uVar36 = uVar37 >> 2 | uVar37 * 0x40000000;
    auVar48 = VectorShiftLeftInsert(auVar48,auVar49,2);
    uVar34 = uVar35 + iVar38 + (uVar33 >> 0x1b | uVar33 * 0x20) +
             (uVar32 & uVar37 ^ uVar31 & ~uVar37);
    uVar35 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar33 = uVar31 + iVar39 + (uVar34 >> 0x1b | uVar34 * 0x20) +
             (uVar36 & uVar33 ^ uVar32 & ~uVar33);
    uVar31 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar32 + puVar41[3] + (uVar33 >> 0x1b | uVar33 * 0x20) +
             (uVar35 & uVar34 ^ uVar36 & ~uVar34);
    auVar6._16_16_ = auVar48;
    auVar6._0_16_ = auVar52;
    iVar38 = puVar41[5];
    uVar32 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar37 = uVar36 + puVar41[4] + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar33 ^ uVar35 ^ uVar31);
    auVar43._8_8_ = 0x6ed9eba16ed9eba1;
    auVar43._0_8_ = 0x6ed9eba16ed9eba1;
    auVar53 = VectorAdd(auVar48,auVar43,4);
    auVar43 = auVar6._8_16_ ^ auVar44 ^ auVar50 ^ auVar45;
    iVar39 = puVar41[6];
    auVar49 = VectorUnsignedFixedToFloat(auVar43,0x1e);
    uVar36 = uVar34 >> 2 | uVar34 * 0x40000000;
    *(longlong *)(puVar40 + -0xc) = auVar53._0_8_;
    *(longlong *)(puVar40 + -10) = auVar53._8_8_;
    uVar33 = uVar35 + iVar38 + (uVar37 >> 0x1b | uVar37 * 0x20) + (uVar34 ^ uVar31 ^ uVar32);
    auVar49 = VectorShiftLeftInsert(auVar49,auVar43,2);
    uVar35 = uVar37 >> 2 | uVar37 * 0x40000000;
    uVar34 = uVar31 + iVar39 + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar37 ^ uVar32 ^ uVar36);
    uVar31 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar33 = uVar32 + puVar41[7] + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar33 ^ uVar36 ^ uVar35);
    auVar7._16_16_ = auVar49;
    auVar7._0_16_ = auVar48;
    iVar38 = puVar41[9];
    uVar32 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar36 + puVar41[8] + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar34 ^ uVar35 ^ uVar31);
    auVar44._8_8_ = 0x6ed9eba16ed9eba1;
    auVar44._0_8_ = 0x6ed9eba16ed9eba1;
    auVar53 = VectorAdd(auVar49,auVar44,4);
    auVar44 = auVar7._8_16_ ^ auVar45 ^ auVar51 ^ auVar46;
    iVar39 = puVar41[10];
    auVar43 = VectorUnsignedFixedToFloat(auVar44,0x1e);
    uVar36 = uVar33 >> 2 | uVar33 * 0x40000000;
    *(longlong *)(puVar40 + -8) = auVar53._0_8_;
    *(longlong *)(puVar40 + -6) = auVar53._8_8_;
    uVar37 = uVar35 + iVar38 + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar33 ^ uVar31 ^ uVar32);
    auVar43 = VectorShiftLeftInsert(auVar43,auVar44,2);
    uVar35 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar33 = uVar31 + iVar39 + (uVar37 >> 0x1b | uVar37 * 0x20) + (uVar34 ^ uVar32 ^ uVar36);
    uVar31 = uVar37 >> 2 | uVar37 * 0x40000000;
    uVar34 = uVar32 + puVar41[0xb] + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar37 ^ uVar36 ^ uVar35);
    auVar8._16_16_ = auVar43;
    auVar8._0_16_ = auVar49;
    iVar38 = puVar41[0xd];
    uVar32 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar33 = uVar36 + puVar41[0xc] + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar33 ^ uVar35 ^ uVar31);
    auVar45._8_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar45._0_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar45 = VectorAdd(auVar43,auVar45,4);
    auVar44 = auVar8._8_16_ ^ auVar46 ^ auVar52 ^ auVar47;
    iVar39 = puVar41[0xe];
    auVar46 = VectorUnsignedFixedToFloat(auVar44,0x1e);
    uVar36 = uVar34 >> 2 | uVar34 * 0x40000000;
    *(longlong *)(puVar40 + -4) = auVar45._0_8_;
    *(longlong *)(puVar40 + -2) = auVar45._8_8_;
    uVar34 = uVar35 + iVar38 + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar34 ^ uVar31 ^ uVar32);
    auVar44 = VectorShiftLeftInsert(auVar46,auVar44,2);
    uVar35 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar37 = uVar31 + iVar39 + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar33 ^ uVar32 ^ uVar36);
    uVar31 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar33 = uVar32 + puVar41[0xf] + (uVar37 >> 0x1b | uVar37 * 0x20) + (uVar34 ^ uVar36 ^ uVar35);
    auVar9._16_16_ = auVar44;
    auVar9._0_16_ = auVar43;
    iVar38 = puVar41[1];
    uVar32 = uVar37 >> 2 | uVar37 * 0x40000000;
    uVar34 = uVar36 + *puVar41 + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar37 ^ uVar35 ^ uVar31);
    auVar17._8_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar17._0_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar53 = VectorAdd(auVar44,auVar17,4);
    auVar45 = auVar9._8_16_ ^ auVar47 ^ auVar48 ^ auVar50;
    iVar39 = puVar41[2];
    auVar46 = VectorUnsignedFixedToFloat(auVar45,0x1e);
    uVar36 = uVar33 >> 2 | uVar33 * 0x40000000;
    *(longlong *)puVar40 = auVar53._0_8_;
    *(longlong *)(puVar40 + 2) = auVar53._8_8_;
    uVar33 = uVar35 + iVar38 + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar33 ^ uVar31 ^ uVar32);
    auVar45 = VectorShiftLeftInsert(auVar46,auVar45,2);
    uVar35 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar31 + iVar39 + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar34 ^ uVar32 ^ uVar36);
    uVar31 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar37 = uVar32 + puVar41[3] + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar33 ^ uVar36 ^ uVar35);
    auVar10._16_16_ = auVar45;
    auVar10._0_16_ = auVar44;
    iVar38 = puVar41[5];
    uVar32 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar33 = uVar36 + puVar41[4] + (uVar37 >> 0x1b | uVar37 * 0x20) + (uVar34 ^ uVar35 ^ uVar31);
    auVar18._8_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar18._0_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar53 = VectorAdd(auVar45,auVar18,4);
    auVar47 = auVar10._8_16_ ^ auVar50 ^ auVar49 ^ auVar51;
    iVar39 = puVar41[6];
    auVar46 = VectorUnsignedFixedToFloat(auVar47,0x1e);
    uVar36 = uVar37 >> 2 | uVar37 * 0x40000000;
    *(longlong *)(puVar40 + -0xc) = auVar53._0_8_;
    *(longlong *)(puVar40 + -10) = auVar53._8_8_;
    uVar34 = uVar35 + iVar38 + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar37 ^ uVar31 ^ uVar32);
    auVar47 = VectorShiftLeftInsert(auVar46,auVar47,2);
    uVar35 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar33 = uVar31 + iVar39 + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar33 ^ uVar32 ^ uVar36);
    uVar31 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar32 + puVar41[7] + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar34 ^ uVar36 ^ uVar35);
    auVar11._16_16_ = auVar47;
    auVar11._0_16_ = auVar45;
    iVar38 = puVar41[9];
    auVar19._8_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar19._0_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar53 = VectorAdd(auVar47,auVar19,4);
    uVar32 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar37 = uVar36 + puVar41[8] + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar31 & uVar35) +
             ((uVar31 ^ uVar35) & uVar33);
    auVar50 = auVar11._8_16_ ^ auVar51 ^ auVar43 ^ auVar52;
    auVar46 = VectorUnsignedFixedToFloat(auVar50,0x1e);
    iVar39 = puVar41[10];
    *(longlong *)(puVar40 + -8) = auVar53._0_8_;
    *(longlong *)(puVar40 + -6) = auVar53._8_8_;
    auVar50 = VectorShiftLeftInsert(auVar46,auVar50,2);
    uVar36 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar33 = uVar35 + iVar38 + (uVar37 >> 0x1b | uVar37 * 0x20) + (uVar32 & uVar31) +
             ((uVar32 ^ uVar31) & uVar34);
    uVar35 = uVar37 >> 2 | uVar37 * 0x40000000;
    uVar34 = uVar31 + iVar39 + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar36 & uVar32) +
             ((uVar36 ^ uVar32) & uVar37);
    uVar31 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar33 = uVar32 + puVar41[0xb] + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar35 & uVar36) +
             ((uVar35 ^ uVar36) & uVar33);
    auVar12._16_16_ = auVar50;
    auVar12._0_16_ = auVar47;
    iVar38 = puVar41[0xd];
    auVar20._8_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar20._0_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar53 = VectorAdd(auVar50,auVar20,4);
    uVar32 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar36 + puVar41[0xc] + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar31 & uVar35) +
             ((uVar31 ^ uVar35) & uVar34);
    auVar51 = auVar12._8_16_ ^ auVar52 ^ auVar44 ^ auVar48;
    auVar46 = VectorUnsignedFixedToFloat(auVar51,0x1e);
    iVar39 = puVar41[0xe];
    *(longlong *)(puVar40 + -4) = auVar53._0_8_;
    *(longlong *)(puVar40 + -2) = auVar53._8_8_;
    auVar51 = VectorShiftLeftInsert(auVar46,auVar51,2);
    uVar36 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar37 = uVar35 + iVar38 + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar32 & uVar31) +
             ((uVar32 ^ uVar31) & uVar33);
    uVar35 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar33 = uVar31 + iVar39 + (uVar37 >> 0x1b | uVar37 * 0x20) + (uVar36 & uVar32) +
             ((uVar36 ^ uVar32) & uVar34);
    uVar31 = uVar37 >> 2 | uVar37 * 0x40000000;
    uVar34 = uVar32 + puVar41[0xf] + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar35 & uVar36) +
             ((uVar35 ^ uVar36) & uVar37);
    auVar13._16_16_ = auVar51;
    auVar13._0_16_ = auVar50;
    iVar38 = puVar41[1];
    auVar21._8_8_ = 0xca62c1d6ca62c1d6;
    auVar21._0_8_ = 0xca62c1d6ca62c1d6;
    auVar52 = VectorAdd(auVar51,auVar21,4);
    uVar32 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar33 = uVar36 + *puVar41 + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar31 & uVar35) +
             ((uVar31 ^ uVar35) & uVar33);
    auVar48 = auVar13._8_16_ ^ auVar48 ^ auVar45 ^ auVar49;
    auVar46 = VectorUnsignedFixedToFloat(auVar48,0x1e);
    iVar39 = puVar41[2];
    *(longlong *)puVar40 = auVar52._0_8_;
    *(longlong *)(puVar40 + 2) = auVar52._8_8_;
    auVar46 = VectorShiftLeftInsert(auVar46,auVar48,2);
    uVar36 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar35 + iVar38 + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar32 & uVar31) +
             ((uVar32 ^ uVar31) & uVar34);
    uVar35 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar37 = uVar31 + iVar39 + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar36 & uVar32) +
             ((uVar36 ^ uVar32) & uVar33);
    uVar31 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar33 = uVar32 + puVar41[3] + (uVar37 >> 0x1b | uVar37 * 0x20) + (uVar35 & uVar36) +
             ((uVar35 ^ uVar36) & uVar34);
    auVar14._16_16_ = auVar46;
    auVar14._0_16_ = auVar51;
    iVar38 = puVar41[5];
    auVar22._8_8_ = 0xca62c1d6ca62c1d6;
    auVar22._0_8_ = 0xca62c1d6ca62c1d6;
    auVar52 = VectorAdd(auVar46,auVar22,4);
    uVar32 = uVar37 >> 2 | uVar37 * 0x40000000;
    uVar34 = uVar36 + puVar41[4] + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar31 & uVar35) +
             ((uVar31 ^ uVar35) & uVar37);
    auVar49 = auVar14._8_16_ ^ auVar49 ^ auVar47 ^ auVar43;
    auVar48 = VectorUnsignedFixedToFloat(auVar49,0x1e);
    iVar39 = puVar41[6];
    *(longlong *)(puVar40 + -0xc) = auVar52._0_8_;
    *(longlong *)(puVar40 + -10) = auVar52._8_8_;
    auVar48 = VectorShiftLeftInsert(auVar48,auVar49,2);
    uVar36 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar33 = uVar35 + iVar38 + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar32 & uVar31) +
             ((uVar32 ^ uVar31) & uVar33);
    uVar35 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar31 + iVar39 + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar36 & uVar32) +
             ((uVar36 ^ uVar32) & uVar34);
    uVar31 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar37 = uVar32 + puVar41[7] + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar35 & uVar36) +
             ((uVar35 ^ uVar36) & uVar33);
    auVar15._16_16_ = auVar48;
    auVar15._0_16_ = auVar46;
    iVar38 = puVar41[9];
    auVar23._8_8_ = 0xca62c1d6ca62c1d6;
    auVar23._0_8_ = 0xca62c1d6ca62c1d6;
    auVar47 = VectorAdd(auVar48,auVar23,4);
    uVar32 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar33 = uVar36 + puVar41[8] + (uVar37 >> 0x1b | uVar37 * 0x20) + (uVar31 & uVar35) +
             ((uVar31 ^ uVar35) & uVar34);
    auVar49 = auVar15._8_16_ ^ auVar43 ^ auVar50 ^ auVar44;
    auVar46 = VectorUnsignedFixedToFloat(auVar49,0x1e);
    iVar39 = puVar41[10];
    *(longlong *)(puVar40 + -8) = auVar47._0_8_;
    *(longlong *)(puVar40 + -6) = auVar47._8_8_;
    auVar46 = VectorShiftLeftInsert(auVar46,auVar49,2);
    uVar36 = uVar37 >> 2 | uVar37 * 0x40000000;
    uVar34 = uVar35 + iVar38 + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar32 & uVar31) +
             ((uVar32 ^ uVar31) & uVar37);
    uVar35 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar33 = uVar31 + iVar39 + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar36 & uVar32) +
             ((uVar36 ^ uVar32) & uVar33);
    uVar31 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar32 + puVar41[0xb] + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar35 & uVar36) +
             ((uVar35 ^ uVar36) & uVar34);
    auVar16._16_16_ = auVar46;
    auVar16._0_16_ = auVar48;
    iVar38 = puVar41[0xd];
    uVar32 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar37 = uVar36 + puVar41[0xc] + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar33 ^ uVar35 ^ uVar31);
    auVar24._8_8_ = 0xca62c1d6ca62c1d6;
    auVar24._0_8_ = 0xca62c1d6ca62c1d6;
    auVar49 = VectorAdd(auVar46,auVar24,4);
    auVar48 = auVar16._8_16_ ^ auVar44 ^ auVar51 ^ auVar45;
    iVar39 = puVar41[0xe];
    auVar46 = VectorUnsignedFixedToFloat(auVar48,0x1e);
    uVar36 = uVar34 >> 2 | uVar34 * 0x40000000;
    *(longlong *)(puVar40 + -4) = auVar49._0_8_;
    *(longlong *)(puVar40 + -2) = auVar49._8_8_;
    uVar33 = uVar35 + iVar38 + (uVar37 >> 0x1b | uVar37 * 0x20) + (uVar34 ^ uVar31 ^ uVar32);
    auVar46 = VectorShiftLeftInsert(auVar46,auVar48,2);
    uVar35 = uVar37 >> 2 | uVar37 * 0x40000000;
    uVar34 = uVar31 + iVar39 + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar37 ^ uVar32 ^ uVar36);
    iVar38 = *puVar41;
    uVar31 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar32 = uVar32 + puVar41[0xf] + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar33 ^ uVar36 ^ uVar35);
    auVar25._8_8_ = 0xca62c1d6ca62c1d6;
    auVar25._0_8_ = 0xca62c1d6ca62c1d6;
    auVar46 = VectorAdd(auVar46,auVar25,4);
    *(longlong *)puVar40 = auVar46._0_8_;
    *(longlong *)(puVar40 + 2) = auVar46._8_8_;
    bVar42 = pauVar29 + 4 == param_2 + param_3 * 4;
    pauVar30 = pauVar29 + 4;
    if (bVar42) {
      pauVar30 = pauVar29;
    }
    auVar46 = pauVar30[2];
    auVar48 = pauVar30[3];
    uVar33 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar36 + iVar38 + (uVar32 >> 0x1b | uVar32 * 0x20) + (uVar34 ^ uVar35 ^ uVar31);
    auVar43 = vrev(*pauVar30,1);
    uVar36 = uVar32 >> 2 | uVar32 * 0x40000000;
    uVar32 = uVar35 + puVar41[1] + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar32 ^ uVar31 ^ uVar33);
    uVar35 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar37 = uVar31 + puVar41[2] + (uVar32 >> 0x1b | uVar32 * 0x20) + (uVar34 ^ uVar33 ^ uVar36);
    iVar38 = puVar41[4];
    uVar31 = uVar32 >> 2 | uVar32 * 0x40000000;
    uVar34 = uVar33 + puVar41[3] + (uVar37 >> 0x1b | uVar37 * 0x20) + (uVar32 ^ uVar36 ^ uVar35);
    auVar44 = vrev(pauVar30[1],1);
    auVar26._8_8_ = 0x5a8279995a827999;
    auVar26._0_8_ = 0x5a8279995a827999;
    auVar49 = VectorAdd(auVar43,auVar26,4);
    iVar39 = puVar41[5];
    *(longlong *)(puVar40 + -0xc) = auVar49._0_8_;
    *(longlong *)(puVar40 + -10) = auVar49._8_8_;
    uVar32 = uVar37 >> 2 | uVar37 * 0x40000000;
    uVar33 = uVar36 + iVar38 + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar37 ^ uVar35 ^ uVar31);
    uVar36 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar35 + iVar39 + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar34 ^ uVar31 ^ uVar32);
    uVar35 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar33 = uVar31 + puVar41[6] + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar33 ^ uVar32 ^ uVar36);
    iVar38 = puVar41[8];
    uVar31 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar32 + puVar41[7] + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar34 ^ uVar36 ^ uVar35);
    auVar45 = vrev(auVar46,1);
    auVar27._8_8_ = 0x5a8279995a827999;
    auVar27._0_8_ = 0x5a8279995a827999;
    auVar46 = VectorAdd(auVar44,auVar27,4);
    iVar39 = puVar41[9];
    *(longlong *)(puVar40 + -8) = auVar46._0_8_;
    *(longlong *)(puVar40 + -6) = auVar46._8_8_;
    uVar32 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar33 = uVar36 + iVar38 + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar33 ^ uVar35 ^ uVar31);
    uVar36 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar34 = uVar35 + iVar39 + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar34 ^ uVar31 ^ uVar32);
    uVar35 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar33 = uVar31 + puVar41[10] + (uVar34 >> 0x1b | uVar34 * 0x20) + (uVar33 ^ uVar32 ^ uVar36);
    iVar38 = puVar41[0xc];
    uVar31 = uVar34 >> 2 | uVar34 * 0x40000000;
    uVar37 = uVar32 + puVar41[0xb] + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar34 ^ uVar36 ^ uVar35);
    auVar46 = vrev(auVar48,1);
    auVar28._8_8_ = 0x5a8279995a827999;
    auVar28._0_8_ = 0x5a8279995a827999;
    auVar48 = VectorAdd(auVar45,auVar28,4);
    iVar39 = puVar41[0xd];
    *(longlong *)(puVar40 + -4) = auVar48._0_8_;
    *(longlong *)(puVar40 + -2) = auVar48._8_8_;
    uVar34 = uVar33 >> 2 | uVar33 * 0x40000000;
    uVar32 = uVar36 + iVar38 + (uVar37 >> 0x1b | uVar37 * 0x20) + (uVar33 ^ uVar35 ^ uVar31);
    uVar36 = uVar37 >> 2 | uVar37 * 0x40000000;
    uVar33 = uVar35 + iVar39 + (uVar32 >> 0x1b | uVar32 * 0x20) + (uVar37 ^ uVar31 ^ uVar34);
    uVar35 = uVar32 >> 2 | uVar32 * 0x40000000;
    uVar32 = uVar31 + puVar41[0xe] + (uVar33 >> 0x1b | uVar33 * 0x20) + (uVar32 ^ uVar34 ^ uVar36);
    uVar31 = uVar34 + puVar41[0xf] + (uVar32 >> 0x1b | uVar32 * 0x20) + (uVar33 ^ uVar36 ^ uVar35) +
             *param_1;
    local_70._0_4_ = param_1[4];
    uVar32 = uVar32 + param_1[1];
    uVar34 = (uVar33 >> 2 | uVar33 * 0x40000000) + param_1[2];
    uVar35 = uVar35 + param_1[3];
    if (bVar42) {
      puVar41 = local_40 + 6;
    }
    uVar36 = uVar36 + (uint)local_70;
    if (!bVar42) {
      local_70._0_4_ = *puVar41;
    }
    *param_1 = uVar31;
    param_1[1] = uVar32;
    param_1[2] = uVar34;
    param_1[3] = uVar35;
    param_1[4] = uVar36;
    if (bVar42) break;
    puVar40 = puVar41 + 0xc;
    pauVar29 = pauVar30;
  }
  return;
}

