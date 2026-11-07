// FUN_01b30cc4 @ 01b30cc4 size=172 calls_out=3 calls_in=4
// strings: aws_lc_0_39_0_bn_reduce_once_in_place | /aws-lc/crypto/fipsmodule/bn/div.c | constant_time_declassify_int(carry + 1 <= 1)

int FUN_01b30cc4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_01b30578(param_4,param_1,param_3,param_5);
  param_2 = param_2 - iVar1;
  if (1 < param_2 + 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("constant_time_declassify_int(carry + 1 <= 1)","/aws-lc/crypto/fipsmodule/bn/div.c"
                 ,0x180,"aws_lc_0_39_0_bn_reduce_once_in_place");
  }
  FUN_01b2b82c(param_1,param_2,param_1,param_4,param_5);
  return param_2;
}

