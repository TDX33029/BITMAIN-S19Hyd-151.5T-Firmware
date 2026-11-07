// FUN_01be1238 @ 01be1238 size=60 calls_out=3 calls_in=1
// strings: libunwind: _Unwind_DeleteException(ex_obj=%p) 

void FUN_01be1238(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_01be2734();
  if (iVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  }
  else {
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: _Unwind_DeleteException(ex_obj=%p)\n",param_1);
    FUN_01beb1cc(&DAT_01d50fd8);
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01be1252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(1,param_1);
  return;
}

