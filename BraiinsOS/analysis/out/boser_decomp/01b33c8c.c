// FUN_01b33c8c @ 01b33c8c size=172 calls_out=4 calls_in=6
// strings: /aws-lc/crypto/fipsmodule/bn/shift.c

undefined4 FUN_01b33c8c(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
    FUN_01b053d4(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/shift.c",0x69);
  }
  else {
    iVar1 = FUN_01b2b248(param_1,param_2[1]);
    if (iVar1 != 0) {
      FUN_01b33bdc(*param_1,*param_2,param_3,param_2[1]);
      param_1[3] = param_2[3];
      param_1[1] = param_2[1];
      FUN_01b2b964(param_1);
      return 1;
    }
  }
  return 0;
}

