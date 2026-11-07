// FUN_017736bc @ 017736bc size=1372 calls_out=5 calls_in=4
// strings: sha512_final_impl | /aws-lc/crypto/fipsmodule/sha/sha512.c | md_len % 8 == 0 || md_len == SHA512_224_DIGEST_LENGTH

void FUN_017736bc(uint *param_1,uint *param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *extraout_r1;
  uint uVar5;
  uint *puVar6;
  uint *extraout_r1_00;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  uint auStack_50 [2];
  uint auStack_48 [2];
  uint auStack_40 [2];
  uint uStack_38;
  uint uStack_34;
  uint auStack_30 [2];
  uint uStack_28;
  uint local_24;
  
  puVar6 = param_2 + 0x14;
  uVar8 = param_2[0x35];
  local_24 = DAT_018ddaf8;
  uVar7 = param_2[0x34];
  *(undefined1 *)((int)puVar6 + uVar7) = 0x80;
  uVar7 = uVar7 + 1;
  if (uVar7 < 0x71) {
    if (uVar7 != 0x70) {
      FUN_016dd606((int)puVar6 + uVar7,0,0x70 - uVar7);
    }
  }
  else {
    if (uVar7 != 0x80) {
      FUN_016dd606((int)puVar6 + uVar7,0,0x80 - uVar7);
    }
    if ((DAT_018dfe48 & 1) == 0) {
      FUN_0178a420();
    }
    else {
      FUN_0178a8e0(param_2,puVar6,1);
    }
    FUN_016dd606(puVar6,0,0x70);
  }
  puVar9 = param_2 + 0x30;
  if ((auStack_50 <= puVar9) || (param_2 + 0x32 <= auStack_50)) {
    uVar4 = param_2[0x12];
    uVar7 = param_2[0x13];
    if (auStack_48 <= puVar9 || puVar9 <= auStack_50) {
      param_2[0x30] =
           uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
      ;
      puVar9 = param_2 + 0x32;
      param_2[0x31] =
           uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18
      ;
      if ((auStack_48 <= puVar9) || (param_2 + 0x34 <= auStack_48)) {
        uVar4 = param_2[0x10];
        uVar7 = param_2[0x11];
        if (auStack_40 <= puVar9 || puVar9 <= auStack_48) {
          param_2[0x32] =
               uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
               uVar7 >> 0x18;
          param_2[0x33] =
               uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 0x18;
          if ((DAT_018dfe48 & 1) == 0) {
            FUN_0178a420();
            puVar6 = extraout_r1;
          }
          else {
            FUN_0178a8e0(param_2,puVar6,1);
            puVar6 = extraout_r1_00;
          }
          if (param_1 == (uint *)0x0) {
            uVar3 = 0;
          }
          else {
            if ((uVar8 & 7) != 0 && uVar8 != 0x1c) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2c94("md_len % 8 == 0 || md_len == SHA512_224_DIGEST_LENGTH",
                           "/aws-lc/crypto/fipsmodule/sha/sha512.c",0x155,"sha512_final_impl");
            }
            uVar7 = uVar8 >> 3;
            if (uVar7 != 0) {
              if ((param_1 < auStack_40) && (auStack_40 < param_1 + 2)) goto LAB_01773aac;
              uVar5 = *param_2;
              uVar4 = param_2[1];
              puVar6 = (uint *)(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
              if (param_1 < &uStack_38 && auStack_40 < param_1) goto LAB_01773aac;
              *param_1 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                         uVar4 >> 0x18;
              param_1[1] = (uint)puVar6;
              if (uVar7 != 1) {
                puVar9 = param_1 + 2;
                if ((puVar9 < auStack_40) && (auStack_40 < param_1 + 4)) goto LAB_01773aac;
                uVar5 = param_2[2];
                uVar4 = param_2[3];
                puVar6 = (uint *)(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                  (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
                if (puVar9 < &uStack_38 && auStack_40 < puVar9) goto LAB_01773aac;
                param_1[2] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                             (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
                param_1[3] = (uint)puVar6;
                if (uVar7 != 2) {
                  puVar6 = param_1 + 4;
                  if ((puVar6 < auStack_40) && (auStack_40 < param_1 + 6)) goto LAB_01773aac;
                  uVar5 = param_2[4];
                  uVar4 = param_2[5];
                  if (puVar6 < &uStack_38 && auStack_40 < puVar6) goto LAB_01773aac;
                  param_1[5] = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                               (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
                  puVar6 = param_1 + 6;
                  param_1[4] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                               (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
                  if (uVar7 == 3) {
                    if (uVar8 == 0x1c) {
                      uVar7 = param_2[7];
                      if ((&uStack_38 < &uStack_28 && auStack_30 < &uStack_38) ||
                         (((puVar6 < &uStack_38 && (&uStack_38 < param_1 + 7)) ||
                          (&uStack_38 < puVar6 && puVar6 < &uStack_34)))) goto LAB_01773aac;
                      param_1[6] = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                   (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
                    }
                  }
                  else {
                    if ((puVar6 < auStack_40) && (auStack_40 < param_1 + 8)) goto LAB_01773aac;
                    bVar10 = puVar6 < &uStack_38;
                    uVar4 = param_2[6];
                    bVar1 = auStack_40 < puVar6;
                    uVar8 = param_2[7];
                    puVar6 = (uint *)(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
                    if (bVar1 && bVar10) goto LAB_01773aac;
                    param_1[6] = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                 (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
                    param_1[7] = (uint)puVar6;
                    if (uVar7 != 4) {
                      puVar9 = param_1 + 8;
                      if ((puVar9 < auStack_40) && (auStack_40 < param_1 + 10)) goto LAB_01773aac;
                      uVar4 = param_2[8];
                      uVar8 = param_2[9];
                      puVar6 = (uint *)(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                        (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
                      if (auStack_40 < puVar9 && puVar9 < &uStack_38) goto LAB_01773aac;
                      param_1[8] = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                   (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
                      param_1[9] = (uint)puVar6;
                      if (uVar7 != 5) {
                        puVar9 = param_1 + 10;
                        if ((puVar9 < auStack_40) && (auStack_40 < param_1 + 0xc))
                        goto LAB_01773aac;
                        uVar4 = param_2[10];
                        uVar8 = param_2[0xb];
                        puVar6 = (uint *)(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
                        if (auStack_40 < puVar9 && puVar9 < &uStack_38) goto LAB_01773aac;
                        param_1[10] = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                      (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
                        param_1[0xb] = (uint)puVar6;
                        if (uVar7 != 6) {
                          puVar9 = param_1 + 0xc;
                          if ((puVar9 < auStack_40) && (auStack_40 < param_1 + 0xe))
                          goto LAB_01773aac;
                          uVar4 = param_2[0xc];
                          uVar8 = param_2[0xd];
                          puVar6 = (uint *)(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
                          if (auStack_40 < puVar9 && puVar9 < &uStack_38) goto LAB_01773aac;
                          param_1[0xc] = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                         (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
                          param_1[0xd] = (uint)puVar6;
                          if (uVar7 != 7) {
                            puVar9 = param_1 + 0xe;
                            if ((puVar9 < auStack_40) && (auStack_40 < param_1 + 0x10))
                            goto LAB_01773aac;
                            uVar8 = param_2[0xf];
                            uVar4 = param_2[0xe];
                            puVar6 = (uint *)(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                              (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18);
                            if (auStack_40 < puVar9 && puVar9 < &uStack_38) goto LAB_01773aac;
                            param_1[0xe] = (uint)puVar6;
                            param_1[0xf] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
                            if (uVar7 != 8) goto LAB_01773aac;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar3 = 1;
          }
          if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_016d2b78(uVar3,puVar6,local_24 ^ DAT_018ddaf8,0);
          }
          return;
        }
      }
    }
  }
LAB_01773aac:
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0,0x1773aac);
  (*pcVar2)();
}

