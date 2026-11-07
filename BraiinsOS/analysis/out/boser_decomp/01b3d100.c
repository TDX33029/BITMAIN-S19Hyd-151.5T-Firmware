// FUN_01b3d100 @ 01b3d100 size=88 calls_out=1 calls_in=7
// strings: aws_lc_0_39_0_EC_GROUP_get0_order | /aws-lc/crypto/fipsmodule/ec/ec.c | group->has_order

int FUN_01b3d100(int param_1)

{
  if (*(int *)(param_1 + 0x1d4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("group->has_order","/aws-lc/crypto/fipsmodule/ec/ec.c",0x1cb,
                 "aws_lc_0_39_0_EC_GROUP_get0_order");
  }
  return param_1 + 0xe8;
}

