// FUN_014a76e4 @ 014a76e4 size=324 calls_out=7 calls_in=1
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_014a76e4(float param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  undefined1 uVar1;
  int iVar2;
  double in_d16;
  char local_60 [28];
  int local_44;
  int local_40;
  int local_3c;
  uint local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  double local_28;
  
  if (*param_2 == 0) {
    iVar2 = FUN_007025b0(param_2);
    if (iVar2 == 0) {
      if (*param_2 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      local_44 = param_2[4];
      local_40 = param_2[5];
      local_3c = param_2[6];
      param_2[4] = -0x80000000;
      if (local_44 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      uVar1 = 0;
      if (((param_5 & 1) != 0) && ((uint)ABS(param_1) < 0x7f800000)) {
        local_38[0] = local_38[0] & 0xffffff00;
        FUN_019642e8(local_38);
        in_d16 = (double)param_1;
        uVar1 = 2;
      }
      local_30 = 2;
      local_38[0] = CONCAT31(local_38[0]._1_3_,uVar1);
      local_2c = 0;
      local_28 = in_d16;
      FUN_0196b484(local_60,param_2 + 1,&local_44,local_38);
      if (local_60[0] != '\x06') {
        FUN_00db4764(local_60);
      }
      iVar2 = 0;
    }
  }
  else {
    local_38[0] = 10;
    iVar2 = FUN_01966fbc(local_38,0,0);
  }
  return iVar2;
}

