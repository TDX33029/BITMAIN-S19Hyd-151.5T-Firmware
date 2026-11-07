// FUN_00a46498 @ 00a46498 size=400 calls_out=10 calls_in=2
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_00a46498(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_stack_00000000;
  int local_8c;
  int local_88;
  int local_84;
  char local_80 [4];
  int local_7c;
  uint local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_1 != 0) {
    local_48 = 10;
    iVar1 = FUN_01966fbc(&local_48,0,0);
    return iVar1;
  }
  iVar1 = FUN_007025b0(param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
  }
  iVar3 = param_1[4];
  iVar1 = param_1[5];
  local_84 = param_1[6];
  param_1[4] = -0x80000000;
  if (iVar3 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
  }
  local_8c = iVar3;
  local_88 = iVar1;
  if ((in_stack_00000000 & 1) == 0) {
    local_80[0] = '\0';
LAB_00a46560:
    FUN_0196b484(&local_48,param_1 + 1,&local_8c,local_80);
    local_7c = 0;
    if ((local_48 & 0xff) != 6) {
      FUN_00db4764(&local_48);
    }
  }
  else {
    local_58 = 0x80000000;
    local_5c = 0;
    local_64 = 0;
    local_68 = 0;
    iVar2 = FUN_014a7bf4(&local_68,&DAT_0056e280,4);
    if (iVar2 == 0) {
      local_48 = local_68;
      uStack_44 = local_64;
      uStack_40 = uStack_60;
      uStack_3c = local_5c;
      uStack_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      FUN_0196ac88(local_80);
      if (local_80[0] != '\x06') goto LAB_00a46560;
    }
    else {
      FUN_0127464c(&local_68);
      local_7c = iVar2;
    }
    FUN_019bb7e0(iVar3,iVar1);
  }
  return local_7c;
}

