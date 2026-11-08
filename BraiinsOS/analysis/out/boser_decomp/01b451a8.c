// FUN_01b451a8 @ 01b451a8 size=244 calls_out=5 calls_in=7
// strings: /aws-lc/crypto/fipsmodule/ec/ec_key.c | aws_lc_0_39_0_EC_KEY_set_group | /aws-lc/crypto/fipsmodule/ec/ec_key.c | key->priv_key == NULL | aws_lc_0_39_0_EC_KEY_set_group | /aws-lc/crypto/fipsmodule/ec/ec_key.c

bool FUN_01b451a8(int *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (*param_1 != 0) {
    iVar1 = FUN_01b44b4c(*param_1,param_2,0);
    if (iVar1 != 0) {
      FUN_01b053d4(0xf,0,0x82,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0x9d);
    }
    return iVar1 == 0;
  }
  if (param_1[2] == 0) {
    if (param_1[1] == 0) {
      FUN_01b3cfc8();
      iVar1 = FUN_01b3d034(param_2);
      *param_1 = iVar1;
      return iVar1 != 0;
    }
    uVar3 = 0xa4;
    pcVar2 = "key->pub_key == NULL";
  }
  else {
    uVar3 = 0xa3;
    pcVar2 = "key->priv_key == NULL";
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar2,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",uVar3,"aws_lc_0_39_0_EC_KEY_set_group"
              );
}

