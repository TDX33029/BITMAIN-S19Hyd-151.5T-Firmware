// FUN_01752bf8 @ 01752bf8 size=952 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | aws_lc_0_39_0_rsa_sign_no_self_test | /aws-lc/crypto/fipsmodule/rsa/rsa.c

ulonglong FUN_01752bf8(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int *param_5,
                      int *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar5;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_24 = DAT_018ddaf8;
  if ((*param_6 == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_6 + 0x10), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    iVar3 = FUN_0175009c(param_6);
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    iVar1 = FUN_0174ed30(&local_34,&local_30,&local_2c,param_1,param_2,param_3);
    if (iVar1 == 0) {
LAB_01752984:
      uVar2 = 0;
    }
    else {
      if ((*param_6 != 0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(*param_6 + 0x14), UNRECOVERED_JUMPTABLE != (code *)0x0)
         ) {
        if (iVar3 < 0) {
          FUN_016e9cd0(4,0,0x45,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x229);
        }
        else {
          local_28 = (*UNRECOVERED_JUMPTABLE)(iVar3,local_34,param_4,param_6,1);
          if (-1 < local_28) goto LAB_01752a2c;
        }
        local_28 = 0;
        goto LAB_01752984;
      }
      iVar3 = FUN_017526d8(param_6,&local_28,param_4,iVar3,local_34,local_30,1);
      if (iVar3 == 0) goto LAB_01752984;
LAB_01752a2c:
      uVar2 = 1;
      *param_5 = local_28;
    }
    if (local_2c != 0) {
      FUN_0177aafc(local_34);
    }
    goto LAB_01752994;
  }
  if (param_1 == 0x72) {
    if (param_3 == 0x24) goto code_r0x01752adc;
    uVar4 = 0x2d8;
LAB_01752a98:
    FUN_016e9cd0(4,0,0x7d,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar4);
  }
  else {
    if (param_1 == 4) {
      iVar3 = 0;
LAB_01752b00:
      if (param_3 == (byte)(&DAT_00428da0)[iVar3 * 0x1c]) {
        if (0x40 < param_3) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("digest_len <= EVP_MAX_MD_SIZE","/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x329,
                       "aws_lc_0_39_0_rsa_sign_no_self_test");
        }
code_r0x01752adc:
                    /* WARNING: Could not recover jumptable at 0x01752af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
        return uVar5;
      }
      uVar4 = 0x2e2;
      goto LAB_01752a98;
    }
    if (param_1 == 0x40) {
      iVar3 = 1;
      goto LAB_01752b00;
    }
    if (param_1 == 0x2a3) {
      iVar3 = 2;
      goto LAB_01752b00;
    }
    if (param_1 == 0x2a0) {
      iVar3 = 3;
      goto LAB_01752b00;
    }
    if (param_1 == 0x2a1) {
      iVar3 = 4;
      goto LAB_01752b00;
    }
    if (param_1 == 0x2a2) {
      iVar3 = 5;
      goto LAB_01752b00;
    }
    if (param_1 == 0x3d2) {
      iVar3 = 6;
      goto LAB_01752b00;
    }
    if (param_1 == 0x3c2) {
      iVar3 = 7;
      goto LAB_01752b00;
    }
    if (param_1 == 0x3c5) {
      iVar3 = 8;
      goto LAB_01752b00;
    }
    if (param_1 == 0x3c6) {
      iVar3 = 9;
      goto LAB_01752b00;
    }
    if (param_1 == 0x3c7) {
      iVar3 = 10;
      goto LAB_01752b00;
    }
    if (param_1 == 0x3c8) {
      iVar3 = 0xb;
      goto LAB_01752b00;
    }
    FUN_016e9cd0(4,0,0x8e,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x2e9);
  }
  uVar2 = 0;
LAB_01752994:
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return (ulonglong)uVar2;
}

