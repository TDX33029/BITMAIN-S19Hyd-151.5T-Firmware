// FUN_01b554f4 @ 01b554f4 size=144 calls_out=2 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c

undefined4 FUN_01b554f4(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 <= param_4 && param_4 != param_2) {
    uVar2 = 0x62;
    uVar1 = 0x72;
  }
  else {
    if (param_2 <= param_4) {
      FUN_01b26974(param_1,param_3,param_4);
      return 1;
    }
    uVar2 = 0x67;
    uVar1 = 0x74;
  }
  FUN_01b053d4(4,0,uVar1,"/aws-lc/crypto/fipsmodule/rsa/padding.c",uVar2);
  return 0;
}

