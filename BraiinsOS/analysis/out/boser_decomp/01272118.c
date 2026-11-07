// FUN_01272118 @ 01272118 size=304 calls_out=8 calls_in=2
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_01272118(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char local_50 [28];
  int local_34;
  int local_30;
  int local_2c;
  char local_28 [4];
  int local_24;
  undefined4 local_1c [3];
  
  if (*param_1 == 0) {
    iVar1 = FUN_007025b0(param_1);
    if (iVar1 == 0) {
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      iVar2 = param_1[4];
      iVar1 = param_1[5];
      local_2c = param_1[6];
      param_1[4] = -0x80000000;
      if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_34 = iVar2;
      local_30 = iVar1;
      FUN_01274488(local_28,param_4);
      if (local_28[0] == '\x06') {
        FUN_019bb7e0(iVar2,iVar1);
      }
      else {
        FUN_0196b484(local_50,param_1 + 1,&local_34,local_28);
        local_24 = 0;
        if (local_50[0] != '\x06') {
          FUN_00db4764(local_50);
        }
      }
      return local_24;
    }
  }
  else {
    local_1c[0] = 10;
    iVar1 = FUN_01966fbc(local_1c,0,0);
  }
  return iVar1;
}

