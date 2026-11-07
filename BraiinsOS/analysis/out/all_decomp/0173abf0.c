// FUN_0173abf0 @ 0173abf0 size=204 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ec.c

undefined8 FUN_0173abf0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar2 + 4) == 0) {
    FUN_016e9cd0(6,0,0x7c,"/aws-lc/crypto/fipsmodule/evp/p_ec.c",0xf2);
  }
  else {
    iVar1 = FUN_0172cc2c();
    if (iVar1 != 0) {
      iVar2 = FUN_01737020(iVar1,*(undefined4 *)(iVar2 + 4));
      if (iVar2 != 0) {
        FUN_0173aa7c(param_2,iVar1);
        return 1;
      }
    }
    FUN_0172c984(iVar1);
  }
  return 0;
}

