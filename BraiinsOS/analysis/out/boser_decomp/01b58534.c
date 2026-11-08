// FUN_01b58534 @ 01b58534 size=92 calls_out=0 calls_in=2
// strings: 

ulonglong FUN_01b58534(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  
  if ((*param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x24), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01b58570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar24 = (*UNRECOVERED_JUMPTABLE)();
    return uVar24;
  }
  if ((param_1[1] == 0) || (param_1[3] == 0)) {
    FUN_01b053d4(4,0,0x90,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x1e9);
  }
  else {
    iVar1 = FUN_01b2e788();
    if (iVar1 != 0) {
      FUN_01b2e894();
      iVar2 = FUN_01b2e970(iVar1);
      iVar3 = FUN_01b2e970(iVar1);
      if (iVar3 == 0 || iVar2 == 0) {
LAB_01b57b34:
        iVar4 = 0;
        iVar6 = 0;
        uVar19 = 0;
      }
      else {
        iVar4 = FUN_01b2b938(param_1[1]);
        if (param_4 != iVar4) {
          uVar13 = 0x200;
          pcVar14 = "aws_lc_0_39_0_rsa_default_private_transform";
          pcVar5 = "len == BN_num_bytes(rsa->n)";
          goto LAB_01b57aa8;
        }
        iVar4 = FUN_01b2ba40(param_3,param_4,iVar2);
        if ((((iVar4 == 0) || (iVar4 = FUN_01b2e970(iVar1), iVar4 == 0)) ||
            (iVar6 = FUN_01b2b33c(iVar4,param_1[1]), iVar6 == 0)) ||
           (iVar6 = FUN_01b2e358(iVar4,1), iVar6 == 0)) goto LAB_01b57b34;
        iVar4 = FUN_01b2be1c(iVar2,iVar4);
        if (((-1 < iVar4) || (iVar4 = FUN_01b2e300(iVar2), iVar4 != 0)) ||
           (iVar4 = FUN_01b2e54c(iVar2), iVar4 != 0)) {
          uVar25 = 0x210;
          uVar13 = 0x73;
LAB_01b57b2c:
          FUN_01b053d4(4,0,uVar13,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",uVar25);
          goto LAB_01b57b34;
        }
        uVar7 = FUN_01b36d74(param_1,iVar1);
        if (uVar7 == 0) {
          uVar25 = 0x215;
          uVar13 = 0x44;
          goto LAB_01b57b2c;
        }
        uVar15 = param_1[0xc] & 0x48;
        iVar4 = 0;
        if (param_1[2] == 0) {
          iVar6 = 0;
          if (uVar15 == 0) {
            uVar25 = 0x225;
            uVar13 = 0x82;
            goto LAB_01b57b2c;
          }
LAB_01b57ed4:
          if (((param_1[4] != 0) && (param_1[5] != 0)) &&
             ((param_1[2] != 0 &&
              ((((param_1[6] != 0 && (param_1[7] != 0)) && (param_1[8] != 0)) &&
               ((iVar9 = FUN_01b325fc(param_1[5],param_1[0x16]), iVar9 != 0 &&
                (iVar9 = FUN_01b325fc(param_1[4],param_1[0x17]), iVar9 != 0)))))))) {
            if (param_1[1] == 0) {
              uVar13 = 0x299;
              pcVar14 = "mod_exp";
              pcVar5 = "rsa->n != NULL";
              goto LAB_01b57aa8;
            }
            if (param_1[2] == 0) {
              uVar13 = 0x29a;
              pcVar14 = "mod_exp";
              pcVar5 = "rsa->e != NULL";
              goto LAB_01b57aa8;
            }
            if (param_1[3] == 0) {
              uVar13 = 0x29b;
              pcVar14 = "mod_exp";
              pcVar5 = "rsa->d != NULL";
              goto LAB_01b57aa8;
            }
            if (param_1[4] == 0) {
              uVar13 = 0x29c;
              pcVar14 = "mod_exp";
              pcVar5 = "rsa->p != NULL";
              goto LAB_01b57aa8;
            }
            if (param_1[5] == 0) {
              uVar13 = 0x29d;
              pcVar14 = "mod_exp";
              pcVar5 = "rsa->q != NULL";
              goto LAB_01b57aa8;
            }
            if (param_1[6] == 0) {
              uVar13 = 0x29e;
              pcVar14 = "mod_exp";
              pcVar5 = "rsa->dmp1 != NULL";
              goto LAB_01b57aa8;
            }
            if (param_1[7] == 0) {
              uVar13 = 0x29f;
              pcVar14 = "mod_exp";
              pcVar5 = "rsa->dmq1 != NULL";
              goto LAB_01b57aa8;
            }
            if (param_1[8] == 0) {
              uVar13 = 0x2a0;
              pcVar14 = "mod_exp";
              pcVar5 = "rsa->iqmp != NULL";
              goto LAB_01b57aa8;
            }
            FUN_01b2e894(iVar1);
            iVar9 = FUN_01b2e970(iVar1);
            iVar10 = FUN_01b2e970(iVar1);
            iVar11 = FUN_01b2e970(iVar1);
            if ((iVar11 == 0 || (iVar10 == 0 || iVar9 == 0)) ||
               (iVar12 = FUN_01b36d74(param_1,iVar1), iVar12 == 0)) {
LAB_01b580f0:
              bVar22 = false;
            }
            else {
              iVar16 = param_1[0x15];
              iVar17 = iVar16 + 0x14;
              iVar18 = param_1[0x16];
              iVar21 = param_1[0x17];
              iVar12 = FUN_01b2be1c(iVar2,iVar17);
              if (-1 < iVar12) {
                uVar13 = 700;
                pcVar14 = "mod_exp";
                pcVar5 = "constant_time_declassify_int(aws_lc_0_39_0_BN_ucmp(I, n) < 0)";
                goto LAB_01b57aa8;
              }
              iVar18 = iVar18 + 0x14;
              iVar12 = FUN_01b3320c(iVar9,iVar2,param_1[0x17],iVar18,iVar1);
              if ((((iVar12 == 0) ||
                   (iVar12 = FUN_01b3320c(iVar10,iVar2,param_1[0x16],iVar21 + 0x14,iVar1),
                   iVar12 == 0)) ||
                  (iVar10 = FUN_01b36c54(iVar11,iVar9,param_1[0x1a],iVar21 + 0x14,param_1[0x17],
                                         iVar3,iVar10,param_1[0x19],iVar18,param_1[0x16],iVar1),
                  iVar10 == 0)) ||
                 (((iVar10 = FUN_01b3320c(iVar9,iVar11,param_1[0x16],iVar21 + 0x14,iVar1),
                   iVar10 == 0 || (iVar9 = FUN_01b313b0(iVar3,iVar3,iVar9,iVar18,iVar1), iVar9 == 0)
                   ) || ((iVar9 = FUN_01b33010(iVar3,iVar3,param_1[0x1b],param_1[0x16],iVar1),
                         iVar9 == 0 ||
                         ((iVar9 = FUN_01b32c9c(iVar3,iVar3,iVar21 + 0x14,iVar1), iVar9 == 0 ||
                          (iVar9 = FUN_01b302b0(iVar3,iVar3,iVar11), iVar9 == 0))))))))
              goto LAB_01b580f0;
              iVar9 = FUN_01b2be38(iVar3,iVar17);
              if (-1 < iVar9) {
                uVar13 = 0x2df;
                pcVar14 = "mod_exp";
                pcVar5 = "constant_time_declassify_int(aws_lc_0_39_0_BN_cmp(r0, n) < 0)";
                goto LAB_01b57aa8;
              }
              uVar13 = FUN_01b2b938(iVar17);
              FUN_01b2baf0(iVar3,uVar13);
              iVar9 = FUN_01b2b700(iVar3,*(undefined4 *)(iVar16 + 0x18));
              bVar22 = iVar9 != 0;
            }
            FUN_01b2ebbc(iVar1);
            if (bVar22) goto LAB_01b5832c;
            goto LAB_01b58104;
          }
          iVar9 = FUN_01b36698(iVar3,iVar2,param_1[0x18],param_1[1],iVar1,param_1[0x15]);
          uVar19 = 0;
          if (iVar9 != 0) {
LAB_01b5832c:
            if ((param_1[2] == 0) ||
               (((iVar9 = FUN_01b2e970(iVar1), iVar9 != 0 &&
                 (iVar10 = FUN_01b35f88(iVar9,iVar3,param_1[2],param_1[1],iVar1,param_1[0x15]),
                 iVar10 != 0)) && (iVar2 = FUN_01b2e6d4(iVar9,iVar2), iVar2 != 0)))) {
              if ((uVar15 == 0) &&
                 (iVar2 = FUN_01b5526c(iVar3,iVar6,param_1[0x15],iVar1), iVar2 == 0))
              goto LAB_01b58104;
              if (*(int *)(iVar3 + 4) != *(int *)(param_1[0x15] + 0x18)) {
                uVar13 = 0x262;
                pcVar14 = "aws_lc_0_39_0_rsa_default_private_transform";
                pcVar5 = "result->width == rsa->mont_n->N.width";
LAB_01b57aa8:
                    /* WARNING: Subroutine does not return */
                FUN_01be3310(pcVar5,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",uVar13,pcVar14);
              }
              FUN_01b2baf0(iVar3,param_4);
              iVar2 = FUN_01b2bdb4(param_2,param_4,iVar3);
              if (iVar2 != 0) {
                uVar19 = uVar7;
                goto LAB_01b57b40;
              }
              uVar13 = 0x265;
            }
            else {
              uVar13 = 0x253;
            }
            goto LAB_01b57ccc;
          }
        }
        else {
          if (uVar15 != 0) {
            iVar6 = 0;
            goto LAB_01b57ed4;
          }
          if (param_1[0x15] == 0) {
            uVar13 = 199;
            pcVar14 = "rsa_blinding_get";
            pcVar5 = "rsa->mont_n != NULL";
            goto LAB_01b57aa8;
          }
          lVar23 = FUN_01b70bc0();
          FUN_01b706e4(param_1 + 0xd);
          if (lVar23 != CONCAT44(param_1[0x21],param_1[0x20])) {
            for (uVar19 = 0; uVar19 < (uint)param_1[0x1c]; uVar19 = uVar19 + 1) {
              if (*(char *)(param_1[0x1e] + uVar19) != '\0') {
                uVar13 = 0xd3;
                pcVar14 = "rsa_blinding_get";
                pcVar5 = "rsa->blindings_inuse[i] == 0";
                goto LAB_01b57aa8;
              }
              FUN_01b5507c(*(undefined4 *)(param_1[0x1d] + uVar19 * 4));
            }
            *(longlong *)(param_1 + 0x20) = lVar23;
          }
          uVar19 = param_1[0x1c];
          if (uVar19 == 0) {
LAB_01b57d48:
            uVar20 = uVar19 << 1;
            if (0x3ff < uVar20) {
              uVar20 = 0x400;
            }
            if (uVar20 == 0) {
              uVar20 = 1;
            }
            if (uVar20 <= uVar19) {
              uVar13 = 0xf6;
              pcVar14 = "rsa_blinding_get";
              pcVar5 = "new_num_blindings > rsa->num_blindings";
              goto LAB_01b57aa8;
            }
            iVar9 = FUN_01b6b0fc(uVar20,4);
            iVar10 = FUN_01b6ad8c(uVar20);
            if (iVar10 == 0 || iVar9 == 0) {
LAB_01b57e54:
              iVar6 = 0;
              FUN_01b6b1c4(iVar10);
              FUN_01b6b1c4(iVar9);
            }
            else {
              FUN_01b26974(iVar9,param_1[0x1d],param_1[0x1c] << 2);
              FUN_01b26974(iVar10,param_1[0x1e],param_1[0x1c]);
              uVar19 = param_1[0x1c];
LAB_01b57dd4:
              if (uVar19 < uVar20) {
                iVar6 = FUN_01b55010();
                *(int *)(iVar9 + uVar19 * 4) = iVar6;
                if (iVar6 != 0) goto LAB_01b57e84;
                for (uVar20 = param_1[0x1c]; uVar20 < uVar19; uVar20 = uVar20 + 1) {
                  FUN_01b54fcc(*(undefined4 *)(iVar9 + uVar20 * 4));
                }
                goto LAB_01b57e54;
              }
              FUN_01bed93e(iVar10 + param_1[0x1c],0,uVar20 - param_1[0x1c]);
              *(undefined1 *)(iVar10 + param_1[0x1c]) = 1;
              iVar4 = param_1[0x1c];
              if (iVar4 == 0x400) {
                uVar13 = 0x111;
                pcVar14 = "rsa_blinding_get";
                pcVar5 = "*index_used != MAX_BLINDINGS_PER_RSA";
                goto LAB_01b57aa8;
              }
              iVar6 = *(int *)(iVar9 + iVar4 * 4);
              FUN_01b6b1c4(param_1[0x1d]);
              param_1[0x1d] = iVar9;
              FUN_01b6b1c4(param_1[0x1e]);
              param_1[0x1e] = iVar10;
              param_1[0x1c] = uVar20;
            }
          }
          else {
            puVar8 = (undefined1 *)FUN_01bed7c2(param_1[0x1e],0,uVar19);
            if (puVar8 == (undefined1 *)0x0) {
              if (uVar19 < 0x400) goto LAB_01b57d48;
              iVar6 = FUN_01b55010();
              iVar4 = 0x400;
            }
            else {
              *puVar8 = 1;
              iVar4 = (int)puVar8 - param_1[0x1e];
              iVar6 = *(int *)(param_1[0x1d] + iVar4 * 4);
            }
          }
          FUN_01b70744(param_1 + 0xd);
          if (iVar6 != 0) {
            iVar9 = FUN_01b55098(iVar2,iVar6,param_1[2],param_1[0x15],iVar1);
            uVar19 = 0;
            if (iVar9 != 0) goto LAB_01b57ed4;
            goto LAB_01b57b40;
          }
          uVar13 = 0x22c;
LAB_01b57ccc:
          FUN_01b053d4(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",uVar13);
LAB_01b58104:
          uVar19 = 0;
        }
      }
LAB_01b57b40:
      FUN_01b2ebbc(iVar1);
      FUN_01b2e7c8(iVar1);
      if (iVar6 != 0) {
        if (iVar4 == 0x400) {
          FUN_01b54fcc(iVar6);
        }
        else {
          FUN_01b706e4(param_1 + 0xd);
          *(undefined1 *)(param_1[0x1e] + iVar4) = 0;
          FUN_01b70744(param_1 + 0xd);
        }
      }
      goto LAB_01b57a1c;
    }
  }
  uVar19 = 0;
LAB_01b57a1c:
  return (ulonglong)uVar19;
LAB_01b57e84:
  uVar19 = uVar19 + 1;
  goto LAB_01b57dd4;
}

