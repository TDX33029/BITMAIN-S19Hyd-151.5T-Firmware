// FUN_01b75380 @ 01b75380 size=160 calls_out=0 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 * FUN_01b75380(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  
  auVar13 = *param_2;
  auVar14._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar14._0_8_ = 0xe1e1e1e1e1e1e1e1;
  auVar17 = VectorShiftLeft(*(undefined1 (*) [16])(auVar14 << 0x40 | auVar14),0x39,0x40,0);
  auVar1._16_16_ = auVar13;
  auVar1._0_16_ = auVar13;
  auVar14 = VectorShiftRight(auVar17,0x3f);
  uVar11 = CONCAT44(auVar13._4_4_,auVar13._4_4_);
  auVar13._8_8_ = uVar11;
  auVar13._0_8_ = uVar11;
  auVar2._16_16_ = auVar17;
  auVar2._0_16_ = auVar14;
  auVar15 = VectorShiftRight(auVar1._8_16_,0x3f);
  auVar13 = VectorSignedFixedToFloat(auVar13,0x1f);
  auVar15 = auVar15 & auVar2._8_16_;
  auVar14 = VectorShiftLeft(auVar1._8_16_,1,0x40,0);
  auVar3._16_16_ = auVar15;
  auVar3._0_16_ = auVar15;
  auVar14 = (auVar14 | auVar3._8_16_) ^ auVar2._8_16_ & auVar13;
  auVar4._16_16_ = auVar14;
  auVar4._0_16_ = auVar14;
  auVar5._0_16_ = auVar4._8_16_;
  uVar11 = auVar14._8_8_;
  *param_1 = uVar11;
  uVar18 = auVar14._0_8_;
  param_1[1] = uVar18;
  auVar5._16_16_ = auVar5._0_16_;
  auVar14 = PolynomialMultiply(uVar18,uVar18,8);
  auVar12 = auVar5._8_16_ ^ auVar5._0_16_;
  auVar15 = PolynomialMultiply(uVar11,uVar11,8);
  uVar11 = auVar12._0_8_;
  auVar13 = PolynomialMultiply(uVar11,uVar11,8);
  auVar6._16_16_ = auVar15;
  auVar6._0_16_ = auVar14;
  auVar13 = auVar13 ^ auVar6._8_16_ ^ auVar14 ^ auVar15;
  auVar16 = PolynomialMultiply(auVar14._0_8_,auVar17._0_8_,8);
  auVar10._8_8_ = auVar15._8_8_;
  auVar10._0_8_ = auVar13._8_8_;
  auVar15._0_8_ = auVar13._0_8_;
  auVar15._8_8_ = auVar14._0_8_;
  auVar15 = auVar15 ^ auVar16;
  auVar7._16_16_ = auVar15;
  auVar7._0_16_ = auVar15;
  auVar14 = PolynomialMultiply(auVar15._0_8_,auVar17._0_8_,8);
  auVar14 = auVar14 ^ auVar7._8_16_ ^ auVar10;
  uVar8 = auVar14._0_8_;
  uVar9 = auVar14._8_8_;
  param_1[2] = auVar12._8_8_;
  param_1[3] = uVar8 ^ uVar9;
  param_1[4] = uVar9;
  param_1[5] = uVar8;
  return param_1 + 6;
}

