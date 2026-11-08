// FUN_01721398 @ 01721398 size=1496 calls_out=19 calls_in=10
// strings: /aws-lc/crypto/fipsmodule/bn/exponentiation.c | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | aws_lc_0_39_0_BN_mod_exp_mont | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | wvalue < (1 << window)

ulonglong FUN_01721398(undefined4 param_1,int param_2,undefined4 param_3,int param_4,
                      undefined4 param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint local_c4;
  uint local_c0;
  uint local_b4;
  int local_ac [32];
  int local_2c;
  
  local_b4 = param_6;
  local_2c = DAT_018ddaf8;
  iVar1 = FUN_017181d4(param_4,param_2,&PTR_018bc3f4,0);
  if (iVar1 == 0) {
    FUN_016e9cd0(3,0,0x68,"/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x213);
LAB_01721444:
    uVar8 = 0;
  }
  else {
    if (*(int *)(param_4 + 0xc) != 0) {
      FUN_016e9cd0(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x217);
      goto LAB_01721444;
    }
    if ((*(int *)(param_2 + 0xc) != 0) || (iVar1 = FUN_01715744(param_2,param_4), -1 < iVar1)) {
      FUN_016e9cd0(3,0,0x6b,"/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x21c);
      goto LAB_01721444;
    }
    uVar2 = FUN_01714eb4(param_3);
    if (uVar2 == 0) {
      uVar14 = FUN_01717ce4(param_4,1);
      if ((int)uVar14 == 0) {
        if (local_2c == DAT_018ddaf8) {
          uVar15 = FUN_01714ab0(param_1,(int)((ulonglong)uVar14 >> 0x20),0,0);
          return uVar15;
        }
        goto LAB_0172192c;
      }
      uVar8 = 1;
      FUN_01714350(param_1);
    }
    else {
      FUN_017185b4(param_5);
      iVar1 = FUN_017186b0(param_5);
      iVar3 = FUN_017186b0(param_5);
      local_c4 = (uint)(iVar3 == 0 || iVar1 == 0);
      uVar8 = 0;
      local_ac[0] = iVar3;
      if (iVar3 == 0 || iVar1 == 0) {
LAB_01721714:
        uVar4 = 0;
      }
      else {
        if (param_6 == 0) {
          uVar4 = FUN_01720928(param_4,param_5);
          if (uVar4 == 0) goto LAB_01721714;
          local_b4 = uVar4;
        }
        else {
          uVar4 = local_c4;
        }
        if (uVar2 < 0x2a0) {
          if (0xef < uVar2) {
            local_c4 = 0x10;
            local_c0 = 5;
            goto LAB_0172164c;
          }
          if (0x4f < uVar2) {
            local_c4 = 8;
            local_c0 = 4;
            goto LAB_0172164c;
          }
          if (0x17 < uVar2) {
            local_c4 = 4;
            local_c0 = 3;
            goto LAB_0172164c;
          }
          iVar3 = FUN_0171decc(iVar3,param_2,local_b4,param_5);
          if (iVar3 == 0) goto LAB_0172161c;
          local_c0 = 1;
        }
        else {
          local_c4 = 0x20;
          local_c0 = 6;
LAB_0172164c:
          iVar10 = FUN_0171decc(iVar3,param_2,local_b4,param_5);
          if (((iVar10 == 0) || (iVar10 = FUN_017186b0(param_5), iVar10 == 0)) ||
             (iVar3 = FUN_0171dce4(iVar10,iVar3,iVar3,local_b4,param_5), iVar3 == 0))
          goto LAB_0172161c;
          piVar11 = local_ac;
          iVar3 = 1;
          do {
            iVar5 = FUN_017186b0(param_5);
            piVar11[1] = iVar5;
            if ((iVar5 == 0) ||
               (iVar5 = FUN_0171dce4(iVar5,*piVar11,iVar10,local_b4,param_5), iVar5 == 0))
            goto LAB_0172161c;
            iVar3 = iVar3 + 1;
            piVar11 = piVar11 + 1;
          } while (iVar3 < (int)local_c4);
          local_c4 = 1;
        }
        uVar12 = 1;
        do {
          uVar2 = uVar2 - 1;
          iVar3 = FUN_0172135c(param_3,uVar2);
          if (iVar3 != 0) {
            if ((int)uVar2 < 1) {
              uVar6 = 0;
            }
            else {
              uVar6 = local_c4;
            }
            uVar13 = uVar12;
            if (uVar6 == 0) {
              uVar6 = 0;
              if (uVar12 != 0) goto LAB_017217e4;
              iVar3 = 1;
              uVar12 = 1;
              uVar6 = 0;
              goto LAB_01721848;
            }
            do {
              uVar6 = 0;
              uVar12 = 1;
              uVar9 = 1;
              do {
                iVar3 = FUN_0172135c(param_3,uVar2 - uVar9);
                uVar7 = uVar9 - uVar6;
                if (iVar3 != 0) {
                  uVar6 = uVar9;
                }
                uVar9 = uVar9 + 1;
                if (iVar3 != 0) {
                  uVar12 = uVar12 << (uVar7 & 0xff) | 1;
                }
                uVar7 = uVar2;
                if ((int)uVar9 <= (int)uVar2) {
                  uVar7 = local_c0;
                }
              } while ((int)uVar9 < (int)uVar7);
              if (uVar13 == 0) {
                iVar3 = uVar6 + 1;
                if (0 < iVar3) goto LAB_01721848;
                goto LAB_017218c4;
              }
              if (1 << local_c0 <= (int)uVar12) {
LAB_01721930:
                    /* WARNING: Subroutine does not return */
                FUN_016d2c94("wvalue < (1 << window)",
                             "/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x27a,
                             "aws_lc_0_39_0_BN_mod_exp_mont");
              }
LAB_017217e4:
              iVar3 = FUN_017147ac(iVar1,local_ac[(int)uVar12 >> 1]);
              while( true ) {
                if (iVar3 == 0) goto LAB_0172161c;
                if (uVar6 == uVar2) goto LAB_01721600;
                uVar2 = (uVar2 - 1) - uVar6;
                iVar3 = FUN_0172135c(param_3,uVar2);
                if (iVar3 == 0) goto LAB_0172171c;
                if ((int)uVar2 < 1) {
                  uVar6 = 0;
                }
                uVar12 = 1;
                if (0 < (int)uVar2) {
                  uVar6 = local_c4;
                }
                iVar3 = 1;
                if (uVar6 != 0) break;
LAB_01721848:
                iVar10 = 0;
                do {
                  iVar5 = FUN_0171dce4(iVar1,iVar1,iVar1,local_b4,param_5);
                  if (iVar5 == 0) goto LAB_0172161c;
                  iVar10 = iVar10 + 1;
                } while (iVar10 < iVar3);
LAB_017218c4:
                if (1 << local_c0 <= (int)uVar12) goto LAB_01721930;
                iVar3 = FUN_0171dce4(iVar1,iVar1,local_ac[(int)uVar12 >> 1],local_b4,param_5);
              }
              uVar13 = 0;
            } while( true );
          }
          if (uVar12 == 0) {
LAB_0172171c:
            iVar3 = FUN_0171dce4(iVar1,iVar1,iVar1,local_b4,param_5);
            if (iVar3 == 0) goto LAB_0172161c;
            uVar12 = 0;
          }
        } while (uVar2 != 0);
        if (uVar12 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("!r_is_one","/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x28b,
                       "aws_lc_0_39_0_BN_mod_exp_mont");
        }
LAB_01721600:
        iVar1 = FUN_0171c9d0(param_1,iVar1,local_b4,param_5);
        uVar8 = 0;
        if (iVar1 != 0) {
          uVar8 = 1;
        }
      }
LAB_0172161c:
      FUN_0171c904(uVar4);
      FUN_01718904(param_5);
    }
  }
  if (local_2c == DAT_018ddaf8) {
    return (ulonglong)uVar8;
  }
LAB_0172192c:
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78();
}

