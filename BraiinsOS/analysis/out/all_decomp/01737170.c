// FUN_01737170 @ 01737170 size=212 calls_out=4 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c

undefined4 FUN_01737170(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*param_1 == 0) {
    FUN_016e9cd0(0xf,0,0x72,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0xcd);
  }
  else {
    if ((param_2 == (undefined4 *)0x0) || (iVar1 = FUN_01736960(*param_1,*param_2,0), iVar1 == 0)) {
      FUN_0172c788(param_1[1]);
      iVar1 = FUN_01736b68(param_2,*param_1);
      param_1[1] = iVar1;
      if (iVar1 == 0) {
        return 0;
      }
      return 1;
    }
    FUN_016e9cd0(0xf,0,0x82,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0xd2);
  }
  return 0;
}

