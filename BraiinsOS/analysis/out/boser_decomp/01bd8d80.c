// FUN_01bd8d80 @ 01bd8d80 size=396 calls_out=0 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_01bd8d80(undefined1 (*param_1) [16],uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar5;
  undefined4 unaff_r6;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_q10 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar4 = 0xffffffff;
  if (param_1 != (undefined1 (*) [16])0x0) {
    if (param_3 != (undefined8 *)0x0) {
      uVar4 = 0xfffffffe;
      if (0x7f < (int)param_2) {
        if ((int)param_2 < 0x101) {
          if ((param_2 & 0x3f) == 0) {
            auVar7 = *param_1;
            param_1 = param_1 + 1;
            iVar2 = 8;
            auVar6._8_8_ = 0x100000001;
            auVar6._0_8_ = 0x100000001;
            if ((int)param_2 < 0xc0) {
              do {
                puVar3 = param_3;
                unaff_r4 = VectorTableLookup(unaff_r4,unaff_r6,2);
                unaff_r5 = VectorTableLookup(unaff_r5,unaff_r6,2);
                auVar10 = SUB3216(ZEXT1632(auVar7) << 0x80,0xc) |
                          SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                *puVar3 = auVar7._0_8_;
                puVar3[1] = auVar7._8_8_;
                auVar8 = AESInvShiftRows(in_q10);
                auVar9 = AESSubBytes(auVar8);
                iVar2 = iVar2 + -1;
                auVar8 = SUB3216(ZEXT1632(auVar10) << 0x80,0xc) |
                         SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                in_q10 = auVar9 ^ auVar6;
                auVar6 = VectorShiftLeft(auVar6,1,8,0);
                auVar7 = auVar7 ^ auVar10 ^ auVar8 ^
                         (SUB3216(ZEXT1632(auVar8) << 0x80,0xc) |
                         SUB3216(ZEXT1632((undefined1  [16])0x0),0xc)) ^ in_q10;
                param_3 = puVar3 + 2;
              } while (iVar2 != 0);
              auVar10._8_8_ = 0x1b0000001b;
              auVar10._0_8_ = 0x1b0000001b;
              uVar4 = VectorTableLookup(unaff_r4,unaff_r6,2);
              uVar5 = VectorTableLookup(unaff_r5,unaff_r6,2);
              auVar8 = SUB3216(ZEXT1632(auVar7) << 0x80,0xc) |
                       SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
              puVar3[2] = auVar7._0_8_;
              puVar3[3] = auVar7._8_8_;
              auVar6 = AESInvShiftRows(in_q10);
              auVar11 = AESSubBytes(auVar6);
              auVar6 = SUB3216(ZEXT1632(auVar8) << 0x80,0xc) |
                       SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
              auVar9 = VectorShiftLeft(auVar10,1,8,0);
              auVar8 = auVar7 ^ auVar8 ^ auVar6 ^
                       (SUB3216(ZEXT1632(auVar6) << 0x80,0xc) |
                       SUB3216(ZEXT1632((undefined1  [16])0x0),0xc)) ^ auVar11 ^ auVar10;
              VectorTableLookup(uVar4,unaff_r6,2);
              VectorTableLookup(uVar5,unaff_r6,2);
              auVar6 = SUB3216(ZEXT1632(auVar8) << 0x80,0xc) |
                       SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
              puVar3[4] = auVar8._0_8_;
              puVar3[5] = auVar8._8_8_;
              auVar7 = AESInvShiftRows(auVar11 ^ auVar10);
              auVar10 = AESSubBytes(auVar7);
              auVar7 = SUB3216(ZEXT1632(auVar6) << 0x80,0xc) |
                       SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
              auVar7 = auVar8 ^ auVar6 ^ auVar7 ^
                       (SUB3216(ZEXT1632(auVar7) << 0x80,0xc) |
                       SUB3216(ZEXT1632((undefined1  [16])0x0),0xc)) ^ auVar10 ^ auVar9;
              puVar3[6] = auVar7._0_8_;
              puVar3[7] = auVar7._8_8_;
              puVar3 = puVar3 + 0x10;
              uVar4 = 10;
            }
            else {
              auVar8 = *param_1;
              iVar2 = 7;
              uVar4 = 0xe;
              *param_3 = auVar7._0_8_;
              param_3[1] = auVar7._8_8_;
              puVar3 = param_3 + 2;
              while( true ) {
                unaff_r4 = VectorTableLookup(unaff_r4,param_1,2);
                unaff_r5 = VectorTableLookup(unaff_r5,param_1,2);
                auVar9 = SUB3216(ZEXT1632(auVar7) << 0x80,0xc) |
                         SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                *puVar3 = auVar8._0_8_;
                puVar3[1] = auVar8._8_8_;
                auVar10 = AESInvShiftRows(in_q10);
                auVar11 = AESSubBytes(auVar10);
                iVar2 = iVar2 + -1;
                auVar10 = SUB3216(ZEXT1632(auVar9) << 0x80,0xc) |
                          SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                auVar11 = auVar11 ^ auVar6;
                auVar6 = VectorShiftLeft(auVar6,1,8,0);
                auVar7 = auVar7 ^ auVar9 ^ auVar10 ^
                         (SUB3216(ZEXT1632(auVar10) << 0x80,0xc) |
                         SUB3216(ZEXT1632((undefined1  [16])0x0),0xc)) ^ auVar11;
                puVar3[2] = auVar7._0_8_;
                puVar3[3] = auVar7._8_8_;
                puVar3 = puVar3 + 4;
                if (iVar2 == 0) break;
                uVar1 = CONCAT44(auVar7._12_4_,auVar7._12_4_);
                auVar9._8_8_ = uVar1;
                auVar9._0_8_ = uVar1;
                auVar11 = SUB3216(ZEXT1632(auVar8) << 0x80,0xc) |
                          SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                auVar10 = AESInvShiftRows(auVar9);
                in_q10 = AESSubBytes(auVar10);
                auVar10 = SUB3216(ZEXT1632(auVar11) << 0x80,0xc) |
                          SUB3216(ZEXT1632((undefined1  [16])0x0),0xc);
                auVar8 = auVar8 ^ auVar11 ^ auVar10 ^
                         (SUB3216(ZEXT1632(auVar10) << 0x80,0xc) |
                         SUB3216(ZEXT1632((undefined1  [16])0x0),0xc)) ^ in_q10;
              }
            }
            *(undefined4 *)puVar3 = uVar4;
            uVar4 = 0;
          }
        }
      }
    }
  }
  return uVar4;
}

