// FUN_01b2b700 @ 01b2b700 size=168 calls_out=4 calls_in=11
// strings: /aws-lc/crypto/fipsmodule/bn/bn.c

undefined4 FUN_01b2b700(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < (uint)param_1[1]) {
    iVar1 = FUN_01b2b09c();
    if (iVar1 == 0) {
      FUN_01b053d4(3,0,0x66,"/aws-lc/crypto/fipsmodule/bn/bn.c",0x174);
      return 0;
    }
  }
  else {
    iVar1 = FUN_01b2b248();
    if (iVar1 == 0) {
      return 0;
    }
    FUN_01b257dc(*param_1 + param_1[1] * 4,0,(param_2 - param_1[1]) * 4);
  }
  param_1[1] = param_2;
  return 1;
}

