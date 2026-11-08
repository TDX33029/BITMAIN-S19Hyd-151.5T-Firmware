// FUN_0172c284 @ 0172c284 size=168 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c

undefined4 FUN_0172c284(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x19f) {
    uVar1 = FUN_0172c154();
    return uVar1;
  }
  if (3 < param_1 - 0x2c9U) {
    FUN_016e9cd0(0xf,0,0x7b,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x156);
    return 0;
  }
  switch(param_1) {
  case 0x2ca:
    uVar1 = FUN_0172c238();
    return uVar1;
  case 0x2cb:
    uVar1 = FUN_0172c1a0();
    return uVar1;
  case 0x2cc:
    uVar1 = FUN_0172c1ec();
    return uVar1;
  default:
    uVar1 = FUN_0172c108();
    return uVar1;
  }
}

