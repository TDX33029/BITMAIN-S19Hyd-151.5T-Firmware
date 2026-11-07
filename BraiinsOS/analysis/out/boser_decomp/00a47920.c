// FUN_00a47920 @ 00a47920 size=720 calls_out=12 calls_in=1
// strings: stats | accepted_shares | rejected_shares | stale_shares | last_difficulty | best_share

int FUN_00a47920(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_84;
  int local_80;
  int local_7c;
  char local_78 [4];
  int local_74;
  uint local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*param_1 != 0) {
    local_40 = 10;
    iVar1 = FUN_01966fbc(&local_40,0,0);
    return iVar1;
  }
  iVar1 = FUN_007025b0(param_1,"stats",5);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
  }
  iVar1 = param_1[4];
  iVar3 = param_1[5];
  local_7c = param_1[6];
  param_1[4] = -0x80000000;
  if (iVar1 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
  }
  local_84 = iVar1;
  local_80 = iVar3;
  if (*param_2 == 2 && param_2[1] == 0) {
    local_78[0] = '\0';
LAB_00a479a8:
    FUN_0196b484(&local_40,param_1 + 1,&local_84,local_78);
    iVar2 = 0;
    if ((local_40 & 0xff) != 6) {
      FUN_00db4764(&local_40);
    }
  }
  else {
    local_50 = 0x80000000;
    local_54 = 0;
    local_5c = 0;
    local_60 = 0;
    iVar2 = FUN_014a7ab8(&local_60,"accepted_shares",0xf,param_2[7],param_2[6],param_2[7]);
    if (((((iVar2 == 0) &&
          (iVar2 = FUN_014a7ab8(&local_60,"rejected_shares",0xf,param_2[9],param_2[8],param_2[9]),
          iVar2 == 0)) &&
         (iVar2 = FUN_014a7ab8(&local_60,"stale_shares",0xc,param_2[0xb],param_2[10],param_2[0xb]),
         iVar2 == 0)) &&
        ((iVar2 = FUN_014a7ab8(&local_60,"last_difficulty",0xf,param_2[0xd],param_2[0xc],
                               param_2[0xd]), iVar2 == 0 &&
         (iVar2 = FUN_014a7ab8(&local_60,"best_share",10,param_2[0xf],param_2[0xe],param_2[0xf]),
         iVar2 == 0)))) &&
       ((iVar2 = FUN_014a7ab8(&local_60,"generated_work",0xe,param_2[0x11],param_2[0x10],
                              param_2[0x11]), iVar2 == 0 &&
        ((iVar2 = FUN_00a480e4(&local_60,"last_share_time",0xf,param_2), iVar2 == 0 &&
         (iVar2 = FUN_01271f48(&local_60,"best_share_str",0xe,param_2[0x13],param_2[0x14]),
         iVar2 == 0)))))) {
      local_40 = local_60;
      uStack_3c = local_5c;
      uStack_38 = uStack_58;
      uStack_34 = local_54;
      uStack_30 = local_50;
      uStack_2c = uStack_4c;
      uStack_28 = uStack_48;
      uStack_24 = uStack_44;
      FUN_0196ac88(local_78);
      if (local_78[0] != '\x06') goto LAB_00a479a8;
      iVar2 = local_74;
    }
    else {
      FUN_0127464c(&local_60);
    }
    FUN_019bb7e0(iVar1,iVar3);
  }
  return iVar2;
}

