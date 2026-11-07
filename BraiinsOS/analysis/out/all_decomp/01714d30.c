// FUN_01714d30 @ 01714d30 size=208 calls_out=4 calls_in=11
// strings: /aws-lc/crypto/fipsmodule/bn/bn.c

undefined8 FUN_01714d30(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < (uint)param_1[1]) {
    iVar1 = FUN_01714430();
    if (iVar1 != 0) goto LAB_01714d94;
    FUN_016e9cd0(3,0,0x66,"/aws-lc/crypto/fipsmodule/bn/bn.c",0x174);
  }
  else {
    iVar1 = FUN_0171464c();
    if (iVar1 != 0) {
      if ((param_2 - param_1[1] & 0x3fffffff) != 0) {
        FUN_016dd606(*param_1 + param_1[1] * 4,0);
      }
LAB_01714d94:
      param_1[1] = param_2;
      return 1;
    }
  }
  return 0;
}

