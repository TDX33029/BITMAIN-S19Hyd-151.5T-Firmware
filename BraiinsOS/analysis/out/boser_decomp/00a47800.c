// FUN_00a47800 @ 00a47800 size=272 calls_out=6 calls_in=6
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_00a47800(int *param_1,undefined4 param_2,undefined4 param_3,byte param_4,uint param_5)

{
  undefined1 uVar1;
  int iVar2;
  char local_58 [28];
  int local_3c;
  int iStack_38;
  int iStack_34;
  undefined4 local_30 [2];
  uint local_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  
  if (*param_1 == 0) {
    iVar2 = FUN_007025b0(param_1);
    if (iVar2 == 0) {
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      local_3c = param_1[4];
      iStack_38 = param_1[5];
      iStack_34 = param_1[6];
      param_1[4] = -0x80000000;
      if (local_3c == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      iVar2 = 0;
      local_1c = (int)param_5 >> 0x1f;
      local_28 = param_5 >> 0x1f;
      local_20 = param_5;
      local_24 = 0;
      uVar1 = 0;
      if ((param_4 & 1) != 0) {
        uVar1 = 2;
      }
      local_30[0] = CONCAT31(local_30[0]._1_3_,uVar1);
      FUN_0196b484(local_58,param_1 + 1,&local_3c,local_30);
      if (local_58[0] != '\x06') {
        FUN_00db4764(local_58);
      }
    }
  }
  else {
    local_30[0] = 10;
    iVar2 = FUN_01966fbc(local_30,0,0);
  }
  return iVar2;
}

