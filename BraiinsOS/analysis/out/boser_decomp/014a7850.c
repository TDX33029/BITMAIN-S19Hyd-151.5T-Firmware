// FUN_014a7850 @ 014a7850 size=268 calls_out=6 calls_in=1
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_014a7850(int *param_1)

{
  int iVar1;
  undefined4 in_stack_00000000;
  uint in_stack_00000004;
  char local_50 [28];
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28 [2];
  uint local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  if (*param_1 == 0) {
    iVar1 = FUN_007025b0(param_1);
    if (iVar1 == 0) {
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      local_34 = param_1[4];
      local_30 = param_1[5];
      local_2c = param_1[6];
      param_1[4] = -0x80000000;
      if (local_34 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      iVar1 = 0;
      local_20 = in_stack_00000004 >> 0x1f;
      local_14 = in_stack_00000004;
      uStack_1c = 0;
      uStack_18 = in_stack_00000000;
      local_28[0] = CONCAT31(local_28[0]._1_3_,2);
      FUN_0196b484(local_50,param_1 + 1,&local_34,local_28);
      if (local_50[0] != '\x06') {
        FUN_00db4764(local_50);
      }
    }
  }
  else {
    local_28[0] = 10;
    iVar1 = FUN_01966fbc(local_28,0,0);
  }
  return iVar1;
}

