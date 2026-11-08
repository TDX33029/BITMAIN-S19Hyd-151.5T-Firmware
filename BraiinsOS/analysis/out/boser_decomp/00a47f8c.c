// FUN_00a47f8c @ 00a47f8c size=304 calls_out=8 calls_in=5
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_00a47f8c(int *param_1)

{
  int iVar1;
  int iVar2;
  uint in_stack_00000000;
  uint local_60 [7];
  int local_44;
  int local_40;
  int local_3c;
  char local_38 [4];
  int local_34;
  
  if (*param_1 == 0) {
    iVar1 = FUN_007025b0(param_1);
    if (iVar1 == 0) {
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      iVar2 = param_1[4];
      iVar1 = param_1[5];
      local_3c = param_1[6];
      param_1[4] = -0x80000000;
      if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_44 = iVar2;
      local_40 = iVar1;
      if ((in_stack_00000000 & 1) == 0) {
        local_38[0] = '\0';
      }
      else {
        FUN_00ad67ac(local_38);
        if (local_38[0] == '\x06') {
          FUN_019bb7e0(iVar2,iVar1);
          return local_34;
        }
      }
      FUN_0196b484(local_60,param_1 + 1,&local_44,local_38);
      iVar1 = 0;
      if ((local_60[0] & 0xff) != 6) {
        FUN_00db4764(local_60);
      }
    }
  }
  else {
    local_60[0] = 10;
    iVar1 = FUN_01966fbc(local_60,0,0);
  }
  return iVar1;
}

