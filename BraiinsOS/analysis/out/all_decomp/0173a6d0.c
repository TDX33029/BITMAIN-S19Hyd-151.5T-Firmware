// FUN_0173a6d0 @ 0173a6d0 size=76 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_0173a6d0(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xc) == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xc) + 0x48),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0173a700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}

