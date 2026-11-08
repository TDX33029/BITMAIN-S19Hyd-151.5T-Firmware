// FUN_00b058b4 @ 00b058b4 size=2248 calls_out=21 calls_in=2
// strings: tunermode | manualmode | global_voltage | hashratetarget | hashrate_target | powertarget

void FUN_00b058b4(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 local_158 [2];
  undefined4 local_150;
  char local_148 [4];
  int local_144;
  undefined4 local_130;
  int local_12c;
  undefined4 local_128;
  char local_120 [28];
  int local_104;
  int local_100;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  int iStack_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  char local_d8 [24];
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  char local_b0 [4];
  int local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_88;
  int local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_70;
  int local_6c;
  int iStack_68;
  undefined4 local_64;
  int local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*param_2 == 2 && param_2[1] == 0) {
    local_150 = 0;
    local_158[0] = 0;
    iVar2 = thunk_FUN_01be5118(9);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(iVar2,"tunermode",9);
    local_ec = 0;
    local_f4 = 0;
    local_f8 = 0;
    local_128 = 9;
    local_130 = 9;
    local_e8 = -0x80000000;
    local_12c = iVar2;
    iVar3 = FUN_007025b0(&local_f8,&DAT_00531484,6);
    iVar1 = local_e4;
    iVar9 = local_e8;
    if (iVar3 == 0) {
      if (local_f8 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      bVar11 = local_e8 == -0x80000000;
      local_e8 = -0x80000000;
      if (bVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_fc = local_e0;
      local_100 = local_e4;
      local_104 = iVar9;
      if (param_2[2] == 2 && param_2[3] == 0) {
        local_148[0] = '\0';
      }
      else {
        iVar10 = param_2[4];
        iVar3 = param_2[5];
        if ((param_2[2] & 1U) == 0) {
          iVar4 = param_2[7];
          iVar8 = param_2[6];
          local_b8 = 0;
          local_c0 = 0;
          iVar5 = thunk_FUN_01be5118(0xb);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,0xb);
          }
          FUN_01bed4e2(iVar5,"powertarget",0xb);
          local_90 = 0xb;
          local_98 = 0xb;
          local_60 = -0x80000000;
          local_64 = 0;
          local_6c = 0;
          local_70 = 0;
          local_94 = iVar5;
          iVar6 = FUN_00a46348(&local_70,"power_target",0xc);
          if (iVar6 == 0) {
            local_50 = local_70;
            local_4c = local_6c;
            iStack_48 = iStack_68;
            uStack_44 = local_64;
            iStack_40 = local_60;
            iStack_3c = iStack_5c;
            uStack_38 = uStack_58;
            uStack_34 = uStack_54;
            FUN_0196ac88(local_148,&local_50,iStack_5c,uStack_58,iVar10,iVar3,iVar8,iVar4);
            if (local_148[0] != '\x06') {
              FUN_0196b484(local_b0,&local_c0,&local_98,local_148);
              if (local_b0[0] != '\x06') {
                FUN_00db4764(local_b0);
              }
              goto LAB_00b05d90;
            }
          }
          else {
            local_148[0] = '\x06';
            local_144 = iVar6;
            FUN_0127464c(&local_70);
          }
          FUN_019bb7e0(0xb,iVar5);
          iVar10 = 6;
          FUN_0196afa8(&local_c0);
        }
        else {
          uVar12 = *(undefined8 *)(param_2 + 6);
          local_b8 = 0;
          local_c0 = 0;
          iVar4 = thunk_FUN_01be5118(0xe);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,0xe);
          }
          FUN_01bed4e2(iVar4,"hashratetarget",0xe);
          local_90 = 0xe;
          local_98 = 0xe;
          local_60 = -0x80000000;
          local_64 = 0;
          local_6c = 0;
          local_70 = 0;
          local_94 = iVar4;
          iVar5 = FUN_00a47f8c((int)uVar12,&local_70,"hashrate_target",0xf);
          if (iVar5 == 0) {
            local_50 = local_70;
            local_4c = local_6c;
            iStack_48 = iStack_68;
            uStack_44 = local_64;
            iStack_40 = local_60;
            iStack_3c = iStack_5c;
            uStack_38 = uStack_58;
            uStack_34 = uStack_54;
            FUN_0196ac88(local_148,&local_50,iStack_5c,uStack_58,iVar10,iVar3);
            if (local_148[0] != '\x06') {
              FUN_0196b484(local_b0,&local_c0,&local_98,local_148);
              if (local_b0[0] != '\x06') {
                FUN_00db4764(local_b0);
              }
LAB_00b05d90:
              FUN_01bed4e2((uint)&local_50 | 3,&local_c0,0xc);
              iVar10 = 5;
              local_148[0] = '\x05';
              FUN_01bed4e2((uint)local_148 | 1,&local_50,0xf);
              goto LAB_00b05db8;
            }
          }
          else {
            local_148[0] = '\x06';
            local_144 = iVar5;
            FUN_0127464c(&local_70);
          }
          FUN_019bb7e0(0xe,iVar4);
          iVar10 = 6;
          FUN_0196afa8(&local_c0);
        }
LAB_00b05db8:
        iVar3 = local_144;
        if (iVar10 == 6) {
          FUN_019bb7e0(iVar9,iVar1);
          goto LAB_00b05954;
        }
      }
      FUN_0196b484(local_d8,(uint)&local_f8 | 4,&local_104,local_148);
      if (local_d8[0] != '\x06') {
        FUN_00db4764(local_d8);
      }
      local_50 = local_f8;
      local_4c = local_f4;
      iStack_48 = iStack_f0;
      uStack_44 = local_ec;
      iStack_40 = local_e8;
      iStack_3c = local_e4;
      uStack_38 = local_e0;
      uStack_34 = uStack_dc;
      FUN_0196ac88(param_1,&local_50);
      if (*param_1 != '\x06') {
        FUN_0196b484(local_120,local_158,&local_130,param_1);
        if (local_120[0] != '\x06') {
          FUN_00db4764(local_120);
        }
        FUN_01bed4e2((uint)&local_50 | 3,local_158,0xc);
LAB_00b05e6c:
        *param_1 = '\x05';
        FUN_01bed4e2(param_1 + 1,&local_50,0xf);
        return;
      }
    }
    else {
LAB_00b05954:
      *(int *)(param_1 + 4) = iVar3;
      *param_1 = '\x06';
      FUN_0127464c(&local_f8);
    }
    FUN_019bb7e0(9,iVar2);
    puVar7 = local_158;
    goto LAB_00b060d8;
  }
  local_128 = 0;
  local_130 = 0;
  iVar2 = thunk_FUN_01be5118(10);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,10);
  }
  FUN_01bed4e2(iVar2,"manualmode",10);
  local_ec = 0;
  local_f4 = 0;
  local_f8 = 0;
  local_fc = 10;
  local_104 = 10;
  local_e8 = -0x80000000;
  local_100 = iVar2;
  iVar3 = FUN_00a4706c((int)*(undefined8 *)(param_2 + 2),&local_f8,&DAT_00567e78,0x10);
  if ((iVar3 == 0) &&
     (iVar3 = FUN_00a46498((int)*(undefined8 *)(param_2 + 6),&local_f8,"global_voltage",0xe,
                           param_2[5],param_2[4],param_2[5]), iVar3 == 0)) {
    if (local_f8 == 1) {
      local_50 = 10;
      iVar3 = FUN_01966fbc(&local_50,0,0);
      goto LAB_00b060b4;
    }
    iVar4 = param_2[9];
    iVar9 = param_2[10];
    iVar3 = FUN_007025b0(&local_f8,"hashboards",10);
    iVar10 = local_e4;
    iVar1 = local_e8;
    if (iVar3 != 0) goto LAB_00b060b4;
    if (local_f8 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
    }
    bVar11 = local_e8 == -0x80000000;
    local_e8 = -0x80000000;
    if (bVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
    }
    local_b8 = local_e0;
    local_bc = local_e4;
    local_c0 = iVar1;
    FUN_0196aa8c(&local_50,iVar9);
    if (local_50 == -0x80000000) {
      iVar3 = local_4c;
LAB_00b060a8:
      FUN_019bb7e0(iVar1,iVar10);
      goto LAB_00b060b4;
    }
    local_98 = local_50;
    local_94 = local_4c;
    local_90 = iStack_48;
    for (iVar9 = iVar9 * 0x30; iVar9 != 0; iVar9 = iVar9 + -0x30) {
      local_60 = -0x80000000;
      local_64 = 0;
      local_6c = 0;
      local_70 = 0;
      iVar3 = FUN_01271f48(&local_70,"idlast_updatedlast_ticknext_tickran",2,
                           *(undefined4 *)(iVar4 + 0x24),*(undefined4 *)(iVar4 + 0x28));
      if (((iVar3 != 0) ||
          (iVar3 = FUN_00a4706c((int)*(undefined8 *)(iVar4 + 8),&local_70,"frequency",9), iVar3 != 0
          )) || (iVar3 = FUN_00a46498((int)*(undefined8 *)(iVar4 + 0x18),&local_70,"voltage",7),
                iVar3 != 0)) {
        FUN_0127464c(&local_70);
LAB_00b060a0:
        FUN_00949b70(&local_98);
        goto LAB_00b060a8;
      }
      local_50 = local_70;
      local_4c = local_6c;
      iStack_48 = iStack_68;
      uStack_44 = local_64;
      iStack_40 = local_60;
      iStack_3c = iStack_5c;
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      FUN_0196ac88(&local_88);
      iVar3 = local_90;
      if ((char)local_88 == '\x06') {
        iVar3 = local_84;
        goto LAB_00b060a0;
      }
      if (local_90 == local_98) {
        FUN_01969b6c(&local_98);
      }
      puVar7 = (undefined4 *)(local_94 + iVar3 * 0x18);
      *puVar7 = local_88;
      puVar7[1] = local_84;
      puVar7[2] = uStack_80;
      puVar7[3] = uStack_7c;
      puVar7[4] = uStack_78;
      puVar7[5] = uStack_74;
      local_90 = iVar3 + 1;
      iVar4 = iVar4 + 0x30;
    }
    uStack_a8 = *(undefined4 *)((uint)&local_98 | 4);
    uStack_a4 = ((undefined4 *)((uint)&local_98 | 4))[1];
    local_ac = local_98;
    local_b0[0] = '\x04';
    FUN_0196b484(local_d8,(uint)&local_f8 | 4,&local_c0,local_b0);
    if (local_d8[0] != '\x06') {
      FUN_00db4764(local_d8);
    }
    local_50 = local_f8;
    local_4c = local_f4;
    iStack_48 = iStack_f0;
    uStack_44 = local_ec;
    iStack_40 = local_e8;
    iStack_3c = local_e4;
    uStack_38 = local_e0;
    uStack_34 = uStack_dc;
    FUN_0196ac88(param_1);
    if (*param_1 != '\x06') {
      FUN_0196b484(local_120,&local_130,&local_104,param_1);
      if (local_120[0] != '\x06') {
        FUN_00db4764(local_120);
      }
      FUN_01bed4e2((uint)&local_50 | 3,&local_130,0xc);
      goto LAB_00b05e6c;
    }
  }
  else {
LAB_00b060b4:
    *(int *)(param_1 + 4) = iVar3;
    *param_1 = '\x06';
    FUN_0127464c(&local_f8);
  }
  FUN_019bb7e0(10,iVar2);
  puVar7 = &local_130;
LAB_00b060d8:
  FUN_0196afa8(puVar7);
  return;
}

