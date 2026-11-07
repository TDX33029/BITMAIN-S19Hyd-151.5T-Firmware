// FUN_00a46668 @ 00a46668 size=232 calls_out=6 calls_in=6
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_00a46668(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  char local_50 [28];
  int local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  if (*param_1 == 0) {
    iVar1 = FUN_007025b0(param_1);
    if (iVar1 == 0) {
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
      local_28 = CONCAT31(CONCAT21(local_28._2_2_,param_4),param_4 != '\x02');
      FUN_0196b484(local_50,param_1 + 1,&local_34,&local_28);
      if (local_50[0] != '\x06') {
        FUN_00db4764(local_50);
      }
      iVar1 = 0;
    }
  }
  else {
    local_28 = 10;
    iVar1 = FUN_01966fbc(&local_28,0,0);
  }
  return iVar1;
}

