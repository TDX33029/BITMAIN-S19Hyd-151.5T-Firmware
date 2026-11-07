// FUN_0171ab40 @ 0171ab40 size=208 calls_out=3 calls_in=2
// strings: aws_lc_0_39_0_bn_reduce_once | /aws-lc/crypto/fipsmodule/bn/div.c | r != a | aws_lc_0_39_0_bn_reduce_once | /aws-lc/crypto/fipsmodule/bn/div.c | constant_time_declassify_int(carry + 1 <= 1)

int FUN_0171ab40(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("r != a","/aws-lc/crypto/fipsmodule/bn/div.c",0x16a,"aws_lc_0_39_0_bn_reduce_once")
    ;
  }
  iVar1 = FUN_0171a550(param_1,param_2,param_4,param_5);
  param_3 = param_3 - iVar1;
  if (1 < param_3 + 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("constant_time_declassify_int(carry + 1 <= 1)","/aws-lc/crypto/fipsmodule/bn/div.c"
                 ,0x177,"aws_lc_0_39_0_bn_reduce_once");
  }
  FUN_01714e04(param_1,param_3,param_2,param_1,param_5);
  return param_3;
}

