// FUN_01bd9c80 @ 01bd9c80 size=440 calls_out=2 calls_in=1
// strings: 

void FUN_01bd9c80(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *extraout_r1;
  uint extraout_r2;
  int in_r3;
  int iVar14;
  uint *extraout_r12;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar15) [16];
  uint extraout_s0;
  uint extraout_s1;
  uint extraout_s2;
  undefined1 auVar17 [16];
  uint extraout_s3;
  uint extraout_s4;
  uint extraout_s5;
  uint extraout_s6;
  undefined1 auVar18 [16];
  uint extraout_s7;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint unaff_s28;
  uint unaff_s29;
  uint unaff_s30;
  uint unaff_s31;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint in_d30;
  uint in_register_000003f4;
  uint in_d31;
  uint in_register_000003fc;
  undefined8 uVar24;
  undefined1 (*in_stack_00000000) [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 auStack_60 [8];
  
  iVar14 = *(int *)(in_r3 + 0xf0);
  pauVar15 = (undefined1 (*) [16])(auStack_60 + iVar14 * -0x10 + 10);
  uVar24 = FUN_01bd9be0();
  *extraout_r12 = unaff_s28 ^ in_d30;
  extraout_r12[1] = unaff_s29 ^ in_register_000003f4;
  extraout_r12[2] = unaff_s30 ^ in_d31;
  extraout_r12[3] = unaff_s31 ^ in_register_000003fc;
  auVar18._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar18._0_8_ = 0x100000001;
  auVar17 = vrev(*in_stack_00000000,1);
  auVar18 = SUB3216(ZEXT1632(*(undefined1 (*) [16])(auVar18 << 0x40 | auVar18)) << 0x80,4) |
            SUB3216(ZEXT1632((undefined1  [16])0x0),4);
  auVar19 = vrev(*pauVar15,1);
  auVar22 = VectorAdd(auVar18,auVar18,4);
  *(longlong *)*pauVar15 = auVar19._0_8_;
  auStack_60[iVar14 * -0x10 + 0xb] = auVar19._8_8_;
  do {
    auVar23 = VectorAdd(auVar18,auVar22,4);
    auVar18 = VectorAdd(auVar17,auVar18,4);
    auVar19 = VectorAdd(auVar17,auVar22,4);
    auVar17 = VectorAdd(auVar17,auVar23,4);
    auVar18 = VectorAdd(auVar18,auVar23,4);
    auVar20 = VectorAdd(auVar19,auVar23,4);
    auVar22 = VectorAdd(auVar17,auVar23,4);
    auVar21 = VectorAdd(auVar18,auVar23,4);
    auVar23 = VectorAdd(auVar20,auVar23,4);
    local_70 = auVar23._0_8_;
    uStack_68 = auVar23._8_8_;
    puVar13 = (uint *)FUN_01bd9590((int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
    if (extraout_r2 < 8) {
      uVar6 = puVar13[1];
      uVar7 = puVar13[2];
      uVar8 = puVar13[3];
      *extraout_r1 = extraout_s0 ^ *puVar13;
      extraout_r1[1] = extraout_s1 ^ uVar6;
      extraout_r1[2] = extraout_s2 ^ uVar7;
      extraout_r1[3] = extraout_s3 ^ uVar8;
      if (1 < extraout_r2) {
        uVar6 = puVar13[5];
        uVar7 = puVar13[6];
        uVar8 = puVar13[7];
        extraout_r1[4] = extraout_s4 ^ puVar13[4];
        extraout_r1[5] = extraout_s5 ^ uVar6;
        extraout_r1[6] = extraout_s6 ^ uVar7;
        extraout_r1[7] = extraout_s7 ^ uVar8;
        if (extraout_r2 != 2) {
          auVar20 = *(undefined1 (*) [16])(puVar13 + 8);
          *(longlong *)(extraout_r1 + 8) = SUB168(auVar18 ^ auVar20,0);
          *(longlong *)(extraout_r1 + 10) = SUB168(auVar18 ^ auVar20,8);
          if (3 < extraout_r2) {
            auVar18 = *(undefined1 (*) [16])(puVar13 + 0xc);
            *(longlong *)(extraout_r1 + 0xc) = SUB168(auVar22 ^ auVar18,0);
            *(longlong *)(extraout_r1 + 0xe) = SUB168(auVar22 ^ auVar18,8);
            if (extraout_r2 != 4) {
              auVar18 = *(undefined1 (*) [16])(puVar13 + 0x10);
              *(longlong *)(extraout_r1 + 0x10) = SUB168(auVar17 ^ auVar18,0);
              *(longlong *)(extraout_r1 + 0x12) = SUB168(auVar17 ^ auVar18,8);
              if (5 < extraout_r2) {
                auVar18 = *(undefined1 (*) [16])(puVar13 + 0x14);
                *(longlong *)(extraout_r1 + 0x14) = SUB168(auVar21 ^ auVar18,0);
                *(longlong *)(extraout_r1 + 0x16) = SUB168(auVar21 ^ auVar18,8);
                if (extraout_r2 != 6) {
                  auVar18 = *(undefined1 (*) [16])(puVar13 + 0x18);
                  *(longlong *)(extraout_r1 + 0x18) = SUB168(auVar19 ^ auVar18,0);
                  *(longlong *)(extraout_r1 + 0x1a) = SUB168(auVar19 ^ auVar18,8);
                }
              }
            }
          }
        }
      }
      break;
    }
    uVar6 = puVar13[1];
    uVar7 = puVar13[2];
    uVar8 = puVar13[3];
    uVar9 = puVar13[4];
    uVar10 = puVar13[5];
    uVar11 = puVar13[6];
    uVar12 = puVar13[7];
    auVar23 = *(undefined1 (*) [16])(puVar13 + 8);
    auVar1 = *(undefined1 (*) [16])(puVar13 + 0xc);
    auVar2 = *(undefined1 (*) [16])(puVar13 + 0x10);
    auVar3 = *(undefined1 (*) [16])(puVar13 + 0x14);
    auVar4 = *(undefined1 (*) [16])(puVar13 + 0x18);
    auVar5 = *(undefined1 (*) [16])(puVar13 + 0x1c);
    *extraout_r1 = extraout_s0 ^ *puVar13;
    extraout_r1[1] = extraout_s1 ^ uVar6;
    extraout_r1[2] = extraout_s2 ^ uVar7;
    extraout_r1[3] = extraout_s3 ^ uVar8;
    extraout_r1[4] = extraout_s4 ^ uVar9;
    extraout_r1[5] = extraout_s5 ^ uVar10;
    extraout_r1[6] = extraout_s6 ^ uVar11;
    extraout_r1[7] = extraout_s7 ^ uVar12;
    *(longlong *)(extraout_r1 + 8) = SUB168(auVar18 ^ auVar23,0);
    *(longlong *)(extraout_r1 + 10) = SUB168(auVar18 ^ auVar23,8);
    *(longlong *)(extraout_r1 + 0xc) = SUB168(auVar22 ^ auVar1,0);
    *(longlong *)(extraout_r1 + 0xe) = SUB168(auVar22 ^ auVar1,8);
    auVar22._8_8_ = SUB168((undefined1  [16])0x0,8);
    auVar22._0_8_ = 0x100000001;
    *(longlong *)(extraout_r1 + 0x10) = SUB168(auVar17 ^ auVar2,0);
    *(longlong *)(extraout_r1 + 0x12) = SUB168(auVar17 ^ auVar2,8);
    *(longlong *)(extraout_r1 + 0x14) = SUB168(auVar21 ^ auVar3,0);
    *(longlong *)(extraout_r1 + 0x16) = SUB168(auVar21 ^ auVar3,8);
    auVar18 = SUB3216(ZEXT1632(*(undefined1 (*) [16])(auVar22 << 0x40 | auVar22)) << 0x80,4) |
              SUB3216(ZEXT1632((undefined1  [16])0x0),4);
    *(longlong *)(extraout_r1 + 0x18) = SUB168(auVar19 ^ auVar4,0);
    *(longlong *)(extraout_r1 + 0x1a) = SUB168(auVar19 ^ auVar4,8);
    auVar22 = VectorAdd(auVar18,auVar18,4);
    *(longlong *)(extraout_r1 + 0x1c) = SUB168(auVar20 ^ auVar5,0);
    *(longlong *)(extraout_r1 + 0x1e) = SUB168(auVar20 ^ auVar5,8);
    uVar24 = CONCAT44(extraout_r1 + 0x20,puVar13 + 0x20);
    auVar17._8_8_ = uStack_68;
    auVar17._0_8_ = local_70;
  } while (extraout_r2 != 8);
  do {
    *(undefined4 *)*pauVar15 = 0;
    *(undefined4 *)(*pauVar15 + 4) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(*pauVar15 + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(*pauVar15 + 0xc) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)pauVar15[1] = 0;
    *(undefined4 *)(pauVar15[1] + 4) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(pauVar15[1] + 8) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(pauVar15[1] + 0xc) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    pauVar16 = pauVar15 + 2;
    pauVar15 = pauVar15 + 2;
  } while (pauVar16 != (undefined1 (*) [16])&local_70);
  return;
}

