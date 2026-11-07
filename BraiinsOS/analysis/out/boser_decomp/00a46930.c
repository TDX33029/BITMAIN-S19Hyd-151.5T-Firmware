// FUN_00a46930 @ 00a46930 size=1540 calls_out=16 calls_in=2
// strings: schedule_type | day_of_week | day_of_month | internal error: entered unreachable code | serialize_value called before serialize_key | internal error: entered unreachable code

int FUN_00a46930(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int local_124;
  int local_120;
  int local_11c;
  char local_118 [4];
  int local_114;
  uint local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  char local_e0 [28];
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  char local_b8 [4];
  int local_b4;
  undefined4 local_a0 [2];
  undefined4 local_98;
  char local_90 [28];
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_1 != 0) {
    local_48 = 10;
    iVar3 = FUN_01966fbc(&local_48,0,0);
    return iVar3;
  }
  iVar3 = FUN_007025b0(param_1,&DAT_005703e0,8);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
  }
  iVar3 = param_1[4];
  iVar7 = param_1[5];
  local_11c = param_1[6];
  param_1[4] = -0x80000000;
  if (iVar3 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
  }
  iVar6 = *param_2;
  local_124 = iVar3;
  local_120 = iVar7;
  if (iVar6 == 4) {
    local_118[0] = '\0';
LAB_00a469b4:
    FUN_0196b484(&local_48,param_1 + 1,&local_124,local_118);
    local_114 = 0;
    if ((local_48 & 0xff) != 6) {
      FUN_00db4764(&local_48);
    }
  }
  else {
    local_f0 = -0x80000000;
    local_f4 = 0;
    local_fc = 0;
    local_100 = 0;
    iVar4 = FUN_007025b0(&local_100,"schedule_type",0xd);
    uVar2 = local_ec;
    iVar1 = local_f0;
    if (iVar4 == 0) {
      if (local_100 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      bVar8 = local_f0 == -0x80000000;
      local_f0 = -0x80000000;
      if (bVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_bc = local_e8;
      local_c0 = local_ec;
      local_c4 = iVar1;
      if (iVar6 == 3) {
        local_b8[0] = '\0';
      }
      else {
        if (iVar6 == 0) {
          local_98 = 0;
          local_a0[0] = 0;
          puVar5 = (undefined4 *)thunk_FUN_01be5118(5);
          if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,5);
          }
          *(undefined1 *)(puVar5 + 1) = 0x79;
          *puVar5 = 0x6c696164;
          local_6c = 5;
          local_74 = 5;
          local_58 = -0x80000000;
          local_5c = 0;
          local_64 = 0;
          local_68 = 0;
          local_70 = puVar5;
          iVar6 = FUN_00a48734(&local_68,param_2 + 1);
          if (iVar6 == 0) {
            local_48 = local_68;
            uStack_44 = local_64;
            uStack_40 = uStack_60;
            uStack_3c = local_5c;
            iStack_38 = local_58;
            uStack_34 = uStack_54;
            uStack_30 = uStack_50;
            uStack_2c = uStack_4c;
            FUN_0196ac88(local_b8,&local_48);
            if (local_b8[0] != '\x06') {
              FUN_0196b484(local_90,local_a0,&local_74,local_b8);
              if (local_90[0] != '\x06') {
                FUN_00db4764(local_90);
              }
              goto LAB_00a46e10;
            }
          }
          else {
            local_b8[0] = '\x06';
            local_b4 = iVar6;
            FUN_0127464c(&local_68);
          }
          FUN_019bb7e0(5,puVar5);
          iVar6 = 6;
          FUN_0196afa8(local_a0);
        }
        else if (iVar6 == 1) {
          local_98 = 0;
          local_a0[0] = 0;
          puVar5 = (undefined4 *)thunk_FUN_01be5118(6);
          if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,6);
          }
          local_6c = 6;
          *(undefined2 *)(puVar5 + 1) = 0x796c;
          *puVar5 = 0x6b656577;
          local_74 = 6;
          local_58 = -0x80000000;
          local_5c = 0;
          local_64 = 0;
          local_68 = 0;
          local_70 = puVar5;
          iVar6 = FUN_00a47800(&local_68,"day_of_week",0xb,param_2[1],param_2[2]);
          if ((iVar6 == 0) && (iVar6 = FUN_00a48734(&local_68,param_2 + 3), iVar6 == 0)) {
            local_48 = local_68;
            uStack_44 = local_64;
            uStack_40 = uStack_60;
            uStack_3c = local_5c;
            iStack_38 = local_58;
            uStack_34 = uStack_54;
            uStack_30 = uStack_50;
            uStack_2c = uStack_4c;
            FUN_0196ac88(local_b8,&local_48);
            if (local_b8[0] != '\x06') {
              FUN_0196b484(local_90,local_a0,&local_74,local_b8);
              if (local_90[0] != '\x06') {
                FUN_00db4764(local_90);
              }
LAB_00a46e10:
              FUN_01bed4e2((uint)&local_48 | 3,local_a0,0xc);
              iVar6 = 5;
              local_b8[0] = '\x05';
              FUN_01bed4e2((uint)local_b8 | 1,&local_48,0xf);
              goto LAB_00a46e38;
            }
          }
          else {
            local_b8[0] = '\x06';
            local_b4 = iVar6;
            FUN_0127464c(&local_68);
          }
          iVar6 = 6;
          FUN_019bb7e0(6,puVar5);
          FUN_0196afa8(local_a0);
        }
        else {
          local_98 = 0;
          local_a0[0] = 0;
          puVar5 = (undefined4 *)thunk_FUN_01be5118(7);
          if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,7);
          }
          *(undefined4 *)((int)puVar5 + 3) = 0x796c6874;
          *puVar5 = 0x746e6f6d;
          local_6c = 7;
          local_74 = 7;
          local_58 = -0x80000000;
          local_5c = 0;
          local_64 = 0;
          local_68 = 0;
          local_70 = puVar5;
          iVar6 = FUN_00a4723c(&local_68,"day_of_month",0xc,param_2[1],param_2[2]);
          if ((iVar6 == 0) && (iVar6 = FUN_00a48734(&local_68,param_2 + 3), iVar6 == 0)) {
            local_48 = local_68;
            uStack_44 = local_64;
            uStack_40 = uStack_60;
            uStack_3c = local_5c;
            iStack_38 = local_58;
            uStack_34 = uStack_54;
            uStack_30 = uStack_50;
            uStack_2c = uStack_4c;
            FUN_0196ac88(local_b8,&local_48);
            if (local_b8[0] != '\x06') {
              FUN_0196b484(local_90,local_a0,&local_74,local_b8);
              if (local_90[0] != '\x06') {
                FUN_00db4764(local_90);
              }
              goto LAB_00a46e10;
            }
          }
          else {
            local_b8[0] = '\x06';
            local_b4 = iVar6;
            FUN_0127464c(&local_68);
          }
          FUN_019bb7e0(7,puVar5);
          iVar6 = 6;
          FUN_0196afa8(local_a0);
        }
LAB_00a46e38:
        iVar4 = local_b4;
        if (iVar6 == 6) {
          FUN_019bb7e0(iVar1,uVar2);
          goto LAB_00a46a1c;
        }
      }
      FUN_0196b484(local_e0,(uint)&local_100 | 4,&local_c4,local_b8);
      if (local_e0[0] != '\x06') {
        FUN_00db4764(local_e0);
      }
      local_48 = local_100;
      uStack_44 = local_fc;
      uStack_40 = uStack_f8;
      uStack_3c = local_f4;
      iStack_38 = local_f0;
      uStack_34 = local_ec;
      uStack_30 = local_e8;
      uStack_2c = uStack_e4;
      FUN_0196ac88(local_118);
      if (local_118[0] != '\x06') goto LAB_00a469b4;
    }
    else {
LAB_00a46a1c:
      FUN_0127464c(&local_100);
      local_114 = iVar4;
    }
    FUN_019bb7e0(iVar3,iVar7);
  }
  return local_114;
}

