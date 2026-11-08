// FUN_01b86ab4 @ 01b86ab4 size=88 calls_out=1 calls_in=4
// strings: 

undefined4 FUN_01b86ab4(int param_1,code *UNRECOVERED_JUMPTABLE,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar1 = thunk_FUN_01be4678();
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x01b86adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_3);
  return uVar1;
}

