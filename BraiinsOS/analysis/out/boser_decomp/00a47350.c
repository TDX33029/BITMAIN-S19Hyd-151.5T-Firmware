// FUN_00a47350 @ 00a47350 size=996 calls_out=15 calls_in=2
// strings: hashratetarget | powertarget | internal error: entered unreachable code | serialize_value called before serialize_key | internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_00a47350(int *param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int iStack_e4;
  int iStack_e0;
  int local_dc;
  char local_d8 [4];
  int local_d4;
  uint local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char local_80 [28];
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  char local_58 [4];
  int local_54;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  if (*param_1 != 0) {
    local_a0 = 10;
    iVar3 = FUN_01966fbc(&local_a0,0,0);
    return iVar3;
  }
  iVar3 = FUN_007025b0(param_1,param_2,6);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
  }
  iVar3 = param_1[4];
  iVar7 = param_1[5];
  local_dc = param_1[6];
  param_1[4] = -0x80000000;
  if (iVar3 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
  }
  uVar5 = *param_3;
  uVar6 = param_3[1];
  iStack_e4 = iVar3;
  iStack_e0 = iVar7;
  if (uVar5 == 3 && uVar6 == 0) {
    local_d8[0] = '\0';
LAB_00a473cc:
    FUN_0196b484(&local_a0,param_1 + 1,&iStack_e4,local_d8);
    local_d4 = 0;
    if ((local_a0 & 0xff) != 6) {
      FUN_00db4764(&local_a0);
    }
  }
  else {
    local_b0 = -0x80000000;
    local_b4 = 0;
    local_bc = 0;
    local_c0 = 0;
    iVar4 = FUN_007025b0(&local_c0,&DAT_00531484,6);
    uVar2 = local_ac;
    iVar1 = local_b0;
    if (iVar4 == 0) {
      if (local_c0 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      bVar8 = local_b0 == -0x80000000;
      local_b0 = -0x80000000;
      if (bVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_5c = local_a8;
      local_60 = local_ac;
      local_64 = iVar1;
      if (uVar5 == 2 && uVar6 == 0) {
        local_58[0] = '\0';
      }
      else {
        if ((uVar5 & 1) == 0) {
          local_38 = 0;
          local_40[0] = 0;
          iVar4 = thunk_FUN_01be5118(0xb);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,0xb);
          }
          FUN_01bed4e2(iVar4,"powertarget",0xb);
          local_28 = 0xb;
          local_30 = 0xb;
          local_2c = iVar4;
          FUN_00ad684c(local_58,param_3 + 2);
          if (local_58[0] != '\x06') {
            FUN_0196b484(&local_a0,local_40,&local_30,local_58);
            if ((char)local_a0 != '\x06') {
              FUN_00db4764(&local_a0);
            }
            goto LAB_00a4761c;
          }
          FUN_019bb7e0(0xb,iVar4);
          iVar4 = 6;
          FUN_0196afa8(local_40);
        }
        else {
          local_38 = 0;
          local_40[0] = 0;
          iVar4 = thunk_FUN_01be5118(0xe);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,0xe);
          }
          FUN_01bed4e2(iVar4,"hashratetarget",0xe);
          local_28 = 0xe;
          local_30 = 0xe;
          local_2c = iVar4;
          FUN_00ad6930(local_58,param_3 + 2);
          if (local_58[0] == '\x06') {
            FUN_019bb7e0(0xe,iVar4);
            iVar4 = 6;
            FUN_0196afa8(local_40);
          }
          else {
            FUN_0196b484(&local_a0,local_40,&local_30,local_58);
            if ((char)local_a0 != '\x06') {
              FUN_00db4764(&local_a0);
            }
LAB_00a4761c:
            FUN_01bed4e2((uint)&local_a0 | 3,local_40,0xc);
            iVar4 = 5;
            local_58[0] = '\x05';
            FUN_01bed4e2((uint)local_58 | 1,&local_a0,0xf);
          }
        }
        if (iVar4 == 6) {
          FUN_019bb7e0(iVar1,uVar2);
          iVar4 = local_54;
          goto LAB_00a47434;
        }
      }
      FUN_0196b484(local_80,(uint)&local_c0 | 4,&local_64,local_58);
      if (local_80[0] != '\x06') {
        FUN_00db4764(local_80);
      }
      local_a0 = local_c0;
      uStack_9c = local_bc;
      uStack_98 = uStack_b8;
      uStack_94 = local_b4;
      iStack_90 = local_b0;
      uStack_8c = local_ac;
      uStack_88 = local_a8;
      uStack_84 = uStack_a4;
      FUN_0196ac88(local_d8);
      if (local_d8[0] != '\x06') goto LAB_00a473cc;
    }
    else {
LAB_00a47434:
      FUN_0127464c(&local_c0);
      local_d4 = iVar4;
    }
    FUN_019bb7e0(iVar3,iVar7);
  }
  return local_d4;
}

