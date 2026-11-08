// FUN_0174d2dc @ 0174d2dc size=1064 calls_out=19 calls_in=2
// strings: aws_lc_0_39_0_BN_primality_test | /aws-lc/crypto/fipsmodule/bn/prime.c | constant_time_declassify_int(uniform_iterations >= (crypto_word_t)checks)

undefined4
FUN_0174d2dc(int *param_1,int param_2,uint param_3,int param_4,int param_5,undefined4 param_6)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 *puVar11;
  bool bVar12;
  int local_64;
  int local_4c;
  int local_48;
  undefined4 local_44 [6];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  *param_1 = 0;
  uVar3 = FUN_01714250();
  iVar4 = FUN_01715760(param_2,uVar3);
  if (0 < iVar4) {
    iVar4 = FUN_017181d4(param_2);
    if (iVar4 == 0) {
      iVar4 = FUN_0171817c(param_2,2);
      *param_1 = iVar4;
    }
    else {
      iVar4 = FUN_0171817c(param_2,3);
      if (iVar4 == 0) {
        uVar3 = 0;
        if (param_5 != 0) {
          puVar11 = (undefined2 *)&DAT_0044c414;
          if (*(int *)(param_2 + 4) * 0x20 < 0x401) {
            iVar4 = 0x200;
          }
          else {
            iVar4 = 0x400;
          }
          do {
            puVar11 = puVar11 + 1;
            uVar1 = *puVar11;
            iVar5 = FUN_01718998(param_2,uVar1);
            if (iVar5 == 0) {
              iVar4 = FUN_0171817c(param_2,uVar1);
              uVar3 = 1;
              *param_1 = iVar4;
              goto LAB_0174d530;
            }
          } while (puVar11 != (undefined2 *)(&DAT_0044c412 + iVar4 * 2));
          iVar4 = FUN_0171e414(param_6,1,0xffffffff);
          if (iVar4 == 0) {
            iVar4 = 0;
            goto LAB_0174d530;
          }
        }
        if (param_3 == 0) {
          iVar4 = FUN_01714eb4(param_2);
          if (iVar4 < 0xea3) {
            if (iVar4 < 0x541) {
              if (iVar4 < 0x1dc) {
                if (iVar4 < 400) {
                  if (iVar4 < 0x15b) {
                    if (iVar4 < 0x134) {
                      if (iVar4 < 0x37) {
                        param_3 = 0x22;
                      }
                      else {
                        param_3 = 0x1b;
                      }
                    }
                    else {
                      param_3 = 8;
                    }
                  }
                  else {
                    param_3 = 7;
                  }
                }
                else {
                  param_3 = 6;
                }
              }
              else {
                param_3 = 5;
              }
            }
            else {
              param_3 = 4;
            }
          }
          else {
            param_3 = 3;
          }
        }
        if (param_4 == 0) {
          param_4 = FUN_017184a8();
          if (param_4 == 0) {
            iVar4 = 0;
            goto LAB_0174d530;
          }
          local_64 = param_4;
        }
        else {
          local_64 = 0;
        }
        FUN_017185b4(param_4);
        iVar4 = FUN_017186b0(param_4);
        iVar5 = FUN_01720928(param_2,param_4);
        if (iVar5 != 0 && iVar4 != 0) {
          uVar10 = 0;
          iVar6 = FUN_017230c8(local_44,iVar5,param_4);
          if (iVar6 != 0) {
            bVar12 = false;
            if (((int)(-param_3 | param_3) >> 0x1f | 1U) != 0) {
              iVar6 = 1;
              do {
                iVar7 = FUN_0174d0d0(iVar4,&local_4c,2,local_44[0]);
                iVar2 = local_4c;
                if (iVar7 == 0) goto LAB_0174d4f8;
                local_48 = 0;
                iVar7 = FUN_01722604(local_44,&local_48,iVar4,iVar5,param_4);
                if (iVar7 == 0) goto LAB_0174d4f8;
                if (local_48 == 0) {
                  uVar3 = 1;
                  *param_1 = 0;
                  goto LAB_0174d4f8;
                }
                iVar7 = FUN_0171e414(param_6,1,iVar6 + -1);
                if (iVar7 == 0) goto LAB_0174d4f8;
                uVar10 = uVar10 + iVar2;
                iVar6 = iVar6 + 1;
                uVar9 = uVar10 ^ param_3;
                uVar8 = uVar10 - param_3 ^ uVar10 | uVar9;
                if (0x10 < iVar6) {
                  uVar9 = 0;
                }
                if (iVar6 < 0x11) {
                  uVar9 = 1;
                }
              } while (uVar9 != 0 || (int)(uVar8 ^ uVar10) < 0);
              bVar12 = param_3 <= uVar10;
            }
            if (!bVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2c94("constant_time_declassify_int(uniform_iterations >= (crypto_word_t)checks)"
                           ,"/aws-lc/crypto/fipsmodule/bn/prime.c",0x2af,
                           "aws_lc_0_39_0_BN_primality_test");
            }
            uVar3 = 1;
            *param_1 = 1;
          }
        }
LAB_0174d4f8:
        FUN_0171c904(iVar5);
        FUN_01718904(param_4);
        iVar4 = FUN_017184e8(local_64);
        goto LAB_0174d530;
      }
      *param_1 = 1;
    }
  }
  uVar3 = 1;
LAB_0174d530:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(iVar4,local_2c ^ DAT_018ddaf8,0);
  }
  return uVar3;
}

