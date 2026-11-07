// FUN_01b3cde8 @ 01b3cde8 size=168 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c

undefined4 FUN_01b3cde8(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x19f) {
    uVar1 = FUN_01b3ccb8();
    return uVar1;
  }
  if (3 < param_1 - 0x2c9U) {
    FUN_01b053d4(0xf,0,0x7b,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x156);
    return 0;
  }
  switch(param_1) {
  case 0x2ca:
    uVar1 = FUN_01b3cd9c();
    return uVar1;
  case 0x2cb:
    uVar1 = FUN_01b3cd04();
    return uVar1;
  case 0x2cc:
    uVar1 = FUN_01b3cd50();
    return uVar1;
  default:
    uVar1 = FUN_01b3cc6c();
    return uVar1;
  }
}

