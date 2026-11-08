// FUN_01783f80 @ 01783f80 size=512 calls_out=0 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_01783f80(undefined1 (*param_1) [16],uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar9;
  undefined4 unaff_r6;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_q8 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_q10 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar8 = 0xffffffff;
  if (param_1 != (undefined1 (*) [16])0x0) {
    if (param_3 != (undefined8 *)0x0) {
      uVar8 = 0xfffffffe;
      if (0x7f < (int)param_2) {
        if ((int)param_2 < 0x101) {
          if ((param_2 & 0x3f) == 0) {
            auVar11 = *param_1;
            pauVar5 = param_1 + 1;
            iVar6 = 8;
            auVar10._8_8_ = 0x100000001;
            auVar10._0_8_ = 0x100000001;
            auVar13._8_8_ = 0xc0f0e0d0c0f0e0d;
            auVar13._0_8_ = 0xc0f0e0d0c0f0e0d;
            if ((int)param_2 < 0xc0) {
              do {
                puVar7 = param_3;
                unaff_r4 = VectorTableLookup(unaff_r4,unaff_r6,2);
                unaff_r5 = VectorTableLookup(unaff_r5,unaff_r6,2);
                auVar14 = SUB3216(ZEXT1632(auVar11) << 0x80,0xc) |
                          SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                *puVar7 = auVar11._0_8_;
                puVar7[1] = auVar11._8_8_;
                auVar13 = AESInvShiftRows(in_q10);
                auVar12 = AESSubBytes(auVar13);
                iVar6 = iVar6 + -1;
                auVar13 = SUB3216(ZEXT1632(auVar14) << 0x80,0xc) |
                          SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                in_q10 = auVar12 ^ auVar10;
                auVar10 = VectorShiftLeft(auVar10,1,8,0);
                auVar11 = auVar11 ^ auVar14 ^ auVar13 ^
                          (SUB3216(ZEXT1632(auVar13) << 0x80,0xc) |
                          SUB3216(ZEXT1632((undefined1  [16])0x0),0xc)) ^ in_q10;
                param_3 = puVar7 + 2;
              } while (iVar6 != 0);
              auVar14._8_8_ = 0x1b0000001b;
              auVar14._0_8_ = 0x1b0000001b;
              uVar8 = VectorTableLookup(unaff_r4,unaff_r6,2);
              uVar9 = VectorTableLookup(unaff_r5,unaff_r6,2);
              auVar13 = SUB3216(ZEXT1632(auVar11) << 0x80,0xc) |
                        SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
              puVar7[2] = auVar11._0_8_;
              puVar7[3] = auVar11._8_8_;
              auVar10 = AESInvShiftRows(in_q10);
              auVar15 = AESSubBytes(auVar10);
              auVar10 = SUB3216(ZEXT1632(auVar13) << 0x80,0xc) |
                        SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
              auVar12 = VectorShiftLeft(auVar14,1,8,0);
              auVar13 = auVar11 ^ auVar13 ^ auVar10 ^
                        (SUB3216(ZEXT1632(auVar10) << 0x80,0xc) |
                        SUB3216(ZEXT1632((undefined1  [16])0x0),0xc)) ^ auVar15 ^ auVar14;
              VectorTableLookup(uVar8,unaff_r6,2);
              VectorTableLookup(uVar9,unaff_r6,2);
              auVar10 = SUB3216(ZEXT1632(auVar13) << 0x80,0xc) |
                        SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
              puVar7[4] = auVar13._0_8_;
              puVar7[5] = auVar13._8_8_;
              auVar11 = AESInvShiftRows(auVar15 ^ auVar14);
              auVar14 = AESSubBytes(auVar11);
              auVar11 = SUB3216(ZEXT1632(auVar10) << 0x80,0xc) |
                        SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
              auVar11 = auVar13 ^ auVar10 ^ auVar11 ^
                        (SUB3216(ZEXT1632(auVar11) << 0x80,0xc) |
                        SUB3216(ZEXT1632((undefined1  [16])0x0),0xc)) ^ auVar14 ^ auVar12;
              puVar7[6] = auVar11._0_8_;
              puVar7[7] = auVar11._8_8_;
              puVar7 = puVar7 + 0x10;
              uVar8 = 10;
            }
            else {
              auVar12._8_8_ = in_q8._8_8_;
              if (param_2 == 0xc0) {
                auVar12._0_8_ = *(undefined8 *)*pauVar5;
                auVar15._8_8_ = SUB168((undefined1  [16])0x0,8);
                auVar15._0_8_ = 0x808080808080808;
                auVar14 = *(undefined1 (*) [16])(auVar15 << 0x40 | auVar15);
                *param_3 = auVar11._0_8_;
                param_3[1] = auVar11._8_8_;
                VectorSub(auVar13,auVar14,1);
                puVar4 = param_3 + 2;
                do {
                  puVar7 = puVar4;
                  unaff_r4 = VectorTableLookup(unaff_r4,param_1[1] + 8,2);
                  unaff_r5 = VectorTableLookup(unaff_r5,param_1[1] + 8,2);
                  auVar15 = SUB3216(ZEXT1632(auVar11) << 0x80,0xc) |
                            SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                  *puVar7 = auVar12._0_8_;
                  auVar13 = AESInvShiftRows(auVar14);
                  auVar14 = AESSubBytes(auVar13);
                  iVar6 = iVar6 + -1;
                  auVar13 = SUB3216(ZEXT1632(auVar15) << 0x80,0xc) |
                            SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                  auVar11 = auVar11 ^ auVar15 ^ auVar13 ^
                            (SUB3216(ZEXT1632(auVar13) << 0x80,0xc) |
                            SUB3216(ZEXT1632((undefined1  [16])0x0),0xc));
                  uVar8 = auVar11._12_4_;
                  uVar1 = CONCAT44(uVar8,uVar8);
                  auVar2._8_8_ = uVar1;
                  auVar2._0_8_ = uVar1;
                  auVar14 = auVar14 ^ auVar10;
                  auVar10 = VectorShiftLeft(auVar10,1,8,0);
                  auVar11 = auVar11 ^ auVar14;
                  auVar12 = (SUB3216(ZEXT1632(auVar12) << 0x80,0xc) |
                            SUB3216(ZEXT1632((undefined1  [16])0x0),0xc)) ^ auVar2 ^ auVar12 ^
                            auVar14;
                  puVar7[1] = auVar11._0_8_;
                  puVar7[2] = auVar11._8_8_;
                  puVar4 = puVar7 + 3;
                } while (iVar6 != 0);
                uVar8 = 0xc;
                puVar7 = puVar7 + 7;
              }
              else {
                auVar13 = *pauVar5;
                iVar6 = 7;
                uVar8 = 0xe;
                *param_3 = auVar11._0_8_;
                param_3[1] = auVar11._8_8_;
                puVar7 = param_3 + 2;
                while( true ) {
                  unaff_r4 = VectorTableLookup(unaff_r4,pauVar5,2);
                  unaff_r5 = VectorTableLookup(unaff_r5,pauVar5,2);
                  auVar12 = SUB3216(ZEXT1632(auVar11) << 0x80,0xc) |
                            SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                  *puVar7 = auVar13._0_8_;
                  puVar7[1] = auVar13._8_8_;
                  auVar14 = AESInvShiftRows(in_q10);
                  auVar15 = AESSubBytes(auVar14);
                  iVar6 = iVar6 + -1;
                  auVar14 = SUB3216(ZEXT1632(auVar12) << 0x80,0xc) |
                            SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                  auVar15 = auVar15 ^ auVar10;
                  auVar10 = VectorShiftLeft(auVar10,1,8,0);
                  auVar11 = auVar11 ^ auVar12 ^ auVar14 ^
                            (SUB3216(ZEXT1632(auVar14) << 0x80,0xc) |
                            SUB3216(ZEXT1632((undefined1  [16])0x0),0xc)) ^ auVar15;
                  puVar7[2] = auVar11._0_8_;
                  puVar7[3] = auVar11._8_8_;
                  puVar7 = puVar7 + 4;
                  if (iVar6 == 0) break;
                  uVar1 = CONCAT44(auVar11._12_4_,auVar11._12_4_);
                  auVar3._8_8_ = uVar1;
                  auVar3._0_8_ = uVar1;
                  auVar12 = SUB3216(ZEXT1632(auVar13) << 0x80,0xc) |
                            SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                  auVar14 = AESInvShiftRows(auVar3);
                  in_q10 = AESSubBytes(auVar14);
                  auVar14 = SUB3216(ZEXT1632(auVar12) << 0x80,0xc) |
                            SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                  auVar13 = auVar13 ^ auVar12 ^ auVar14 ^
                            (SUB3216(ZEXT1632(auVar14) << 0x80,0xc) |
                            SUB3216(ZEXT1632((undefined1  [16])0x0),0xc)) ^ in_q10;
                }
              }
            }
            *(undefined4 *)puVar7 = uVar8;
            uVar8 = 0;
          }
        }
      }
    }
  }
  return uVar8;
}

