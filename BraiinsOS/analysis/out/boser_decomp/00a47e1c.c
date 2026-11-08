// FUN_00a47e1c @ 00a47e1c size=320 calls_out=8 calls_in=1
// strings: hashrate_target | internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_00a47e1c(int *param_1)

{
  int iVar1;
  int iVar2;
  uint local_58 [7];
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [4];
  int local_2c;
  
  if (*param_1 == 0) {
    iVar1 = FUN_007025b0(param_1,"hashrate_target",0xf);
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
      if (DAT_01d4be18 == 2 && DAT_01d4be1c == 0) {
        local_30[0] = '\0';
      }
      else {
        FUN_00ad6930(local_30,&DAT_01d4be18);
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

