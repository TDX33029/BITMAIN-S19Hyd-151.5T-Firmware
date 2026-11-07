// FUN_0172ac3c @ 0172ac3c size=196 calls_out=3 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/digest/digest.c

undefined4 FUN_0172ac3c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    uVar1 = FUN_0172a880(*param_1);
    if ((uVar1 & 4) != 0) {
      uVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
      FUN_0172abc4(param_1);
      return uVar2;
    }
    FUN_016e9cd0(0x1d,0,0x42,"/aws-lc/crypto/fipsmodule/digest/digest.c",0x5f);
  }
  return 0;
}

