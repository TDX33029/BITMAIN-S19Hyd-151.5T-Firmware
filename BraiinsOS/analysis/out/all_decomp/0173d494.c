// FUN_0173d494 @ 0173d494 size=184 calls_out=2 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/evp/p_rsa.c

undefined4
FUN_0173d494(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_1 == (int *)0x0) || ((int *)*param_1 == (int *)0x0)) ||
     (iVar2 = *(int *)*param_1, iVar2 == 6 || iVar2 == 0x390)) {
    uVar1 = FUN_0173b2fc(param_1,0xffffffff,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x325);
  return 0;
}

