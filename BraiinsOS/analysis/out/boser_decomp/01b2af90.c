// FUN_01b2af90 @ 01b2af90 size=148 calls_out=2 calls_in=1
// strings: aws_lc_0_39_0_bn_set_static_words | /aws-lc/crypto/fipsmodule/bn/bn.c | num <= BN_MAX_WORDS

undefined8 FUN_01b2af90(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  if ((param_1[4] & 2) == 0) {
    FUN_01b6b1c4(*param_1);
  }
  *param_1 = param_2;
  if (0xffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("num <= BN_MAX_WORDS","/aws-lc/crypto/fipsmodule/bn/bn.c",0xff,
                 "aws_lc_0_39_0_bn_set_static_words");
  }
  param_1[3] = 0;
  param_1[1] = param_3;
  param_1[2] = param_3;
  param_1[4] = param_1[4] | 2;
  return 0;
}

