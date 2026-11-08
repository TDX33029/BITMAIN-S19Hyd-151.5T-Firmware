// FUN_00a48734 @ 00a48734 size=484 calls_out=11 calls_in=1
// strings: hoursmonthsdays_of_weekyearsdom_and_dow | minutes | seconds | internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_00a48734(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  iVar1 = FUN_007025b0(param_1,&DAT_0056d018,4);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
  }
  iVar4 = param_1[4];
  iVar1 = param_1[5];
  local_7c = param_1[6];
  param_1[4] = -0x80000000;
  if (iVar4 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
  }
  iVar3 = *param_2;
  local_84 = iVar4;
  local_80 = iVar1;
  if (iVar3 == 2) {
    local_78[0] = '\0';
LAB_00a487b8:
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
    iVar2 = FUN_014a7c64(&local_60,"hoursmonthsdays_of_weekyearsdom_and_dow",5,param_2[2]);
    if (((iVar2 == 0) && (iVar2 = FUN_014a7c64(&local_60,"minutes",7,param_2[3]), iVar2 == 0)) &&
       (iVar2 = FUN_00a4723c(&local_60,"seconds",7,iVar3,param_2[1]), iVar2 == 0)) {
      local_40 = local_60;
      uStack_3c = local_5c;
      uStack_38 = uStack_58;
      uStack_34 = local_54;
      uStack_30 = local_50;
      uStack_2c = uStack_4c;
      uStack_28 = uStack_48;
      uStack_24 = uStack_44;
      FUN_0196ac88(local_78);
      if (local_78[0] != '\x06') goto LAB_00a487b8;
      iVar2 = local_74;
    }
    else {
      FUN_0127464c(&local_60);
    }
    FUN_019bb7e0(iVar4,iVar1);
  }
  return iVar2;
}

