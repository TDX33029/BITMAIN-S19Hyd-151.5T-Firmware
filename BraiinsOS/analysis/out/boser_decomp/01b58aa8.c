// FUN_01b58aa8 @ 01b58aa8 size=480 calls_out=7 calls_in=1
// strings: aws_lc_0_39_0_rsa_sign_no_self_test | /aws-lc/crypto/fipsmodule/rsa/rsa.c | digest_len <= EVP_MAX_MD_SIZE

ulonglong FUN_01b58aa8(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                      undefined4 *param_5,int *param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  if ((*param_6 == 0) || (*(int *)(*param_6 + 0x10) == 0)) {
    uVar2 = FUN_01b565f4(param_6);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    iVar1 = FUN_01b557ac(&local_3c,&local_38,&local_34,param_1,param_2,param_3);
    if (iVar1 == 0) {
LAB_01b589f0:
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      iVar1 = FUN_01b586cc(param_6,&local_30,param_4,uVar2,local_3c,local_38,1);
      if (iVar1 == 0) goto LAB_01b589f0;
      *param_5 = local_30;
    }
    if (local_34 != 0) {
      FUN_01b6b1c4(local_3c);
    }
  }
  else {
    iVar1 = FUN_01b1fbec(param_1,param_3);
    uVar3 = 0;
    if (iVar1 != 0) {
      if (0x40 < param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_01be3310("digest_len <= EVP_MAX_MD_SIZE","/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x329,
                     "aws_lc_0_39_0_rsa_sign_no_self_test");
      }
      if (local_2c == DAT_01d53560) {
                    /* WARNING: Could not recover jumptable at 0x01b589b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*param_6 + 0x10))(param_1,param_2,param_3,param_4);
        return uVar4;
      }
      goto LAB_01b58980;
    }
  }
  if (local_2c == DAT_01d53560) {
    return (ulonglong)uVar3;
  }
LAB_01b58980:
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4();
}

