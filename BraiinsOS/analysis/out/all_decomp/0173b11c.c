// FUN_0173b11c @ 0173b11c size=100 calls_out=0 calls_in=2
// strings: 

ulonglong FUN_0173b11c(int param_1,int param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
    if ((*(int *)(param_1 + 0xc) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xc) + 0x54),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0173b154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return (ulonglong)uVar1;
}

