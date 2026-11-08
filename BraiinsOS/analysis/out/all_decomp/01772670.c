// FUN_01772670 @ 01772670 size=1004 calls_out=5 calls_in=2
// strings: aws_lc_0_39_0_SHA384_Final | /aws-lc/crypto/fipsmodule/sha/sha512.c | sha->md_len == SHA384_DIGEST_LENGTH

void FUN_01772670(uint *param_1,uint *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint auStack_40 [2];
  uint auStack_38 [2];
  uint auStack_30 [2];
  uint uStack_28;
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  if (param_2[0x35] != 0x30) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("sha->md_len == SHA384_DIGEST_LENGTH","/aws-lc/crypto/fipsmodule/sha/sha512.c",0xe1
                 ,"aws_lc_0_39_0_SHA384_Final");
  }
  uVar4 = param_2[0x34];
  puVar5 = param_2 + 0x14;
  *(undefined1 *)((int)puVar5 + uVar4) = 0x80;
  uVar4 = uVar4 + 1;
  if (uVar4 < 0x71) {
    if (uVar4 != 0x70) {
      FUN_016dd606((int)puVar5 + uVar4,0,0x70 - uVar4);
    }
  }
  else {
    if (uVar4 != 0x80) {
      FUN_016dd606((int)puVar5 + uVar4,0,0x80 - uVar4);
    }
    if ((DAT_018dfe48 & 1) == 0) {
      FUN_0178a420();
    }
    else {
      FUN_0178a8e0(param_2,puVar5,1);
    }
    FUN_016dd606(puVar5,0,0x70);
  }
  puVar6 = param_2 + 0x30;
  if ((auStack_40 <= puVar6) || (param_2 + 0x32 <= auStack_40)) {
    uVar3 = param_2[0x12];
    uVar4 = param_2[0x13];
    if (auStack_38 <= puVar6 || puVar6 <= auStack_40) {
      param_2[0x30] =
           uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18
      ;
      puVar6 = param_2 + 0x32;
      param_2[0x31] =
           uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18
      ;
      if ((auStack_38 <= puVar6) || (param_2 + 0x34 <= auStack_38)) {
        uVar3 = param_2[0x10];
        uVar4 = param_2[0x11];
        if (puVar6 <= auStack_38 || auStack_30 <= puVar6) {
          param_2[0x33] =
               uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
               uVar3 >> 0x18;
          param_2[0x32] =
               uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 0x18;
          if ((DAT_018dfe48 & 1) == 0) {
            FUN_0178a420();
            uVar4 = extraout_r1;
          }
          else {
            FUN_0178a8e0(param_2,puVar5,1);
            uVar4 = extraout_r1_00;
          }
          if (param_1 == (uint *)0x0) {
            uVar2 = 0;
LAB_0177297c:
            if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2b78(uVar2,uVar4,local_24 ^ DAT_018ddaf8,0);
            }
            return;
          }
          if ((auStack_30 <= param_1) || (param_1 + 2 <= auStack_30)) {
            uVar4 = *param_2;
            uVar3 = param_2[1];
            if (&uStack_28 <= param_1 || param_1 <= auStack_30) {
              *param_1 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                         uVar3 >> 0x18;
              puVar5 = param_1 + 2;
              param_1[1] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8
                           | uVar4 >> 0x18;
              if ((auStack_30 <= puVar5) || (param_1 + 4 <= auStack_30)) {
                uVar4 = param_2[2];
                uVar3 = param_2[3];
                if (puVar5 <= auStack_30 || &uStack_28 <= puVar5) {
                  param_1[2] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                               (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
                  puVar5 = param_1 + 4;
                  param_1[3] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                               (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
                  if ((auStack_30 <= puVar5) || (param_1 + 6 <= auStack_30)) {
                    uVar4 = param_2[4];
                    uVar3 = param_2[5];
                    if (puVar5 <= auStack_30 || &uStack_28 <= puVar5) {
                      param_1[4] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                   (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
                      puVar5 = param_1 + 6;
                      param_1[5] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                   (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
                      if ((auStack_30 <= puVar5) || (param_1 + 8 <= auStack_30)) {
                        uVar4 = param_2[6];
                        uVar3 = param_2[7];
                        if (puVar5 <= auStack_30 || &uStack_28 <= puVar5) {
                          param_1[6] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                       (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
                          puVar5 = param_1 + 8;
                          param_1[7] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                       (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
                          if ((auStack_30 <= puVar5) || (param_1 + 10 <= auStack_30)) {
                            uVar4 = param_2[8];
                            uVar3 = param_2[9];
                            if (puVar5 <= auStack_30 || &uStack_28 <= puVar5) {
                              param_1[8] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                           (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
                              puVar5 = param_1 + 10;
                              param_1[9] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
                              if ((auStack_30 <= puVar5) || (param_1 + 0xc <= auStack_30)) {
                                uVar4 = param_2[0xb];
                                uVar3 = param_2[10];
                                if (puVar5 <= auStack_30 || &uStack_28 <= puVar5) {
                                  uVar2 = 1;
                                  param_1[10] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                                (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
                                  param_1[0xb] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                                 (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
                                  goto LAB_0177297c;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  pcVar1 = (code *)software_udf(0,0x1772a58);
  (*pcVar1)();
}

