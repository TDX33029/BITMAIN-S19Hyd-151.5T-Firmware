// FUN_014a71c8 @ 014a71c8 size=192 calls_out=4 calls_in=2
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

undefined4 FUN_014a71c8(int *param_1,uint param_2)

{
  char local_50 [28];
  int local_34;
  int iStack_30;
  int iStack_2c;
  undefined1 local_28 [8];
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
  }
  local_34 = param_1[4];
  iStack_30 = param_1[5];
  iStack_2c = param_1[6];
  param_1[4] = -0x80000000;
  if (local_34 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
  }
  local_14 = (int)param_2 >> 0x1f;
  local_20 = param_2 >> 0x1f;
  local_28[0] = 2;
  local_1c = 0;
  local_18 = param_2;
  FUN_0196b484(local_50,param_1 + 1,&local_34,local_28);
  if (local_50[0] != '\x06') {
    FUN_00db4764(local_50);
  }
  return 0;
}

