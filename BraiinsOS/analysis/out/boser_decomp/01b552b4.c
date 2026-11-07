// FUN_01b552b4 @ 01b552b4 size=208 calls_out=3 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c

undefined4 FUN_01b552b4(undefined1 *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 < 0xb) {
    uVar2 = 0x1a;
    uVar1 = 0x7e;
  }
  else {
    if (param_4 <= param_2 - 0xb) {
      *param_1 = 0;
      param_1[1] = 1;
      FUN_01b257dc(param_1 + 2,0xff,(param_2 - param_4) + -3);
      (param_1 + (param_2 - param_4))[-1] = 0;
      FUN_01b26974(param_1 + (param_2 - param_4),param_3,param_4);
      return 1;
    }
    uVar2 = 0x1f;
    uVar1 = 0x76;
  }
  FUN_01b053d4(4,0,uVar1,"/aws-lc/crypto/fipsmodule/rsa/padding.c",uVar2);
  return 0;
}

