// FUN_00f7f76c @ 00f7f76c size=476 calls_out=10 calls_in=1
// strings: minute | secondnanosecond | internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_00f7f76c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_84;
  int iStack_80;
  int local_7c;
  char local_78 [4];
  int local_74;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
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
  iVar1 = param_1[4];
  iVar3 = param_1[5];
  local_7c = param_1[6];
  param_1[4] = -0x80000000;
  if (iVar1 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
  }
  iStack_84 = iVar1;
  iStack_80 = iVar3;
  if (*param_2 != 1) {
    local_78[0] = '\0';
LAB_00f7f88c:
    FUN_0196b484(&local_40,param_1 + 1,&iStack_84,local_78);
    if ((char)local_40 == '\x06') {
      return 0;
    }
    FUN_00db4764(&local_40);
    return 0;
  }
  local_50 = 0x80000000;
  local_54 = 0;
  local_5c = 0;
  local_60 = 0;
  iVar2 = FUN_014a7c64(&local_60,&DAT_0056cc5c,4,param_2[1]);
  if (((iVar2 == 0) && (iVar2 = FUN_014a7c64(&local_60,"minute",6,param_2[2]), iVar2 == 0)) &&
     (iVar2 = FUN_014a7c64(&local_60,"secondnanosecond",6,param_2[3]), iVar2 == 0)) {
    local_40 = local_60;
    uStack_3c = local_5c;
    uStack_38 = uStack_58;
    uStack_34 = local_54;
    uStack_30 = local_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    FUN_0196ac88(local_78);
    if (local_78[0] != '\x06') goto LAB_00f7f88c;
    iVar2 = local_74;
  }
  else {
    FUN_01276d58(&local_60);
  }
  FUN_019bb7e0(iVar1,iVar3);
  return iVar2;
}

