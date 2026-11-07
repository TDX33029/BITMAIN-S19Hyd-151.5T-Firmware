// FUN_0173b2fc @ 0173b2fc size=328 calls_out=1 calls_in=16
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined8
FUN_0173b2fc(int *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (((param_1 == (int *)0x0) || (piVar1 = (int *)*param_1, piVar1 == (int *)0x0)) ||
     ((code *)piVar1[0x10] == (code *)0x0)) {
    FUN_016e9cd0(6,0,0x65,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0xa1);
  }
  else {
    if ((param_2 != -1) && (*piVar1 != param_2)) {
      FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0xa5);
      return 0;
    }
    if (param_1[4] == 0) {
      FUN_016e9cd0(6,0,0x7b,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0xaa);
    }
    else {
      if ((param_3 == 0xffffffff) || ((param_1[4] & param_3) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0173b384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)piVar1[0x10])(param_1,param_4,param_5,param_6);
        return uVar2;
      }
      FUN_016e9cd0(6,0,0x72,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0xaf);
    }
  }
  return 0;
}

