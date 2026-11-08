// FUN_01b479ac @ 01b479ac size=120 calls_out=3 calls_in=2
// strings: aws_lc_0_39_0_EVP_PKEY_assign_DSA | /aws-lc/crypto/fipsmodule/evp/evp.c | meth != NULL

bool FUN_01b479ac(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_01b2052c(0x74);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("meth != NULL","/aws-lc/crypto/fipsmodule/evp/evp.c",0x1ac,
                 "aws_lc_0_39_0_EVP_PKEY_assign_DSA");
  }
  FUN_01b4777c(param_1);
  *(int *)(param_1 + 8) = param_2;
  return param_2 != 0;
}

