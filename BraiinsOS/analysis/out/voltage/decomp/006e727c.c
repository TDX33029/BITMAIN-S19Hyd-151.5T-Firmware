// function @ 006e727c  size=9632  volt_strings=13
// strings: allow_disabling_hashboards_on_nopic_miners | allow_disabling_hashboards_on_nopic_miners | allow_disabling_hashboards_on_nopic_miners | allow_missing_voltage_feedback | allow_missing_voltage_feedback | allow_missing_voltage_feedback | disable_bootstrap_check | disable_bootstrap_check | disable_bootstrap_check | send_dummy_telemetry_on_startup | send_dummy_telemetry_on_startup | send_dummy_telemetry_on_startup | min_fan_pwm | min_fan_pwm | min_fan_pwm | ertion failed: nextspec > 0 | ertion failed: nextspec > 0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006e727c(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint local_108;
  uint local_104;
  uint local_100;
  undefined4 *local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint uStack_ec;
  undefined *local_e8;
  uint uStack_e4;
  char *pcStack_e0;
  undefined4 uStack_dc;
  char *pcStack_d8;
  undefined4 uStack_d4;
  undefined *local_d0;
  uint local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_bc;
  undefined *local_b8;
  uint local_b4;
  char *local_b0;
  undefined4 local_ac;
  char *local_a8;
  undefined4 local_a4;
  undefined *local_a0;
  undefined4 *local_9c;
  undefined *local_98;
  uint local_94;
  char *local_90;
  undefined4 local_8c;
  char *local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined4 *local_7c;
  ulonglong local_78;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined1 local_48;
  undefined *local_40;
  uint local_3c;
  char *local_38;
  undefined4 local_34;
  char *pcStack_30;
  undefined4 uStack_2c;
  
  uVar11 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar6 = (uint *)((int)uVar11 + (int)((ulonglong)uVar11 >> 0x20));
  if ((char)puVar6[4] == '\0') {
    FUN_015f62e4(&local_d0);
    *puVar6 = (uint)local_d0;
    puVar6[1] = local_cc;
    puVar6[2] = (uint)(undefined4 *)local_c8;
    puVar6[3] = local_c8._4_4_;
    *(undefined1 *)(puVar6 + 4) = 1;
  }
  uVar8 = *puVar6;
  uVar7 = puVar6[1];
  uVar9 = puVar6[2];
  uVar10 = puVar6[3];
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  *puVar6 = uVar8 + 1;
  puVar6[1] = uVar7 + (0xfffffffe < uVar8);
  local_fc = &DAT_005674cc;
  local_104 = 4;
  local_94 = 0x8f;
  local_100 = 0;
  local_108 = 0;
  local_98 = &DAT_0033e55e;
  local_9c = (undefined4 *)0x23;
  local_a0 = &DAT_0033e53b;
  local_a4 = 0x2a;
  local_a8 = "allow_disabling_hashboards_on_nopic_miners";
  local_68 = (undefined1 *)CONCAT31(local_68._1_3_,2);
  local_6c = &LAB_006e9ef8;
  local_70 = &LAB_006e9ef0;
  local_68 = (undefined1 *)CONCAT22(0x200,(undefined2)local_68);
  local_88 = (char *)0x0;
  local_80 = (undefined *)0x0;
  local_8c = 0x48;
  local_b8 = (undefined *)0x80000000;
  local_90 = &DAT_0033e4ee;
  local_78 = 0x50033e536;
  iVar2 = thunk_FUN_016d4a50(0x70);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x70);
  }
  FUN_016dd1aa(iVar2,&local_d0,0x70);
  uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"allow_disabling_hashboards_on_nopic_miners",0x2a);
  FUN_00750340(&local_d0,&local_108,uVar3,"allow_disabling_hashboards_on_nopic_miners",0x2a,iVar2,
               &DAT_018592a4);
  uVar1 = local_cc;
  if (local_cc != 0) {
    puVar5 = (undefined4 *)local_c8;
    if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
      (*(code *)*(undefined4 *)local_c8)(local_cc);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar1);
    }
  }
  local_68 = (undefined1 *)CONCAT31(local_68._1_3_,2);
  local_94 = 0xa0;
  local_68 = (undefined1 *)((uint)local_68 & 0xffff);
  local_88 = (char *)0x0;
  local_90 = (char *)0x0;
  local_80 = (undefined *)0x0;
  local_9c = (undefined4 *)0x1e;
  local_a4 = 0x1e;
  local_78 = 0x50033e5ed;
  local_b8 = (undefined *)0x80000000;
  local_98 = &DAT_0033e610;
  local_a0 = &DAT_0033e5f2;
  local_a8 = "allow_missing_voltage_feedback";
  local_6c = &LAB_006ea044;
  local_70 = &LAB_006ea03c;
  iVar2 = thunk_FUN_016d4a50(0x70);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x70);
  }
  FUN_016dd1aa(iVar2,&local_d0,0x70);
  uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"allow_missing_voltage_feedback",0x1e);
  FUN_00750340(&local_d0,&local_108,uVar3,"allow_missing_voltage_feedback",0x1e,iVar2,&DAT_018592a4)
  ;
  uVar1 = local_cc;
  if (local_cc != 0) {
    puVar5 = (undefined4 *)local_c8;
    if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
      (*(code *)*(undefined4 *)local_c8)(local_cc);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar1);
    }
  }
  local_94 = 0x82;
  local_68 = (undefined1 *)CONCAT31(local_68._1_3_,2);
  local_68 = (undefined1 *)CONCAT22(0x300,(undefined2)local_68);
  local_98 = &DAT_0033e6cc;
  local_88 = (char *)0x0;
  local_90 = (char *)0x0;
  local_80 = (undefined *)0x0;
  local_9c = (undefined4 *)0x17;
  local_a4 = 0x17;
  local_b8 = (undefined *)0x80000000;
  local_a0 = &DAT_0033e6b5;
  local_a8 = "disable_bootstrap_check";
  local_6c = &LAB_006ea054;
  local_70 = &LAB_006ea04c;
  local_78 = 0x50033e6b0;
  iVar2 = thunk_FUN_016d4a50(0x70);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x70);
  }
  FUN_016dd1aa(iVar2,&local_d0,0x70);
  uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"disable_bootstrap_check",0x17);
  FUN_00750340(&local_d0,&local_108,uVar3,"disable_bootstrap_check",0x17,iVar2,&DAT_018592a4);
  uVar1 = local_cc;
  if (local_cc != 0) {
    puVar5 = (undefined4 *)local_c8;
    if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
      (*(code *)*(undefined4 *)local_c8)(local_cc);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar1);
    }
  }
  local_94 = 0x37;
  local_68 = (undefined1 *)CONCAT31(local_68._1_3_,2);
  local_68 = (undefined1 *)CONCAT22(0x300,(undefined2)local_68);
  local_98 = &DAT_0033e76d;
  local_88 = (char *)0x0;
  local_90 = (char *)0x0;
  local_80 = (undefined *)0x0;
  local_9c = (undefined4 *)&DAT_0000001f;
  local_a4 = 0x1f;
  local_b8 = (undefined *)0x80000000;
  local_a0 = &DAT_0033e74e;
  local_a8 = "send_dummy_telemetry_on_startup";
  local_6c = &LAB_006ea064;
  local_70 = &LAB_006ea05c;
  local_78 = 0x50033e6b0;
  iVar2 = thunk_FUN_016d4a50(0x70);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x70);
  }
  FUN_016dd1aa(iVar2,&local_d0,0x70);
  uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"send_dummy_telemetry_on_startup",0x1f);
  FUN_00750340(&local_d0,&local_108,uVar3,"send_dummy_telemetry_on_startup",0x1f,iVar2,&DAT_018592a4
              );
  uVar1 = local_cc;
  if (local_cc != 0) {
    puVar5 = (undefined4 *)local_c8;
    if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
      (*(code *)*(undefined4 *)local_c8)(local_cc);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar1);
    }
  }
  local_7c = (undefined4 *)0xc6;
  local_5c = 5;
  local_80 = &DAT_0033e7da;
  local_50 = (undefined1 *)((uint)local_50 & 0xffff0000);
  local_70 = (undefined1 *)0x0;
  local_68 = (undefined1 *)0x0;
  local_84 = 0x10;
  local_8c = 0x10;
  local_d0 = (undefined *)0x80000000;
  local_a0 = (undefined *)0x80000000;
  local_88 = &DAT_00563d40;
  local_90 = &DAT_00563e40;
  local_54 = &LAB_006ea074;
  local_58 = &LAB_006ea06c;
  local_78 = 0x310033e7a4;
  local_60 = &DAT_0033e7d5;
  iVar2 = thunk_FUN_016d4a50(0x88);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x88);
  }
  FUN_016dd1aa(iVar2,&local_d0,0x88);
  uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,&DAT_00563e40,0x10);
  FUN_00750340(&local_d0,&local_108,uVar3,&DAT_00563e40,0x10,iVar2,&DAT_018592ec);
  uVar1 = local_cc;
  if (local_cc != 0) {
    puVar5 = (undefined4 *)local_c8;
    if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
      (*(code *)*(undefined4 *)local_c8)(local_cc);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar1);
    }
  }
  uVar3 = 6;
  pcVar4 = (char *)thunk_FUN_016d4a50(6);
  if (pcVar4 != (char *)0x0) {
    builtin_strncpy(pcVar4,"manual",6);
    local_40 = (undefined *)CONCAT31(local_40._1_3_,3);
    local_34 = 6;
    local_3c = 6;
    local_38 = pcVar4;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x10);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4();
    }
    puVar5[3] = 0x65646f6d;
    puVar5[2] = 0x5f6d7770;
    puVar5[1] = 0x5f6e6166;
    *puVar5 = 0x5f6e696d;
    local_98 = local_40;
    local_94 = local_3c;
    local_90 = local_38;
    local_8c = local_34;
    local_88 = pcStack_30;
    local_84 = uStack_2c;
    local_5c = 100;
    local_70 = (undefined1 *)0x14;
    local_9c = (undefined4 *)0x47;
    local_a0 = &DAT_0033e8b0;
    local_68 = &LAB_006ea0ec;
    local_60 = (undefined *)0x0;
    local_6c = &LAB_006ea0e4;
    local_64 = 1;
    local_a4 = 0xb;
    local_ac = 0xb;
    local_a8 = &DAT_0033e8a5;
    local_b0 = "min_fan_pwm";
    local_58 = (undefined1 *)((uint)local_58 & 0xffffff00);
    local_d0 = (undefined *)0x0;
    local_c8 = 0x10035c7f0;
    local_80 = (undefined *)0x10;
    local_78 = CONCAT44(local_78._4_4_,0x10);
    local_b4 = 5;
    local_b8 = &DAT_0033e8a0;
    local_c0 = (char *)0x0;
    local_7c = puVar5;
    iVar2 = thunk_FUN_016d4a50(0x80);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar2,&local_d0,0x80);
    uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"min_fan_pwm",0xb);
    FUN_00750340(&local_d0,&local_108,uVar3,"min_fan_pwm",0xb,iVar2,&DAT_01859334);
    uVar1 = local_cc;
    if (local_cc != 0) {
      puVar5 = (undefined4 *)local_c8;
      if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
        (*(code *)*(undefined4 *)local_c8)(local_cc);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar1);
      }
    }
    local_94 = 0x87;
    local_9c = (undefined4 *)0x26;
    local_68 = (undefined1 *)CONCAT31(local_68._1_3_,2);
    local_68 = (undefined1 *)CONCAT22(0x200,(undefined2)local_68);
    local_8c = 0x4d;
    local_98 = &DAT_0033e96a;
    local_88 = (char *)0x0;
    local_80 = (undefined *)0x0;
    local_a4 = 0x20;
    local_b8 = (undefined *)0x80000000;
    local_a0 = &DAT_0033e944;
    local_a8 = "ignore_internal_chip_temperature\a\x01\x01";
    local_6c = &LAB_006ea12c;
    local_70 = &LAB_006ea124;
    local_90 = &DAT_0033e8f7;
    local_78 = 0x50033e8a0;
    iVar2 = thunk_FUN_016d4a50(0x70);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x70);
    }
    FUN_016dd1aa(iVar2,&local_d0,0x70);
    uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,&DAT_005658b0,0x20);
    FUN_00750340(&local_d0,&local_108,uVar3,&DAT_005658b0,0x20,iVar2,&DAT_018592a4);
    uVar1 = local_cc;
    if (local_cc != 0) {
      puVar5 = (undefined4 *)local_c8;
      if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
        (*(code *)*(undefined4 *)local_c8)(local_cc);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar1);
      }
    }
    local_68 = (undefined1 *)CONCAT31(local_68._1_3_,2);
    local_68 = (undefined1 *)CONCAT22(0x100,(undefined2)local_68);
    local_8c = 0x2f;
    local_94 = 0x49;
    local_9c = (undefined4 *)&DAT_00000011;
    local_78 = 0x50033ea20;
    local_88 = (char *)0x0;
    local_80 = (undefined *)0x0;
    local_a4 = 0x18;
    local_b8 = (undefined *)0x80000000;
    local_98 = &DAT_0033ea36;
    local_a0 = &DAT_0033ea25;
    local_a8 = "enable_continuous_tuning";
    local_6c = &LAB_006ea13c;
    local_70 = &LAB_006ea134;
    local_90 = &DAT_0033e9f1;
    iVar2 = thunk_FUN_016d4a50(0x70);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x70);
    }
    FUN_016dd1aa(iVar2,&local_d0,0x70);
    uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"enable_continuous_tuning",0x18);
    FUN_00750340(&local_d0,&local_108,uVar3,"enable_continuous_tuning",0x18,iVar2,&DAT_018592a4);
    uVar1 = local_cc;
    if (local_cc != 0) {
      puVar5 = (undefined4 *)local_c8;
      if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
        (*(code *)*(undefined4 *)local_c8)(local_cc);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar1);
      }
    }
    local_7c = (undefined4 *)0xa9;
    local_5c = 5;
    local_84 = 0x18;
    local_50 = (undefined1 *)((uint)local_50 & 0xffff0000);
    local_70 = (undefined1 *)0x0;
    local_68 = (undefined1 *)0x0;
    local_8c = 0x1b;
    local_d0 = (undefined *)0x80000000;
    local_a0 = (undefined *)0x80000000;
    local_80 = &DAT_0033ead6;
    local_88 = &DAT_0033eabe;
    local_90 = "normal_ramping_time_up_mode";
    local_54 = &LAB_006ea14c;
    local_58 = &LAB_006ea144;
    local_78 = 0x3f0033ea7f;
    local_60 = &DAT_0033e7d5;
    iVar2 = thunk_FUN_016d4a50(0x88);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x88);
    }
    FUN_016dd1aa(iVar2,&local_d0,0x88);
    uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"normal_ramping_time_up_mode",0x1b);
    FUN_00750340(&local_d0,&local_108,uVar3,"normal_ramping_time_up_mode",0x1b,iVar2,&DAT_0185937c);
    uVar1 = local_cc;
    if (local_cc != 0) {
      puVar5 = (undefined4 *)local_c8;
      if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
        (*(code *)*(undefined4 *)local_c8)(local_cc);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar1);
      }
    }
    uVar3 = 6;
    pcVar4 = (char *)thunk_FUN_016d4a50(6);
    if (pcVar4 != (char *)0x0) {
      builtin_strncpy(pcVar4,"custom",6);
      local_40 = (undefined *)CONCAT31(local_40._1_3_,3);
      local_34 = 6;
      local_3c = 6;
      local_38 = pcVar4;
      puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x1b);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x1b);
      }
      FUN_016dd1aa(puVar5,"normal_ramping_time_up_mode",0x1b);
      local_b8 = local_40;
      local_b4 = local_3c;
      local_b0 = local_38;
      local_ac = local_34;
      local_a8 = pcStack_30;
      local_a4 = uStack_2c;
      local_78 = 0x1e;
      local_c8 = 10;
      local_c0 = (char *)0x258;
      local_bc = 0;
      local_7c = (undefined4 *)0x9c;
      local_84 = 0x16;
      local_80 = &DAT_0033eb9a;
      local_88 = &DAT_0033eb84;
      local_8c = 0x18;
      local_cc = 0;
      local_90 = "normal_ramping_time_up_s";
      local_d0 = (undefined *)0x1;
      local_50 = &LAB_006ea154;
      local_54 = (undefined1 *)0x5;
      local_98 = (undefined *)0x1b;
      local_4c = &LAB_006ea15c;
      local_48 = 0;
      local_64 = 1;
      local_68 = &DAT_0041547c;
      local_70 = (undefined1 *)0x0;
      local_58 = &DAT_0033eb7f;
      local_60 = (undefined *)0x0;
      local_a0 = (undefined *)0x1b;
      local_9c = puVar5;
      iVar2 = thunk_FUN_016d4a50(0x90);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x90);
      }
      FUN_016dd1aa(iVar2,&local_d0,0x90);
      uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"normal_ramping_time_up_s",0x18);
      FUN_00750340(&local_d0,&local_108,uVar3,"normal_ramping_time_up_s",0x18,iVar2,&DAT_018593c4);
      uVar1 = local_cc;
      if (local_cc != 0) {
        puVar5 = (undefined4 *)local_c8;
        if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
          (*(code *)*(undefined4 *)local_c8)(local_cc);
        }
        if (puVar5[1] != 0) {
          thunk_FUN_016d3fb4(uVar1);
        }
      }
      local_7c = (undefined4 *)0x9f;
      local_84 = 0x1a;
      local_5c = 5;
      local_50 = (undefined1 *)((uint)local_50 & 0xffff0000);
      local_70 = (undefined1 *)0x0;
      local_68 = (undefined1 *)0x0;
      local_8c = 0x1d;
      local_d0 = (undefined *)0x80000000;
      local_a0 = (undefined *)0x80000000;
      local_80 = &DAT_0033ec50;
      local_88 = &DAT_0033ec36;
      local_90 = "normal_ramping_time_down_mode";
      local_54 = &LAB_006ea174;
      local_58 = &LAB_006ea16c;
      local_78 = 0x3f0033ea7f;
      local_60 = &DAT_0033e7d5;
      iVar2 = thunk_FUN_016d4a50(0x88);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x88);
      }
      FUN_016dd1aa(iVar2,&local_d0,0x88);
      uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"normal_ramping_time_down_mode",0x1d);
      FUN_00750340(&local_d0,&local_108,uVar3,"normal_ramping_time_down_mode",0x1d,iVar2,
                   &DAT_0185937c);
      uVar1 = local_cc;
      if (local_cc != 0) {
        puVar5 = (undefined4 *)local_c8;
        if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
          (*(code *)*(undefined4 *)local_c8)(local_cc);
        }
        if (puVar5[1] != 0) {
          thunk_FUN_016d3fb4(uVar1);
        }
      }
      uVar3 = 6;
      pcVar4 = (char *)thunk_FUN_016d4a50(6);
      if (pcVar4 != (char *)0x0) {
        builtin_strncpy(pcVar4,"custom",6);
        local_40 = (undefined *)CONCAT31(local_40._1_3_,3);
        local_34 = 6;
        local_3c = 6;
        local_38 = pcVar4;
        iVar2 = thunk_FUN_016d4a50(0x1d);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0x1d);
        }
        FUN_016dd1aa(iVar2,"normal_ramping_time_down_mode",0x1d);
        local_b8 = local_40;
        local_b4 = local_3c;
        local_b0 = local_38;
        local_ac = local_34;
        local_a8 = pcStack_30;
        local_a4 = uStack_2c;
        local_78 = CONCAT44(local_78._4_4_,0x1e);
        local_c8 = CONCAT44(local_c8._4_4_,10);
        local_c0 = (char *)0x258;
        local_bc = 0;
        local_7c = (undefined4 *)0xbf;
        local_80 = &DAT_0033ed07;
        local_84 = 0x18;
        local_88 = &DAT_0033ecef;
        local_8c = 0x1a;
        local_cc = 0;
        local_90 = "normal_ramping_time_down_s";
        local_d0 = (undefined *)0x1;
        local_4c = &LAB_006ea184;
        local_50 = &LAB_006ea17c;
        local_48 = 0;
        local_64 = 1;
        local_70 = (undefined1 *)0x0;
        local_68 = &DAT_0041547c;
        local_54 = (undefined1 *)0x5;
        local_60 = (undefined *)0x0;
        local_58 = &DAT_0033eb7f;
        local_98 = (undefined *)0x1d;
        local_a0 = (undefined *)0x1d;
        local_9c = (undefined4 *)iVar2;
        iVar2 = thunk_FUN_016d4a50(0x90);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x90);
        }
        FUN_016dd1aa(iVar2,&local_d0,0x90);
        uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"normal_ramping_time_down_s",0x1a);
        FUN_00750340(&local_d0,&local_108,uVar3,"normal_ramping_time_down_s",0x1a,iVar2,
                     &DAT_018593c4);
        uVar1 = local_cc;
        if (local_cc != 0) {
          puVar5 = (undefined4 *)local_c8;
          if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
            (*(code *)*(undefined4 *)local_c8)(local_cc);
          }
          if (puVar5[1] != 0) {
            thunk_FUN_016d3fb4(uVar1);
          }
        }
        local_50 = (undefined1 *)CONCAT22(local_50._2_2_,0x200);
        local_5c = 5;
        local_7c = (undefined4 *)0x5f;
        local_70 = (undefined1 *)0x0;
        local_68 = (undefined1 *)0x0;
        local_84 = 10;
        local_8c = 10;
        local_d0 = (undefined *)0x80000000;
        local_a0 = (undefined *)0x80000000;
        local_80 = &DAT_0033edff;
        local_88 = &DAT_0033edf5;
        local_90 = "rambo_mode";
        local_54 = &LAB_006ea19c;
        local_58 = &LAB_006ea194;
        local_78 = 0x2f0033edc6;
        local_60 = &DAT_0033eb7f;
        iVar2 = thunk_FUN_016d4a50(0x88);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x88);
        }
        FUN_016dd1aa(iVar2,&local_d0,0x88);
        uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"rambo_mode",10);
        FUN_00750340(&local_d0,&local_108,uVar3,"rambo_mode",10,iVar2,&DAT_0185940c);
        uVar1 = local_cc;
        if (local_cc != 0) {
          puVar5 = (undefined4 *)local_c8;
          if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
            (*(code *)*(undefined4 *)local_c8)(local_cc);
          }
          if (puVar5[1] != 0) {
            thunk_FUN_016d3fb4(uVar1);
          }
        }
        local_94 = 0x4f;
        local_9c = (undefined4 *)0x12;
        local_68 = (undefined1 *)CONCAT31(local_68._1_3_,2);
        local_68 = (undefined1 *)CONCAT22(0x100,(undefined2)local_68);
        local_8c = 0x25;
        local_88 = (char *)0x0;
        local_80 = (undefined *)0x0;
        local_a4 = 0xe;
        local_b8 = (undefined *)0x80000000;
        local_98 = &DAT_0033ee95;
        local_a0 = &DAT_0033ee83;
        local_a8 = "enable_defrost";
        local_6c = &LAB_006ea1ac;
        local_70 = &LAB_006ea1a4;
        local_90 = &DAT_0033ee5e;
        local_78 = 0x50033ea20;
        iVar2 = thunk_FUN_016d4a50(0x70);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x70);
        }
        FUN_016dd1aa(iVar2,&local_d0,0x70);
        uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"enable_defrost",0xe);
        FUN_00750340(&local_d0,&local_108,uVar3,"enable_defrost",0xe,iVar2,&DAT_018592a4);
        uVar1 = local_cc;
        if (local_cc != 0) {
          puVar5 = (undefined4 *)local_c8;
          if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
            (*(code *)*(undefined4 *)local_c8)(local_cc);
          }
          if (puVar5[1] != 0) {
            thunk_FUN_016d3fb4(uVar1);
          }
        }
        local_e8 = (undefined *)CONCAT22(local_e8._2_2_,0x101);
        local_40 = (undefined *)0x80000000;
        puVar5 = (undefined4 *)thunk_FUN_016d4a50(0xe);
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0xe);
        }
        puVar5[2] = 0x6f726665;
        puVar5[1] = 0x645f656c;
        *(undefined2 *)(puVar5 + 3) = 0x7473;
        *puVar5 = 0x62616e65;
        local_b8 = local_e8;
        local_b4 = uStack_e4;
        local_b0 = pcStack_e0;
        local_ac = uStack_dc;
        local_a8 = pcStack_d8;
        local_a4 = uStack_d4;
        local_88 = &DAT_0033eee4;
        local_7c = (undefined4 *)0xae;
        local_80 = &DAT_0033eef8;
        local_84 = 0x14;
        local_8c = 0x14;
        local_90 = "defrost_timeout_mode";
        local_54 = &LAB_006ea204;
        local_58 = &LAB_006ea1fc;
        local_d0 = local_40;
        local_cc = local_3c;
        local_c8 = CONCAT44(local_34,local_38);
        local_c0 = pcStack_30;
        local_bc = uStack_2c;
        local_50 = (undefined1 *)CONCAT22((short)((uint)local_50 >> 0x10),0x100);
        local_70 = (undefined1 *)0x0;
        local_78 = 0x250033ee5e;
        local_5c = 5;
        local_a0 = (undefined *)0xe;
        local_60 = &DAT_0033e7d5;
        local_68 = (undefined1 *)0x0;
        local_98 = (undefined *)0xe;
        local_9c = puVar5;
        iVar2 = thunk_FUN_016d4a50(0x88);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x88);
        }
        FUN_016dd1aa(iVar2,&local_d0,0x88);
        uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"defrost_timeout_mode",0x14);
        FUN_00750340(&local_d0,&local_108,uVar3,"defrost_timeout_mode",0x14,iVar2,&DAT_01859454);
        uVar1 = local_cc;
        if (local_cc != 0) {
          puVar5 = (undefined4 *)local_c8;
          if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
            (*(code *)*(undefined4 *)local_c8)(local_cc);
          }
          if (puVar5[1] != 0) {
            thunk_FUN_016d3fb4(uVar1);
          }
        }
        uVar3 = 5;
        pcVar4 = (char *)thunk_FUN_016d4a50(5);
        if (pcVar4 != (char *)0x0) {
          builtin_strncpy(pcVar4,"timed",5);
          local_40 = (undefined *)CONCAT31(local_40._1_3_,3);
          local_34 = 5;
          local_3c = 5;
          local_38 = pcVar4;
          iVar2 = thunk_FUN_016d4a50(0x14);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,0x14);
          }
          FUN_016dd1aa(iVar2,"defrost_timeout_mode",0x14);
          local_b8 = local_40;
          local_b4 = local_3c;
          local_b0 = local_38;
          local_ac = local_34;
          local_a8 = pcStack_30;
          local_a4 = uStack_2c;
          local_78 = CONCAT44(local_78._4_4_,300);
          local_c0 = (char *)0x15180;
          local_c8 = local_c8 & 0xffffffff00000000;
          local_bc = 0;
          local_7c = (undefined4 *)0x35;
          local_84 = 0x18;
          local_80 = &DAT_0033efbe;
          local_88 = &DAT_0033efa6;
          local_8c = 0x11;
          local_cc = 0;
          local_90 = "defrost_timeout_s";
          local_d0 = (undefined *)0x1;
          local_50 = &LAB_006ea20c;
          local_4c = &LAB_006ea214;
          local_48 = 1;
          local_64 = 1;
          local_70 = (undefined1 *)0x0;
          local_68 = &DAT_0041547c;
          local_54 = (undefined1 *)0x5;
          local_60 = (undefined *)0x0;
          local_58 = &DAT_0033ea20;
          local_98 = (undefined *)0x14;
          local_a0 = (undefined *)0x14;
          local_9c = (undefined4 *)iVar2;
          iVar2 = thunk_FUN_016d4a50(0x90);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x90);
          }
          FUN_016dd1aa(iVar2,&local_d0,0x90);
          uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"defrost_timeout_s",0x11);
          FUN_00750340(&local_d0,&local_108,uVar3,"defrost_timeout_s",0x11,iVar2,&DAT_018593c4);
          uVar1 = local_cc;
          if (local_cc != 0) {
            puVar5 = (undefined4 *)local_c8;
            if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
              (*(code *)*(undefined4 *)local_c8)(local_cc);
            }
            if (puVar5[1] != 0) {
              thunk_FUN_016d3fb4(uVar1);
            }
          }
          puVar5 = (undefined4 *)thunk_FUN_016d4a50(0xe);
          if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,0xe);
          }
          puVar5[2] = 0x6f726665;
          puVar5[1] = 0x645f656c;
          *(undefined2 *)(puVar5 + 3) = 0x7473;
          *puVar5 = 0x62616e65;
          local_b8 = local_e8;
          local_78 = CONCAT44(local_78._4_4_,10);
          local_c0 = (char *)0xf;
          local_7c = (undefined4 *)0x135;
          local_c8 = CONCAT44(local_c8._4_4_,0xfffffff1);
          local_bc = 0;
          local_84 = 0x19;
          local_80 = &DAT_0033f00c;
          local_88 = &DAT_0033eff3;
          local_8c = 0x1b;
          local_cc = 0;
          local_90 = "defrost_temperature_limit_c";
          local_d0 = (undefined *)0x1;
          local_48 = 1;
          local_64 = 3;
          local_4c = &LAB_006ea22c;
          local_50 = &LAB_006ea224;
          local_68 = &DAT_0035799a;
          local_6c = (undefined1 *)0x25;
          local_70 = &DAT_0033ee5e;
          local_54 = (undefined1 *)0x5;
          local_a0 = (undefined *)0xe;
          local_58 = &DAT_0033ea20;
          local_60 = (undefined *)0x0;
          local_98 = (undefined *)0xe;
          local_9c = puVar5;
          iVar2 = thunk_FUN_016d4a50(0x90);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x90);
          }
          FUN_016dd1aa(iVar2,&local_d0,0x90);
          uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"defrost_temperature_limit_c",0x1b);
          FUN_00750340(&local_d0,&local_108,uVar3,"defrost_temperature_limit_c",0x1b,iVar2,
                       &DAT_0185949c);
          uVar1 = local_cc;
          if (local_cc != 0) {
            puVar5 = (undefined4 *)local_c8;
            if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
              (*(code *)*(undefined4 *)local_c8)(local_cc);
            }
            if (puVar5[1] != 0) {
              thunk_FUN_016d3fb4(uVar1);
            }
          }
          local_50 = (undefined1 *)CONCAT22(local_50._2_2_,0x100);
          local_7c = (undefined4 *)0x102;
          local_5c = 5;
          local_84 = 0x1f;
          local_70 = (undefined1 *)0x0;
          local_68 = (undefined1 *)0x0;
          local_8c = 0x16;
          local_d0 = (undefined *)0x80000000;
          local_a0 = (undefined *)0x80000000;
          local_80 = &DAT_0033f19d;
          local_88 = &DAT_0033f17e;
          local_90 = "overheat_recovery_mode";
          local_54 = &LAB_006ea244;
          local_58 = &LAB_006ea23c;
          local_78 = 0x3d0033f141;
          local_60 = &DAT_0033e5ed;
          iVar2 = thunk_FUN_016d4a50(0x88);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x88);
          }
          FUN_016dd1aa(iVar2,&local_d0,0x88);
          uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"overheat_recovery_mode",0x16);
          FUN_00750340(&local_d0,&local_108,uVar3,"overheat_recovery_mode",0x16,iVar2,&DAT_018594e4)
          ;
          uVar1 = local_cc;
          if (local_cc != 0) {
            puVar5 = (undefined4 *)local_c8;
            if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
              (*(code *)*(undefined4 *)local_c8)(local_cc);
            }
            if (puVar5[1] != 0) {
              thunk_FUN_016d3fb4(uVar1);
            }
          }
          local_70 = (undefined1 *)0x3;
          local_58 = (undefined1 *)CONCAT31(local_58._1_3_,3);
          local_cc = 0x34;
          local_60 = (undefined *)0x1;
          local_64 = 1;
          local_9c = (undefined4 *)&DAT_000000c4;
          local_80 = (undefined *)0x80000000;
          local_a4 = 0x16;
          local_5c = 5;
          local_b4 = 5;
          local_ac = 0x1a;
          local_c8 = local_c8 & 0xffffffff00000000;
          local_c0 = (char *)0x0;
          local_68 = &LAB_006ea254;
          local_6c = &LAB_006ea24c;
          local_a0 = &DAT_0033f2e9;
          local_a8 = &DAT_0033f2d3;
          local_b0 = "overheat_recovery_attempts";
          local_d0 = &DAT_0033f29f;
          local_b8 = &DAT_0033e5ed;
          iVar2 = thunk_FUN_016d4a50(0x80);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x80);
          }
          FUN_016dd1aa(iVar2,&local_d0,0x80);
          uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"overheat_recovery_attempts",0x1a);
          FUN_00750340(&local_d0,&local_108,uVar3,"overheat_recovery_attempts",0x1a,iVar2,
                       &DAT_01859334);
          uVar1 = local_cc;
          if (local_cc != 0) {
            puVar5 = (undefined4 *)local_c8;
            if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
              (*(code *)*(undefined4 *)local_c8)(local_cc);
            }
            if (puVar5[1] != 0) {
              thunk_FUN_016d3fb4(uVar1);
            }
          }
          local_bc = 0x40650000;
          local_48 = 3;
          local_d0 = (undefined *)0x1;
          local_64 = 1;
          local_7c = (undefined4 *)0x70;
          local_6c = (undefined1 *)0x33;
          local_84 = 0x15;
          local_54 = (undefined1 *)0x5;
          local_8c = 0x1f;
          local_cc = 0;
          local_c0 = (char *)0x0;
          local_60 = (undefined *)0x0;
          local_4c = &LAB_006ea264;
          local_50 = &LAB_006ea25c;
          local_80 = &DAT_0033f3f6;
          local_88 = &DAT_0033f3e1;
          local_90 = "overheat_recovery_backoff_hours";
          local_68 = &DAT_0033f3ad;
          local_70 = &DAT_0033f3ae;
          local_78 = 0x4008000000000000;
          local_58 = &DAT_0033e5ed;
          local_c8 = 0x3fe0000000000000;
          local_a0 = (undefined *)0x80000000;
          iVar2 = thunk_FUN_016d4a50(0x90);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x90);
          }
          FUN_016dd1aa(iVar2,&local_d0,0x90);
          uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"overheat_recovery_backoff_hours",0x1f);
          FUN_00750340(&local_d0,&local_108,uVar3,"overheat_recovery_backoff_hours",0x1f,iVar2,
                       &DAT_0185952c);
          uVar1 = local_cc;
          if (local_cc != 0) {
            puVar5 = (undefined4 *)local_c8;
            if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
              (*(code *)*(undefined4 *)local_c8)(local_cc);
            }
            if (puVar5[1] != 0) {
              thunk_FUN_016d3fb4(uVar1);
            }
          }
          local_d0 = (undefined *)0x1;
          local_bc = 0x404e0000;
          local_48 = 3;
          local_64 = 3;
          local_7c = (undefined4 *)0xd5;
          local_6c = (undefined1 *)0x41;
          local_84 = 0x23;
          local_54 = (undefined1 *)0x5;
          local_8c = 0x29;
          local_cc = 0;
          local_78 = 0x4046800000000000;
          local_c0 = (char *)0x0;
          local_60 = (undefined *)0x0;
          local_4c = &LAB_006ea2a4;
          local_50 = &LAB_006ea29c;
          local_80 = &DAT_0033f4ca;
          local_88 = &DAT_0033f4a7;
          local_90 = "overheat_recovery_temperature_threshold_c";
          local_70 = &DAT_0033f466;
          local_68 = &DAT_0035799a;
          local_c8 = 0x4034000000000000;
          local_58 = &DAT_0033e5ed;
          local_a0 = (undefined *)0x80000000;
          iVar2 = thunk_FUN_016d4a50(0x90);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x90);
          }
          FUN_016dd1aa(iVar2,&local_d0,0x90);
          uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"overheat_recovery_temperature_threshold_c",
                               0x29);
          FUN_00750340(&local_d0,&local_108,uVar3,"overheat_recovery_temperature_threshold_c",0x29,
                       iVar2,&DAT_0185952c);
          uVar1 = local_cc;
          if (local_cc != 0) {
            puVar5 = (undefined4 *)local_c8;
            if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
              (*(code *)*(undefined4 *)local_c8)(local_cc);
            }
            if (puVar5[1] != 0) {
              thunk_FUN_016d3fb4(uVar1);
            }
          }
          local_cc = 0;
          local_c0 = (char *)0x258;
          local_7c = (undefined4 *)0xd2;
          local_78 = local_78 & 0xffffffff00000000;
          local_c8 = local_c8 & 0xffffffff00000000;
          local_bc = 0;
          local_84 = 0x15;
          local_d0 = (undefined *)0x1;
          local_64 = 1;
          local_8c = 0x13;
          local_54 = (undefined1 *)0x5;
          local_48 = 0;
          local_70 = (undefined1 *)0x0;
          local_60 = (undefined *)0x0;
          local_80 = &DAT_0033f5b4;
          local_88 = &DAT_0033f59f;
          local_90 = "startup_delay_max_s";
          local_4c = &LAB_006ea2b4;
          local_50 = &LAB_006ea2ac;
          local_68 = &DAT_0041547c;
          local_58 = &DAT_0033e5ed;
          local_a0 = (undefined *)0x80000000;
          iVar2 = thunk_FUN_016d4a50(0x90);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x90);
          }
          FUN_016dd1aa(iVar2,&local_d0,0x90);
          uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"startup_delay_max_s",0x13);
          FUN_00750340(&local_d0,&local_108,uVar3,"startup_delay_max_s",0x13,iVar2,&DAT_018593c4);
          uVar1 = local_cc;
          if (local_cc != 0) {
            puVar5 = (undefined4 *)local_c8;
            if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
              (*(code *)*(undefined4 *)local_c8)(local_cc);
            }
            if (puVar5[1] != 0) {
              thunk_FUN_016d3fb4(uVar1);
            }
          }
          local_7c = (undefined4 *)0x11e;
          local_84 = 0x1a;
          local_50 = (undefined1 *)CONCAT22(local_50._2_2_,0x100);
          local_5c = 5;
          local_80 = &DAT_0033f6d8;
          local_70 = (undefined1 *)0x0;
          local_68 = (undefined1 *)0x0;
          local_8c = 0x13;
          local_d0 = (undefined *)0x80000000;
          local_a0 = (undefined *)0x80000000;
          local_88 = &DAT_0033f6be;
          local_90 = "start_cooldown_mode";
          local_54 = &LAB_006ea2cc;
          local_58 = &LAB_006ea2c4;
          local_78 = 0x330033f686;
          local_60 = &DAT_0033f6b9;
          iVar2 = thunk_FUN_016d4a50(0x88);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x88);
          }
          FUN_016dd1aa(iVar2,&local_d0,0x88);
          uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"start_cooldown_mode",0x13);
          FUN_00750340(&local_d0,&local_108,uVar3,"start_cooldown_mode",0x13,iVar2,&DAT_01859574);
          uVar1 = local_cc;
          if (local_cc != 0) {
            puVar5 = (undefined4 *)local_c8;
            if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
              (*(code *)*(undefined4 *)local_c8)(local_cc);
            }
            if (puVar5[1] != 0) {
              thunk_FUN_016d3fb4(uVar1);
            }
          }
          uVar3 = 5;
          puVar5 = (undefined4 *)thunk_FUN_016d4a50(5);
          if (puVar5 != (undefined4 *)0x0) {
            *(undefined1 *)(puVar5 + 1) = 100;
            *puVar5 = 0x656d6974;
            local_40 = (undefined *)CONCAT31(local_40._1_3_,3);
            local_34 = 5;
            local_3c = 5;
            local_38 = (char *)puVar5;
            iVar2 = thunk_FUN_016d4a50(0x13);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,0x13);
            }
            FUN_016dd1aa(iVar2,"start_cooldown_mode",0x13);
            local_b8 = local_40;
            local_b4 = local_3c;
            local_b0 = local_38;
            local_ac = local_34;
            local_78 = CONCAT44(local_78._4_4_,0x3c);
            local_c8 = CONCAT44(local_c8._4_4_,0xf);
            local_c0 = (char *)0x258;
            local_bc = 0;
            local_7c = (undefined4 *)0x55;
            local_80 = &DAT_0033f813;
            local_84 = 0x1d;
            local_88 = &DAT_0033f7f6;
            local_8c = 0x18;
            local_cc = 0;
            local_90 = "start_cooldown_timeout_s";
            local_d0 = (undefined *)0x1;
            local_50 = &LAB_006ea2d4;
            local_4c = &LAB_006ea2dc;
            local_48 = 1;
            local_64 = 1;
            local_70 = (undefined1 *)0x0;
            local_68 = &DAT_0041547c;
            local_54 = (undefined1 *)0x5;
            local_60 = (undefined *)0x0;
            local_58 = &DAT_0033f6b9;
            local_98 = (undefined *)0x13;
            local_a0 = (undefined *)0x13;
            local_9c = (undefined4 *)iVar2;
            iVar2 = thunk_FUN_016d4a50(0x90);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x90);
            }
            FUN_016dd1aa(iVar2,&local_d0,0x90);
            uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"start_cooldown_timeout_s",0x18);
            FUN_00750340(&local_d0,&local_108,uVar3,"start_cooldown_timeout_s",0x18,iVar2,
                         &DAT_018593c4);
            uVar1 = local_cc;
            if (local_cc != 0) {
              puVar5 = (undefined4 *)local_c8;
              if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
                (*(code *)*(undefined4 *)local_c8)(local_cc);
              }
              if (puVar5[1] != 0) {
                thunk_FUN_016d3fb4(uVar1);
              }
            }
            local_68 = (undefined1 *)CONCAT31(local_68._1_3_,2);
            local_94 = 0xad;
            local_68 = (undefined1 *)CONCAT22(0x300,(undefined2)local_68);
            local_b8 = (undefined *)0x80000000;
            local_9c = (undefined4 *)0x1e;
            local_a4 = 0x1e;
            local_88 = (char *)0x0;
            local_90 = (char *)0x0;
            local_80 = (undefined *)0x0;
            local_98 = &DAT_0033f88b;
            local_a0 = &DAT_0033f86d;
            local_a8 = "disable_heating_rate_fan_boost";
            local_6c = &LAB_006ea2f4;
            local_70 = &LAB_006ea2ec;
            local_78 = 0x50033f868;
            iVar2 = thunk_FUN_016d4a50(0x70);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x70);
            }
            FUN_016dd1aa(iVar2,&local_d0,0x70);
            uVar3 = FUN_006a5898(uVar8,uVar7,uVar9,uVar10,"disable_heating_rate_fan_boost",0x1e);
            FUN_00750340(&local_d0,&local_108,uVar3,"disable_heating_rate_fan_boost",0x1e,iVar2,
                         &DAT_018592a4);
            uVar1 = local_cc;
            if (local_cc != 0) {
              puVar5 = (undefined4 *)local_c8;
              if ((code *)*(undefined4 *)local_c8 != (code *)0x0) {
                (*(code *)*(undefined4 *)local_c8)(local_cc);
              }
              if (puVar5[1] != 0) {
                thunk_FUN_016d3fb4(uVar1);
              }
            }
            *param_1 = uVar8;
            param_1[1] = uVar7;
            param_1[2] = uVar9;
            param_1[3] = uVar10;
            param_1[4] = local_108;
            param_1[5] = local_104;
            param_1[6] = local_100;
            param_1[7] = (uint)local_fc;
            param_1[8] = local_f8;
            param_1[9] = local_f4;
            param_1[10] = local_f0;
            param_1[0xb] = uStack_ec;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(1,uVar3);
}

