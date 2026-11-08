// FUN_01721bd8 @ 01721bd8 size=1528 calls_out=21 calls_in=8
// strings: /aws-lc/crypto/fipsmodule/bn/exponentiation.c | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | aws_lc_0_39_0_BN_mod_exp_mont_consttime | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | (size_t)top <= BN_MONTGOMERY_MAX_WORDS

ulonglong FUN_01721bd8(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                      int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int local_68;
  int local_64;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  iVar1 = FUN_017181d4(param_4,param_2,&PTR_018bc3f4,0);
  if (iVar1 == 0) {
    FUN_016e9cd0(3,0,0x68,"/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x343);
LAB_01721eb0:
    uVar7 = 0;
  }
  else {
    if (*(int *)(param_4 + 0xc) != 0) {
      FUN_016e9cd0(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x347);
      goto LAB_01721eb0;
    }
    if ((*(int *)(param_2 + 0xc) != 0) || (iVar1 = FUN_01715744(param_2,param_4), -1 < iVar1)) {
      FUN_016e9cd0(3,0,0x6b,"/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x34d);
      goto LAB_01721eb0;
    }
    iVar1 = *(int *)(param_3 + 4) * 0x20;
    if (iVar1 == 0) {
      uVar9 = FUN_01717ce4(param_4,1);
      if ((int)uVar9 == 0) {
        if (local_2c == DAT_018ddaf8) {
          uVar10 = FUN_01714ab0(param_1,(int)((ulonglong)uVar9 >> 0x20),0,0);
          return uVar10;
        }
        goto LAB_017220f8;
      }
      uVar7 = 1;
      FUN_01714350(param_1);
    }
    else {
      uVar7 = 0;
      if (param_6 == 0) {
        local_68 = FUN_01720928(param_4,param_5);
        if (local_68 != 0) {
          param_6 = local_68;
          goto LAB_01721c84;
        }
LAB_01721f9c:
        FUN_0171c904(local_68);
        local_64 = 0;
      }
      else {
        local_68 = 0;
LAB_01721c84:
        uVar5 = *(uint *)(param_6 + 0x18);
        if (0x800 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("(size_t)top <= BN_MONTGOMERY_MAX_WORDS",
                       "/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x389,
                       "aws_lc_0_39_0_BN_mod_exp_mont_consttime");
        }
        local_64 = FUN_0177a9c0(uVar5 * 0x88 + 0x40);
        if (local_64 == 0) goto LAB_01721f9c;
        uVar6 = local_64 + (-local_64 & 0x3fU);
        local_50 = uVar6 & 0x3f;
        if (local_50 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("((uintptr_t)ptr & (alignment - 1)) == 0",
                       "/aws-lc/crypto/fipsmodule/../internal.h",0xa6,"align_pointer");
        }
        iVar4 = uVar5 * 4;
        iVar8 = uVar6 + uVar5 * 0x80;
        local_30 = 2;
        local_44 = 2;
        local_40 = iVar8 + iVar4;
        local_54 = iVar8;
        local_4c = uVar5;
        local_48 = local_50;
        local_3c = local_50;
        local_38 = uVar5;
        local_34 = local_50;
        iVar2 = FUN_0171ca68(&local_54,param_6,param_5);
        if ((iVar2 == 0) || (iVar2 = FUN_01714d30(&local_54,uVar5), iVar2 == 0)) goto LAB_01721f64;
        if (*(int *)(param_2 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("!a->neg","/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x3ba,
                       "aws_lc_0_39_0_BN_mod_exp_mont_consttime");
        }
        iVar2 = FUN_01715744(param_2,param_4);
        if (-1 < iVar2) goto LAB_01722188;
        iVar2 = FUN_0171decc(&local_40,param_2,param_6,param_5);
        if ((iVar2 == 0) || (iVar2 = FUN_01714d30(&local_40,uVar5), iVar2 == 0)) goto LAB_01721f64;
        iVar2 = FUN_017144f8(uVar6,uVar5,&local_54);
        if (iVar2 == 0) {
LAB_01722184:
          FUN_01707a34();
LAB_01722188:
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("constant_time_declassify_int(aws_lc_0_39_0_BN_ucmp(a, m) < 0)",
                       "/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x3bb,
                       "aws_lc_0_39_0_BN_mod_exp_mont_consttime");
        }
        iVar8 = uVar5 * -0x7c + iVar8;
        iVar2 = FUN_017144f8(iVar8,uVar5,&local_40);
        if (iVar2 == 0) goto LAB_01722184;
        iVar2 = FUN_0171dce4(&local_54,&local_40,&local_40,param_6,param_5);
        if (iVar2 == 0) goto LAB_01721f64;
        iVar2 = FUN_017144f8(iVar8 + iVar4,uVar5,&local_54);
        if (iVar2 == 0) goto LAB_01722184;
        iVar2 = uVar5 * 0xc + uVar6;
        iVar8 = 0x1d;
        do {
          iVar3 = FUN_0171dce4(&local_54,&local_40,&local_54,param_6,param_5);
          if (iVar3 == 0) goto LAB_01721e80;
          iVar3 = FUN_017144f8(iVar2,uVar5,&local_54);
          if (iVar3 == 0) goto LAB_01722184;
          iVar8 = iVar8 + -1;
          iVar2 = iVar2 + iVar4;
        } while (iVar8 != 0);
        iVar4 = (iVar1 + -1) % 5;
        if (iVar4 < 0) {
          iVar1 = FUN_01714b48(&local_54,uVar5,uVar6,0);
          if (iVar1 != 0) {
LAB_01722118:
            iVar1 = FUN_0171c9d0(param_1,&local_54,param_6,param_5);
            if (iVar1 != 0) {
              uVar7 = 1;
              FUN_0171c904(local_68);
              goto LAB_01721f68;
            }
          }
LAB_01721f64:
          FUN_0171c904(local_68);
        }
        else {
          iVar2 = 0;
          iVar8 = iVar1 + -1;
          do {
            iVar3 = iVar8 + -1;
            iVar8 = FUN_0172135c(param_3,iVar8);
            iVar2 = iVar8 + iVar2 * 2;
            iVar8 = iVar3;
          } while (iVar3 != (iVar1 + -2) - iVar4);
          iVar2 = FUN_01714b48(&local_54,uVar5,uVar6,iVar2);
          if (iVar2 == 0) goto LAB_01721f64;
          iVar4 = (iVar1 + -2) - iVar4;
          do {
            if (iVar4 < 0) goto LAB_01722118;
            iVar2 = iVar4 + -5;
            iVar8 = 0;
            iVar1 = iVar4;
            do {
              iVar4 = FUN_0171dce4(&local_54,&local_54,&local_54,param_6,param_5);
              if (iVar4 == 0) goto LAB_01721e80;
              iVar4 = iVar1 + -1;
              iVar1 = FUN_0172135c(param_3,iVar1);
              iVar8 = iVar1 + iVar8 * 2;
              iVar1 = iVar4;
            } while (iVar2 != iVar4);
            iVar1 = FUN_01714b48(&local_40,uVar5,uVar6,iVar8);
          } while ((iVar1 != 0) &&
                  (iVar1 = FUN_0171dce4(&local_54,&local_54,&local_40,param_6,param_5), iVar1 != 0))
          ;
LAB_01721e80:
          uVar7 = 0;
          FUN_0171c904(local_68);
        }
      }
LAB_01721f68:
      FUN_0177aafc(local_64);
    }
  }
  if (local_2c == DAT_018ddaf8) {
    return (ulonglong)uVar7;
  }
LAB_017220f8:
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78();
}

