// FUN_01bdb320 @ 01bdb320 size=3172 calls_out=0 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01bdb320(uint *param_1,undefined1 (*param_2) [16],uint param_3,undefined1 (*param_4) [16],
                 undefined1 (*param_5) [16])

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
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  byte *pbVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined1 (*pauVar43) [16];
  undefined1 (*pauVar44) [16];
  uint uVar45;
  uint uVar46;
  uint uVar47;
  bool bVar48;
  bool bVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 uVar67;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int local_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint local_e4;
  uint uStack_e0;
  uint uStack_dc;
  int iStack_d8;
  int local_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  uint auStack_b0 [4];
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  undefined1 (*local_2c) [16];
  uint local_28;
  
  local_28 = param_3;
  local_2c = param_2;
  local_30 = param_1;
  if (param_3 == 0) {
    return;
  }
  if ((param_3 < 0xc1) || ((DAT_01d53480 & 1) == 0)) {
    local_78 = *(undefined8 *)(*param_5 + 8);
    uStack_80 = *(undefined8 *)*param_5;
    uStack_48 = *(uint *)(param_4[1] + 8);
    local_44 = *(uint *)(param_4[1] + 0xc);
    local_88 = *(undefined8 *)(param_4[1] + 8);
    local_90 = *(undefined8 *)param_4[1];
    local_98 = *(undefined8 *)(*param_4 + 8);
    uStack_a0 = *(undefined8 *)*param_4;
    auStack_b0[2] = 0x79622d32;
    auStack_b0[3] = 0x6b206574;
    auStack_b0[0] = 0x61707865;
    auStack_b0[1] = 0x3320646e;
    uVar24 = 0x61707865;
    uVar25 = 0x3320646e;
    uVar26 = 0x79622d32;
    uVar27 = 0x6b206574;
    uStack_f0 = *(uint *)*param_4;
    uStack_ec = *(uint *)(*param_4 + 4);
    uStack_e8 = *(uint *)(*param_4 + 8);
    local_e4 = *(uint *)(*param_4 + 0xc);
    uStack_e0 = *(uint *)param_4[1];
    uStack_dc = *(uint *)(param_4[1] + 4);
    goto LAB_01bdb390;
  }
  local_78._0_4_ = param_3;
  local_78._4_4_ = param_4;
  uStack_80._0_4_ = param_1;
  uStack_80._4_4_ = param_2;
  auVar19 = *param_4;
  auVar20 = param_4[1];
  local_98 = *(undefined8 *)(param_4[1] + 8);
  pbVar38 = (byte *)&iStack_100;
  auVar51 = *param_5;
  auVar50._8_8_ = 0x6b20657479622d32;
  auVar50._0_8_ = 0x3320646e61707865;
  uStack_e0 = auVar20._0_4_;
  uStack_dc = auVar20._4_4_;
  iStack_d8 = auVar20._8_4_;
  local_d4 = auVar20._12_4_;
  uStack_d0 = auVar51._0_4_;
  uStack_cc = auVar51._4_4_;
  uStack_c8 = auVar51._8_4_;
  local_c4 = auVar51._12_4_;
  uStack_f0 = auVar19._0_4_;
  uStack_ec = auVar19._4_4_;
  uStack_e8 = auVar19._8_4_;
  local_e4 = auVar19._12_4_;
  local_b8 = VectorShiftLeft(1,1,0x20,0);
  local_c0 = 1;
  uVar67 = VectorShiftLeft(1,2,0x20,0);
  auStack_b0[0] = (int)uVar67;
  auStack_b0[1] = SUB84(uVar67,4);
  uVar24 = *(uint *)*param_4;
  uVar26 = *(uint *)(*param_4 + 4);
  uVar25 = *(uint *)(*param_4 + 8);
  uVar27 = *(uint *)(*param_4 + 0xc);
  uVar30 = *(uint *)param_4[1];
  uVar28 = *(uint *)(param_4[1] + 4);
  while( true ) {
    uVar42 = 0x6b206574;
    uVar36 = 0x79622d32;
    uVar35 = 0x3320646e;
    uVar41 = 0x61707865;
    auVar58 = VectorAdd(auVar51,ZEXT816(1),4);
    auVar64 = VectorAdd(auVar58,ZEXT816(1),4);
    local_88._4_4_ = local_c4;
    iVar39 = 10;
    uVar45 = uStack_d0 + 3;
    uVar29 = uStack_cc;
    uVar34 = uStack_c8;
    auVar55 = auVar19;
    auVar52 = auVar20;
    auVar53 = auVar50;
    auVar57 = auVar19;
    auVar56 = auVar20;
    auVar59 = auVar50;
    auVar66 = auVar19;
    auVar61 = auVar20;
    do {
      iVar39 = iVar39 + -1;
      auVar50 = VectorAdd(auVar50,auVar55,4);
      uVar41 = uVar41 + uVar24;
      auVar54 = VectorAdd(auVar53,auVar57,4);
      auVar60 = VectorAdd(auVar59,auVar66,4);
      uVar35 = uVar35 + uVar26;
      uVar45 = (uVar45 >> 0x10 | uVar45 << 0x10) ^ (uVar41 >> 0x10 | uVar41 * 0x10000);
      uVar29 = (uVar29 >> 0x10 | uVar29 << 0x10) ^ (uVar35 >> 0x10 | uVar35 * 0x10000);
      auVar53 = vrev(auVar51 ^ auVar50,2);
      uVar30 = uVar30 + uVar45;
      auVar59 = vrev(auVar58 ^ auVar54,2);
      auVar65 = vrev(auVar64 ^ auVar60,2);
      uVar28 = uVar28 + uVar29;
      auVar58 = VectorAdd(auVar52,auVar53,4);
      auVar64 = VectorAdd(auVar56,auVar59,4);
      uVar24 = (uVar24 >> 0x14 | uVar24 << 0xc) ^ (uVar30 >> 0x14 | uVar30 * 0x1000);
      auVar63 = VectorAdd(auVar61,auVar65,4);
      uVar26 = (uVar26 >> 0x14 | uVar26 << 0xc) ^ (uVar28 >> 0x14 | uVar28 * 0x1000);
      uVar41 = uVar41 + uVar24;
      uVar35 = uVar35 + uVar26;
      auVar51 = VectorUnsignedFixedToFloat(auVar55 ^ auVar58,0x14);
      auVar56 = VectorUnsignedFixedToFloat(auVar57 ^ auVar64,0x14);
      uVar45 = (uVar45 >> 0x18 | uVar45 << 8) ^ (uVar41 >> 0x18 | uVar41 * 0x100);
      auVar61 = VectorUnsignedFixedToFloat(auVar66 ^ auVar63,0x14);
      uVar29 = (uVar29 >> 0x18 | uVar29 << 8) ^ (uVar35 >> 0x18 | uVar35 * 0x100);
      auVar52 = VectorShiftLeftInsert(auVar51,auVar55 ^ auVar58,0xc);
      uVar30 = uVar30 + uVar45;
      auVar57 = VectorShiftLeftInsert(auVar56,auVar57 ^ auVar64,0xc);
      auVar62 = VectorShiftLeftInsert(auVar61,auVar66 ^ auVar63,0xc);
      uVar28 = uVar28 + uVar29;
      auVar51 = VectorAdd(auVar50,auVar52,4);
      auVar55 = VectorAdd(auVar54,auVar57,4);
      auVar54 = VectorAdd(auVar60,auVar62,4);
      uVar24 = (uVar24 >> 0x19 | uVar24 << 7) ^ (uVar30 >> 0x19 | uVar30 * 0x80);
      uVar26 = (uVar26 >> 0x19 | uVar26 << 7) ^ (uVar28 >> 0x19 | uVar28 * 0x80);
      auVar50 = VectorUnsignedFixedToFloat(auVar53 ^ auVar51,0x18);
      auVar56 = VectorUnsignedFixedToFloat(auVar59 ^ auVar55,0x18);
      uVar36 = uVar36 + uVar25;
      auVar66 = VectorUnsignedFixedToFloat(auVar65 ^ auVar54,0x18);
      auVar61 = VectorShiftLeftInsert(auVar50,auVar53 ^ auVar51,8);
      auVar53 = VectorShiftLeftInsert(auVar56,auVar59 ^ auVar55,8);
      auVar60 = VectorShiftLeftInsert(auVar66,auVar65 ^ auVar54,8);
      uVar42 = uVar42 + uVar27;
      auVar56 = VectorAdd(auVar58,auVar61,4);
      auVar58 = VectorAdd(auVar64,auVar53,4);
      uVar46 = (uVar34 >> 0x10 | uVar34 << 0x10) ^ (uVar36 >> 0x10 | uVar36 * 0x10000);
      auVar59 = VectorAdd(auVar63,auVar60,4);
      uVar34 = (local_88._4_4_ >> 0x10 | local_88._4_4_ << 0x10) ^
               (uVar42 >> 0x10 | uVar42 * 0x10000);
      local_98._0_4_ = (uint)local_98 + uVar46;
      local_98._4_4_ = local_98._4_4_ + uVar34;
      auVar50 = VectorUnsignedFixedToFloat(auVar52 ^ auVar56,0x19);
      auVar66 = VectorUnsignedFixedToFloat(auVar57 ^ auVar58,0x19);
      uVar25 = (uVar25 >> 0x14 | uVar25 << 0xc) ^ ((uint)local_98 >> 0x14 | (uint)local_98 * 0x1000)
      ;
      auVar64 = VectorUnsignedFixedToFloat(auVar62 ^ auVar59,0x19);
      uVar27 = (uVar27 >> 0x14 | uVar27 << 0xc) ^ (local_98._4_4_ >> 0x14 | local_98._4_4_ * 0x1000)
      ;
      auVar50 = VectorShiftLeftInsert(auVar50,auVar52 ^ auVar56,7);
      uVar36 = uVar36 + uVar25;
      auVar52 = VectorShiftLeftInsert(auVar66,auVar57 ^ auVar58,7);
      auVar57 = VectorShiftLeftInsert(auVar64,auVar62 ^ auVar59,7);
      uVar42 = uVar42 + uVar27;
      auVar1._16_16_ = auVar56;
      auVar1._0_16_ = auVar56;
      auVar2._16_16_ = auVar58;
      auVar2._0_16_ = auVar58;
      uVar47 = (uVar46 >> 0x18 | uVar46 << 8) ^ (uVar36 >> 0x18 | uVar36 * 0x100);
      auVar3._16_16_ = auVar59;
      auVar3._0_16_ = auVar59;
      uVar34 = (uVar34 >> 0x18 | uVar34 << 8) ^ (uVar42 >> 0x18 | uVar42 * 0x100);
      auVar4._16_16_ = auVar50;
      auVar4._0_16_ = auVar50;
      local_98._0_4_ = (uint)local_98 + uVar47;
      auVar5._16_16_ = auVar52;
      auVar5._0_16_ = auVar52;
      auVar6._16_16_ = auVar57;
      auVar6._0_16_ = auVar57;
      local_98._4_4_ = local_98._4_4_ + uVar34;
      auVar7._16_16_ = auVar61;
      auVar7._0_16_ = auVar61;
      auVar8._16_16_ = auVar53;
      auVar8._0_16_ = auVar53;
      uVar25 = (uVar25 >> 0x19 | uVar25 << 7) ^ ((uint)local_98 >> 0x19 | (uint)local_98 * 0x80);
      auVar9._16_16_ = auVar60;
      auVar9._0_16_ = auVar60;
      uVar27 = (uVar27 >> 0x19 | uVar27 << 7) ^ (local_98._4_4_ >> 0x19 | local_98._4_4_ * 0x80);
      auVar51 = VectorAdd(auVar51,auVar4._4_16_,4);
      uVar41 = uVar41 + uVar26;
      auVar55 = VectorAdd(auVar55,auVar5._4_16_,4);
      auVar58 = VectorAdd(auVar54,auVar6._4_16_,4);
      uVar35 = uVar35 + uVar25;
      uVar34 = (uVar34 >> 0x10 | uVar34 << 0x10) ^ (uVar41 >> 0x10 | uVar41 * 0x10000);
      uVar45 = (uVar45 >> 0x10 | uVar45 << 0x10) ^ (uVar35 >> 0x10 | uVar35 * 0x10000);
      auVar61 = vrev(auVar7._12_16_ ^ auVar51,2);
      local_98._0_4_ = (uint)local_98 + uVar34;
      auVar64 = vrev(auVar8._12_16_ ^ auVar55,2);
      auVar63 = vrev(auVar9._12_16_ ^ auVar58,2);
      local_98._4_4_ = local_98._4_4_ + uVar45;
      auVar56 = VectorAdd(auVar1._8_16_,auVar61,4);
      auVar66 = VectorAdd(auVar2._8_16_,auVar64,4);
      uVar26 = (uVar26 >> 0x14 | uVar26 << 0xc) ^ ((uint)local_98 >> 0x14 | (uint)local_98 * 0x1000)
      ;
      auVar62 = VectorAdd(auVar3._8_16_,auVar63,4);
      uVar25 = (uVar25 >> 0x14 | uVar25 << 0xc) ^ (local_98._4_4_ >> 0x14 | local_98._4_4_ * 0x1000)
      ;
      auVar52 = auVar4._4_16_ ^ auVar56;
      uVar41 = uVar41 + uVar26;
      auVar59 = auVar5._4_16_ ^ auVar66;
      auVar54 = auVar6._4_16_ ^ auVar62;
      uVar35 = uVar35 + uVar25;
      auVar50 = VectorUnsignedFixedToFloat(auVar52,0x14);
      auVar57 = VectorUnsignedFixedToFloat(auVar59,0x14);
      local_88._4_4_ = (uVar34 >> 0x18 | uVar34 << 8) ^ (uVar41 >> 0x18 | uVar41 * 0x100);
      auVar53 = VectorUnsignedFixedToFloat(auVar54,0x14);
      uVar45 = (uVar45 >> 0x18 | uVar45 << 8) ^ (uVar35 >> 0x18 | uVar35 * 0x100);
      auVar52 = VectorShiftLeftInsert(auVar50,auVar52,0xc);
      uVar46 = (uint)local_98 + local_88._4_4_;
      auVar57 = VectorShiftLeftInsert(auVar57,auVar59,0xc);
      auVar60 = VectorShiftLeftInsert(auVar53,auVar54,0xc);
      auVar50 = VectorAdd(auVar51,auVar52,4);
      auVar53 = VectorAdd(auVar55,auVar57,4);
      uVar32 = local_98._4_4_ + uVar45;
      auVar59 = VectorAdd(auVar58,auVar60,4);
      uVar26 = (uVar26 >> 0x19 | uVar26 << 7) ^ (uVar46 >> 0x19 | uVar46 * 0x80);
      uVar25 = (uVar25 >> 0x19 | uVar25 << 7) ^ (uVar32 >> 0x19 | uVar32 * 0x80);
      auVar51 = VectorUnsignedFixedToFloat(auVar61 ^ auVar50,0x18);
      auVar55 = VectorUnsignedFixedToFloat(auVar64 ^ auVar53,0x18);
      uVar36 = uVar36 + uVar27;
      auVar65 = VectorUnsignedFixedToFloat(auVar63 ^ auVar59,0x18);
      auVar58 = VectorShiftLeftInsert(auVar51,auVar61 ^ auVar50,8);
      local_98 = CONCAT44(uVar32,uVar46);
      auVar54 = VectorShiftLeftInsert(auVar55,auVar64 ^ auVar53,8);
      auVar63 = VectorShiftLeftInsert(auVar65,auVar63 ^ auVar59,8);
      uVar42 = uVar42 + uVar24;
      auVar56 = VectorAdd(auVar56,auVar58,4);
      auVar55 = VectorAdd(auVar66,auVar54,4);
      uVar29 = (uVar29 >> 0x10 | uVar29 << 0x10) ^ (uVar36 >> 0x10 | uVar36 * 0x10000);
      auVar64 = VectorAdd(auVar62,auVar63,4);
      uVar34 = (uVar47 >> 0x10 | uVar47 << 0x10) ^ (uVar42 >> 0x10 | uVar42 * 0x10000);
      uVar30 = uVar30 + uVar29;
      uVar28 = uVar28 + uVar34;
      auVar51 = VectorUnsignedFixedToFloat(auVar52 ^ auVar56,0x19);
      auVar61 = VectorUnsignedFixedToFloat(auVar57 ^ auVar55,0x19);
      uVar27 = (uVar27 >> 0x14 | uVar27 << 0xc) ^ (uVar30 >> 0x14 | uVar30 * 0x1000);
      auVar66 = VectorUnsignedFixedToFloat(auVar60 ^ auVar64,0x19);
      uVar24 = (uVar24 >> 0x14 | uVar24 << 0xc) ^ (uVar28 >> 0x14 | uVar28 * 0x1000);
      auVar51 = VectorShiftLeftInsert(auVar51,auVar52 ^ auVar56,7);
      uVar36 = uVar36 + uVar27;
      auVar57 = VectorShiftLeftInsert(auVar61,auVar57 ^ auVar55,7);
      auVar66 = VectorShiftLeftInsert(auVar66,auVar60 ^ auVar64,7);
      uVar42 = uVar42 + uVar24;
      auVar10._16_16_ = auVar56;
      auVar10._0_16_ = auVar56;
      auVar52 = auVar10._8_16_;
      auVar11._16_16_ = auVar55;
      auVar11._0_16_ = auVar55;
      auVar56 = auVar11._8_16_;
      uVar29 = (uVar29 >> 0x18 | uVar29 << 8) ^ (uVar36 >> 0x18 | uVar36 * 0x100);
      auVar12._16_16_ = auVar64;
      auVar12._0_16_ = auVar64;
      auVar61 = auVar12._8_16_;
      uVar34 = (uVar34 >> 0x18 | uVar34 << 8) ^ (uVar42 >> 0x18 | uVar42 * 0x100);
      auVar13._16_16_ = auVar51;
      auVar13._0_16_ = auVar51;
      auVar55 = auVar13._12_16_;
      uVar30 = uVar30 + uVar29;
      auVar14._16_16_ = auVar57;
      auVar14._0_16_ = auVar57;
      auVar57 = auVar14._12_16_;
      auVar15._16_16_ = auVar66;
      auVar15._0_16_ = auVar66;
      auVar66 = auVar15._12_16_;
      uVar28 = uVar28 + uVar34;
      auVar16._16_16_ = auVar58;
      auVar16._0_16_ = auVar58;
      auVar51 = auVar16._4_16_;
      auVar17._16_16_ = auVar54;
      auVar17._0_16_ = auVar54;
      auVar58 = auVar17._4_16_;
      uVar27 = (uVar27 >> 0x19 | uVar27 << 7) ^ (uVar30 >> 0x19 | uVar30 * 0x80);
      auVar18._16_16_ = auVar63;
      auVar18._0_16_ = auVar63;
      auVar64 = auVar18._4_16_;
      uVar24 = (uVar24 >> 0x19 | uVar24 << 7) ^ (uVar28 >> 0x19 | uVar28 * 0x80);
    } while (iVar39 != 0);
    auVar58._8_4_ = 0x79622d32;
    auVar58._0_8_ = 0x3320646e61707865;
    auVar58._12_4_ = 0x6b206574;
    auVar62._4_4_ = uStack_cc;
    auVar62._0_4_ = uStack_d0;
    auVar62._8_4_ = uStack_c8;
    auVar62._12_4_ = local_c4;
    auVar60._4_4_ = uStack_cc;
    auVar60._0_4_ = uStack_d0;
    auVar60._8_4_ = uStack_c8;
    auVar60._12_4_ = local_c4;
    auVar64._4_4_ = uStack_cc;
    auVar64._0_4_ = uStack_d0;
    auVar64._8_4_ = uStack_c8;
    auVar64._12_4_ = local_c4;
    uStack_a0 = CONCAT44(uVar28,uVar30);
    local_90 = CONCAT44(uVar29,uVar45);
    local_88 = CONCAT44(local_88._4_4_,uVar34);
    auVar50 = VectorAdd(auVar50,auVar58,4);
    auVar53 = VectorAdd(auVar53,auVar58,4);
    auVar58 = VectorAdd(auVar59,auVar58,4);
    auVar55 = VectorAdd(auVar55,auVar19,4);
    auVar57 = VectorAdd(auVar57,auVar19,4);
    auVar66 = VectorAdd(auVar66,auVar19,4);
    auVar52 = VectorAdd(auVar52,auVar20,4);
    auVar56 = VectorAdd(auVar56,auVar20,4);
    auVar59 = VectorAdd(auVar61,auVar20,4);
    auVar61._8_8_ = auVar17._12_8_;
    auVar61._0_8_ = VectorAdd(auVar54._4_8_,1,4);
    auVar54._8_8_ = auVar18._12_8_;
    auVar54._0_8_ = VectorAdd(auVar63._4_8_,local_b8,4);
    auVar51 = VectorAdd(auVar51,auVar64,4);
    auVar61 = VectorAdd(auVar61,auVar60,4);
    auVar64 = VectorAdd(auVar54,auVar62,4);
    if ((uint)local_78 < 0x100) {
      if ((uint)local_78 < 0xc0) {
        if ((uint)local_78 < 0x80) {
          if ((uint)local_78 < 0x40) {
            iStack_100 = auVar50._0_4_;
            iStack_fc = auVar50._4_4_;
            iStack_f8 = auVar50._8_4_;
            local_f4 = auVar50._12_4_;
            uStack_f0 = auVar55._0_4_;
            uStack_ec = auVar55._4_4_;
            uStack_e8 = auVar55._8_4_;
            local_e4 = auVar55._12_4_;
            uStack_e0 = auVar52._0_4_;
            uStack_dc = auVar52._4_4_;
            iStack_d8 = auVar52._8_4_;
            local_d4 = auVar52._12_4_;
            uStack_d0 = auVar51._0_4_;
            uStack_cc = auVar51._4_4_;
            uStack_c8 = auVar51._8_4_;
            local_c4 = auVar51._12_4_;
            pbVar38 = (byte *)&iStack_100;
          }
          else {
            auVar19 = *uStack_80._4_4_;
            auVar20 = uStack_80._4_4_[1];
            auVar66 = uStack_80._4_4_[2];
            auVar58 = uStack_80._4_4_[3];
            uStack_80._4_4_ = uStack_80._4_4_ + 4;
            *(longlong *)(uint *)uStack_80 = SUB168(auVar50 ^ auVar19,0);
            *(longlong *)((uint *)uStack_80 + 2) = SUB168(auVar50 ^ auVar19,8);
            *(longlong *)((uint *)uStack_80 + 4) = SUB168(auVar55 ^ auVar20,0);
            *(longlong *)((uint *)uStack_80 + 6) = SUB168(auVar55 ^ auVar20,8);
            *(longlong *)((uint *)uStack_80 + 8) = SUB168(auVar52 ^ auVar66,0);
            *(longlong *)((uint *)uStack_80 + 10) = SUB168(auVar52 ^ auVar66,8);
            *(longlong *)((uint *)uStack_80 + 0xc) = SUB168(auVar51 ^ auVar58,0);
            *(longlong *)((uint *)uStack_80 + 0xe) = SUB168(auVar51 ^ auVar58,8);
            uStack_80._0_4_ = (uint *)uStack_80 + 0x10;
            if ((uint)local_78 == 0x40) {
              return;
            }
            iStack_100 = auVar53._0_4_;
            iStack_fc = auVar53._4_4_;
            iStack_f8 = auVar53._8_4_;
            local_f4 = auVar53._12_4_;
            uStack_f0 = auVar57._0_4_;
            uStack_ec = auVar57._4_4_;
            uStack_e8 = auVar57._8_4_;
            local_e4 = auVar57._12_4_;
            uStack_e0 = auVar56._0_4_;
            uStack_dc = auVar56._4_4_;
            iStack_d8 = auVar56._8_4_;
            local_d4 = auVar56._12_4_;
            uStack_d0 = auVar61._0_4_;
            uStack_cc = auVar61._4_4_;
            uStack_c8 = auVar61._8_4_;
            local_c4 = auVar61._12_4_;
            local_78._0_4_ = (uint)local_78 - 0x40;
            pbVar38 = (byte *)&iStack_100;
          }
        }
        else {
          auVar19 = *uStack_80._4_4_;
          auVar20 = uStack_80._4_4_[1];
          auVar54 = uStack_80._4_4_[2];
          auVar63 = uStack_80._4_4_[3];
          auVar60 = uStack_80._4_4_[4];
          auVar62 = uStack_80._4_4_[5];
          auVar65 = uStack_80._4_4_[6];
          auVar21 = uStack_80._4_4_[7];
          uStack_80._4_4_ = uStack_80._4_4_ + 8;
          *(longlong *)(uint *)uStack_80 = SUB168(auVar50 ^ auVar19,0);
          *(longlong *)((uint *)uStack_80 + 2) = SUB168(auVar50 ^ auVar19,8);
          *(longlong *)((uint *)uStack_80 + 4) = SUB168(auVar55 ^ auVar20,0);
          *(longlong *)((uint *)uStack_80 + 6) = SUB168(auVar55 ^ auVar20,8);
          *(longlong *)((uint *)uStack_80 + 8) = SUB168(auVar52 ^ auVar54,0);
          *(longlong *)((uint *)uStack_80 + 10) = SUB168(auVar52 ^ auVar54,8);
          *(longlong *)((uint *)uStack_80 + 0xc) = SUB168(auVar51 ^ auVar63,0);
          *(longlong *)((uint *)uStack_80 + 0xe) = SUB168(auVar51 ^ auVar63,8);
          *(longlong *)((uint *)uStack_80 + 0x10) = SUB168(auVar53 ^ auVar60,0);
          *(longlong *)((uint *)uStack_80 + 0x12) = SUB168(auVar53 ^ auVar60,8);
          *(longlong *)((uint *)uStack_80 + 0x14) = SUB168(auVar57 ^ auVar62,0);
          *(longlong *)((uint *)uStack_80 + 0x16) = SUB168(auVar57 ^ auVar62,8);
          *(longlong *)((uint *)uStack_80 + 0x18) = SUB168(auVar56 ^ auVar65,0);
          *(longlong *)((uint *)uStack_80 + 0x1a) = SUB168(auVar56 ^ auVar65,8);
          *(longlong *)((uint *)uStack_80 + 0x1c) = SUB168(auVar61 ^ auVar21,0);
          *(longlong *)((uint *)uStack_80 + 0x1e) = SUB168(auVar61 ^ auVar21,8);
          uStack_80._0_4_ = (uint *)uStack_80 + 0x20;
          if ((uint)local_78 == 0x80) {
            return;
          }
          iStack_100 = auVar58._0_4_;
          iStack_fc = auVar58._4_4_;
          iStack_f8 = auVar58._8_4_;
          local_f4 = auVar58._12_4_;
          uStack_f0 = auVar66._0_4_;
          uStack_ec = auVar66._4_4_;
          uStack_e8 = auVar66._8_4_;
          local_e4 = auVar66._12_4_;
          uStack_e0 = auVar59._0_4_;
          uStack_dc = auVar59._4_4_;
          iStack_d8 = auVar59._8_4_;
          local_d4 = auVar59._12_4_;
          uStack_d0 = auVar64._0_4_;
          uStack_cc = auVar64._4_4_;
          uStack_c8 = auVar64._8_4_;
          local_c4 = auVar64._12_4_;
          local_78._0_4_ = (uint)local_78 - 0x80;
          pbVar38 = (byte *)&iStack_100;
        }
      }
      else {
        auVar19 = *uStack_80._4_4_;
        auVar20 = uStack_80._4_4_[1];
        auVar54 = uStack_80._4_4_[2];
        auVar63 = uStack_80._4_4_[3];
        auVar60 = uStack_80._4_4_[4];
        auVar62 = uStack_80._4_4_[5];
        auVar65 = uStack_80._4_4_[6];
        auVar23 = uStack_80._4_4_[7];
        auVar21 = uStack_80._4_4_[8];
        auVar22 = uStack_80._4_4_[9];
        *(longlong *)(uint *)uStack_80 = SUB168(auVar50 ^ auVar19,0);
        *(longlong *)((uint *)uStack_80 + 2) = SUB168(auVar50 ^ auVar19,8);
        *(longlong *)((uint *)uStack_80 + 4) = SUB168(auVar55 ^ auVar20,0);
        *(longlong *)((uint *)uStack_80 + 6) = SUB168(auVar55 ^ auVar20,8);
        auVar19 = uStack_80._4_4_[10];
        auVar20 = uStack_80._4_4_[0xb];
        uStack_80._4_4_ = uStack_80._4_4_ + 0xc;
        *(longlong *)((uint *)uStack_80 + 8) = SUB168(auVar52 ^ auVar54,0);
        *(longlong *)((uint *)uStack_80 + 10) = SUB168(auVar52 ^ auVar54,8);
        *(longlong *)((uint *)uStack_80 + 0xc) = SUB168(auVar51 ^ auVar63,0);
        *(longlong *)((uint *)uStack_80 + 0xe) = SUB168(auVar51 ^ auVar63,8);
        *(longlong *)((uint *)uStack_80 + 0x10) = SUB168(auVar53 ^ auVar60,0);
        *(longlong *)((uint *)uStack_80 + 0x12) = SUB168(auVar53 ^ auVar60,8);
        *(longlong *)((uint *)uStack_80 + 0x14) = SUB168(auVar57 ^ auVar62,0);
        *(longlong *)((uint *)uStack_80 + 0x16) = SUB168(auVar57 ^ auVar62,8);
        *(longlong *)((uint *)uStack_80 + 0x18) = SUB168(auVar56 ^ auVar65,0);
        *(longlong *)((uint *)uStack_80 + 0x1a) = SUB168(auVar56 ^ auVar65,8);
        *(longlong *)((uint *)uStack_80 + 0x1c) = SUB168(auVar61 ^ auVar23,0);
        *(longlong *)((uint *)uStack_80 + 0x1e) = SUB168(auVar61 ^ auVar23,8);
        *(longlong *)((uint *)uStack_80 + 0x20) = SUB168(auVar58 ^ auVar21,0);
        *(longlong *)((uint *)uStack_80 + 0x22) = SUB168(auVar58 ^ auVar21,8);
        *(longlong *)((uint *)uStack_80 + 0x24) = SUB168(auVar66 ^ auVar22,0);
        *(longlong *)((uint *)uStack_80 + 0x26) = SUB168(auVar66 ^ auVar22,8);
        *(longlong *)((uint *)uStack_80 + 0x28) = SUB168(auVar59 ^ auVar19,0);
        *(longlong *)((uint *)uStack_80 + 0x2a) = SUB168(auVar59 ^ auVar19,8);
        *(longlong *)((uint *)uStack_80 + 0x2c) = SUB168(auVar64 ^ auVar20,0);
        *(longlong *)((uint *)uStack_80 + 0x2e) = SUB168(auVar64 ^ auVar20,8);
        uStack_80._0_4_ = (uint *)uStack_80 + 0x30;
        if ((uint)local_78 == 0xc0) {
          return;
        }
        iStack_100 = uVar41 + 0x61707865;
        iStack_fc = uVar35 + 0x3320646e;
        iStack_f8 = uVar36 + 0x79622d32;
        local_f4 = uVar42 + 0x6b206574;
        uStack_f0 = uVar24 + uStack_f0;
        uStack_ec = uVar26 + uStack_ec;
        uStack_e8 = uVar25 + uStack_e8;
        local_e4 = uVar27 + local_e4;
        uStack_e0 = uVar30 + uStack_e0;
        uStack_dc = uVar28 + uStack_dc;
        iStack_d8 = uVar46 + iStack_d8;
        local_d4 = uVar32 + local_d4;
        uStack_d0 = uVar45 + uStack_d0 + 3;
        uStack_cc = uVar29 + uStack_cc;
        uStack_c8 = uVar34 + uStack_c8;
        local_c4 = local_88._4_4_ + local_c4;
        local_78._0_4_ = (uint)local_78 - 0xc0;
      }
      do {
        local_78._0_4_ = (uint)local_78 - 1;
        *(byte *)(uint *)uStack_80 = *pbVar38 ^ (*uStack_80._4_4_)[0];
        pbVar38 = pbVar38 + 1;
        uStack_80._4_4_ = (undefined1 (*) [16])(*uStack_80._4_4_ + 1);
        uStack_80._0_4_ = (uint *)((int)(uint *)uStack_80 + 1);
      } while ((uint)local_78 != 0);
      return;
    }
    auVar54 = *uStack_80._4_4_;
    auVar60 = uStack_80._4_4_[1];
    auVar62 = uStack_80._4_4_[2];
    auVar21 = uStack_80._4_4_[3];
    auVar63 = uStack_80._4_4_[4];
    auVar65 = uStack_80._4_4_[5];
    auVar22 = uStack_80._4_4_[6];
    auVar23 = uStack_80._4_4_[7];
    *(longlong *)(uint *)uStack_80 = SUB168(auVar50 ^ auVar54,0);
    *(longlong *)((uint *)uStack_80 + 2) = SUB168(auVar50 ^ auVar54,8);
    *(longlong *)((uint *)uStack_80 + 4) = SUB168(auVar55 ^ auVar60,0);
    *(longlong *)((uint *)uStack_80 + 6) = SUB168(auVar55 ^ auVar60,8);
    auVar55 = uStack_80._4_4_[8];
    auVar54 = uStack_80._4_4_[9];
    *(longlong *)((uint *)uStack_80 + 8) = SUB168(auVar52 ^ auVar62,0);
    *(longlong *)((uint *)uStack_80 + 10) = SUB168(auVar52 ^ auVar62,8);
    *(longlong *)((uint *)uStack_80 + 0xc) = SUB168(auVar51 ^ auVar21,0);
    *(longlong *)((uint *)uStack_80 + 0xe) = SUB168(auVar51 ^ auVar21,8);
    auVar52 = uStack_80._4_4_[10];
    auVar60 = uStack_80._4_4_[0xb];
    auVar50._8_4_ = 0x79622d32;
    auVar50._0_8_ = 0x3320646e61707865;
    auVar50._12_4_ = 0x6b206574;
    auVar21._8_4_ = uStack_c8;
    auVar21._0_8_ = CONCAT44(uStack_cc,uStack_d0);
    auVar21._12_4_ = local_c4;
    *(longlong *)((uint *)uStack_80 + 0x10) = SUB168(auVar53 ^ auVar63,0);
    *(longlong *)((uint *)uStack_80 + 0x12) = SUB168(auVar53 ^ auVar63,8);
    *(longlong *)((uint *)uStack_80 + 0x14) = SUB168(auVar57 ^ auVar65,0);
    *(longlong *)((uint *)uStack_80 + 0x16) = SUB168(auVar57 ^ auVar65,8);
    *(longlong *)((uint *)uStack_80 + 0x18) = SUB168(auVar56 ^ auVar22,0);
    *(longlong *)((uint *)uStack_80 + 0x1a) = SUB168(auVar56 ^ auVar22,8);
    *(longlong *)((uint *)uStack_80 + 0x1c) = SUB168(auVar61 ^ auVar23,0);
    *(longlong *)((uint *)uStack_80 + 0x1e) = SUB168(auVar61 ^ auVar23,8);
    auVar51._8_8_ = auVar21._8_8_;
    auVar51._0_8_ = VectorAdd(CONCAT44(uStack_cc,uStack_d0),uVar67,4);
    uVar47 = *(uint *)uStack_80._4_4_[0xc];
    *(longlong *)((uint *)uStack_80 + 0x20) = SUB168(auVar58 ^ auVar55,0);
    *(longlong *)((uint *)uStack_80 + 0x22) = SUB168(auVar58 ^ auVar55,8);
    *(longlong *)((uint *)uStack_80 + 0x24) = SUB168(auVar66 ^ auVar54,0);
    *(longlong *)((uint *)uStack_80 + 0x26) = SUB168(auVar66 ^ auVar54,8);
    uVar33 = *(uint *)(uStack_80._4_4_[0xc] + 4);
    *(longlong *)((uint *)uStack_80 + 0x28) = SUB168(auVar59 ^ auVar52,0);
    *(longlong *)((uint *)uStack_80 + 0x2a) = SUB168(auVar59 ^ auVar52,8);
    *(longlong *)((uint *)uStack_80 + 0x2c) = SUB168(auVar64 ^ auVar60,0);
    *(longlong *)((uint *)uStack_80 + 0x2e) = SUB168(auVar64 ^ auVar60,8);
    uVar37 = *(uint *)(uStack_80._4_4_[0xc] + 8);
    uVar40 = *(uint *)(uStack_80._4_4_[0xc] + 0xc);
    ((uint *)uStack_80)[0x30] = uVar41 + 0x61707865 ^ uVar47;
    ((uint *)uStack_80)[0x31] = uVar35 + 0x3320646e ^ uVar33;
    ((uint *)uStack_80)[0x32] = uVar36 + 0x79622d32 ^ uVar37;
    ((uint *)uStack_80)[0x33] = uVar42 + 0x6b206574 ^ uVar40;
    uVar41 = *(uint *)(uStack_80._4_4_[0xd] + 4);
    uVar35 = *(uint *)(uStack_80._4_4_[0xd] + 8);
    uVar36 = *(uint *)(uStack_80._4_4_[0xd] + 0xc);
    ((uint *)uStack_80)[0x34] = uVar24 + uStack_f0 ^ *(uint *)uStack_80._4_4_[0xd];
    ((uint *)uStack_80)[0x35] = uVar26 + uStack_ec ^ uVar41;
    ((uint *)uStack_80)[0x36] = uVar25 + uStack_e8 ^ uVar35;
    ((uint *)uStack_80)[0x37] = uVar27 + local_e4 ^ uVar36;
    uVar24 = *(uint *)(uStack_80._4_4_[0xe] + 4);
    if (0x100 < (uint)local_78) {
      local_98 = CONCAT44(uVar32,iStack_d8);
    }
    uVar26 = *(uint *)(uStack_80._4_4_[0xe] + 8);
    if (0x100 < (uint)local_78) {
      local_98 = CONCAT44(local_d4,(uint)local_98);
    }
    uVar25 = *(uint *)(uStack_80._4_4_[0xe] + 0xc);
    ((uint *)uStack_80)[0x38] = uVar30 + uStack_e0 ^ *(uint *)uStack_80._4_4_[0xe];
    ((uint *)uStack_80)[0x39] = uVar28 + uStack_dc ^ uVar24;
    ((uint *)uStack_80)[0x3a] = uVar46 + iStack_d8 ^ uVar26;
    ((uint *)uStack_80)[0x3b] = uVar32 + local_d4 ^ uVar25;
    iVar39 = uVar45 + uStack_d0;
    uStack_d0 = uStack_d0 + 4;
    local_2c = uStack_80._4_4_ + 0x10;
    uVar24 = *(uint *)(uStack_80._4_4_[0xf] + 4);
    uVar26 = *(uint *)(uStack_80._4_4_[0xf] + 8);
    uVar25 = *(uint *)(uStack_80._4_4_[0xf] + 0xc);
    local_28 = *(uint *)uStack_80._4_4_[0xf];
    if (0x100 < (uint)local_78) {
      local_28 = (uint)local_78;
    }
    local_30 = (uint *)uStack_80 + 0x40;
    ((uint *)uStack_80)[0x3c] = iVar39 + 3U ^ *(uint *)uStack_80._4_4_[0xf];
    ((uint *)uStack_80)[0x3d] = uVar29 + uStack_cc ^ uVar24;
    local_28 = local_28 - 0x100;
    ((uint *)uStack_80)[0x3e] = uVar34 + uStack_c8 ^ uVar26;
    ((uint *)uStack_80)[0x3f] = local_88._4_4_ + local_c4 ^ uVar25;
    if ((uint)local_78 < 0x101) break;
    uVar24 = 0x61707865;
    uVar25 = 0x3320646e;
    uVar26 = 0x79622d32;
    uVar27 = 0x6b206574;
    if (local_28 < 0x81) {
      uStack_48 = (uint)local_98;
      local_44 = local_98._4_4_;
      local_34 = local_c4;
      auStack_b0[0] = 0x61707865;
      auStack_b0[1] = 0x3320646e;
      auStack_b0[2] = 0x79622d32;
      auStack_b0[3] = 0x6b206574;
      uStack_a0 = auVar19._0_8_;
      local_98 = auVar19._8_8_;
      local_90 = auVar20._0_8_;
      local_88 = auVar20._8_8_;
      uStack_80 = auVar51._0_8_;
      local_78 = auVar51._8_8_;
      iVar39 = 10;
      while( true ) {
        do {
          uVar30 = local_28;
          puVar31 = auStack_b0;
          pauVar44 = (undefined1 (*) [16])auStack_b0;
          iVar39 = iVar39 + -1;
          uVar24 = uVar24 + uStack_f0;
          uVar25 = uVar25 + uStack_ec;
          uVar41 = (uStack_d0 >> 0x10 | uStack_d0 << 0x10) ^ (uVar24 >> 0x10 | uVar24 * 0x10000);
          uVar34 = (uStack_cc >> 0x10 | uStack_cc << 0x10) ^ (uVar25 >> 0x10 | uVar25 * 0x10000);
          uStack_e0 = uStack_e0 + uVar41;
          uStack_dc = uStack_dc + uVar34;
          uVar28 = (uStack_f0 >> 0x14 | uStack_f0 << 0xc) ^ (uStack_e0 >> 0x14 | uStack_e0 * 0x1000)
          ;
          uVar29 = (uStack_ec >> 0x14 | uStack_ec << 0xc) ^ (uStack_dc >> 0x14 | uStack_dc * 0x1000)
          ;
          uVar24 = uVar24 + uVar28;
          uVar25 = uVar25 + uVar29;
          uVar42 = (uVar41 >> 0x18 | uVar41 << 8) ^ (uVar24 >> 0x18 | uVar24 * 0x100);
          uVar35 = (uVar34 >> 0x18 | uVar34 << 8) ^ (uVar25 >> 0x18 | uVar25 * 0x100);
          uStack_e0 = uStack_e0 + uVar42;
          uStack_dc = uStack_dc + uVar35;
          uVar28 = (uVar28 >> 0x19 | uVar28 << 7) ^ (uStack_e0 >> 0x19 | uStack_e0 * 0x80);
          uVar29 = (uVar29 >> 0x19 | uVar29 << 7) ^ (uStack_dc >> 0x19 | uStack_dc * 0x80);
          uVar26 = uVar26 + uStack_e8;
          uVar27 = uVar27 + local_e4;
          uVar45 = (uStack_c8 >> 0x10 | uStack_c8 << 0x10) ^ (uVar26 >> 0x10 | uVar26 * 0x10000);
          uVar36 = (local_34 >> 0x10 | local_34 << 0x10) ^ (uVar27 >> 0x10 | uVar27 * 0x10000);
          uStack_48 = uStack_48 + uVar45;
          local_44 = local_44 + uVar36;
          uVar34 = (uStack_e8 >> 0x14 | uStack_e8 << 0xc) ^ (uStack_48 >> 0x14 | uStack_48 * 0x1000)
          ;
          uVar41 = (local_e4 >> 0x14 | local_e4 << 0xc) ^ (local_44 >> 0x14 | local_44 * 0x1000);
          uVar26 = uVar26 + uVar34;
          uVar27 = uVar27 + uVar41;
          uVar45 = (uVar45 >> 0x18 | uVar45 << 8) ^ (uVar26 >> 0x18 | uVar26 * 0x100);
          uVar36 = (uVar36 >> 0x18 | uVar36 << 8) ^ (uVar27 >> 0x18 | uVar27 * 0x100);
          uStack_48 = uStack_48 + uVar45;
          local_44 = local_44 + uVar36;
          uVar34 = (uVar34 >> 0x19 | uVar34 << 7) ^ (uStack_48 >> 0x19 | uStack_48 * 0x80);
          uVar41 = (uVar41 >> 0x19 | uVar41 << 7) ^ (local_44 >> 0x19 | local_44 * 0x80);
          uVar24 = uVar24 + uVar29;
          uVar25 = uVar25 + uVar34;
          uVar36 = (uVar36 >> 0x10 | uVar36 << 0x10) ^ (uVar24 >> 0x10 | uVar24 * 0x10000);
          uVar42 = (uVar42 >> 0x10 | uVar42 << 0x10) ^ (uVar25 >> 0x10 | uVar25 * 0x10000);
          uStack_48 = uStack_48 + uVar36;
          local_44 = local_44 + uVar42;
          uVar29 = (uVar29 >> 0x14 | uVar29 << 0xc) ^ (uStack_48 >> 0x14 | uStack_48 * 0x1000);
          uVar34 = (uVar34 >> 0x14 | uVar34 << 0xc) ^ (local_44 >> 0x14 | local_44 * 0x1000);
          uVar24 = uVar24 + uVar29;
          uVar25 = uVar25 + uVar34;
          local_34 = (uVar36 >> 0x18 | uVar36 << 8) ^ (uVar24 >> 0x18 | uVar24 * 0x100);
          uStack_d0 = (uVar42 >> 0x18 | uVar42 << 8) ^ (uVar25 >> 0x18 | uVar25 * 0x100);
          uStack_48 = uStack_48 + local_34;
          local_44 = local_44 + uStack_d0;
          uStack_ec = (uVar29 >> 0x19 | uVar29 << 7) ^ (uStack_48 >> 0x19 | uStack_48 * 0x80);
          uStack_e8 = (uVar34 >> 0x19 | uVar34 << 7) ^ (local_44 >> 0x19 | local_44 * 0x80);
          uVar26 = uVar26 + uVar41;
          uVar27 = uVar27 + uVar28;
          uVar34 = (uVar35 >> 0x10 | uVar35 << 0x10) ^ (uVar26 >> 0x10 | uVar26 * 0x10000);
          uVar35 = (uVar45 >> 0x10 | uVar45 << 0x10) ^ (uVar27 >> 0x10 | uVar27 * 0x10000);
          uStack_e0 = uStack_e0 + uVar34;
          uStack_dc = uStack_dc + uVar35;
          uVar29 = (uVar41 >> 0x14 | uVar41 << 0xc) ^ (uStack_e0 >> 0x14 | uStack_e0 * 0x1000);
          uVar28 = (uVar28 >> 0x14 | uVar28 << 0xc) ^ (uStack_dc >> 0x14 | uStack_dc * 0x1000);
          uVar26 = uVar26 + uVar29;
          uVar27 = uVar27 + uVar28;
          uStack_cc = (uVar34 >> 0x18 | uVar34 << 8) ^ (uVar26 >> 0x18 | uVar26 * 0x100);
          uStack_c8 = (uVar35 >> 0x18 | uVar35 << 8) ^ (uVar27 >> 0x18 | uVar27 * 0x100);
          uStack_e0 = uStack_e0 + uStack_cc;
          uStack_dc = uStack_dc + uStack_c8;
          local_e4 = (uVar29 >> 0x19 | uVar29 << 7) ^ (uStack_e0 >> 0x19 | uStack_e0 * 0x80);
          uStack_f0 = (uVar28 >> 0x19 | uVar28 << 7) ^ (uStack_dc >> 0x19 | uStack_dc * 0x80);
        } while (iVar39 != 0);
        uStack_50 = uStack_e0;
        uStack_4c = uStack_dc;
        local_40 = uStack_d0;
        local_3c = uStack_cc;
        local_38 = uStack_c8;
        bVar49 = 0x3f < local_28;
        bVar48 = local_28 != 0x40;
        if (bVar49) {
          puVar31 = local_30;
          pauVar44 = local_2c;
        }
        uVar24 = uVar24 + auStack_b0[0];
        uVar25 = uVar25 + auStack_b0[1];
        uVar29 = auStack_b0[1];
        uVar28 = auStack_b0[0];
        pauVar43 = pauVar44;
        if (bVar49) {
          pauVar43 = pauVar44 + 1;
          uVar28 = *(uint *)*pauVar44;
          uVar29 = *(uint *)(*pauVar44 + 4);
        }
        uVar26 = uVar26 + auStack_b0[2];
        uVar27 = uVar27 + auStack_b0[3];
        uVar34 = auStack_b0[3];
        uVar41 = auStack_b0[2];
        if (bVar49) {
          uVar41 = *(uint *)(pauVar43[-1] + 8);
          uVar34 = *(uint *)(pauVar43[-1] + 0xc);
          uVar24 = uVar24 ^ uVar28;
          uVar25 = uVar25 ^ uVar29;
        }
        *puVar31 = uVar24;
        if (bVar49) {
          uVar26 = uVar26 ^ uVar41;
          uVar27 = uVar27 ^ uVar34;
        }
        uVar24 = (uint)uStack_a0;
        uVar34 = uStack_a0._4_4_;
        uVar29 = (uint)local_98;
        uVar28 = local_98._4_4_;
        puVar31[1] = uVar25;
        puVar31[2] = uVar26;
        puVar31[3] = uVar27;
        uStack_f0 = uStack_f0 + uVar24;
        uStack_ec = uStack_ec + uVar34;
        pauVar44 = pauVar43;
        if (bVar49) {
          pauVar44 = pauVar43 + 1;
          uVar24 = *(uint *)*pauVar43;
          uVar34 = *(uint *)(*pauVar43 + 4);
        }
        uStack_e8 = uStack_e8 + uVar29;
        local_e4 = local_e4 + uVar28;
        if (bVar49) {
          uVar29 = *(uint *)(pauVar44[-1] + 8);
          uVar28 = *(uint *)(pauVar44[-1] + 0xc);
          uStack_f0 = uStack_f0 ^ uVar24;
          uStack_ec = uStack_ec ^ uVar34;
        }
        puVar31[4] = uStack_f0;
        if (bVar49) {
          uStack_e8 = uStack_e8 ^ uVar29;
          local_e4 = local_e4 ^ uVar28;
        }
        puVar31[5] = uStack_ec;
        uVar24 = (uint)local_90;
        uVar28 = local_90._4_4_;
        uVar25 = (uint)local_88;
        uVar26 = local_88._4_4_;
        puVar31[6] = uStack_e8;
        puVar31[7] = local_e4;
        uVar29 = local_44;
        uVar27 = uStack_48;
        uStack_50 = uStack_50 + uVar24;
        uStack_4c = uStack_4c + uVar28;
        pauVar43 = pauVar44;
        if (bVar49) {
          pauVar43 = pauVar44 + 1;
          uVar24 = *(uint *)*pauVar44;
          uVar28 = *(uint *)(*pauVar44 + 4);
        }
        if (0x40 < uVar30) {
          uStack_48 = uVar25;
          local_44 = uVar26;
        }
        uVar27 = uVar27 + uVar25;
        uVar29 = uVar29 + uVar26;
        if (bVar49) {
          uVar25 = *(uint *)(pauVar43[-1] + 8);
          uVar26 = *(uint *)(pauVar43[-1] + 0xc);
          uStack_50 = uStack_50 ^ uVar24;
          uStack_4c = uStack_4c ^ uVar28;
        }
        puVar31[8] = uStack_50;
        if (bVar49) {
          uVar27 = uVar27 ^ uVar25;
          uVar29 = uVar29 ^ uVar26;
        }
        puVar31[9] = uStack_4c;
        uVar24 = (uint)(uint *)uStack_80;
        uVar25 = (uint)uStack_80._4_4_;
        uVar26 = (uint)local_78;
        uVar28 = (uint)local_78._4_4_;
        puVar31[10] = uVar27;
        puVar31[0xb] = uVar29;
        local_40 = local_40 + uVar24;
        local_3c = local_3c + uVar25;
        if (0x40 < uVar30) {
          uVar24 = uVar24 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar24);
        }
        pauVar44 = pauVar43;
        if (bVar49) {
          pauVar44 = pauVar43 + 1;
          uVar24 = *(uint *)*pauVar43;
          uVar25 = *(uint *)(*pauVar43 + 4);
        }
        uVar27 = local_38 + uVar26;
        uVar29 = local_34 + uVar28;
        if (bVar49) {
          uVar26 = *(uint *)(pauVar44[-1] + 8);
          uVar28 = *(uint *)(pauVar44[-1] + 0xc);
          local_40 = local_40 ^ uVar24;
          local_3c = local_3c ^ uVar25;
        }
        if (bVar48) {
          uVar24 = local_28;
        }
        if (bVar49) {
          uVar27 = uVar27 ^ uVar26;
          uVar29 = uVar29 ^ uVar28;
        }
        puVar31[0xc] = local_40;
        puVar31[0xd] = local_3c;
        if (bVar49) {
          uVar28 = uVar24 - 0x40;
        }
        puVar31[0xe] = uVar27;
        puVar31[0xf] = uVar29;
        if (uVar30 < 0x41) break;
        uVar24 = auStack_b0[0];
        uVar25 = auStack_b0[1];
        uVar26 = auStack_b0[2];
        uVar27 = auStack_b0[3];
        uStack_f0 = (uint)uStack_a0;
        uStack_ec = uStack_a0._4_4_;
        uStack_e8 = (uint)local_98;
        local_e4 = local_98._4_4_;
        uStack_e0 = (uint)local_90;
        uStack_dc = local_90._4_4_;
        local_30 = puVar31 + 0x10;
        local_2c = pauVar44;
        local_28 = uVar28;
LAB_01bdb390:
        local_34 = (uint)local_78._4_4_;
        iVar39 = 10;
        uStack_cc = (uint)uStack_80._4_4_;
        uStack_d0 = (uint)(uint *)uStack_80;
        uStack_c8 = (uint)local_78;
      }
      if (!bVar48) {
        return;
      }
      puVar31 = auStack_b0;
      do {
        uVar24 = uVar24 - 1;
        *(byte *)local_30 = (*local_2c)[0] ^ *(byte *)puVar31;
        puVar31 = (uint *)((int)puVar31 + 1);
        local_2c = (undefined1 (*) [16])(*local_2c + 1);
        local_30 = (uint *)((int)local_30 + 1);
      } while (uVar24 != 0);
      return;
    }
    local_78._0_4_ = local_28;
    uStack_80._0_4_ = local_30;
    uStack_80._4_4_ = local_2c;
    uVar24 = uStack_f0;
    uVar26 = uStack_ec;
    uVar25 = uStack_e8;
    uVar27 = local_e4;
    uVar30 = uStack_e0;
    uVar28 = uStack_dc;
  }
  return;
}

