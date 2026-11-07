// FUN_0173d144 @ 0173d144 size=148 calls_out=2 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/p_hmac.c | /aws-lc/crypto/fipsmodule/evp/p_hmac.c

undefined4 FUN_0173d144(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_hmac.c",0xb2);
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      uVar1 = FUN_0173cfd0(param_1,*param_2,param_2[1]);
      return uVar1;
    }
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_hmac.c",0xb3);
  }
  return 0;
}

