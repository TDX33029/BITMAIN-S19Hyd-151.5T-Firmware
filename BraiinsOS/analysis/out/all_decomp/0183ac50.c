// FUN_0183ac50 @ 0183ac50 size=152 calls_out=0 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 * FUN_0183ac50(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  
  auVar11 = *param_2;
  auVar12._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar12._0_8_ = 0xe1e1e1e1e1e1e1e1;
  auVar15 = VectorShiftLeft(*(undefined1 (*) [16])(auVar12 << 0x40 | auVar12),0x39,0x40,0);
  auVar1._16_16_ = auVar11;
  auVar1._0_16_ = auVar11;
  auVar12 = VectorShiftRight(auVar15,0x3f);
  uVar10 = CONCAT44(auVar11._4_4_,auVar11._4_4_);
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = uVar10;
  auVar2._16_16_ = auVar15;
  auVar2._0_16_ = auVar12;
  auVar13 = VectorShiftRight(auVar1._8_16_,0x3f);
  auVar11 = VectorSignedFixedToFloat(auVar11,0x1f);
  auVar13 = auVar13 & auVar2._8_16_;
  auVar12 = VectorShiftLeft(auVar1._8_16_,1,0x40,0);
  auVar3._16_16_ = auVar13;
  auVar3._0_16_ = auVar13;
  auVar16 = (auVar12 | auVar3._8_16_) ^ auVar2._8_16_ & auVar11;
  uVar10 = auVar16._0_8_;
  *param_1 = uVar10;
  uVar17 = auVar16._8_8_;
  param_1[1] = uVar17;
  auVar4._16_16_ = auVar16;
  auVar4._0_16_ = auVar16;
  auVar12 = PolynomialMultiply(uVar10,uVar10,8);
  auVar16 = auVar4._8_16_ ^ auVar16;
  auVar13 = PolynomialMultiply(uVar17,uVar17,8);
  uVar10 = auVar16._0_8_;
  auVar11 = PolynomialMultiply(uVar10,uVar10,8);
  auVar5._16_16_ = auVar13;
  auVar5._0_16_ = auVar12;
  auVar11 = auVar11 ^ auVar5._8_16_ ^ auVar12 ^ auVar13;
  auVar14 = PolynomialMultiply(auVar12._0_8_,auVar15._0_8_,8);
  auVar9._8_8_ = auVar13._8_8_;
  auVar9._0_8_ = auVar11._8_8_;
  auVar13._0_8_ = auVar11._0_8_;
  auVar13._8_8_ = auVar12._0_8_;
  auVar13 = auVar13 ^ auVar14;
  auVar6._16_16_ = auVar13;
  auVar6._0_16_ = auVar13;
  auVar12 = PolynomialMultiply(auVar13._0_8_,auVar15._0_8_,8);
  auVar12 = auVar12 ^ auVar6._8_16_ ^ auVar9;
  uVar7 = auVar12._8_8_;
  uVar8 = auVar12._0_8_;
  param_1[2] = auVar16._8_8_;
  param_1[3] = uVar7 ^ uVar8;
  param_1[4] = uVar8;
  param_1[5] = uVar7;
  return param_1 + 6;
}

