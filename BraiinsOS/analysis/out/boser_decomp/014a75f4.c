// FUN_014a75f4 @ 014a75f4 size=224 calls_out=5 calls_in=0
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_014a75f4(int *param_1)

{
  int iVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  char acStack_50 [28];
  int iStack_34;
  int iStack_30;
  int local_2c;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_007025b0();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
  }
  iStack_34 = param_1[4];
  iStack_30 = param_1[5];
  local_2c = param_1[6];
  param_1[4] = -0x80000000;
  if (iStack_34 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
  }
  local_18 = in_stack_00000000;
  auStack_28[0] = 2;
  local_14 = in_stack_00000004;
  local_20 = 0;
  uStack_1c = 0;
  FUN_0196b484(acStack_50,param_1 + 1,&iStack_34,auStack_28);
  if (acStack_50[0] != '\x06') {
    FUN_00db4764(acStack_50);
  }
  return 0;
}

