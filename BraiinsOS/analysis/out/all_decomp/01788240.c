// FUN_01788240 @ 01788240 size=468 calls_out=0 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_01788240(undefined1 (*param_1) [16],undefined1 (*param_2) [16],int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
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
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  auVar30 = *param_1;
  auVar31._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar31._0_4_ = *(undefined4 *)param_1[1];
  do {
    auVar37 = *param_2;
    pauVar27 = param_2 + 1;
    pauVar26 = param_2 + 2;
    pauVar28 = param_2 + 3;
    param_2 = param_2 + 4;
    auVar32 = vrev(auVar37,1);
    auVar34 = vrev(*pauVar27,1);
    auVar6._8_8_ = 0x5a8279995a827999;
    auVar6._0_8_ = 0x5a8279995a827999;
    auVar37 = VectorAdd(auVar6,auVar32,4);
    auVar35 = vrev(*pauVar26,1);
    param_3 = param_3 + -1;
    auVar7._8_8_ = 0x5a8279995a827999;
    auVar7._0_8_ = 0x5a8279995a827999;
    auVar40 = VectorAdd(auVar7,auVar34,4);
    auVar36 = vrev(*pauVar28,1);
    auVar29 = SHA1HashUpdateChoose(auVar30,auVar31._0_4_,auVar37);
    auVar8._8_8_ = 0x5a8279995a827999;
    auVar8._0_8_ = 0x5a8279995a827999;
    auVar38 = VectorAdd(auVar8,auVar35,4);
    auVar37._8_8_ = auVar34._0_8_;
    auVar37._0_8_ = auVar32._8_8_;
    auVar40 = SHA1HashUpdateChoose(auVar29,auVar30._0_4_ << 0x1e | auVar30._0_4_ >> 2,auVar40);
    auVar9._8_8_ = 0x5a8279995a827999;
    auVar9._0_8_ = 0x5a8279995a827999;
    auVar41 = VectorAdd(auVar9,auVar36,4);
    auVar37 = auVar32 ^ auVar37 ^ auVar35 ^ auVar36 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar33 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar32._8_8_ = auVar35._0_8_;
    auVar32._0_8_ = auVar34._8_8_;
    auVar38 = SHA1HashUpdateChoose(auVar40,auVar29._0_4_ << 0x1e | auVar29._0_4_ >> 2,auVar38);
    auVar10._8_8_ = 0x5a8279995a827999;
    auVar10._0_8_ = 0x5a8279995a827999;
    auVar39 = VectorAdd(auVar10,auVar33,4);
    auVar37 = auVar34 ^ auVar32 ^ auVar36 ^ auVar33 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar34 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar29._8_8_ = auVar36._0_8_;
    auVar29._0_8_ = auVar35._8_8_;
    auVar32 = SHA1HashUpdateChoose(auVar38,auVar40._0_4_ << 0x1e | auVar40._0_4_ >> 2,auVar41);
    auVar11._8_8_ = 0x6ed9eba16ed9eba1;
    auVar11._0_8_ = 0x6ed9eba16ed9eba1;
    auVar41 = VectorAdd(auVar11,auVar34,4);
    auVar37 = auVar35 ^ auVar29 ^ auVar33 ^ auVar34 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar35 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar40._8_8_ = auVar33._0_8_;
    auVar40._0_8_ = auVar36._8_8_;
    auVar29 = SHA1HashUpdateChoose(auVar32,auVar38._0_4_ << 0x1e | auVar38._0_4_ >> 2,auVar39);
    auVar12._8_8_ = 0x6ed9eba16ed9eba1;
    auVar12._0_8_ = 0x6ed9eba16ed9eba1;
    auVar39 = VectorAdd(auVar12,auVar35,4);
    auVar37 = auVar36 ^ auVar40 ^ auVar34 ^ auVar35 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar36 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar38._8_8_ = auVar34._0_8_;
    auVar38._0_8_ = auVar33._8_8_;
    auVar32 = SHA1HashUpdateParity(auVar29,auVar32._0_4_ << 0x1e | auVar32._0_4_ >> 2,auVar41);
    auVar13._8_8_ = 0x6ed9eba16ed9eba1;
    auVar13._0_8_ = 0x6ed9eba16ed9eba1;
    auVar41 = VectorAdd(auVar13,auVar36,4);
    auVar37 = auVar33 ^ auVar38 ^ auVar35 ^ auVar36 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar40 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar33._8_8_ = auVar35._0_8_;
    auVar33._0_8_ = auVar34._8_8_;
    auVar29 = SHA1HashUpdateParity(auVar32,auVar29._0_4_ << 0x1e | auVar29._0_4_ >> 2,auVar39);
    auVar14._8_8_ = 0x6ed9eba16ed9eba1;
    auVar14._0_8_ = 0x6ed9eba16ed9eba1;
    auVar39 = VectorAdd(auVar14,auVar40,4);
    auVar37 = auVar34 ^ auVar33 ^ auVar36 ^ auVar40 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar38 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar34._8_8_ = auVar36._0_8_;
    auVar34._0_8_ = auVar35._8_8_;
    auVar32 = SHA1HashUpdateParity(auVar29,auVar32._0_4_ << 0x1e | auVar32._0_4_ >> 2,auVar41);
    auVar15._8_8_ = 0x6ed9eba16ed9eba1;
    auVar15._0_8_ = 0x6ed9eba16ed9eba1;
    auVar42 = VectorAdd(auVar15,auVar38,4);
    auVar37 = auVar35 ^ auVar34 ^ auVar40 ^ auVar38 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar33 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar35._8_8_ = auVar40._0_8_;
    auVar35._0_8_ = auVar36._8_8_;
    auVar29 = SHA1HashUpdateParity(auVar32,auVar29._0_4_ << 0x1e | auVar29._0_4_ >> 2,auVar39);
    auVar16._8_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar16._0_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar41 = VectorAdd(auVar16,auVar33,4);
    auVar37 = auVar36 ^ auVar35 ^ auVar38 ^ auVar33 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar34 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar36._8_8_ = auVar38._0_8_;
    auVar36._0_8_ = auVar40._8_8_;
    auVar32 = SHA1HashUpdateParity(auVar29,auVar32._0_4_ << 0x1e | auVar32._0_4_ >> 2,auVar42);
    auVar17._8_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar17._0_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar42 = VectorAdd(auVar17,auVar34,4);
    auVar37 = auVar40 ^ auVar36 ^ auVar33 ^ auVar34 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar40 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar39._8_8_ = auVar33._0_8_;
    auVar39._0_8_ = auVar38._8_8_;
    auVar29 = SHA1HashUpdateMajority(auVar32,auVar29._0_4_ << 0x1e | auVar29._0_4_ >> 2,auVar41);
    auVar18._8_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar18._0_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar35 = VectorAdd(auVar18,auVar40,4);
    auVar37 = auVar38 ^ auVar39 ^ auVar34 ^ auVar40 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar38 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar41._8_8_ = auVar34._0_8_;
    auVar41._0_8_ = auVar33._8_8_;
    auVar32 = SHA1HashUpdateMajority(auVar29,auVar32._0_4_ << 0x1e | auVar32._0_4_ >> 2,auVar42);
    auVar19._8_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar19._0_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar36 = VectorAdd(auVar19,auVar38,4);
    auVar37 = auVar33 ^ auVar41 ^ auVar40 ^ auVar38 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar33 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar42._8_8_ = auVar40._0_8_;
    auVar42._0_8_ = auVar34._8_8_;
    auVar29 = SHA1HashUpdateMajority(auVar32,auVar29._0_4_ << 0x1e | auVar29._0_4_ >> 2,auVar35);
    auVar20._8_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar20._0_8_ = 0x8f1bbcdc8f1bbcdc;
    auVar35 = VectorAdd(auVar20,auVar33,4);
    auVar37 = auVar34 ^ auVar42 ^ auVar38 ^ auVar33 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar34 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar1._8_8_ = auVar38._0_8_;
    auVar1._0_8_ = auVar40._8_8_;
    auVar32 = SHA1HashUpdateMajority(auVar29,auVar32._0_4_ << 0x1e | auVar32._0_4_ >> 2,auVar36);
    auVar21._8_8_ = 0xca62c1d6ca62c1d6;
    auVar21._0_8_ = 0xca62c1d6ca62c1d6;
    auVar36 = VectorAdd(auVar21,auVar34,4);
    auVar37 = auVar40 ^ auVar1 ^ auVar33 ^ auVar34 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar40 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar2._8_8_ = auVar33._0_8_;
    auVar2._0_8_ = auVar38._8_8_;
    auVar29 = SHA1HashUpdateMajority(auVar32,auVar29._0_4_ << 0x1e | auVar29._0_4_ >> 2,auVar35);
    auVar22._8_8_ = 0xca62c1d6ca62c1d6;
    auVar22._0_8_ = 0xca62c1d6ca62c1d6;
    auVar35 = VectorAdd(auVar22,auVar40,4);
    auVar37 = auVar38 ^ auVar2 ^ auVar34 ^ auVar40 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar38 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar3._8_8_ = auVar34._0_8_;
    auVar3._0_8_ = auVar33._8_8_;
    auVar32 = SHA1HashUpdateParity(auVar29,auVar32._0_4_ << 0x1e | auVar32._0_4_ >> 2,auVar36);
    auVar23._8_8_ = 0xca62c1d6ca62c1d6;
    auVar23._0_8_ = 0xca62c1d6ca62c1d6;
    auVar36 = VectorAdd(auVar23,auVar38,4);
    auVar37 = auVar33 ^ auVar3 ^ auVar40 ^ auVar38 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar37 = ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^ (uVar5 << 2 | uVar5 >> 0x1e))
              << 0x60 | ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
              ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
              ZEXT416(uVar5 << 1 | uVar5 >> 0x1f);
    auVar4._8_8_ = auVar40._0_8_;
    auVar4._0_8_ = auVar34._8_8_;
    auVar29 = SHA1HashUpdateParity(auVar32,auVar29._0_4_ << 0x1e | auVar29._0_4_ >> 2,auVar35);
    auVar24._8_8_ = 0xca62c1d6ca62c1d6;
    auVar24._0_8_ = 0xca62c1d6ca62c1d6;
    auVar40 = VectorAdd(auVar24,auVar37,4);
    auVar37 = auVar34 ^ auVar4 ^ auVar38 ^ auVar37 >> 0x20;
    uVar5 = auVar37._0_4_;
    auVar32 = SHA1HashUpdateParity(auVar29,auVar32._0_4_ << 0x1e | auVar32._0_4_ >> 2,auVar36);
    auVar25._8_8_ = 0xca62c1d6ca62c1d6;
    auVar25._0_8_ = 0xca62c1d6ca62c1d6;
    auVar38 = VectorAdd(auVar25,ZEXT416((auVar37._12_4_ << 1 | auVar37._12_4_ >> 0x1f) ^
                                        (uVar5 << 2 | uVar5 >> 0x1e)) << 0x60 |
                                ZEXT416(auVar37._8_4_ << 1 | auVar37._8_4_ >> 0x1f) << 0x40 |
                                ZEXT416(auVar37._4_4_ << 1 | auVar37._4_4_ >> 0x1f) << 0x20 |
                                ZEXT416(uVar5 << 1 | uVar5 >> 0x1f),4);
    auVar37 = SHA1HashUpdateParity(auVar32,auVar29._0_4_ << 0x1e | auVar29._0_4_ >> 2,auVar40);
    auVar32 = SHA1HashUpdateParity(auVar37,auVar32._0_4_ << 0x1e | auVar32._0_4_ >> 2,auVar38);
    auVar31 = VectorAdd(auVar31,ZEXT416(auVar37._0_4_ << 0x1e | auVar37._0_4_ >> 2),4);
    auVar30 = VectorAdd(auVar32,auVar30,4);
  } while (param_3 != 0);
  *(longlong *)*param_1 = auVar30._0_8_;
  *(longlong *)(*param_1 + 8) = auVar30._8_8_;
  *(int *)param_1[1] = auVar31._0_4_;
  return;
}

