// FUN_01736458 @ 01736458 size=176 calls_out=2 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c | /aws-lc/crypto/fipsmodule/ec/ec.c

undefined4 FUN_01736458(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    FUN_016e9cd0(0xf,0,0x43,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x391);
  }
  else {
    (**(code **)(*param_1 + 0x14))();
    iVar1 = FUN_017361a0(param_1,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_016e9cd0(0xf,0,0x44,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x39d);
  }
  return 0;
}

