// FUN_01b542bc @ 01b542bc size=740 calls_out=20 calls_in=2
// strings: aws_lc_0_39_0_BN_primality_test | /aws-lc/crypto/fipsmodule/bn/prime.c | constant_time_declassify_int(uniform_iterations >= (crypto_word_t)checks)

int FUN_01b542bc(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_58;
  int local_4c;
  int local_48;
  uint local_44 [6];
  int local_2c;
  
  local_2c = DAT_01d53560;
  *param_1 = 0;
  uVar2 = FUN_01b2ae78();
  iVar3 = FUN_01b2be38(param_2,uVar2);
  if (0 < iVar3) {
    iVar3 = FUN_01b2e5fc(param_2);
    if (iVar3 == 0) {
      uVar2 = FUN_01b2e5a4(param_2,2);
      *param_1 = uVar2;
    }
    else {
      iVar3 = FUN_01b2e5a4(param_2,3);
      if (iVar3 == 0) {
        if (param_5 != 0) {
          iVar3 = FUN_01b2ed74(local_44,param_2);
          if (iVar3 != 0) {
            uVar2 = FUN_01b2e5a4(param_2,local_44[0] & 0xffff);
            *param_1 = uVar2;
            goto LAB_01b5434c;
          }
          iVar4 = FUN_01b337a0(param_6,1,0xffffffff);
          iVar3 = 0;
          if (iVar4 == 0) goto LAB_01b5434c;
        }
        if (param_3 == 0) {
          FUN_01b2b8d0(param_2);
          param_3 = FUN_01b208e4();
        }
        iVar3 = 0;
        if (param_4 == 0) {
          param_4 = FUN_01b2e788();
          if (param_4 == 0) goto LAB_01b5434c;
          local_58 = param_4;
        }
        else {
          local_58 = 0;
        }
        FUN_01b2e894(param_4);
        iVar4 = FUN_01b2e970(param_4);
        iVar5 = FUN_01b358dc(param_2,param_4);
        if (iVar5 != 0 && iVar4 != 0) {
          uVar10 = 0;
          iVar6 = FUN_01b3797c(local_44,iVar5,param_4);
          if (iVar6 != 0) {
            iVar6 = 1;
            while( true ) {
              uVar9 = param_3 ^ uVar10;
              uVar8 = uVar10 - param_3 ^ uVar10 | uVar9;
              if (0x10 < iVar6) {
                uVar9 = 0;
              }
              if (iVar6 < 0x11) {
                uVar9 = 1;
              }
              if (uVar9 == 0 && -1 < (int)(uVar8 ^ uVar10)) break;
              iVar7 = FUN_01b5405c(iVar4,&local_4c,2,local_44[0]);
              iVar1 = local_4c;
              if (iVar7 == 0) goto LAB_01b54478;
              local_48 = 0;
              iVar7 = FUN_01b36f98(local_44,&local_48,iVar4,iVar5,param_4);
              if (iVar7 == 0) goto LAB_01b54478;
              if (local_48 == 0) {
                iVar3 = 1;
                *param_1 = 0;
                goto LAB_01b54478;
              }
              iVar7 = FUN_01b337a0(param_6,1,iVar6 + -1);
              if (iVar7 == 0) goto LAB_01b54478;
              iVar6 = iVar6 + 1;
              uVar10 = uVar10 + iVar1;
            }
            if (uVar10 < param_3) {
                    /* WARNING: Subroutine does not return */
              FUN_01be3310("constant_time_declassify_int(uniform_iterations >= (crypto_word_t)checks)"
                           ,"/aws-lc/crypto/fipsmodule/bn/prime.c",0x2af,
                           "aws_lc_0_39_0_BN_primality_test");
            }
            iVar3 = 1;
            *param_1 = 1;
          }
        }
LAB_01b54478:
        FUN_01b323f0(iVar5);
        FUN_01b2ebbc(param_4);
        FUN_01b2e7c8(local_58);
        goto LAB_01b5434c;
      }
      *param_1 = 1;
    }
  }
  iVar3 = 1;
LAB_01b5434c:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar3;
}

