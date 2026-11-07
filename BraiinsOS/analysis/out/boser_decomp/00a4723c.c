// FUN_00a4723c @ 00a4723c size=260 calls_out=6 calls_in=5
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_00a4723c(int *param_1,undefined4 param_2,undefined4 param_3,byte param_4,undefined4 param_5)

{
  undefined1 uVar1;
  int iVar2;
  char local_50 [28];
  int local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  if (*param_1 == 0) {
    iVar2 = FUN_007025b0(param_1);
    if (iVar2 == 0) {
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
      iVar2 = 0;
      uStack_1c = 0;
      uStack_18 = param_5;
      local_20 = 0;
      local_14 = 0;
      uVar1 = 0;
      if ((param_4 & 1) != 0) {
        uVar1 = 2;
      }
      local_28[0] = CONCAT31(local_28[0]._1_3_,uVar1);
      FUN_0196b484(local_50,param_1 + 1,&local_34,local_28);
      if (local_50[0] != '\x06') {
        FUN_00db4764(local_50);
      }
    }
  }
  else {
    local_28[0] = 10;
    iVar2 = FUN_01966fbc(local_28,0,0);
  }
  return iVar2;
}

