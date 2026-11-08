// FUN_01753108 @ 01753108 size=2320 calls_out=36 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c

int FUN_01753108(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 auStack_30 [4];
  int local_2c;
  
  param_2 = param_2 & 0xffffff80;
  iVar11 = (int)param_2 >> 1;
  iVar13 = 4;
  local_2c = DAT_018ddaf8;
  while( true ) {
    FUN_016e9bf0();
    iVar1 = FUN_017530f0();
    if (iVar1 == 0) break;
    if ((int)param_2 < 0x100) {
      FUN_016e9cd0(4,0,0x7e,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x3ce);
    }
    else {
      uVar2 = FUN_01714eb4(param_3);
      if (uVar2 < 0x21) {
        iVar3 = FUN_017184a8();
        if (iVar3 == 0) {
          FUN_016e9cd0(4,0,3,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x467);
        }
        else {
          FUN_017185b4();
          iVar4 = FUN_017186b0(iVar3);
          iVar5 = FUN_017186b0(iVar3);
          iVar6 = FUN_017186b0(iVar3);
          iVar7 = FUN_017186b0(iVar3);
          iVar8 = FUN_017186b0(iVar3);
          iVar9 = FUN_017186b0(iVar3);
          if ((((iVar5 == 0 || iVar4 == 0) || (iVar7 == 0 || iVar6 == 0)) ||
              (iVar9 == 0 || iVar8 == 0)) ||
             ((iVar10 = FUN_0172038c(iVar8,iVar11 + -100), iVar10 == 0 ||
              (iVar10 = FUN_0172038c(iVar9,iVar11), iVar10 == 0)))) {
LAB_01753238:
            uVar14 = 0x467;
            uVar12 = 3;
          }
          else {
            if (*(int *)(iVar1 + 4) == 0) {
              iVar10 = FUN_017141d0();
              *(int *)(iVar1 + 4) = iVar10;
              if (iVar10 == 0) goto LAB_01753238;
            }
            if (*(int *)(iVar1 + 0xc) == 0) {
              iVar10 = FUN_017141d0();
              *(int *)(iVar1 + 0xc) = iVar10;
              if (iVar10 == 0) goto LAB_01753238;
            }
            if (*(int *)(iVar1 + 8) == 0) {
              iVar10 = FUN_017141d0();
              *(int *)(iVar1 + 8) = iVar10;
              if (iVar10 == 0) goto LAB_01753238;
            }
            if (*(int *)(iVar1 + 0x10) == 0) {
              iVar10 = FUN_017141d0();
              *(int *)(iVar1 + 0x10) = iVar10;
              if (iVar10 == 0) goto LAB_01753238;
            }
            if (*(int *)(iVar1 + 0x14) == 0) {
              iVar10 = FUN_017141d0();
              *(int *)(iVar1 + 0x14) = iVar10;
              if (iVar10 == 0) goto LAB_01753238;
            }
            if (*(int *)(iVar1 + 0x18) == 0) {
              iVar10 = FUN_017141d0();
              *(int *)(iVar1 + 0x18) = iVar10;
              if (iVar10 == 0) goto LAB_01753238;
            }
            if (*(int *)(iVar1 + 0x1c) == 0) {
              iVar10 = FUN_017141d0();
              *(int *)(iVar1 + 0x1c) = iVar10;
              if (iVar10 == 0) goto LAB_01753238;
            }
            iVar10 = FUN_017147ac(*(undefined4 *)(iVar1 + 8),param_3);
            if ((iVar10 == 0) || (iVar10 = FUN_01714ac8(iVar7,&DAT_00428c18,0x40), iVar10 == 0))
            goto LAB_01753238;
            iVar10 = FUN_01714eb4(iVar7);
            if (iVar10 != 0x800) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2c94("sqrt2_bits == (int)BN_num_bits(sqrt2)",
                           "/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x405,"rsa_generate_key_impl")
              ;
            }
            if ((int)param_2 < 0xfff) {
              iVar10 = FUN_0171ea08(iVar7,iVar7,0x800 - iVar11);
              if (iVar10 != 0) goto LAB_0175343c;
              goto LAB_01753238;
            }
            if ((0x1000 < (int)param_2) &&
               ((iVar10 = FUN_0171801c(iVar7,1), iVar10 == 0 ||
                (iVar10 = FUN_0171e6a8(iVar7,iVar7,iVar11 + -0x800), iVar10 == 0))))
            goto LAB_01753238;
LAB_0175343c:
            iVar10 = FUN_01714eb4(iVar7);
            if (iVar11 != iVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2c94("prime_bits == (int)BN_num_bits(sqrt2)",
                           "/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x414,"rsa_generate_key_impl")
              ;
            }
            do {
              iVar10 = FUN_0174de38(*(undefined4 *)(iVar1 + 0x10),iVar11,*(undefined4 *)(iVar1 + 8),
                                    0,iVar7,iVar8,iVar3,param_4);
              if ((((iVar10 == 0) || (iVar10 = FUN_0171e414(param_4,3,0), iVar10 == 0)) ||
                  (iVar10 = FUN_0174de38(*(undefined4 *)(iVar1 + 0x14),iVar11,
                                         *(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),
                                         iVar7,iVar8,iVar3,param_4), iVar10 == 0)) ||
                 (iVar10 = FUN_0171e414(param_4,3,1), iVar10 == 0)) goto LAB_01753238;
              iVar10 = FUN_01715760(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
              uVar14 = *(undefined4 *)(iVar1 + 0x10);
              uVar12 = uVar14;
              if (iVar10 < 0) {
                uVar12 = *(undefined4 *)(iVar1 + 0x14);
                *(undefined4 *)(iVar1 + 0x10) = uVar12;
                *(undefined4 *)(iVar1 + 0x14) = uVar14;
              }
              uVar14 = FUN_01714250();
              iVar10 = FUN_0171a748(iVar5,uVar12,uVar14);
              if (iVar10 == 0) goto LAB_01753238;
              uVar14 = *(undefined4 *)(iVar1 + 0x14);
              uVar12 = FUN_01714250();
              iVar10 = FUN_0171a748(iVar6,uVar14,uVar12);
              if (((iVar10 == 0) || (iVar10 = FUN_0171f9e8(iVar4,iVar5,iVar6,iVar3), iVar10 == 0))
                 || (iVar10 = FUN_0171fb24(*(undefined4 *)(iVar1 + 0xc),auStack_30,
                                           *(undefined4 *)(iVar1 + 8),iVar4,iVar3), iVar10 == 0))
              goto LAB_01753238;
              iVar10 = FUN_01715760(*(undefined4 *)(iVar1 + 0xc),iVar9);
            } while (iVar10 < 1);
            iVar4 = FUN_01714eb4(iVar5);
            if (iVar4 != iVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2c94("BN_num_bits(pm1) == (unsigned)prime_bits",
                           "/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x43f,"rsa_generate_key_impl")
              ;
            }
            iVar4 = FUN_01714eb4(iVar6);
            if (iVar11 != iVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2c94("BN_num_bits(qm1) == (unsigned)prime_bits",
                           "/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x440,"rsa_generate_key_impl")
              ;
            }
            iVar4 = FUN_0171d5cc(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x10),
                                 *(undefined4 *)(iVar1 + 0x14),iVar3);
            if (((iVar4 == 0) ||
                (iVar4 = FUN_0171b1c8(0,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0xc),
                                      iVar5,iVar11,iVar3), iVar4 == 0)) ||
               (iVar4 = FUN_0171b1c8(0,*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0xc),
                                     iVar6,iVar11,iVar3), iVar4 == 0)) goto LAB_01753238;
            FUN_01714f48(*(undefined4 *)(iVar1 + 4));
            uVar2 = FUN_01714eb4(*(undefined4 *)(iVar1 + 4));
            if (uVar2 == param_2) {
              iVar4 = FUN_01722348(iVar1,iVar3);
              if (iVar4 == 0) goto LAB_01753238;
              iVar5 = FUN_0174f320(iVar1);
              if (iVar5 != 0) {
                FUN_01718904(iVar3);
                FUN_017184e8(iVar3);
                if ((param_5 == 0) || (iVar11 = FUN_0174f9e4(iVar1), iVar11 != 0)) {
                  FUN_0174fea4(param_1);
                  FUN_017046e0(*(undefined4 *)(param_1 + 4));
                  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 4);
                  *(undefined4 *)(iVar1 + 4) = 0;
                  FUN_017046e0(*(undefined4 *)(param_1 + 8));
                  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 8);
                  *(undefined4 *)(iVar1 + 8) = 0;
                  FUN_017046e0(*(undefined4 *)(param_1 + 0xc));
                  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
                  *(undefined4 *)(iVar1 + 0xc) = 0;
                  FUN_017046e0(*(undefined4 *)(param_1 + 0x10));
                  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
                  *(undefined4 *)(iVar1 + 0x10) = 0;
                  FUN_017046e0(*(undefined4 *)(param_1 + 0x14));
                  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
                  *(undefined4 *)(iVar1 + 0x14) = 0;
                  FUN_017046e0(*(undefined4 *)(param_1 + 0x18));
                  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0x18);
                  *(undefined4 *)(iVar1 + 0x18) = 0;
                  FUN_017046e0(*(undefined4 *)(param_1 + 0x1c));
                  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
                  *(undefined4 *)(iVar1 + 0x1c) = 0;
                  FUN_017046e0(*(undefined4 *)(param_1 + 0x20));
                  uVar12 = *(undefined4 *)(param_1 + 0x54);
                  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
                  *(undefined4 *)(iVar1 + 0x20) = 0;
                  FUN_0171c904(uVar12);
                  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
                  *(undefined4 *)(iVar1 + 0x54) = 0;
                  FUN_0171c904(*(undefined4 *)(param_1 + 0x58));
                  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
                  *(undefined4 *)(iVar1 + 0x58) = 0;
                  FUN_0171c904(*(undefined4 *)(param_1 + 0x5c));
                  uVar12 = *(undefined4 *)(param_1 + 0x60);
                  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + 0x5c);
                  *(undefined4 *)(iVar1 + 0x5c) = 0;
                  FUN_017046e0(uVar12);
                  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
                  *(undefined4 *)(iVar1 + 0x60) = 0;
                  FUN_017046e0(*(undefined4 *)(param_1 + 100));
                  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar1 + 100);
                  *(undefined4 *)(iVar1 + 100) = 0;
                  FUN_017046e0(*(undefined4 *)(param_1 + 0x68));
                  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar1 + 0x68);
                  *(undefined4 *)(iVar1 + 0x68) = 0;
                  FUN_017046e0(*(undefined4 *)(param_1 + 0x6c));
                  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar1 + 0x6c);
                  *(undefined4 *)(iVar1 + 0x6c) = 0;
                  *(byte *)(param_1 + 0x88) =
                       *(byte *)(param_1 + 0x88) & 0xfe | *(byte *)(iVar1 + 0x88) & 1;
                  goto LAB_01753294;
                }
                FUN_0174ff8c(iVar1);
                iVar4 = 0;
                goto LAB_0175329c;
              }
              uVar14 = 0x45f;
              uVar12 = 0x7c;
            }
            else {
              uVar14 = 0x451;
              uVar12 = 0x44;
            }
          }
          FUN_016e9cd0(4,0,uVar12,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",uVar14);
          FUN_01718904(iVar3);
          FUN_017184e8(iVar3);
        }
      }
      else {
        FUN_016e9cd0(4,0,0x65,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x3d9);
      }
    }
    uVar2 = FUN_016e9a80();
    FUN_0174ff8c(iVar1);
    iVar13 = iVar13 + -1;
    if ((iVar13 == 0) || ((uVar2 & 0xff000fff) != 0x400008d)) break;
  }
  iVar4 = 0;
  iVar1 = 0;
LAB_01753294:
  FUN_0174ff8c(iVar1);
LAB_0175329c:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar4;
}

