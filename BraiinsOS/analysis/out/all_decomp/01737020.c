// FUN_01737020 @ 01737020 size=308 calls_out=5 calls_in=7
// strings: /aws-lc/crypto/fipsmodule/ec/ec_key.c | aws_lc_0_39_0_EC_KEY_set_group | /aws-lc/crypto/fipsmodule/ec/ec_key.c | key->pub_key == NULL | aws_lc_0_39_0_EC_KEY_set_group | /aws-lc/crypto/fipsmodule/ec/ec_key.c

bool FUN_01737020(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = FUN_01736960(*param_1,param_2,0);
    if (iVar1 == 0) {
      return true;
    }
    FUN_016e9cd0(0xf,0,0x82,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0x9d);
    return false;
  }
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("key->priv_key == NULL","/aws-lc/crypto/fipsmodule/ec/ec_key.c",0xa3,
                 "aws_lc_0_39_0_EC_KEY_set_group");
  }
  if (param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("key->pub_key == NULL","/aws-lc/crypto/fipsmodule/ec/ec_key.c",0xa4,
                 "aws_lc_0_39_0_EC_KEY_set_group");
  }
  FUN_0172c494();
  iVar1 = FUN_0172c500(param_2);
  *param_1 = iVar1;
  return iVar1 != 0;
}

