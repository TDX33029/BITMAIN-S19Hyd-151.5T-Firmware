// FUN_01843c8c @ 01843c8c size=60 calls_out=3 calls_in=1
// strings: libunwind: _Unwind_DeleteException(ex_obj=%p) 

void FUN_01843c8c(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_01845188();
  if (iVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  }
  else {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: _Unwind_DeleteException(ex_obj=%p)\n",param_1);
    FUN_016daeb4(&DAT_018db5c0);
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01843ca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(1,param_1);
  return;
}

