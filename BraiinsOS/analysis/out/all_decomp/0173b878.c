// FUN_0173b878 @ 0173b878 size=212 calls_out=1 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined8 FUN_0173b878(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x24), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0xe7);
    return 0;
  }
  if (param_1[4] == 0x10) {
                    /* WARNING: Could not recover jumptable at 0x0173b8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_016e9cd0(6,0,0x7e,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0xeb);
  return 0;
}

