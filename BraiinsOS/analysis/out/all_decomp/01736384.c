// FUN_01736384 @ 01736384 size=204 calls_out=2 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c | /aws-lc/crypto/fipsmodule/ec/ec.c

undefined8 FUN_01736384(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0 || param_3 == 0) {
    FUN_016e9cd0(0xf,0,0x43,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x37d);
  }
  else {
    (**(code **)(*param_1 + 0x10))();
    iVar1 = FUN_017361a0(param_1,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_016e9cd0(0xf,0,0x44,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x386);
  }
  return 0;
}

