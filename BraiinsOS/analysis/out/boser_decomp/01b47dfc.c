// FUN_01b47dfc @ 01b47dfc size=124 calls_out=1 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/evp.c

undefined8 FUN_01b47dfc(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xc) == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xc) + 0x3c),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_01b053d4(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp.c",0x26a);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01b47e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}

