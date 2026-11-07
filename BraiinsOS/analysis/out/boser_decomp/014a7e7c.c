// FUN_014a7e7c @ 014a7e7c size=348 calls_out=9 calls_in=1
// strings: $serde_json::private::RawValue | internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_014a7e7c(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint local_60 [7];
  int local_44;
  int local_40;
  int local_3c;
  char local_38 [4];
  int local_34;
  
  if (*param_1 == 1) {
    if (param_3 == 0x1e) {
      thunk_FUN_01bed842(param_2,"$serde_json::private::RawValue",0x1e);
    }
    local_60[0] = 10;
    iVar1 = FUN_01966fbc(local_60,0,0);
  }
  else {
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
      if ((param_5 & 1) == 0) {
        local_38[0] = '\0';
      }
      else {
        FUN_019689d8(local_38);
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
  return iVar1;
}

