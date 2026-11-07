// FUN_0173aa7c @ 0173aa7c size=284 calls_out=3 calls_in=6
// strings: aws_lc_0_39_0_EVP_PKEY_assign_EC_KEY | /aws-lc/crypto/fipsmodule/evp/evp.c | meth != NULL

bool FUN_0173aa7c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_016ef1d8();
  if ((((((*(int *)*puVar1 != 0x198) && (*(int *)puVar1[1] != 0x198)) &&
        (*(int *)puVar1[2] != 0x198)) &&
       ((*(int *)puVar1[3] != 0x198 && (*(int *)puVar1[4] != 0x198)))) &&
      ((*(int *)puVar1[5] != 0x198 && ((*(int *)puVar1[6] != 0x198 && (*(int *)puVar1[7] != 0x198)))
       ))) && ((*(int *)puVar1[8] != 0x198 &&
               ((*(int *)puVar1[9] != 0x198 && (*(int *)puVar1[10] != 0x198)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("meth != NULL","/aws-lc/crypto/fipsmodule/evp/evp.c",0x1d0,
                 "aws_lc_0_39_0_EVP_PKEY_assign_EC_KEY");
  }
  FUN_0173a734(param_1);
  *(int *)(param_1 + 8) = param_2;
  return param_2 != 0;
}

