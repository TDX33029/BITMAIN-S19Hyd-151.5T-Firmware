// FUN_01b2bf20 @ 01b2bf20 size=192 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/ec/simple.c | /aws-lc/crypto/fipsmodule/ec/simple.c

undefined4 FUN_01b2bf20(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01b2b938(param_1 + 0x118);
  if (iVar1 == param_4) {
    FUN_01b2b99c(param_2,*(undefined4 *)(param_1 + 0x11c),param_3,iVar1);
    iVar1 = FUN_01b2bee0(param_2,*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c));
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = 0x111;
  }
  else {
    uVar2 = 0x10a;
  }
  FUN_01b053d4(0xf,0,0x80,"/aws-lc/crypto/fipsmodule/ec/simple.c",uVar2);
  return 0;
}

