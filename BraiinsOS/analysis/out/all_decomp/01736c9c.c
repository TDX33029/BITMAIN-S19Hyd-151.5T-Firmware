// FUN_01736c9c @ 01736c9c size=136 calls_out=3 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c

undefined4 FUN_01736c9c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01736960(param_1,*param_2,0);
  if (iVar1 == 0) {
    uVar2 = FUN_017361a0(param_1,param_2 + 1);
    return uVar2;
  }
  FUN_016e9cd0(0xf,0,0x6a,"/aws-lc/crypto/fipsmodule/ec/ec.c",599);
  return 0;
}

