// FUN_0171411c @ 0171411c size=5804 calls_out=8 calls_in=1
// strings: aws_lc_0_39_0_AES_ecb_encrypt | /aws-lc/crypto/fipsmodule/aes/mode_wrappers.c | in && out && key | aws_lc_0_39_0_AES_ecb_encrypt | /aws-lc/crypto/fipsmodule/aes/mode_wrappers.c | (AES_ENCRYPT == enc) || (AES_DECRYPT == enc)

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0178bd9c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1 (*) [16]
FUN_0171411c(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3,uint param_4)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined8 *extraout_r1;
  undefined8 *extraout_r1_00;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 (*pauVar28) [16];
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined8 uVar35;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined8 uVar36;
  undefined4 extraout_s3;
  undefined4 extraout_s3_00;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint *local_2a0;
  undefined1 auStack_250 [4];
  undefined1 auStack_24c [4];
  undefined1 auStack_248 [4];
  undefined1 auStack_244 [4];
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210 [4];
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint auStack_1f0 [110];
  
  iVar11 = DAT_018ddaf8;
  if (param_1 == (undefined1 (*) [16])0x0 ||
      (param_2 == (undefined1 (*) [16])0x0 || param_3 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("in && out && key","/aws-lc/crypto/fipsmodule/aes/mode_wrappers.c",0x50,
                 "aws_lc_0_39_0_AES_ecb_encrypt");
  }
  if (1 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("(AES_ENCRYPT == enc) || (AES_DECRYPT == enc)",
                 "/aws-lc/crypto/fipsmodule/aes/mode_wrappers.c",0x51,
                 "aws_lc_0_39_0_AES_ecb_encrypt");
  }
  if (param_4 != 1) {
    if ((DAT_018dfe48 & 4) != 0) {
      uVar35 = *param_3;
      uVar36 = param_3[1];
      auVar39 = *param_1;
      uVar37 = param_3[2];
      uVar38 = param_3[3];
      pauVar6 = (undefined1 (*) [16])(param_3 + 4);
      iVar11 = *(int *)(param_3 + 0x1e) + -2;
      do {
        auVar3._8_8_ = uVar36;
        auVar3._0_8_ = uVar35;
        auVar39 = AESInvShiftRows(auVar39 ^ auVar3);
        auVar39 = AESInvSubBytes(auVar39);
        auVar40 = AESInvMixColumns(auVar39);
        uVar35 = *(undefined8 *)*pauVar6;
        uVar36 = *(undefined8 *)(*pauVar6 + 8);
        auVar3 = *pauVar6;
        pauVar28 = pauVar6 + 1;
        iVar21 = iVar11 + -2;
        auVar39._8_8_ = uVar38;
        auVar39._0_8_ = uVar37;
        auVar39 = AESInvShiftRows(auVar40 ^ auVar39);
        auVar39 = AESInvSubBytes(auVar39);
        auVar39 = AESInvMixColumns(auVar39);
        uVar37 = *(undefined8 *)*pauVar28;
        uVar38 = *(undefined8 *)(pauVar6[1] + 8);
        pauVar6 = pauVar6 + 2;
        bVar1 = 1 < iVar11;
        iVar11 = iVar21;
      } while (iVar21 != 0 && bVar1);
      auVar39 = AESInvShiftRows(auVar39 ^ auVar3);
      auVar39 = AESInvSubBytes(auVar39);
      auVar39 = AESInvMixColumns(auVar39);
      auVar3 = *pauVar6;
      auVar39 = AESInvShiftRows(auVar39 ^ *pauVar28);
      auVar39 = AESInvSubBytes(auVar39);
      *(longlong *)*param_2 = SUB168(auVar39 ^ auVar3,0);
      *(longlong *)(*param_2 + 8) = SUB168(auVar39 ^ auVar3,8);
      return param_1;
    }
    if ((DAT_018dfe48 & 1) != 0) {
      uVar35 = *(undefined8 *)*param_1;
      FUN_0178bc40((int)uVar35,(int)((ulonglong)uVar35 >> 0x20),(int)*(undefined8 *)(*param_1 + 8));
      pauVar6 = (undefined1 (*) [16])FUN_0178be70();
      *extraout_r1_00 = uVar35;
      extraout_r1_00[1] = CONCAT44(extraout_s3_00,extraout_s2_00);
      return pauVar6;
    }
    FUN_017081a4(local_210,param_3,&PTR_018bc3f4,0);
    if (((undefined1 (*) [16])&local_230 <= param_1 || param_1 <= (undefined1 (*) [16])&local_240)
       && (((undefined1 (*) [16])&local_240 <= param_1 ||
           (param_1 + 1 <= (undefined1 (*) [16])&local_240)))) {
      uVar5 = *(uint *)*param_1;
      uVar7 = *(uint *)(*param_1 + 4);
      uVar8 = *(uint *)(*param_1 + 8);
      uVar9 = *(uint *)(*param_1 + 0xc);
      iVar21 = *(int *)(param_3 + 0x1e);
      uVar10 = (uVar5 ^ uVar5 >> 6) & 0xcc00cc;
      uVar16 = (uVar7 ^ uVar7 >> 6) & 0xcc00cc;
      uVar10 = uVar5 ^ uVar10 ^ uVar10 << 6;
      uVar5 = uVar7 ^ uVar16 ^ uVar16 << 6;
      uVar16 = (uVar10 ^ uVar10 >> 0xc) & 0xf0f0;
      uVar7 = (uVar9 ^ uVar9 >> 6) & 0xcc00cc;
      uVar10 = uVar10 ^ uVar16;
      uVar29 = uVar10 ^ uVar16 << 0xc;
      uVar9 = uVar9 ^ uVar7 ^ uVar7 << 6;
      uVar16 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
      uVar7 = (uVar5 ^ uVar5 >> 0xc) & 0xf0f0;
      uVar24 = uVar8 ^ uVar16 ^ uVar16 << 6;
      uVar5 = uVar5 ^ uVar7 ^ uVar7 << 0xc;
      uVar7 = (uVar9 ^ uVar9 >> 0xc) & 0xf0f0;
      uVar9 = uVar9 ^ uVar7;
      uVar8 = uVar9 ^ uVar7 << 0xc;
      uVar7 = (uVar24 ^ uVar24 >> 0xc) & 0xf0f0;
      uVar24 = uVar24 ^ uVar7;
      uVar16 = uVar24 ^ uVar7 << 0xc;
      local_230 = uVar10 & 0xff | uVar9 << 0x18 | (uVar5 & 0xff) << 8 | (uVar24 & 0xff) << 0x10;
      uVar10 = (uVar10 & 0xffff) >> 8 | (uVar8 >> 8) << 0x18 | uVar5 & 0xff00 |
               (uVar16 & 0xff00) << 8;
      uVar7 = uVar8 & 0xff000000 | uVar29 >> 0x18 | (uVar5 >> 0x18) << 8 | (uVar16 >> 0x18) << 0x10;
      uVar5 = (uVar29 & 0xffffff) >> 0x10 | (uVar8 >> 0x10) << 0x18 | uVar16 & 0xff0000 |
              uVar5 >> 8 & 0xff00;
      local_22c = local_230 >> 1 & 0x55555555;
      local_228 = uVar10 & 0x55555555;
      local_220 = uVar5 & 0x55555555;
      local_218 = uVar7 & 0x55555555;
      local_230 = local_230 & 0x55555555;
      local_224 = uVar10 >> 1 & 0x55555555;
      local_21c = uVar5 >> 1 & 0x55555555;
      local_214 = uVar7 >> 1 & 0x55555555;
      local_2a0 = local_210 + iVar21 * 8;
      local_230 = local_230 ^ local_210[iVar21 * 8];
      local_22c = local_210[iVar21 * 8 + 1] ^ local_22c;
      local_224 = local_210[iVar21 * 8 + 3] ^ local_224;
      local_228 = local_210[iVar21 * 8 + 2] ^ local_228;
      local_21c = local_21c ^ local_210[iVar21 * 8 + 5];
      local_220 = local_210[iVar21 * 8 + 4] ^ local_220;
      local_214 = local_214 ^ local_210[iVar21 * 8 + 7];
      local_218 = local_218 ^ local_210[iVar21 * 8 + 6];
      uVar8 = (local_22c & 0xc0c0c0c) >> 0x18 | (local_22c & 0xc0c0c0c) << 8 |
              (local_22c & 0x30303030) >> 0x10 | (local_22c & 0x30303030) << 0x10 |
              local_22c & 0x3030303 |
              (local_22c & 0xc0c0c0c0) >> 8 | (local_22c & 0xc0c0c0c0) << 0x18;
      uVar10 = (local_228 & 0xc0c0c0c) >> 0x18 | (local_228 & 0xc0c0c0c) << 8 |
               (local_228 & 0x30303030) >> 0x10 | (local_228 & 0x30303030) << 0x10 |
               local_228 & 0x3030303 |
               (local_228 & 0xc0c0c0c0) >> 8 | (local_228 & 0xc0c0c0c0) << 0x18;
      uVar9 = (local_21c & 0xc0c0c0c) >> 0x18 | (local_21c & 0xc0c0c0c) << 8 |
              (local_21c & 0x30303030) >> 0x10 | (local_21c & 0x30303030) << 0x10 |
              local_21c & 0x3030303 |
              (local_21c & 0xc0c0c0c0) >> 8 | (local_21c & 0xc0c0c0c0) << 0x18;
      uVar29 = (local_220 & 0xc0c0c0c) >> 0x18 | (local_220 & 0xc0c0c0c) << 8 |
               (local_220 & 0x30303030) >> 0x10 | (local_220 & 0x30303030) << 0x10 |
               local_220 & 0x3030303 |
               (local_220 & 0xc0c0c0c0) >> 8 | (local_220 & 0xc0c0c0c0) << 0x18;
      uVar30 = (local_230 & 0xc0c0c0c) >> 0x18 | (local_230 & 0xc0c0c0c) << 8 |
               (local_230 & 0x30303030) >> 0x10 | (local_230 & 0x30303030) << 0x10 |
               local_230 & 0x3030303 |
               (local_230 & 0xc0c0c0c0) >> 8 | (local_230 & 0xc0c0c0c0) << 0x18;
      uVar5 = (local_224 & 0xc0c0c0c) >> 0x18 | (local_224 & 0xc0c0c0c) << 8 |
              (local_224 & 0x30303030) >> 0x10 | (local_224 & 0x30303030) << 0x10 |
              local_224 & 0x3030303 |
              (local_224 & 0xc0c0c0c0) >> 8 | (local_224 & 0xc0c0c0c0) << 0x18;
      uVar7 = (local_214 & 0x30303030) >> 0x10 | (local_214 & 0x30303030) << 0x10 |
              (local_214 & 0xc0c0c0c) >> 0x18 | (local_214 & 0xc0c0c0c) << 8 | local_214 & 0x3030303
              | (local_214 & 0xc0c0c0c0) >> 8 | (local_214 & 0xc0c0c0c0) << 0x18;
      uVar16 = (local_218 & 0xc0c0c0c) >> 0x18 | (local_218 & 0xc0c0c0c) << 8 |
               (local_218 & 0x30303030) >> 0x10 | (local_218 & 0x30303030) << 0x10 |
               local_218 & 0x3030303 |
               (local_218 & 0xc0c0c0c0) >> 8 | (local_218 & 0xc0c0c0c0) << 0x18;
      uVar24 = uVar29 ^ uVar8;
      local_22c = uVar5 ^ uVar30;
      local_21c = uVar29 ^ uVar10 ^ uVar7;
      local_224 = uVar30 ^ uVar10 ^ uVar9;
      local_230 = ~(uVar10 ^ uVar9 ^ uVar7);
      local_214 = uVar24 ^ uVar16;
      local_228 = ~(uVar7 ^ uVar24);
      local_220 = uVar8 ^ uVar5 ^ uVar16;
      local_218 = uVar9 ^ local_22c;
      local_22c = local_22c ^ uVar16;
      FUN_016f1b50((undefined1 (*) [16])&local_230);
      uVar16 = local_22c ^ local_220;
      local_22c = local_22c ^ local_224;
      uVar5 = local_224 ^ local_230;
      uVar9 = local_228 ^ local_21c ^ local_214;
      uVar8 = local_220 ^ local_228 ^ local_214;
      uVar7 = local_214 ^ uVar16;
      local_224 = local_230 ^ local_228 ^ local_21c;
      local_220 = local_22c ^ local_218;
      uVar10 = local_21c ^ uVar5;
      local_214 = uVar16 ^ local_218;
      local_22c = uVar5 ^ local_218;
      local_230 = ~uVar9;
      local_228 = ~uVar7;
      local_21c = uVar8;
      local_218 = uVar10;
      if (iVar21 != 1) {
        do {
          local_214 = local_2a0[-1] ^ local_214;
          uVar10 = uVar10 ^ local_2a0[-2];
          local_228 = local_228 ^ local_2a0[-6];
          local_22c = local_2a0[-7] ^ local_22c;
          local_230 = local_230 ^ local_2a0[-8];
          local_224 = local_224 ^ local_2a0[-5];
          local_220 = local_220 ^ local_2a0[-4];
          uVar8 = uVar8 ^ local_2a0[-3];
          local_2a0 = local_2a0 + -8;
          uVar24 = (uVar10 >> 4 & 0xf0f0f0f | (uVar10 & 0xf0f0f0f) << 4) ^ uVar10;
          uVar25 = (local_214 >> 4 & 0xf0f0f0f | (local_214 & 0xf0f0f0f) << 4) ^ local_214;
          uVar5 = (local_228 >> 4 & 0xf0f0f0f | (local_228 & 0xf0f0f0f) << 4) ^
                  local_228 ^ local_220 ^ uVar24 ^ uVar25;
          uVar31 = uVar24 ^ uVar25 ^ local_22c;
          uVar9 = (local_22c >> 4 & 0xf0f0f0f | (local_22c & 0xf0f0f0f) << 4) ^
                  local_22c ^ local_224 ^ uVar24;
          uVar24 = uVar24 ^ local_230;
          uVar16 = (local_230 >> 4 & 0xf0f0f0f | (local_230 & 0xf0f0f0f) << 4) ^
                   local_228 ^ local_230 ^ uVar25;
          uVar25 = (local_224 >> 4 & 0xf0f0f0f | (local_224 & 0xf0f0f0f) << 4) ^ local_224 ^ uVar8 ^
                   uVar25;
          uVar26 = (local_220 >> 4 & 0xf0f0f0f | (local_220 & 0xf0f0f0f) << 4) ^ uVar10 ^ local_220;
          uVar8 = (uVar8 >> 4 & 0xf0f0f0f | (uVar8 & 0xf0f0f0f) << 4) ^ local_214 ^ uVar8;
          uVar29 = uVar31 >> 2 & 0x3f3f3f3f | (uVar31 & 0x3030303) << 6;
          uVar7 = uVar5 >> 2 & 0x3f3f3f3f | (uVar5 & 0x3030303) << 6;
          uVar31 = uVar31 ^ uVar29;
          uVar13 = uVar24 >> 2 & 0x3f3f3f3f | (uVar24 & 0x3030303) << 6;
          uVar5 = uVar5 ^ uVar7;
          uVar24 = uVar24 ^ uVar13;
          uVar10 = uVar9 >> 2 & 0x3f3f3f3f | (uVar9 & 0x3030303) << 6;
          uVar9 = uVar9 ^ uVar10;
          uVar30 = uVar26 >> 2 & 0x3f3f3f3f | (uVar26 & 0x3030303) << 6;
          uVar26 = uVar26 ^ uVar30;
          uVar17 = uVar8 >> 2 & 0x3f3f3f3f | (uVar8 & 0x3030303) << 6;
          uVar8 = uVar8 ^ uVar17;
          uVar14 = uVar16 >> 2 & 0x3f3f3f3f | (uVar16 & 0x3030303) << 6;
          uVar16 = uVar16 ^ uVar14;
          uVar18 = uVar25 >> 2 & 0x3f3f3f3f | (uVar25 & 0x3030303) << 6;
          uVar25 = uVar25 ^ uVar18;
          uVar32 = (uVar31 >> 4 & 0xf0f0f0f | (uVar31 & 0xf0f0f0f) << 4) ^ uVar29 ^ uVar24 ^ uVar8;
          uVar7 = (uVar5 >> 4 & 0xf0f0f0f | (uVar5 & 0xf0f0f0f) << 4) ^ uVar7 ^ uVar9 ^ uVar8;
          uVar10 = (uVar9 >> 4 & 0xf0f0f0f | (uVar9 & 0xf0f0f0f) << 4) ^ uVar10 ^ uVar8 ^ uVar16;
          uVar30 = (uVar26 >> 4 & 0xf0f0f0f | (uVar26 & 0xf0f0f0f) << 4) ^ uVar30 ^ uVar25;
          uVar9 = (uVar8 >> 4 & 0xf0f0f0f | (uVar8 & 0xf0f0f0f) << 4) ^ uVar26 ^ uVar17;
          uVar24 = (uVar24 >> 4 & 0xf0f0f0f | (uVar24 & 0xf0f0f0f) << 4) ^ uVar13 ^ uVar8;
          uVar16 = (uVar16 >> 4 & 0xf0f0f0f | (uVar16 & 0xf0f0f0f) << 4) ^ uVar31 ^ uVar14;
          uVar29 = (uVar25 >> 4 & 0xf0f0f0f | (uVar25 & 0xf0f0f0f) << 4) ^ uVar5 ^ uVar18;
          uVar8 = (uVar32 & 0x30303030) >> 0x10 | (uVar32 & 0x30303030) << 0x10 |
                  (uVar32 & 0xc0c0c0c) >> 0x18 | (uVar32 & 0xc0c0c0c) << 8 | uVar32 & 0x3030303 |
                  (uVar32 & 0xc0c0c0c0) >> 8 | (uVar32 & 0xc0c0c0c0) << 0x18;
          uVar5 = (uVar7 & 0x30303030) >> 0x10 | (uVar7 & 0x30303030) << 0x10 |
                  (uVar7 & 0xc0c0c0c) >> 0x18 | (uVar7 & 0xc0c0c0c) << 8 | uVar7 & 0x3030303 |
                  (uVar7 & 0xc0c0c0c0) >> 8 | (uVar7 & 0xc0c0c0c0) << 0x18;
          uVar7 = (uVar10 & 0x30303030) >> 0x10 | (uVar10 & 0x30303030) << 0x10 |
                  (uVar10 & 0xc0c0c0c) >> 0x18 | (uVar10 & 0xc0c0c0c) << 8 | uVar10 & 0x3030303 |
                  (uVar10 & 0xc0c0c0c0) >> 8 | (uVar10 & 0xc0c0c0c0) << 0x18;
          uVar13 = (uVar30 & 0x30303030) >> 0x10 | (uVar30 & 0x30303030) << 0x10 |
                   (uVar30 & 0xc0c0c0c) >> 0x18 | (uVar30 & 0xc0c0c0c) << 8 | uVar30 & 0x3030303 |
                   (uVar30 & 0xc0c0c0c0) >> 8 | (uVar30 & 0xc0c0c0c0) << 0x18;
          uVar9 = (uVar9 & 0x30303030) >> 0x10 | (uVar9 & 0x30303030) << 0x10 |
                  (uVar9 & 0xc0c0c0c) >> 0x18 | (uVar9 & 0xc0c0c0c) << 8 | uVar9 & 0x3030303 |
                  (uVar9 & 0xc0c0c0c0) >> 8 | (uVar9 & 0xc0c0c0c0) << 0x18;
          uVar22 = uVar7 ^ uVar5;
          uVar24 = (uVar24 & 0xc0c0c0c) >> 0x18 | (uVar24 & 0xc0c0c0c) << 8 |
                   (uVar24 & 0x30303030) >> 0x10 | (uVar24 & 0x30303030) << 0x10 |
                   uVar24 & 0x3030303 | (uVar24 & 0xc0c0c0c0) >> 8 | (uVar24 & 0xc0c0c0c0) << 0x18;
          uVar25 = (uVar16 & 0x30303030) >> 0x10 | (uVar16 & 0x30303030) << 0x10 |
                   (uVar16 & 0xc0c0c0c) >> 0x18 | (uVar16 & 0xc0c0c0c) << 8 | uVar16 & 0x3030303 |
                   (uVar16 & 0xc0c0c0c0) >> 8 | (uVar16 & 0xc0c0c0c0) << 0x18;
          uVar33 = uVar8 ^ uVar5;
          uVar10 = (uVar29 & 0x30303030) >> 0x10 | (uVar29 & 0x30303030) << 0x10 |
                   (uVar29 & 0xc0c0c0c) >> 0x18 | (uVar29 & 0xc0c0c0c) << 8 | uVar29 & 0x3030303 |
                   (uVar29 & 0xc0c0c0c0) >> 8 | (uVar29 & 0xc0c0c0c0) << 0x18;
          uVar16 = uVar24 ^ uVar7;
          uVar8 = uVar7 ^ uVar13 ^ uVar8;
          uVar17 = ~(uVar33 ^ uVar9);
          uVar26 = uVar25 ^ uVar10;
          uVar10 = uVar10 ^ uVar16;
          uVar29 = uVar16 ^ uVar33;
          uVar33 = uVar33 ^ uVar13;
          uVar14 = uVar8 ^ uVar17;
          uVar30 = ~(uVar9 ^ uVar26);
          uVar18 = uVar14 ^ uVar29;
          uVar7 = uVar25 ^ uVar9 ^ uVar5 ^ uVar10;
          uVar5 = uVar24 ^ uVar26 ^ uVar18;
          uVar25 = uVar7 ^ uVar30;
          uVar32 = uVar16 ^ uVar13 ^ uVar25;
          uVar8 = uVar25 ^ uVar8;
          uVar26 = uVar33 ^ uVar17;
          uVar17 = uVar5 ^ uVar17;
          uVar10 = uVar10 ^ uVar5;
          uVar13 = uVar22 ^ uVar10;
          uVar23 = uVar7 ^ uVar17;
          uVar7 = uVar7 ^ uVar13;
          uVar24 = uVar14 & (uVar23 ^ uVar13) ^ uVar22 & uVar13;
          uVar5 = uVar25 & uVar32 ^ uVar29 ^ uVar7 ^ uVar29 & uVar7 ^ uVar24;
          uVar24 = (uVar26 ^ uVar32) & (uVar17 ^ uVar30) ^ uVar10 ^ uVar18 & uVar17 ^ uVar24;
          uVar10 = uVar26 & uVar23 ^ uVar22 & uVar13;
          uVar31 = uVar33 ^ uVar7 ^ uVar29 & uVar7 ^ (uVar25 ^ uVar33) & (uVar13 ^ uVar30) ^ uVar10;
          uVar10 = uVar8 & uVar30 ^ uVar26 ^ uVar23 ^ uVar18 & uVar17 ^ uVar10;
          uVar9 = uVar24 & uVar5;
          uVar24 = uVar24 ^ uVar10;
          uVar16 = (uVar5 ^ uVar31) & (uVar10 ^ uVar9);
          uVar19 = uVar16 ^ uVar31;
          uVar16 = (uVar9 ^ uVar16) & uVar31;
          uVar5 = uVar5 ^ uVar19 ^ uVar16;
          uVar10 = (uVar31 ^ uVar9) & uVar24 ^ uVar10;
          uVar34 = (uVar26 ^ uVar32) & uVar5;
          uVar24 = (uVar16 ^ uVar31 ^ uVar9) & uVar10 ^ uVar24;
          uVar31 = (uVar13 ^ uVar30) & uVar10;
          uVar9 = uVar32 & uVar24 ^ uVar31;
          uVar32 = uVar8 & uVar19 ^ uVar34;
          uVar12 = uVar5 ^ uVar24;
          uVar16 = uVar10 ^ uVar19;
          uVar7 = uVar7 & (uVar24 ^ uVar10);
          uVar29 = (uVar24 ^ uVar10) & uVar29;
          uVar20 = uVar17 & (uVar5 ^ uVar19) ^ uVar7;
          uVar14 = uVar14 & (uVar16 ^ uVar12);
          uVar27 = (uVar16 ^ uVar12) & (uVar23 ^ uVar13);
          uVar22 = uVar22 & uVar16 ^ uVar14;
          uVar8 = uVar30 & uVar19 ^ uVar29 ^ uVar20;
          uVar15 = uVar22 ^ uVar25 & uVar24;
          uVar7 = uVar13 & uVar16 ^ uVar7 ^ uVar27;
          uVar13 = uVar23 & uVar12 ^ uVar27 ^ uVar15;
          local_214 = uVar29 ^ uVar9 ^ uVar13;
          uVar15 = uVar15 ^ (uVar5 ^ uVar19) & uVar18 ^ uVar34;
          uVar13 = uVar13 ^ (uVar25 ^ uVar33) & uVar10 ^ uVar8;
          uVar5 = (uVar17 ^ uVar30) & uVar5 ^ uVar15;
          uVar16 = uVar25 & uVar24 ^ uVar7;
          uVar20 = uVar20 ^ uVar5;
          uVar9 = uVar8 ^ uVar22 ^ uVar9;
          uVar5 = uVar30 & uVar19 ^ uVar31 ^ uVar5;
          uVar8 = uVar14 ^ uVar12 & uVar26 ^ uVar16;
          uVar24 = ~local_214;
          uVar29 = ~uVar9;
          local_214 = local_214 ^ uVar16;
          uVar15 = uVar15 ^ uVar7;
          local_22c = uVar9 ^ uVar5 ^ uVar16 ^ uVar20;
          uVar7 = uVar32 ^ uVar13;
          uVar10 = ~(uVar13 ^ uVar8);
          local_230 = uVar32 ^ uVar8 ^ uVar15;
          local_224 = uVar7 ^ uVar29 ^ uVar10;
          uVar8 = uVar20 ^ uVar7 ^ uVar15;
          local_228 = ~(uVar24 ^ uVar20 ^ uVar15);
          uVar10 = uVar29 ^ uVar5 ^ uVar10;
          local_220 = ~(uVar24 ^ uVar5 ^ uVar16 ^ uVar20);
        } while (local_210 + 8 != local_2a0);
        local_21c = uVar8;
        local_218 = uVar10;
      }
      if (((undefined1 (*) [16])auStack_250 <= param_2) ||
         ((undefined1 (*) [16])(*param_2 + 4) <= (undefined1 (*) [16])auStack_250)) {
        uVar5 = ((local_224 ^ local_210[3] ^ (local_228 ^ local_210[2]) >> 1) & 0x55555555) << 1 ^
                local_228 ^ local_210[2];
        uVar16 = ((local_22c ^ local_210[1] ^ (local_230 ^ local_210[0]) >> 1) & 0x55555555) << 1 ^
                 local_230 ^ local_210[0];
        uVar7 = ((local_21c ^ local_1fc ^ (local_220 ^ local_200) >> 1) & 0x55555555) << 1 ^
                local_220 ^ local_200;
        uVar10 = ((local_214 ^ local_1f4 ^ (local_218 ^ local_1f8) >> 1) & 0x55555555) << 1 ^
                 local_218 ^ local_1f8;
        uVar8 = uVar16 & 0xff | uVar10 << 0x18 | (uVar5 & 0xff) << 8 | (uVar7 & 0xff) << 0x10;
        uVar9 = (uVar8 ^ uVar8 >> 0xc) & 0xf0f0;
        uVar8 = uVar8 ^ uVar9 ^ uVar9 << 0xc;
        uVar9 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
        if (param_2 <= (undefined1 (*) [16])auStack_250 ||
            (undefined1 (*) [16])auStack_24c <= param_2) {
          pauVar6 = (undefined1 (*) [16])(*param_2 + 4);
          *(uint *)*param_2 = uVar8 ^ uVar9 ^ uVar9 << 6;
          if (((undefined1 (*) [16])auStack_24c <= pauVar6) ||
             ((undefined1 (*) [16])(*param_2 + 8) <= (undefined1 (*) [16])auStack_24c)) {
            uVar8 = (uVar16 & 0xffff) >> 8 | (uVar10 >> 8) << 0x18 | uVar5 & 0xff00 |
                    (uVar7 & 0xff00) << 8;
            uVar9 = (uVar8 ^ uVar8 >> 0xc) & 0xf0f0;
            uVar8 = uVar8 ^ uVar9 ^ uVar9 << 0xc;
            uVar9 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
            if (pauVar6 <= (undefined1 (*) [16])auStack_24c ||
                (undefined1 (*) [16])auStack_248 <= pauVar6) {
              pauVar6 = (undefined1 (*) [16])(*param_2 + 8);
              *(uint *)(*param_2 + 4) = uVar8 ^ uVar9 ^ uVar9 << 6;
              if (((undefined1 (*) [16])auStack_248 <= pauVar6) ||
                 ((undefined1 (*) [16])(*param_2 + 0xc) <= (undefined1 (*) [16])auStack_248)) {
                uVar8 = (uVar16 & 0xffffff) >> 0x10 | (uVar10 >> 0x10) << 0x18 | uVar7 & 0xff0000 |
                        uVar5 >> 8 & 0xff00;
                uVar9 = (uVar8 ^ uVar8 >> 0xc) & 0xf0f0;
                uVar8 = uVar8 ^ uVar9 ^ uVar9 << 0xc;
                uVar9 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
                if (pauVar6 <= (undefined1 (*) [16])auStack_248 ||
                    (undefined1 (*) [16])auStack_244 <= pauVar6) {
                  pauVar6 = (undefined1 (*) [16])(*param_2 + 0xc);
                  *(uint *)(*param_2 + 8) = uVar8 ^ uVar9 ^ uVar9 << 6;
                  if (((undefined1 (*) [16])auStack_244 <= pauVar6) ||
                     (param_2 + 1 <= (undefined1 (*) [16])auStack_244)) {
                    uVar7 = uVar10 & 0xff000000 | uVar16 >> 0x18 | (uVar5 >> 0x18) << 8 |
                            (uVar7 >> 0x18) << 0x10;
                    uVar5 = (uVar7 ^ uVar7 >> 0xc) & 0xf0f0;
                    uVar7 = uVar7 ^ uVar5 ^ uVar5 << 0xc;
                    uVar5 = (uVar7 ^ uVar7 >> 6) & 0xcc00cc;
                    if (pauVar6 <= (undefined1 (*) [16])auStack_244 ||
                        (undefined1 (*) [16])&local_240 <= pauVar6) {
                      *(uint *)(*param_2 + 0xc) = uVar7 ^ uVar5 ^ uVar5 << 6;
                      if (iVar11 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
                        FUN_016d2b78();
                      }
                      return (undefined1 (*) [16])0x0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0,0x1710d98);
    (*pcVar2)();
  }
  if ((DAT_018dfe48 & 4) != 0) {
    uVar35 = *param_3;
    uVar36 = param_3[1];
    auVar39 = *param_1;
    uVar37 = param_3[2];
    uVar38 = param_3[3];
    pauVar6 = (undefined1 (*) [16])(param_3 + 4);
    iVar11 = *(int *)(param_3 + 0x1e) + -2;
    do {
      auVar40._8_8_ = uVar36;
      auVar40._0_8_ = uVar35;
      auVar39 = AESInvShiftRows(auVar39 ^ auVar40);
      auVar39 = AESSubBytes(auVar39);
      auVar39 = AESMixColumns(auVar39);
      uVar35 = *(undefined8 *)*pauVar6;
      uVar36 = *(undefined8 *)(*pauVar6 + 8);
      auVar3 = *pauVar6;
      pauVar28 = pauVar6 + 1;
      iVar21 = iVar11 + -2;
      auVar4._8_8_ = uVar38;
      auVar4._0_8_ = uVar37;
      auVar39 = AESInvShiftRows(auVar39 ^ auVar4);
      auVar39 = AESSubBytes(auVar39);
      auVar39 = AESMixColumns(auVar39);
      uVar37 = *(undefined8 *)*pauVar28;
      uVar38 = *(undefined8 *)(pauVar6[1] + 8);
      pauVar6 = pauVar6 + 2;
      bVar1 = 1 < iVar11;
      iVar11 = iVar21;
    } while (iVar21 != 0 && bVar1);
    auVar39 = AESInvShiftRows(auVar39 ^ auVar3);
    auVar39 = AESSubBytes(auVar39);
    auVar39 = AESMixColumns(auVar39);
    auVar3 = *pauVar6;
    auVar39 = AESInvShiftRows(auVar39 ^ *pauVar28);
    auVar39 = AESSubBytes(auVar39);
    *(longlong *)*param_2 = SUB168(auVar39 ^ auVar3,0);
    *(longlong *)(*param_2 + 8) = SUB168(auVar39 ^ auVar3,8);
    return param_1;
  }
  if ((DAT_018dfe48 & 1) != 0) {
    uVar35 = *(undefined8 *)*param_1;
    FUN_0178bc40((int)uVar35,(int)((ulonglong)uVar35 >> 0x20),(int)*(undefined8 *)(*param_1 + 8));
    pauVar6 = (undefined1 (*) [16])FUN_0178bc60();
    *extraout_r1 = uVar35;
    extraout_r1[1] = CONCAT44(extraout_s3,extraout_s2);
    return pauVar6;
  }
  FUN_017081a4(local_210 + 1,param_3,&PTR_018bc3f4,0);
  if (((undefined1 (*) [16])&local_230 <= param_1 || param_1 <= (undefined1 (*) [16])&local_240) &&
     (((undefined1 (*) [16])&local_240 <= param_1 ||
      (param_1 + 1 <= (undefined1 (*) [16])&local_240)))) {
    local_240 = *(uint *)*param_1;
    local_23c = *(uint *)(*param_1 + 4);
    local_238 = *(uint *)(*param_1 + 8);
    local_234 = *(uint *)(*param_1 + 0xc);
    uVar5 = (local_240 ^ local_240 >> 6) & 0xcc00cc;
    uVar7 = (local_23c ^ local_23c >> 6) & 0xcc00cc;
    uVar8 = local_240 ^ uVar5 ^ uVar5 << 6;
    uVar24 = local_23c ^ uVar7 ^ uVar7 << 6;
    uVar5 = (uVar8 ^ uVar8 >> 0xc) & 0xf0f0;
    uVar7 = (local_234 ^ local_234 >> 6) & 0xcc00cc;
    uVar8 = uVar8 ^ uVar5;
    uVar10 = uVar8 ^ uVar5 << 0xc;
    uVar5 = local_234 ^ uVar7 ^ uVar7 << 6;
    uVar9 = (local_238 ^ local_238 >> 6) & 0xcc00cc;
    uVar7 = (uVar24 ^ uVar24 >> 0xc) & 0xf0f0;
    uVar16 = local_238 ^ uVar9 ^ uVar9 << 6;
    uVar29 = uVar24 ^ uVar7 ^ uVar7 << 0xc;
    uVar7 = (uVar5 ^ uVar5 >> 0xc) & 0xf0f0;
    uVar5 = uVar5 ^ uVar7;
    uVar7 = uVar5 ^ uVar7 << 0xc;
    uVar9 = (uVar16 ^ uVar16 >> 0xc) & 0xf0f0;
    uVar16 = uVar16 ^ uVar9;
    uVar24 = uVar16 ^ uVar9 << 0xc;
    uVar9 = uVar8 & 0xff | uVar5 << 0x18 | (uVar29 & 0xff) << 8 | (uVar16 & 0xff) << 0x10;
    uVar8 = (uVar8 & 0xffff) >> 8 | (uVar7 >> 8) << 0x18 | uVar29 & 0xff00 | (uVar24 & 0xff00) << 8;
    uVar5 = (uVar10 & 0xffffff) >> 0x10 | (uVar7 >> 0x10) << 0x18 | uVar24 & 0xff0000 |
            uVar29 >> 8 & 0xff00;
    uVar7 = uVar7 & 0xff000000 | uVar10 >> 0x18 | (uVar29 >> 0x18) << 8 | (uVar24 >> 0x18) << 0x10;
    local_230 = uVar9 & 0x55555555;
    local_228 = uVar8 & 0x55555555;
    local_220 = uVar5 & 0x55555555;
    local_21c = uVar5 >> 1 & 0x55555555;
    local_22c = uVar9 >> 1 & 0x55555555;
    local_224 = uVar8 >> 1 & 0x55555555;
    local_218 = uVar7 & 0x55555555;
    local_214 = uVar7 >> 1 & 0x55555555;
    FUN_0170b0e8(local_210 + 1,*(undefined4 *)(param_3 + 0x1e),(undefined1 (*) [16])&local_230);
    if (((undefined1 (*) [16])auStack_250 <= param_2) ||
       ((undefined1 (*) [16])(*param_2 + 4) <= (undefined1 (*) [16])auStack_250)) {
      uVar5 = ((local_224 ^ local_228 >> 1) & 0x55555555) << 1 ^ local_228;
      uVar16 = ((local_22c ^ local_230 >> 1) & 0x55555555) << 1 ^ local_230;
      uVar7 = ((local_21c ^ local_220 >> 1) & 0x55555555) << 1 ^ local_220;
      uVar10 = ((local_214 ^ local_218 >> 1) & 0x55555555) << 1 ^ local_218;
      uVar8 = uVar16 & 0xff | uVar10 << 0x18 | (uVar5 & 0xff) << 8 | (uVar7 & 0xff) << 0x10;
      uVar9 = (uVar8 ^ uVar8 >> 0xc) & 0xf0f0;
      uVar8 = uVar8 ^ uVar9 ^ uVar9 << 0xc;
      uVar9 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
      if (param_2 <= (undefined1 (*) [16])auStack_250 || (undefined1 (*) [16])auStack_24c <= param_2
         ) {
        pauVar6 = (undefined1 (*) [16])(*param_2 + 4);
        *(uint *)*param_2 = uVar8 ^ uVar9 ^ uVar9 << 6;
        if (((undefined1 (*) [16])auStack_24c <= pauVar6) ||
           ((undefined1 (*) [16])(*param_2 + 8) <= (undefined1 (*) [16])auStack_24c)) {
          pauVar28 = (undefined1 (*) [16])auStack_24c;
          if (pauVar6 <= (undefined1 (*) [16])auStack_24c) {
            pauVar28 = (undefined1 (*) [16])0x0;
          }
          uVar8 = (uVar16 & 0xffff) >> 8 | (uVar10 >> 8) << 0x18 | uVar5 & 0xff00 |
                  (uVar7 & 0xff00) << 8;
          if ((undefined1 (*) [16])auStack_24c < pauVar6) {
            pauVar28 = (undefined1 (*) [16])&DAT_00000001;
          }
          uVar9 = (uVar8 ^ uVar8 >> 0xc) & 0xf0f0;
          uVar8 = uVar8 ^ uVar9 ^ uVar9 << 0xc;
          uVar9 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
          if ((undefined1 (*) [16])auStack_248 <= pauVar6) {
            pauVar28 = (undefined1 (*) [16])0x0;
          }
          if (pauVar28 == (undefined1 (*) [16])0x0) {
            pauVar6 = (undefined1 (*) [16])(*param_2 + 8);
            *(uint *)(*param_2 + 4) = uVar8 ^ uVar9 ^ uVar9 << 6;
            if (((undefined1 (*) [16])auStack_248 <= pauVar6) ||
               ((undefined1 (*) [16])(*param_2 + 0xc) <= (undefined1 (*) [16])auStack_248)) {
              uVar8 = (uVar16 & 0xffffff) >> 0x10 | (uVar10 >> 0x10) << 0x18 | uVar7 & 0xff0000 |
                      uVar5 >> 8 & 0xff00;
              uVar9 = (uVar8 ^ uVar8 >> 0xc) & 0xf0f0;
              uVar8 = uVar8 ^ uVar9 ^ uVar9 << 0xc;
              uVar9 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
              if (pauVar6 <= (undefined1 (*) [16])auStack_248 ||
                  (undefined1 (*) [16])auStack_244 <= pauVar6) {
                pauVar6 = (undefined1 (*) [16])(*param_2 + 0xc);
                *(uint *)(*param_2 + 8) = uVar8 ^ uVar9 ^ uVar9 << 6;
                if (((undefined1 (*) [16])auStack_244 <= pauVar6) ||
                   (param_2 + 1 <= (undefined1 (*) [16])auStack_244)) {
                  uVar5 = uVar10 & 0xff000000 | uVar16 >> 0x18 | (uVar5 >> 0x18) << 8 |
                          (uVar7 >> 0x18) << 0x10;
                  pauVar28 = (undefined1 (*) [16])auStack_244;
                  if (pauVar6 <= (undefined1 (*) [16])auStack_244) {
                    pauVar28 = (undefined1 (*) [16])0x0;
                  }
                  uVar7 = (uVar5 ^ uVar5 >> 0xc) & 0xf0f0;
                  if ((undefined1 (*) [16])auStack_244 < pauVar6) {
                    pauVar28 = (undefined1 (*) [16])&DAT_00000001;
                  }
                  uVar5 = uVar5 ^ uVar7 ^ uVar7 << 0xc;
                  if ((undefined1 (*) [16])&local_240 <= pauVar6) {
                    pauVar28 = (undefined1 (*) [16])0x0;
                  }
                  uVar7 = (uVar5 ^ uVar5 >> 6) & 0xcc00cc;
                  if (pauVar28 == (undefined1 (*) [16])0x0) {
                    *(uint *)(*param_2 + 0xc) = uVar5 ^ uVar7 ^ uVar7 << 6;
                    if (iVar11 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
                      FUN_016d2b78();
                    }
                    return (undefined1 (*) [16])0x0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0,0x170dd18);
  (*pcVar2)();
}

