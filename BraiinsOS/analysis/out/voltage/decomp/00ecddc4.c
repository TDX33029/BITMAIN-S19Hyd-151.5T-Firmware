// function @ 00ecddc4  size=948  volt_strings=5
// strings: allow_disabling_hashboards_on_nopic_miners | allow_missing_voltage_feedback | disable_bootstrap_check | send_dummy_telemetry_on_startup | min_fan_pwm | enable_continuous_tuning | normal_ramping_time_up_mode | normal_ramping_time_up_s | normal_ramping_time_down_mode | normal_ramping_time_down_s | enable_defrost | defrost_timeout_s | overheat_recovery_attempts | overheat_recovery_backoff_hours | overheat_recovery_temperature_threshold_c | startup_delay_max_s | start_cooldown_timeout_s | disable_heating_rate_fan_boost

void FUN_00ecddc4(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_48 = -0x80000000;
  local_4c = 0;
  local_54 = 0;
  local_58 = 0;
  iVar1 = FUN_00ece200(&local_58,"allow_disabling_hashboards_on_nopic_miners",0x2a,
                       *(undefined1 *)((int)param_2 + 0x4b));
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_00ece200(&local_58,"allow_missing_voltage_feedback",0x1e,
                             *(undefined1 *)(param_2 + 0x13)), iVar1 == 0)) &&
      (iVar1 = FUN_00ece200(&local_58,"disable_bootstrap_check",0x17,
                            *(undefined1 *)((int)param_2 + 0x4d)), iVar1 == 0)) &&
     (((((iVar1 = FUN_00ece200(&local_58,"send_dummy_telemetry_on_startup",0x1f,
                               *(undefined1 *)((int)param_2 + 0x4e)), iVar1 == 0 &&
         (iVar1 = FUN_00ece324(&local_58,*(undefined1 *)((int)param_2 + 0x4f)), iVar1 == 0)) &&
        ((iVar1 = FUN_00ece4c8(&local_58,"min_fan_pwm",0xb,param_2[0x10]), iVar1 == 0 &&
         ((iVar1 = FUN_00ece200(&local_58,&DAT_005658b0,0x20,*(undefined1 *)(param_2 + 0x14)),
          iVar1 == 0 &&
          (iVar1 = FUN_00ece200(&local_58,"enable_continuous_tuning",0x18,
                                *(undefined1 *)((int)param_2 + 0x51)), iVar1 == 0)))))) &&
       ((iVar1 = FUN_00ece5e0(&local_58,"normal_ramping_time_up_mode",0x1b,
                              *(undefined1 *)((int)param_2 + 0x52)), iVar1 == 0 &&
        ((((iVar1 = FUN_00ece788(&local_58,"normal_ramping_time_up_s",0x18,param_2[1],*param_2,
                                 param_2[1]), iVar1 == 0 &&
           (iVar1 = FUN_00ece5e0(&local_58,"normal_ramping_time_down_mode",0x1d,
                                 *(undefined1 *)((int)param_2 + 0x53)), iVar1 == 0)) &&
          (iVar1 = FUN_00ece788(&local_58,"normal_ramping_time_down_s",0x1a,param_2[3],param_2[2],
                                param_2[3]), iVar1 == 0)) &&
         ((iVar1 = FUN_00ece89c(&local_58,*(undefined1 *)(param_2 + 0x12)), iVar1 == 0 &&
          (iVar1 = FUN_00ece200(&local_58,"enable_defrost",0xe,*(undefined1 *)(param_2 + 0x15)),
          iVar1 == 0)))))))) &&
      (iVar1 = FUN_00ecea88(&local_58,*(undefined1 *)((int)param_2 + 0x55)), iVar1 == 0)))) {
    uVar2 = FUN_00ece788(&local_58,"defrost_timeout_s",0x11,param_2[5],param_2[4],param_2[5]);
    iVar1 = (int)uVar2;
    if (((iVar1 == 0) &&
        (iVar1 = FUN_00ecec40(&local_58,(int)((ulonglong)uVar2 >> 0x20),param_2[6],param_2[7]),
        iVar1 == 0)) &&
       ((((iVar1 = FUN_00eced70(&local_58,*(undefined1 *)((int)param_2 + 0x49)), iVar1 == 0 &&
          (((iVar1 = FUN_00ece4c8(&local_58,"overheat_recovery_attempts",0x1a,param_2[0x11]),
            iVar1 == 0 &&
            (iVar1 = FUN_00ecef6c((int)*(undefined8 *)(param_2 + 8),&local_58,
                                  "overheat_recovery_backoff_hours",0x1f), iVar1 == 0)) &&
           (iVar1 = FUN_00ecef6c((int)*(undefined8 *)(param_2 + 10),&local_58,
                                 "overheat_recovery_temperature_threshold_c",0x29), iVar1 == 0))))
         && (((iVar1 = FUN_00ece788(&local_58,"startup_delay_max_s",0x13,param_2[0xd],param_2[0xc],
                                    param_2[0xd]), iVar1 == 0 &&
              (iVar1 = FUN_00ecf0d8(&local_58,*(undefined1 *)((int)param_2 + 0x4a)), iVar1 == 0)) &&
             (iVar1 = FUN_00ece788(&local_58,"start_cooldown_timeout_s",0x18,param_2[0xf],
                                   param_2[0xe],param_2[0xf]), iVar1 == 0)))) &&
        (iVar1 = FUN_00ece200(&local_58,"disable_heating_rate_fan_boost",0x1e,
                              *(undefined1 *)((int)param_2 + 0x56)), iVar1 == 0)))) {
      local_38 = local_58;
      uStack_34 = local_54;
      uStack_30 = local_50;
      uStack_2c = local_4c;
      iStack_28 = local_48;
      uStack_24 = local_44;
      uStack_20 = uStack_40;
      uStack_1c = uStack_3c;
      FUN_0157cf8c(param_1);
      return;
    }
  }
  *param_1 = 6;
  *(int *)(param_1 + 4) = iVar1;
  if (local_58 != 0) {
    if ((local_50 & 0xff) != 6) {
      FUN_005c37bc(&local_50);
    }
    return;
  }
  FUN_00ea8964((uint)&local_58 | 4);
  if (local_48 == -0x80000000 || local_48 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_44);
  return;
}

