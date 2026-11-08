// FUN_0173b6c4 @ 0173b6c4 size=212 calls_out=1 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined8 FUN_0173b6c4(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0xca);
    return 0;
  }
  if (param_1[4] == 8) {
                    /* WARNING: Could not recover jumptable at 0x0173b714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_016e9cd0(6,0,0x7e,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0xce);
  return 0;
}

