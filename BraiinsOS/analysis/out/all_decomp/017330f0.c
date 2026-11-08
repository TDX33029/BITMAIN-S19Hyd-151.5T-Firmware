// FUN_017330f0 @ 017330f0 size=172 calls_out=3 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/ec/scalar.c

undefined8 FUN_017330f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_017144f8(param_2,*(undefined4 *)(param_1 + 0xec));
  if ((iVar1 == 0) ||
     (iVar1 = FUN_01715824(param_2,*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec)),
     iVar1 == 0)) {
    FUN_016e9cd0(0xf,0,0x85,"/aws-lc/crypto/fipsmodule/ec/scalar.c",0x15);
    return 0;
  }
  return 1;
}

