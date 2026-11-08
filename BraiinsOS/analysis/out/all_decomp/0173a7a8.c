// FUN_0173a7a8 @ 0173a7a8 size=284 calls_out=3 calls_in=5
// strings: aws_lc_0_39_0_EVP_PKEY_assign_RSA | /aws-lc/crypto/fipsmodule/evp/evp.c | meth != NULL

bool FUN_0173a7a8(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_016ef1d8();
  if ((((((*(int *)*puVar1 != 6) && (*(int *)puVar1[1] != 6)) && (*(int *)puVar1[2] != 6)) &&
       ((*(int *)puVar1[3] != 6 && (*(int *)puVar1[4] != 6)))) &&
      ((*(int *)puVar1[5] != 6 && ((*(int *)puVar1[6] != 6 && (*(int *)puVar1[7] != 6)))))) &&
     ((*(int *)puVar1[8] != 6 && ((*(int *)puVar1[9] != 6 && (*(int *)puVar1[10] != 6)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("meth != NULL","/aws-lc/crypto/fipsmodule/evp/evp.c",0x188,
                 "aws_lc_0_39_0_EVP_PKEY_assign_RSA");
  }
  FUN_0173a734(param_1);
  *(int *)(param_1 + 8) = param_2;
  return param_2 != 0;
}

