// FUN_0171ea08 @ 0171ea08 size=200 calls_out=4 calls_in=6
// strings: /aws-lc/crypto/fipsmodule/bn/shift.c

undefined8 FUN_0171ea08(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 < 0) {
    FUN_016e9cd0(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/shift.c",0x69);
  }
  else {
    iVar1 = FUN_0171464c(param_1,param_2[1]);
    if (iVar1 != 0) {
      FUN_0171e8ec(*param_1,*param_2,param_3,param_2[1]);
      uVar2 = param_2[1];
      param_1[3] = param_2[3];
      param_1[1] = uVar2;
      FUN_01714f48(param_1);
      return 1;
    }
  }
  return 0;
}

