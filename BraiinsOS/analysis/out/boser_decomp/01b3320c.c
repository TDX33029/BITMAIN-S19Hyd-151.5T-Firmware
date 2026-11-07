// FUN_01b3320c @ 01b3320c size=180 calls_out=4 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c

bool FUN_01b3320c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_01b325fc(param_4,param_3);
  if (iVar1 == 0) {
    FUN_01b053d4(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x280);
  }
  else {
    iVar1 = FUN_01b32498(param_1,param_2,param_3,param_5);
    if (iVar1 != 0) {
      iVar1 = FUN_01b331cc(param_1,param_1,param_3,param_5);
      return iVar1 != 0;
    }
  }
  return false;
}

