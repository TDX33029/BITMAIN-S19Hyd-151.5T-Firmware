// FUN_01b41ab0 @ 01b41ab0 size=148 calls_out=3 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/ec/scalar.c

undefined4 FUN_01b41ab0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01b2b0e4(param_2,*(undefined4 *)(param_1 + 0xec));
  if ((iVar1 == 0) ||
     (iVar1 = FUN_01b2bee0(param_2,*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec)),
     iVar1 == 0)) {
    FUN_01b053d4(0xf,0,0x85,"/aws-lc/crypto/fipsmodule/ec/scalar.c",0x15);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

