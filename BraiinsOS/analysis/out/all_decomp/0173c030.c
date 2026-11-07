// FUN_0173c030 @ 0173c030 size=176 calls_out=3 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined4 FUN_0173c030(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    iVar1 = FUN_016e6420();
    if (iVar1 != 0) {
      uVar2 = FUN_0173b2fc(param_1,0xffffffff,param_2,param_3,0,iVar1);
      return uVar2;
    }
  }
  FUN_016e9cd0(6,0,0x6f,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x263);
  return 0;
}

