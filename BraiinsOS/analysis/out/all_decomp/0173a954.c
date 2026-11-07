// FUN_0173a954 @ 0173a954 size=284 calls_out=3 calls_in=2
// strings: aws_lc_0_39_0_EVP_PKEY_assign_DSA | /aws-lc/crypto/fipsmodule/evp/evp.c | meth != NULL

bool FUN_0173a954(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_016ef1d8();
  if ((((((*(int *)*puVar1 != 0x74) && (*(int *)puVar1[1] != 0x74)) && (*(int *)puVar1[2] != 0x74))
       && ((*(int *)puVar1[3] != 0x74 && (*(int *)puVar1[4] != 0x74)))) &&
      ((*(int *)puVar1[5] != 0x74 && ((*(int *)puVar1[6] != 0x74 && (*(int *)puVar1[7] != 0x74))))))
     && ((*(int *)puVar1[8] != 0x74 && ((*(int *)puVar1[9] != 0x74 && (*(int *)puVar1[10] != 0x74)))
         ))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("meth != NULL","/aws-lc/crypto/fipsmodule/evp/evp.c",0x1ac,
                 "aws_lc_0_39_0_EVP_PKEY_assign_DSA");
  }
  FUN_0173a734(param_1);
  *(int *)(param_1 + 8) = param_2;
  return param_2 != 0;
}

