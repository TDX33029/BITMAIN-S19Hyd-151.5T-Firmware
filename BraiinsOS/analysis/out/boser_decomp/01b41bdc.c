// FUN_01b41bdc @ 01b41bdc size=228 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c

undefined4 FUN_01b41bdc(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    FUN_01b053d4(0xf,0,0x72,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0xb1);
  }
  else {
    iVar1 = FUN_01b1fcd8();
    if (iVar1 != 0) {
      iVar2 = FUN_01b41ab0(*param_1,iVar1 + 0x14,param_2);
      if ((iVar2 != 0) && (iVar2 = FUN_01b41b94(*param_1,iVar1 + 0x14), iVar2 == 0)) {
        FUN_01b6b1c4(param_1[2]);
        param_1[2] = iVar1;
        return 1;
      }
      FUN_01b053d4(0xf,0,0x71,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",0xbe);
      FUN_01b6b1c4(iVar1);
    }
  }
  return 0;
}

