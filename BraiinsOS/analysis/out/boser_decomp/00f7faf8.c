// FUN_00f7faf8 @ 00f7faf8 size=1184 calls_out=15 calls_in=0
// strings: pause_mode | pause_cooldown_fan_speed_ratio | fan_pause_runtime | internal error: entered unreachable code | serialize_value called before serialize_key | internal error: entered unreachable code

int FUN_00f7faf8(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_124;
  int local_120;
  int local_11c;
  char local_118 [4];
  int local_114;
  int local_100;
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
  undefined4 local_90;
  undefined4 *local_8c;
  undefined4 local_88;
  int local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 local_50;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_1 != 0) {
    local_48 = 10;
    iVar3 = FUN_01966fbc(&local_48,0,0);
    return iVar3;
  }
  iVar3 = FUN_007025b0(param_1,"pause_mode",10);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
  }
  iVar3 = param_1[4];
  iVar8 = param_1[5];
  local_11c = param_1[6];
  param_1[4] = -0x80000000;
  if (iVar3 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
  }
  iVar6 = *param_2;
  iVar7 = param_2[1];
  local_124 = iVar3;
  local_120 = iVar8;
  if (iVar6 == 4 && iVar7 == 0) {
    local_118[0] = '\0';
LAB_00f7fb80:
    FUN_0196b484(&local_48,param_1 + 1,&local_124,local_118);
    local_114 = 0;
    if ((char)local_48 != '\x06') {
      FUN_00db4764(&local_48);
    }
  }
  else {
    local_f0 = -0x80000000;
    local_f4 = 0;
    local_fc = 0;
    local_100 = 0;
    iVar4 = FUN_007025b0(&local_100,&DAT_0056d358,4);
    uVar2 = local_ec;
    iVar1 = local_f0;
    if (iVar4 == 0) {
      if (local_100 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      bVar9 = local_f0 == -0x80000000;
      local_f0 = -0x80000000;
      if (bVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_bc = local_e8;
      local_c0 = local_ec;
      local_c4 = iVar1;
      if (iVar6 == 3 && iVar7 == 0) {
        local_b8[0] = '\0';
      }
      else {
        if (iVar6 == 2 && iVar7 == 0) {
          local_50 = 0;
          local_58 = 0;
          puVar5 = (undefined4 *)thunk_FUN_01be5118(4);
          if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,4);
          }
          local_88 = 4;
          *puVar5 = 0x6f747561;
          local_90 = 4;
          local_38 = -0x80000000;
          local_3c = 0;
          local_44 = 0;
          local_48 = 0;
          local_8c = puVar5;
          FUN_0196ac88(local_b8,&local_48);
          if (local_b8[0] == '\x06') {
            FUN_019bb7e0(4,puVar5);
            iVar6 = 6;
            FUN_0196afa8(&local_58);
          }
          else {
            FUN_0196b484(&local_78,&local_58,&local_90,local_b8);
            if ((char)local_78 != '\x06') {
              FUN_00db4764(&local_78);
            }
            puVar5 = &local_58;
LAB_00f7fe20:
            FUN_01bed4e2((uint)&local_48 | 3,puVar5,0xc);
            iVar6 = 5;
            local_b8[0] = '\x05';
            FUN_01bed4e2((uint)local_b8 | 1,&local_48,0xf);
          }
        }
        else {
          local_98 = 0;
          local_a0[0] = 0;
          puVar5 = (undefined4 *)thunk_FUN_01be5118(6);
          if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,6);
          }
          *(undefined2 *)(puVar5 + 1) = 0x6c61;
          *puVar5 = 0x756e616d;
          local_50 = 6;
          local_58 = 6;
          local_68 = -0x80000000;
          local_6c = 0;
          local_74 = 0;
          local_78 = 0;
          local_54 = puVar5;
          iVar6 = FUN_014a7e7c((int)*(undefined8 *)(param_2 + 2),&local_78,
                               "pause_cooldown_fan_speed_ratio",0x1e);
          if ((iVar6 == 0) &&
             (iVar6 = FUN_00a47800(&local_78,"fan_pause_runtime",0x11,param_2[4],param_2[5],iVar7),
             iVar6 == 0)) {
            local_48 = local_78;
            local_44 = local_74;
            uStack_40 = uStack_70;
            local_3c = local_6c;
            local_38 = local_68;
            uStack_34 = uStack_64;
            uStack_30 = uStack_60;
            uStack_2c = uStack_5c;
            FUN_0196ac88(local_b8,&local_48);
            if (local_b8[0] != '\x06') {
              FUN_0196b484(&local_90,local_a0,&local_58,local_b8);
              if ((char)local_90 != '\x06') {
                FUN_00db4764(&local_90);
              }
              puVar5 = local_a0;
              goto LAB_00f7fe20;
            }
          }
          else {
            local_b8[0] = '\x06';
            local_b4 = iVar6;
            FUN_01276d58(&local_78);
          }
          iVar6 = 6;
          FUN_019bb7e0(6,puVar5);
          FUN_0196afa8(local_a0);
        }
        iVar4 = local_b4;
        if (iVar6 == 6) {
          FUN_019bb7e0(iVar1,uVar2);
          goto LAB_00f7fbec;
        }
      }
      FUN_0196b484(local_e0,(uint)&local_100 | 4,&local_c4,local_b8);
      if (local_e0[0] != '\x06') {
        FUN_00db4764(local_e0);
      }
      local_48 = local_100;
      local_44 = local_fc;
      uStack_40 = uStack_f8;
      local_3c = local_f4;
      local_38 = local_f0;
      uStack_34 = local_ec;
      uStack_30 = local_e8;
      uStack_2c = uStack_e4;
      FUN_0196ac88(local_118);
      if (local_118[0] != '\x06') goto LAB_00f7fb80;
    }
    else {
LAB_00f7fbec:
      FUN_01276d58(&local_100);
      local_114 = iVar4;
    }
    FUN_019bb7e0(iVar3,iVar8);
  }
  return local_114;
}

