// FUN_01715864 @ 01715864 size=204 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/ec/simple.c | /aws-lc/crypto/fipsmodule/ec/simple.c

undefined4 FUN_01715864(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_01714f1c(param_1 + 0x118);
  if (iVar1 == param_4) {
    FUN_01714f80(param_2,*(undefined4 *)(param_1 + 0x11c),param_3,iVar1);
    iVar1 = FUN_01715824(param_2,*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c));
    if (iVar1 != 0) {
      return 1;
    }
    FUN_016e9cd0(0xf,0,0x80,"/aws-lc/crypto/fipsmodule/ec/simple.c",0x111);
  }
  else {
    FUN_016e9cd0(0xf,0,0x80,"/aws-lc/crypto/fipsmodule/ec/simple.c",0x10a);
  }
  return 0;
}

