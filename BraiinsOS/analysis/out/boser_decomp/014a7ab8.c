// FUN_014a7ab8 @ 014a7ab8 size=108 calls_out=2 calls_in=4
// strings: 

int FUN_014a7ab8(int *param_1)

{
  int iVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  char acStack_50 [28];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*param_1 == 0) {
    iVar1 = FUN_007025b0(param_1);
    if (iVar1 == 0) {
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      iStack_34 = param_1[4];
      iStack_30 = param_1[5];
      iStack_2c = param_1[6];
      param_1[4] = -0x80000000;
      if (iStack_34 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      auStack_28[0] = 2;
      uStack_20 = 0;
      local_1c = 0;
      uStack_18 = in_stack_00000000;
      uStack_14 = in_stack_00000004;
      FUN_0196b484(acStack_50,param_1 + 1,&iStack_34,auStack_28);
      if (acStack_50[0] != '\x06') {
        FUN_00db4764(acStack_50);
      }
      return 0;
    }
  }
  else {
    local_1c = 10;
    iVar1 = FUN_01966fbc(&local_1c,0,0);
  }
  return iVar1;
}

