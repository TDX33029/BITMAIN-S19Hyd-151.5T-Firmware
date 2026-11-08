// FUN_01b483a0 @ 01b483a0 size=172 calls_out=1 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined8 FUN_01b483a0(int *param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    uVar3 = 0xca;
    uVar1 = 0x7d;
  }
  else {
    if (param_1[4] == 8) {
                    /* WARNING: Could not recover jumptable at 0x01b48448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    uVar3 = 0xce;
    uVar1 = 0x7e;
  }
  FUN_01b053d4(6,0,uVar1,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",uVar3);
  return 0;
}

