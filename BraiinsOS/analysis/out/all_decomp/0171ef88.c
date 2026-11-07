// FUN_0171ef88 @ 0171ef88 size=172 calls_out=1 calls_in=5
// strings: 

ulonglong FUN_0171ef88(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  
  iVar1 = FUN_0171ead4(0,param_1,param_2,param_3,param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      if (*(int *)(param_3 + 0xc) == 0) {
        UNRECOVERED_JUMPTABLE = FUN_0171a934;
      }
      else {
        UNRECOVERED_JUMPTABLE = FUN_0171aa2c;
      }
                    /* WARNING: Could not recover jumptable at 0x0171f004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_3);
      return uVar3;
    }
    uVar2 = 1;
  }
  return (ulonglong)uVar2;
}

