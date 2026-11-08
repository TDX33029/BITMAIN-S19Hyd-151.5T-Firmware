// FUN_014a8004 @ 014a8004 size=212 calls_out=4 calls_in=0
// strings: DynamicPowerScaling | internal error: entered unreachable code | serialize_value called before serialize_key

void FUN_014a8004(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_40 [7];
  
  if (*param_1 == 0) {
    iVar1 = FUN_007025b0(param_1,"DynamicPowerScaling",0x13);
    if (iVar1 == 0) {
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      iVar1 = param_1[4];
      param_1[4] = -0x80000000;
      if (iVar1 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
                    /* WARNING: Could not recover jumptable at 0x014a8080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_014a8084 + *(int *)(&DAT_014a8084 + *param_2 * 4)))();
      return;
    }
  }
  else {
    local_40[0] = 10;
    FUN_01966fbc(local_40,0,0);
  }
  return;
}

