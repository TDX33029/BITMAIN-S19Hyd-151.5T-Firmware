// FUN_0178c100 @ 0178c100 size=328 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_0178c100(void)

{
  undefined1 auVar1 [32];
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined8 *puVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int iVar15;
  uint *extraout_r2_03;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int iVar16;
  undefined4 unaff_r4;
  int unaff_r8;
  undefined1 auVar17 [12];
  undefined1 auVar20 [12];
  uint in_s3;
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar18 [12];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar19 [12];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [12];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 in_s12;
  undefined4 in_s13;
  undefined4 in_s14;
  undefined4 in_s15;
  undefined1 auVar36 [16];
  uint in_d24;
  ulonglong uVar37;
  undefined8 uVar38;
  
  puVar11 = (undefined8 *)FUN_0178c0e0();
  uVar13 = *(undefined4 *)puVar11;
  uVar14 = *(undefined4 *)((int)puVar11 + 4);
  uVar38 = *puVar11;
  uVar2 = *(undefined4 *)(puVar11 + 1);
  uVar3 = *(undefined4 *)((int)puVar11 + 0xc);
  auVar35._4_8_ = (ulonglong)in_s3 << 0x20;
  auVar35._0_4_ = uVar14;
  auVar17._0_8_ = auVar35._0_8_ << 0x20;
  auVar17._8_4_ = uVar2;
  uVar37 = FUN_0178c330(puVar11 + 2);
  puVar12 = (uint *)uVar37;
  auVar22._0_8_ = auVar17._4_8_ << 0x20;
  auVar22._8_4_ = uVar2;
  auVar22._12_4_ = uVar3;
  auVar21._4_12_ = auVar22._4_12_;
  auVar21._0_4_ = uVar13;
  auVar24._0_8_ = auVar21._0_8_;
  auVar24._8_4_ = uVar2;
  auVar24._12_4_ = uVar3;
  if (extraout_r3 == 0) {
    auVar24._0_8_ = uVar38;
    *extraout_r2 = uVar13;
    extraout_r2[1] = uVar14;
    extraout_r2[2] = uVar2;
    extraout_r2[3] = uVar3;
  }
  else {
    VectorTableLookup(extraout_r2,&DAT_0178bb00 + unaff_r8,2);
    VectorTableLookup(extraout_r3,&DAT_0178bb00 + unaff_r8,2);
    *extraout_r2 = in_s12;
    extraout_r2[1] = in_s13;
    extraout_r2[2] = in_s14;
    extraout_r2[3] = in_s15;
  }
  if (uVar37 < 0xc100000000) {
    if ((int)(uVar37 >> 0x20) == 0xc0) {
      auVar28._0_4_ = puVar12[-2];
      auVar28._4_4_ = puVar12[-1];
      auVar6._4_8_ = auVar24._8_8_;
      auVar6._0_4_ = auVar28._4_4_;
      auVar26._0_8_ = auVar6._0_8_ << 0x20;
      auVar26._8_4_ = uVar2;
      auVar26._12_4_ = uVar3;
      auVar7._4_8_ = auVar26._8_8_;
      auVar7._0_4_ = auVar28._4_4_;
      auVar27._0_8_ = auVar7._0_8_ << 0x20;
      auVar27._8_4_ = *puVar12;
      auVar27._12_4_ = puVar12[1];
      auVar28._8_8_ = auVar27._8_8_;
      FUN_0178c330();
      auVar36._8_8_ = 0;
      auVar36._0_8_ = auVar28._8_8_;
      auVar36 = auVar36 << 0x40;
      uVar13 = 4;
      while( true ) {
        FUN_0178c290(uVar13);
        auVar1._16_16_ = auVar28;
        auVar1._0_16_ = auVar36;
        auVar30._0_4_ = auVar36._8_4_;
        FUN_0178c360(auVar30._0_4_);
        FUN_0178c260();
        FUN_0178c360();
        uVar38 = FUN_0178c290();
        uVar13 = (undefined4)((ulonglong)uVar38 >> 0x20);
        auVar29._12_4_ = auVar28._4_4_;
        auVar29._8_4_ = auVar28._0_4_;
        auVar29._0_8_ = auVar1._12_8_ << 0x20;
        auVar30._4_12_ = auVar29._4_12_;
        iVar15 = extraout_r2_01;
        iVar16 = extraout_r3_01;
        auVar24._0_4_ = auVar30._0_4_;
        if ((int)uVar38 == 1) break;
        FUN_0178c360();
        uVar13 = FUN_0178c260();
        auVar28 = auVar30;
      }
    }
    else {
      uVar13 = 10;
      while( true ) {
        uVar38 = FUN_0178c290(uVar13);
        uVar13 = (undefined4)((ulonglong)uVar38 >> 0x20);
        auVar23._12_4_ = auVar24._12_4_;
        auVar18._8_4_ = auVar24._8_4_;
        auVar18._0_8_ = auVar24._4_8_ << 0x20;
        auVar23._0_12_ = auVar18;
        auVar30._4_12_ = auVar23._4_12_;
        iVar15 = extraout_r2_00;
        iVar16 = extraout_r3_00;
        if ((int)uVar38 == 1) break;
        uVar13 = FUN_0178c360();
        auVar25._0_8_ = auVar18._4_8_ << 0x20;
        auVar25._8_4_ = auVar18._8_4_;
        auVar25._12_4_ = auVar23._12_4_;
        auVar24._4_12_ = auVar25._4_12_;
      }
    }
  }
  else {
    auVar9._4_8_ = auVar24._8_8_;
    auVar9._0_4_ = puVar12[1];
    auVar31._0_8_ = auVar9._0_8_ << 0x20;
    auVar31._8_4_ = uVar2;
    auVar31._12_4_ = uVar3;
    auVar24._0_4_ = *puVar12;
    uVar4 = puVar12[2];
    uVar5 = puVar12[3];
    auVar8._4_8_ = auVar31._8_8_;
    auVar8._0_4_ = puVar12[1];
    auVar19._0_8_ = auVar8._0_8_ << 0x20;
    auVar19._8_4_ = uVar4;
    FUN_0178c330();
    auVar32._0_8_ = auVar19._4_8_ << 0x20;
    auVar32._8_4_ = uVar4;
    auVar32._12_4_ = uVar5;
    auVar35 = auVar32._4_12_;
    uVar13 = 7;
    while( true ) {
      FUN_0178c360(uVar13);
      uVar38 = FUN_0178c290();
      uVar13 = (undefined4)((ulonglong)uVar38 >> 0x20);
      auVar33._12_4_ = auVar35._8_4_;
      auVar33._8_4_ = auVar35._4_4_;
      auVar33._0_8_ = auVar35._0_8_ << 0x20;
      auVar30._4_12_ = auVar33._4_12_;
      iVar15 = extraout_r2_02;
      iVar16 = extraout_r3_02;
      if ((int)uVar38 == 1) break;
      FUN_0178c360();
      auVar10._4_8_ = auVar33._8_8_;
      auVar10._0_4_ = auVar33._12_4_;
      auVar20._0_8_ = auVar10._0_8_ << 0x20;
      auVar20._8_4_ = auVar33._12_4_;
      uVar13 = FUN_0178c2a8(auVar33._12_4_);
      auVar34._0_8_ = auVar20._4_8_ << 0x20;
      auVar34._8_4_ = auVar33._12_4_;
      auVar34._12_4_ = auVar33._12_4_;
      auVar35 = auVar34._4_12_;
      auVar24._0_4_ = auVar33._12_4_;
    }
  }
  uVar14 = 0;
  if (iVar16 == 0) {
    iVar15 = iVar15 + 0x20;
    uVar14 = VectorTableLookup(iVar15,unaff_r4,2);
    uVar13 = VectorTableLookup(0,unaff_r4,2);
  }
  FUN_0178c330(auVar24._0_4_ ^ in_d24,uVar14,uVar13,iVar15 + -0x10);
  *extraout_r2_03 = auVar24._0_4_ ^ in_d24;
  extraout_r2_03[1] = auVar30._4_4_;
  extraout_r2_03[2] = auVar30._8_4_;
  extraout_r2_03[3] = auVar30._12_4_;
  return 0;
}

