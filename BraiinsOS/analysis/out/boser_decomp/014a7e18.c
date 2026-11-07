// FUN_014a7e18 @ 014a7e18 size=260 calls_out=6 calls_in=8
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_014a7e18(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  char local_48 [28];
  int local_2c;
  int iStack_28;
  int iStack_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined4 local_1c [3];
  
  if (*param_1 == 0) {
    iVar1 = FUN_007025b0(param_1);
    if (iVar1 == 0) {
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      local_2c = param_1[4];
      iStack_28 = param_1[5];
      iStack_24 = param_1[6];
      param_1[4] = -0x80000000;
      if (local_2c == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_20 = 1;
      local_1f = param_4;
      FUN_0196b484(local_48,param_1 + 1,&local_2c,&local_20);
      if (local_48[0] != '\x06') {
        FUN_00db4764(local_48);
      }
      return 0;
    }
  }
  else {
    local_1c[0] = 10;
    iVar1 = FUN_01966fbc(local_1c,0,0);
  }
  return iVar1;
}

