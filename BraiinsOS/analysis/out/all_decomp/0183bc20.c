// FUN_0183bc20 @ 0183bc20 size=216 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_0183bc20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 (*pauVar7) [16];
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int iVar12;
  uint *extraout_r2_02;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined1 auVar24 [12];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint in_d24;
  ulonglong uVar25;
  
  pauVar7 = (undefined1 (*) [16])FUN_0183bc00();
  uVar9 = *(undefined4 *)*pauVar7;
  uVar11 = *(undefined4 *)(*pauVar7 + 4);
  uVar1 = *(undefined4 *)(*pauVar7 + 8);
  uVar2 = *(undefined4 *)(*pauVar7 + 0xc);
  auVar18 = *pauVar7;
  uVar25 = FUN_0183bda0(pauVar7 + 1);
  puVar8 = (uint *)uVar25;
  *extraout_r2 = uVar9;
  extraout_r2[1] = uVar11;
  extraout_r2[2] = uVar1;
  extraout_r2[3] = uVar2;
  if (uVar25 < 0xc100000000) {
    uVar9 = 10;
    while( true ) {
      iVar10 = FUN_0183bd00(uVar9);
      auVar17._12_4_ = auVar18._12_4_;
      auVar13._8_4_ = auVar18._8_4_;
      auVar13._0_8_ = auVar18._4_8_ << 0x20;
      auVar17._0_12_ = auVar13;
      auVar24 = auVar17._4_12_;
      iVar12 = extraout_r2_00;
      uVar9 = extraout_r3;
      if (iVar10 == 1) break;
      uVar9 = FUN_0183bdd0();
      auVar19._0_8_ = auVar13._4_8_ << 0x20;
      auVar19._8_4_ = auVar13._8_4_;
      auVar19._12_4_ = auVar17._12_4_;
      auVar18._4_12_ = auVar19._4_12_;
    }
  }
  else {
    auVar5._4_8_ = auVar18._8_8_;
    auVar5._0_4_ = puVar8[1];
    auVar20._0_8_ = auVar5._0_8_ << 0x20;
    auVar20._8_4_ = uVar1;
    auVar20._12_4_ = uVar2;
    auVar18._0_4_ = *puVar8;
    uVar3 = puVar8[2];
    uVar4 = puVar8[3];
    auVar24._4_8_ = auVar20._8_8_;
    auVar24._0_4_ = puVar8[1];
    auVar14._0_8_ = auVar24._0_8_ << 0x20;
    auVar14._8_4_ = uVar3;
    FUN_0183bda0();
    auVar21._0_8_ = auVar14._4_8_ << 0x20;
    auVar21._8_4_ = uVar3;
    auVar21._12_4_ = uVar4;
    auVar24 = auVar21._4_12_;
    uVar9 = 7;
    while( true ) {
      FUN_0183bdd0(uVar9);
      auVar22._12_4_ = auVar24._8_4_;
      auVar15._8_4_ = auVar24._4_4_;
      auVar15._0_8_ = auVar24._0_8_ << 0x20;
      iVar10 = FUN_0183bd00();
      auVar22._0_8_ = auVar15._4_8_ << 0x20;
      auVar22._8_4_ = auVar15._8_4_;
      auVar24 = auVar22._4_12_;
      iVar12 = extraout_r2_01;
      uVar9 = extraout_r3_00;
      if (iVar10 == 1) break;
      FUN_0183bdd0();
      auVar6._4_8_ = auVar22._8_8_;
      auVar6._0_4_ = auVar22._12_4_;
      auVar16._0_8_ = auVar6._0_8_ << 0x20;
      auVar16._8_4_ = auVar22._12_4_;
      uVar9 = FUN_0183bd18(auVar22._12_4_);
      auVar23._0_8_ = auVar16._4_8_ << 0x20;
      auVar23._8_4_ = auVar22._12_4_;
      auVar23._12_4_ = auVar22._12_4_;
      auVar24 = auVar23._4_12_;
      auVar18._0_4_ = auVar22._12_4_;
    }
  }
  uVar11 = VectorTableLookup(iVar12 + 0x20,unaff_r4,2);
  uVar9 = VectorTableLookup(uVar9,unaff_r4,2);
  FUN_0183bda0(auVar18._0_4_ ^ in_d24,uVar11,uVar9,iVar12 + 0x10);
  *extraout_r2_02 = auVar18._0_4_ ^ in_d24;
  extraout_r2_02[1] = auVar24._0_4_;
  extraout_r2_02[2] = auVar24._4_4_;
  extraout_r2_02[3] = auVar24._8_4_;
  return 0;
}

