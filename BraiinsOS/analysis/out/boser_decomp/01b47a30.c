// FUN_01b47a30 @ 01b47a30 size=120 calls_out=3 calls_in=6
// strings: aws_lc_0_39_0_EVP_PKEY_assign_EC_KEY | /aws-lc/crypto/fipsmodule/evp/evp.c | meth != NULL

bool FUN_01b47a30(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_01b2052c(0x198);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("meth != NULL","/aws-lc/crypto/fipsmodule/evp/evp.c",0x1d0,
                 "aws_lc_0_39_0_EVP_PKEY_assign_EC_KEY");
  }
  FUN_01b4777c(param_1);
  *(int *)(param_1 + 8) = param_2;
  return param_2 != 0;
}

