// FUN_01752668 @ 01752668 size=3248 calls_out=44 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c

ulonglong FUN_01752668(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar21;
  undefined4 *puVar20;
  int iVar22;
  undefined4 uVar23;
  longlong lVar24;
  ulonglong uVar25;
  int local_44;
  int local_40;
  uint local_2c;
  
  if ((*param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x24), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x017526a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar25 = (*UNRECOVERED_JUMPTABLE)();
    return uVar25;
  }
  if ((param_1[1] == 0) || (param_1[3] == 0)) {
    FUN_016e9cd0(4,0,0x90,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x1e9);
  }
  else {
    iVar1 = FUN_017184a8();
    if (iVar1 != 0) {
      FUN_017185b4();
      iVar2 = FUN_017186b0(iVar1);
      iVar3 = FUN_017186b0(iVar1);
      if (iVar3 != 0 && iVar2 != 0) {
        iVar4 = FUN_01714f1c(param_1[1]);
        if (param_4 != iVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("len == BN_num_bytes(rsa->n)","/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",
                       0x200,"aws_lc_0_39_0_rsa_default_private_transform");
        }
        iVar4 = FUN_017150f4(param_3,param_4,iVar2);
        if ((((iVar4 != 0) && (iVar4 = FUN_017186b0(iVar1), iVar4 != 0)) &&
            (iVar5 = FUN_017147ac(iVar4,param_1[1]), iVar5 != 0)) &&
           (iVar5 = FUN_01717ee0(iVar4,1), iVar5 != 0)) {
          iVar4 = FUN_01715744(iVar2,iVar4);
          if (((iVar4 < 0) && (iVar4 = FUN_01717e5c(iVar2), iVar4 == 0)) &&
             (iVar4 = FUN_01718124(iVar2), iVar4 == 0)) {
            local_2c = FUN_01722348(param_1,iVar1);
            if (local_2c != 0) {
              uVar13 = param_1[0xc] & 0x48;
              local_40 = 0;
              if (param_1[2] == 0) {
                local_44 = 0;
                if (uVar13 == 0) {
                  uVar9 = 0x82;
                  uVar23 = 0x225;
                  goto LAB_01751ca8;
                }
LAB_01751afc:
                if (((param_1[4] == 0) || (param_1[5] == 0)) ||
                   ((param_1[2] == 0 ||
                    ((((param_1[6] == 0 || (param_1[7] == 0)) || (param_1[8] == 0)) ||
                     ((iVar4 = FUN_0171cb40(param_1[5],param_1[0x16]), iVar4 == 0 ||
                      (iVar4 = FUN_0171cb40(param_1[4],param_1[0x17]), iVar4 == 0)))))))) {
                  iVar4 = FUN_01721bd8(iVar3,iVar2,param_1[0x18],param_1[1],iVar1,param_1[0x15]);
                  if (iVar4 == 0) goto LAB_01751cdc;
LAB_01751b78:
                  if ((param_1[2] != 0) &&
                     (((iVar4 = FUN_017186b0(iVar1), iVar4 == 0 ||
                       (iVar5 = FUN_01721398(iVar4,iVar3,param_1[2],param_1[1],iVar1,param_1[0x15]),
                       iVar5 == 0)) || (iVar2 = FUN_017182bc(iVar4,iVar2), iVar2 == 0)))) {
                    FUN_016e9cd0(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x253);
                    goto LAB_01751cdc;
                  }
                  if ((uVar13 == 0) &&
                     (iVar2 = FUN_0174e638(iVar3,local_44,param_1[0x15],iVar1), iVar2 == 0))
                  goto LAB_01751cdc;
                  if (*(int *)(iVar3 + 4) != *(int *)(param_1[0x15] + 0x18)) {
                    /* WARNING: Subroutine does not return */
                    FUN_016d2c94("result->width == rsa->mont_n->N.width",
                                 "/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x262,
                                 "aws_lc_0_39_0_rsa_default_private_transform");
                  }
                  FUN_017151c0(iVar3,param_4);
                  iVar2 = FUN_01715614(param_2,param_4,iVar3);
                  if (iVar2 == 0) {
                    FUN_016e9cd0(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x265);
                    goto LAB_01751cdc;
                  }
                }
                else {
                  if (param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_016d2c94("rsa->n != NULL","/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x299,
                                 "mod_exp");
                  }
                  if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_016d2c94("rsa->e != NULL","/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x29a,
                                 "mod_exp");
                  }
                  if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_016d2c94("rsa->d != NULL","/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x29b,
                                 "mod_exp");
                  }
                  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_016d2c94("rsa->p != NULL","/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x29c,
                                 "mod_exp");
                  }
                  if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_016d2c94("rsa->q != NULL","/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x29d,
                                 "mod_exp");
                  }
                  if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_016d2c94("rsa->dmp1 != NULL","/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",
                                 0x29e,"mod_exp");
                  }
                  if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_016d2c94("rsa->dmq1 != NULL","/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",
                                 0x29f,"mod_exp");
                  }
                  if (param_1[8] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_016d2c94("rsa->iqmp != NULL","/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",
                                 0x2a0,"mod_exp");
                  }
                  FUN_017185b4(iVar1);
                  iVar4 = FUN_017186b0(iVar1);
                  iVar5 = FUN_017186b0(iVar1);
                  iVar7 = FUN_017186b0(iVar1);
                  if ((iVar7 != 0 && (iVar5 != 0 && iVar4 != 0)) &&
                     (iVar8 = FUN_01722348(param_1,iVar1), iVar8 != 0)) {
                    iVar16 = param_1[0x15];
                    iVar10 = param_1[0x16];
                    iVar17 = iVar16 + 0x14;
                    iVar11 = param_1[0x17];
                    iVar8 = FUN_01715744(iVar2,iVar17);
                    if (-1 < iVar8) {
                    /* WARNING: Subroutine does not return */
                      FUN_016d2c94("constant_time_declassify_int(aws_lc_0_39_0_BN_ucmp(I, n) < 0)",
                                   "/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",700,"mod_exp");
                    }
                    iVar22 = iVar10 + 0x14;
                    iVar12 = param_1[0x17];
                    iVar8 = FUN_0171cb40(iVar10 + 0x14,iVar12);
                    if (iVar8 == 0) {
LAB_01752544:
                      FUN_016e9cd0(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x280);
                    }
                    else {
                      iVar8 = FUN_0171c9d0(iVar4,iVar2,iVar12,iVar1);
                      if ((iVar8 != 0) &&
                         (iVar8 = FUN_0171decc(iVar4,iVar4,iVar12,iVar1), iVar8 != 0)) {
                        iVar10 = param_1[0x16];
                        iVar8 = FUN_0171cb40(iVar11 + 0x14,iVar10);
                        if (iVar8 == 0) goto LAB_01752544;
                        iVar8 = FUN_0171c9d0(iVar5,iVar2,iVar10,iVar1);
                        if (((iVar8 != 0) &&
                            (iVar8 = FUN_0171decc(iVar5,iVar5,iVar10,iVar1), iVar8 != 0)) &&
                           (iVar5 = FUN_0172221c(iVar7,iVar4,param_1[0x1a],iVar11 + 0x14,
                                                 param_1[0x17],iVar3,iVar5,param_1[0x19],iVar22,
                                                 param_1[0x16],iVar1), iVar5 != 0)) {
                          iVar8 = param_1[0x16];
                          iVar5 = FUN_0171cb40(iVar11 + 0x14,iVar8);
                          if (iVar5 == 0) goto LAB_01752544;
                          iVar5 = FUN_0171c9d0(iVar4,iVar7,iVar8,iVar1);
                          if ((((iVar5 != 0) &&
                               (iVar5 = FUN_0171decc(iVar4,iVar4,iVar8,iVar1), iVar5 != 0)) &&
                              ((iVar4 = FUN_0171b5e8(iVar3,iVar3,iVar4,iVar22,iVar1), iVar4 != 0 &&
                               ((iVar4 = FUN_0171dce4(iVar3,iVar3,param_1[0x1b],param_1[0x16],iVar1)
                                , iVar4 != 0 &&
                                (iVar4 = FUN_0171d5cc(iVar3,iVar3,iVar11 + 0x14,iVar1), iVar4 != 0))
                               )))) && (iVar4 = FUN_0171a278(iVar3,iVar3,iVar7), iVar4 != 0)) {
                            iVar4 = FUN_01715760(iVar3,iVar17);
                            if (-1 < iVar4) {
                    /* WARNING: Subroutine does not return */
                              FUN_016d2c94("constant_time_declassify_int(aws_lc_0_39_0_BN_cmp(r0, n) < 0)"
                                           ,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x2df,
                                           "mod_exp");
                            }
                            uVar9 = FUN_01714f1c(iVar17);
                            FUN_017151c0(iVar3,uVar9);
                            iVar4 = FUN_01714d30(iVar3,*(undefined4 *)(iVar16 + 0x18));
                            FUN_01718904(iVar1);
                            if (iVar4 != 0) goto LAB_01751b78;
                            goto LAB_01751cdc;
                          }
                        }
                      }
                    }
                  }
                  FUN_01718904(iVar1);
LAB_01751cdc:
                  local_2c = 0;
                }
                FUN_01718904(iVar1);
                FUN_017184e8(iVar1);
                if (local_44 == 0) goto LAB_01751a28;
              }
              else {
                if (uVar13 != 0) {
                  local_44 = 0;
                  goto LAB_01751afc;
                }
                if (param_1[0x15] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_016d2c94("rsa->mont_n != NULL","/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",199,
                               "rsa_blinding_get");
                }
                lVar24 = FUN_017823b4();
                FUN_01781e90(param_1 + 0xd);
                uVar14 = param_1[0x1c];
                if (lVar24 != CONCAT44(param_1[0x21],param_1[0x20])) {
                  if (uVar14 != 0) {
                    uVar18 = 0;
                    do {
                      if (*(char *)(param_1[0x1e] + uVar18) != '\0') {
                    /* WARNING: Subroutine does not return */
                        FUN_016d2c94("rsa->blindings_inuse[i] == 0",
                                     "/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0xd3,
                                     "rsa_blinding_get");
                      }
                      iVar4 = uVar18 * 4;
                      uVar18 = uVar18 + 1;
                      FUN_0174e438(*(undefined4 *)(param_1[0x1d] + iVar4));
                      uVar14 = param_1[0x1c];
                    } while (uVar18 < uVar14);
                  }
                  *(longlong *)(param_1 + 0x20) = lVar24;
                }
                if (uVar14 == 0) {
                  uVar18 = 0;
LAB_01751e6c:
                  if (0x3ff < uVar18) {
                    uVar18 = 0x400;
                  }
                  if (uVar18 == 0) {
                    uVar18 = 1;
                  }
                  iVar4 = FUN_0177aa28(uVar18,4);
                  iVar5 = FUN_0177a6c0(uVar18);
                  if (iVar5 != 0 && iVar4 != 0) {
                    uVar14 = param_1[0x1c];
                    if ((uVar14 & 0x3fffffff) != 0) {
                      FUN_01707ff4(iVar4,param_1[0x1d]);
                      uVar14 = param_1[0x1c];
                    }
                    uVar15 = 0;
                    if (uVar14 == 0) {
LAB_01751ef0:
                      piVar19 = (int *)(iVar4 + uVar15 * 4);
                      do {
                        iVar7 = FUN_0174e3b8();
                        *piVar19 = iVar7;
                        if (iVar7 == 0) {
                          if ((uint)param_1[0x1c] < uVar15) {
                            puVar20 = (undefined4 *)(iVar4 + param_1[0x1c] * 4);
                            do {
                              puVar21 = puVar20 + 1;
                              FUN_0174e374(*puVar20);
                              puVar20 = puVar21;
                            } while ((undefined4 *)(iVar4 + uVar15 * 4) != puVar21);
                          }
                          goto LAB_01751f58;
                        }
                        uVar15 = uVar15 + 1;
                        piVar19 = piVar19 + 1;
                      } while (uVar18 != uVar15);
                      uVar15 = param_1[0x1c];
                    }
                    else {
                      FUN_01707ff4(iVar5,param_1[0x1e]);
                      uVar15 = param_1[0x1c];
                      if (uVar15 < uVar18) goto LAB_01751ef0;
                    }
                    FUN_016dd606(iVar5 + uVar15,0,uVar18 - uVar15);
                    *(undefined1 *)(iVar5 + param_1[0x1c]) = 1;
                    local_40 = param_1[0x1c];
                    if (local_40 == 0x400) {
                    /* WARNING: Subroutine does not return */
                      FUN_016d2c94("*index_used != MAX_BLINDINGS_PER_RSA",
                                   "/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x111,
                                   "rsa_blinding_get");
                    }
                    local_44 = *(int *)(iVar4 + local_40 * 4);
                    FUN_0177aafc(param_1[0x1d]);
                    param_1[0x1d] = iVar4;
                    FUN_0177aafc(param_1[0x1e]);
                    param_1[0x1e] = iVar5;
                    param_1[0x1c] = uVar18;
                    goto LAB_01751de0;
                  }
LAB_01751f58:
                  FUN_0177aafc(iVar5);
                  FUN_0177aafc(iVar4);
                  FUN_01781ef0(param_1 + 0xd);
LAB_01751f70:
                  uVar23 = 0x22c;
                  goto LAB_01751d10;
                }
                puVar6 = (undefined1 *)FUN_016dd48a(param_1[0x1e],0,uVar14);
                if (puVar6 == (undefined1 *)0x0) {
                  if (uVar14 < 0x400) {
                    uVar18 = uVar14 << 1;
                    uVar15 = uVar18;
                    if (0x3ff < uVar18) {
                      uVar15 = 0x400;
                    }
                    if (uVar15 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                      FUN_016d2c94("new_num_blindings > rsa->num_blindings",
                                   "/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0xf6,
                                   "rsa_blinding_get");
                    }
                    goto LAB_01751e6c;
                  }
                  local_44 = FUN_0174e3b8();
                  local_40 = 0x400;
                }
                else {
                  *puVar6 = 1;
                  local_40 = (int)puVar6 - param_1[0x1e];
                  local_44 = *(int *)(param_1[0x1d] + local_40 * 4);
                }
LAB_01751de0:
                FUN_01781ef0(param_1 + 0xd);
                if (local_44 == 0) goto LAB_01751f70;
                iVar4 = FUN_0174e45c(iVar2,local_44,param_1[2],param_1[0x15],iVar1);
                if (iVar4 != 0) goto LAB_01751afc;
                FUN_01718904(iVar1);
                FUN_017184e8(iVar1);
                local_2c = 0;
              }
              if (local_40 != 0x400) {
                FUN_01781e90(param_1 + 0xd);
                *(undefined1 *)(param_1[0x1e] + local_40) = 0;
                FUN_01781ef0(param_1 + 0xd);
                return (ulonglong)local_2c;
              }
              FUN_0174e374(local_44);
              goto LAB_01751a28;
            }
            uVar23 = 0x215;
LAB_01751d10:
            uVar9 = 0x44;
          }
          else {
            uVar23 = 0x210;
            uVar9 = 0x73;
          }
LAB_01751ca8:
          FUN_016e9cd0(4,0,uVar9,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",uVar23);
        }
      }
      FUN_01718904(iVar1);
      FUN_017184e8(iVar1);
    }
  }
  local_2c = 0;
LAB_01751a28:
  return (ulonglong)local_2c;
}

