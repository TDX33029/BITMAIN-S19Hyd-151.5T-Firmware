// FUN_01b49b48 @ 01b49b48 size=144 calls_out=2 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/p_hmac.c | /aws-lc/crypto/fipsmodule/evp/p_hmac.c

undefined8 FUN_01b49b48(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xb2;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      uVar1 = FUN_01b49a18(param_1,*param_2,param_2[1]);
      return uVar1;
    }
    uVar2 = 0xb3;
  }
  FUN_01b053d4(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_hmac.c",uVar2);
  return 0;
}

