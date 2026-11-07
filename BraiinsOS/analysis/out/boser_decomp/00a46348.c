// FUN_00a46348 @ 00a46348 size=296 calls_out=8 calls_in=8
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_00a46348(int *param_1)

{
  int iVar1;
  int iVar2;
  uint in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  uint local_58 [7];
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [4];
  int local_2c;
  
  if (*param_1 == 0) {
    iVar1 = FUN_007025b0(param_1);
    if (iVar1 == 0) {
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      iVar2 = param_1[4];
      iVar1 = param_1[5];
      local_34 = param_1[6];
      param_1[4] = -0x80000000;
      if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_3c = iVar2;
      local_38 = iVar1;
      if ((in_stack_00000000 & 1) == 0) {
        local_30[0] = '\0';
      }
      else {
        FUN_00ad6708(local_30,in_stack_00000000,in_stack_00000008,in_stack_0000000c);
        if (local_30[0] == '\x06') {
          FUN_019bb7e0(iVar2,iVar1);
          return local_2c;
        }
      }
      FUN_0196b484(local_58,param_1 + 1,&local_3c,local_30);
      iVar1 = 0;
      if ((local_58[0] & 0xff) != 6) {
        FUN_00db4764(local_58);
      }
    }
  }
  else {
    local_58[0] = 10;
    iVar1 = FUN_01966fbc(local_58,0,0);
  }
  return iVar1;
}

