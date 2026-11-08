// FUN_014a752c @ 014a752c size=184 calls_out=4 calls_in=3
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

undefined4 FUN_014a752c(int *param_1,undefined4 param_2)

{
  char local_48 [28];
  int local_2c;
  int iStack_28;
  int iStack_24;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
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
  local_20[0] = 2;
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  local_10 = param_2;
  FUN_0196b484(local_48,param_1 + 1,&local_2c,local_20);
  if (local_48[0] != '\x06') {
    FUN_00db4764(local_48);
  }
  return 0;
}

