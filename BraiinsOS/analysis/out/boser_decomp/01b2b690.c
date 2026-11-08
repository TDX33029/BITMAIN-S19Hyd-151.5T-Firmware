// FUN_01b2b690 @ 01b2b690 size=108 calls_out=2 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/bn/bn.c

undefined4 FUN_01b2b690(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0xffffffe1) {
    uVar1 = FUN_01b2b248(param_1,param_2 + 0x1f >> 5);
    return uVar1;
  }
  FUN_01b053d4(3,0,0x66,"/aws-lc/crypto/fipsmodule/bn/bn.c",0x150);
  return 0;
}

