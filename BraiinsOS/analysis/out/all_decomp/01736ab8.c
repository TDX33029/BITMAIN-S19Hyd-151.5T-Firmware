// FUN_01736ab8 @ 01736ab8 size=172 calls_out=3 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c

undefined8 FUN_01736ab8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_01736960(*param_1,*param_2,0);
  if (iVar1 != 0) {
    FUN_016e9cd0(0xf,0,0x6a,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x22b);
    return 0;
  }
  if (param_1 != param_2) {
    FUN_01733d34(param_1 + 1,param_2 + 1);
  }
  return 1;
}

