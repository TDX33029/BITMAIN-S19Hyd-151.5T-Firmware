// FUN_0183b620 @ 0183b620 size=156 calls_out=0 calls_in=1
// strings: 

void FUN_0183b620(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 (*unaff_r4) [16];
  undefined1 (*pauVar9) [16];
  int unaff_r5;
  int iVar10;
  undefined8 *in_r12;
  ulonglong *puVar11;
  undefined4 unaff_lr;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 uStack00000000;
  
  pauVar9 = unaff_r4 + 2;
  auVar1._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar1._0_8_ = 0x101010101010101;
  auVar2._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar2._0_8_ = 0x202020202020202;
  auVar3._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar3._0_8_ = 0x404040404040404;
  auVar4._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar4._0_8_ = 0x808080808080808;
  auVar5._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar5._0_8_ = 0x1010101010101010;
  auVar6._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar6._0_8_ = 0x2020202020202020;
  auVar19 = vrev(*unaff_r4,1);
  vrev(unaff_r4[1],1);
  iVar10 = unaff_r5 + -1;
  *in_r12 = auVar19._0_8_;
  in_r12[1] = auVar19._8_8_;
  puVar11 = in_r12 + 2;
  do {
    unaff_lr = VectorTableLookup(puVar11,unaff_lr,2);
    VectorTableLookup(&uStack00000000,unaff_lr,2);
    auVar7._8_8_ = SUB168((undefined1  [16])0x0,8);
    auVar7._0_8_ = 0x4040404040404040;
    auVar8._8_8_ = SUB168((undefined1  [16])0x0,8);
    auVar8._0_8_ = 0x8080808080808080;
    auVar12 = VectorTest(auVar19,*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1));
    auVar13 = VectorTest(auVar19,*(undefined1 (*) [16])(auVar2 << 0x40 | auVar2));
    auVar14 = VectorTest(auVar19,*(undefined1 (*) [16])(auVar3 << 0x40 | auVar3));
    auVar15 = VectorTest(auVar19,*(undefined1 (*) [16])(auVar4 << 0x40 | auVar4));
    auVar16 = VectorTest(auVar19,*(undefined1 (*) [16])(auVar5 << 0x40 | auVar5));
    auVar17 = VectorTest(auVar19,*(undefined1 (*) [16])(auVar6 << 0x40 | auVar6));
    auVar18 = VectorTest(auVar19,*(undefined1 (*) [16])(auVar7 << 0x40 | auVar7));
    auVar19 = VectorTest(auVar19,*(undefined1 (*) [16])(auVar8 << 0x40 | auVar8));
    auVar7 = *pauVar9;
    pauVar9 = pauVar9 + 1;
    vrev(auVar7,1);
    iVar10 = iVar10 + -1;
    *puVar11 = ~auVar12._0_8_;
    puVar11[1] = ~auVar12._8_8_;
    puVar11[2] = ~auVar13._0_8_;
    puVar11[3] = ~auVar13._8_8_;
    puVar11[4] = auVar14._0_8_;
    puVar11[5] = auVar14._8_8_;
    puVar11[6] = auVar15._0_8_;
    puVar11[7] = auVar15._8_8_;
    puVar11[8] = auVar16._0_8_;
    puVar11[9] = auVar16._8_8_;
    puVar11[10] = ~auVar17._0_8_;
    puVar11[0xb] = ~auVar17._8_8_;
    puVar11[0xc] = ~auVar18._0_8_;
    puVar11[0xd] = ~auVar18._8_8_;
    puVar11[0xe] = auVar19._0_8_;
    puVar11[0xf] = auVar19._8_8_;
    puVar11 = puVar11 + 0x10;
  } while (iVar10 != 0);
  return;
}

