// FUN_01b30a00 @ 01b30a00 size=208 calls_out=3 calls_in=2
// strings: aws_lc_0_39_0_bn_reduce_once | /aws-lc/crypto/fipsmodule/bn/div.c | r != a | aws_lc_0_39_0_bn_reduce_once | /aws-lc/crypto/fipsmodule/bn/div.c | constant_time_declassify_int(carry + 1 <= 1)

int FUN_01b30a00(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == param_2) {
    uVar3 = 0x16a;
    pcVar1 = "r != a";
  }
  else {
    iVar2 = FUN_01b30578(param_1,param_2,param_4,param_5);
    param_3 = param_3 - iVar2;
    if (param_3 + 1U < 2) {
      FUN_01b2b82c(param_1,param_3,param_2,param_1,param_5);
      return param_3;
    }
    uVar3 = 0x177;
    pcVar1 = "constant_time_declassify_int(carry + 1 <= 1)";
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar1,"/aws-lc/crypto/fipsmodule/bn/div.c",uVar3,"aws_lc_0_39_0_bn_reduce_once");
}

