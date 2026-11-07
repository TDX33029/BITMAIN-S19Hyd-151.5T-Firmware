// FUN_00eeb71c @ 00eeb71c size=4824 calls_out=17 calls_in=1
// strings: session_id | bosminer_version | devfee_worker_identity | platform_name | perf_var_ths | tuner_mode

void FUN_00eeb71c(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int **ppiVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  int *piVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  uint uVar53;
  int local_50;
  undefined1 *local_4c;
  int local_48;
  int *local_44;
  undefined4 local_40;
  int **local_3c;
  undefined4 local_38;
  int **local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_4c = (undefined1 *)thunk_FUN_016d4a50(0x80);
  if (local_4c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  local_44 = &local_50;
  *local_4c = 0x7b;
  local_48 = 1;
  local_3c = &local_44;
  local_50 = 0x80;
  local_40 = CONCAT22(local_40._2_2_,0x100);
  iVar11 = FUN_00e63424(&local_40,param_2 + 0x68);
  ppiVar9 = local_3c;
  if (iVar11 != 0) goto LAB_00eec864;
  if ((char)local_40 == '\x01') {
    local_30 = 10;
    iVar11 = FUN_0157c50c(&local_30,0,0);
    goto LAB_00eec864;
  }
  if (local_40._1_1_ != '\x01') {
    piVar47 = *local_3c;
    iVar11 = piVar47[2];
    if (*piVar47 == iVar11) {
      FUN_00edff4c(piVar47,iVar11,1,1,1);
      iVar11 = piVar47[2];
    }
    *(undefined1 *)(piVar47[1] + iVar11) = 0x2c;
    piVar47[2] = iVar11 + 1;
  }
  local_40._0_2_ = CONCAT11(2,(char)local_40);
  FUN_00e5d350(&local_30,*ppiVar9,&DAT_00569478,4);
  if ((char)local_30 != '\x04') {
    iVar11 = FUN_0157c4a0(local_30,local_2c);
    goto LAB_00eec864;
  }
  piVar47 = *ppiVar9;
  iVar11 = piVar47[2];
  if (*piVar47 == iVar11) {
    FUN_00edff4c(piVar47,iVar11,1,1,1);
    iVar11 = piVar47[2];
  }
  *(undefined1 *)(piVar47[1] + iVar11) = 0x3a;
  piVar47[2] = iVar11 + 1;
  iVar12 = param_2[1];
  iVar48 = *param_2;
  iVar13 = param_2[0x1a];
  iVar49 = param_2[0x1d];
  iVar11 = iVar48;
  if (iVar13 != -0x80000000) {
    iVar11 = iVar48 + 1;
  }
  iVar50 = param_2[0x20];
  if (iVar49 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  iVar51 = param_2[0x23];
  if (iVar50 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  iVar52 = param_2[0x26];
  if (iVar51 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  iVar14 = param_2[4];
  if (iVar52 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  iVar11 = iVar11 + iVar14;
  cVar1 = (char)param_2[0x5a];
  iVar39 = param_2[0x29];
  if (cVar1 != '\x02') {
    iVar11 = iVar11 + 1;
  }
  uVar15 = (uint)*(ushort *)(param_2 + 0x54);
  if (iVar39 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  uVar53 = (uint)*(ushort *)(param_2 + 0x4d);
  iVar28 = param_2[6];
  uVar40 = (uint)*(ushort *)(param_2 + 0x4e);
  uVar41 = (uint)*(ushort *)(param_2 + 0x4f);
  uVar42 = (uint)*(ushort *)(param_2 + 0x50);
  iVar11 = iVar11 + uVar53 + iVar28 + uVar40 + uVar41 + uVar42;
  iVar43 = param_2[0x2c];
  uVar44 = (uint)*(ushort *)(param_2 + 0x51);
  if (iVar43 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  cVar2 = *(char *)((int)param_2 + 0x179);
  iVar11 = iVar11 + uVar44;
  if (cVar2 != '\x02') {
    iVar11 = iVar11 + 1;
  }
  uVar45 = (uint)*(ushort *)(param_2 + 0x52);
  uVar46 = (uint)*(ushort *)(param_2 + 0x53);
  iVar16 = param_2[8];
  iVar17 = param_2[10];
  iVar11 = iVar11 + uVar45 + uVar46 + uVar15 + iVar16 + iVar17;
  iVar29 = param_2[0x2f];
  iVar30 = param_2[0x32];
  if (iVar29 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  iVar31 = param_2[0x35];
  if (iVar30 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  iVar18 = param_2[0xc];
  if (iVar31 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  iVar11 = iVar11 + iVar18;
  cVar3 = *(char *)((int)param_2 + 0x17a);
  iVar19 = param_2[0xe];
  if (cVar3 != '\x02') {
    iVar11 = iVar11 + 1;
  }
  iVar11 = iVar11 + iVar19;
  iVar32 = param_2[0x38];
  iVar33 = param_2[0x3b];
  if (iVar32 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  iVar34 = param_2[0x3e];
  if (iVar33 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  iVar35 = param_2[0x41];
  if (iVar34 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  iVar36 = param_2[0x44];
  if (iVar35 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  iVar37 = param_2[0x47];
  if (iVar36 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  uVar20 = (uint)*(ushort *)(param_2 + 0x55);
  if (iVar37 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  iVar11 = iVar11 + uVar20;
  cVar4 = (char)param_2[0x14];
  cVar5 = *(char *)((int)param_2 + 0x17b);
  if (cVar4 != '\x06') {
    iVar11 = iVar11 + 1;
  }
  cVar6 = (char)param_2[99];
  if (cVar5 != '\x02') {
    iVar11 = iVar11 + 1;
  }
  iVar21 = param_2[0x10];
  if (cVar6 != '\x02') {
    iVar11 = iVar11 + 1;
  }
  iVar11 = iVar11 + iVar21;
  iVar38 = param_2[0x4a];
  uVar22 = (uint)*(ushort *)(param_2 + 0x56);
  if (iVar38 != -0x80000000) {
    iVar11 = iVar11 + 1;
  }
  uVar23 = (uint)*(ushort *)(param_2 + 0x57);
  uVar24 = (uint)*(ushort *)(param_2 + 0x58);
  uVar25 = (uint)*(ushort *)(param_2 + 0x59);
  iVar26 = param_2[0x12];
  iVar11 = iVar11 + uVar22 + uVar23 + uVar24 + uVar25 + iVar26;
  cVar7 = *(char *)((int)param_2 + 0x19d);
  piVar47 = *ppiVar9;
  cVar8 = *(char *)((int)param_2 + 0x19e);
  if (cVar7 != '\x02') {
    iVar11 = iVar11 + 1;
  }
  iVar27 = piVar47[2];
  if (*piVar47 == iVar27) {
    FUN_00edff4c(piVar47,iVar27,1,1,1);
    iVar27 = piVar47[2];
  }
  *(undefined1 *)(piVar47[1] + iVar27) = 0x7b;
  iVar27 = iVar27 + 1;
  uVar10 = 1;
  piVar47[2] = iVar27;
  if (iVar11 == 0 && cVar8 == '\x02') {
    if (*piVar47 == iVar27) {
      FUN_00edff4c(piVar47,iVar27,1,1,1);
      iVar27 = piVar47[2];
    }
    *(undefined1 *)(piVar47[1] + iVar27) = 0x7d;
    piVar47[2] = iVar27 + 1;
    uVar10 = 0;
  }
  local_38 = (uint)CONCAT21(local_38._2_2_,uVar10) << 8;
  local_34 = ppiVar9;
  if ((iVar48 != 0 || iVar12 != 0) &&
     (iVar11 = FUN_00e64458(&local_38,"session_id",10,param_2[1],*param_2,param_2[1],param_2[2],
                            param_2[3]), iVar11 != 0)) goto LAB_00eec864;
  if (iVar13 == -0x80000000) {
LAB_00eebcbc:
    if (iVar49 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"bosminer_version",0x10,param_2 + 0x1d);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar50 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"devfee_worker_identity",0x16,param_2 + 0x20);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar51 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"platform_name",0xd,param_2 + 0x23);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar52 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"mac",3,param_2 + 0x26);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (cVar1 != '\x02') {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e63bf0(&local_38,&DAT_0056a5f0,8,param_2 + 0x5a);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar14 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e66024(&local_38,"perf_var_ths",0xc,param_2[4],param_2[5]);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar39 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"tuner_mode",10,param_2 + 0x29);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (uVar53 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e64138(&local_38,"power_target",0xc,*(ushort *)(param_2 + 0x4d),
                            *(undefined2 *)((int)param_2 + 0x136));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar28 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e66024(&local_38,"hashrate_target_ghs",0x13,param_2[6],param_2[7]);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (uVar40 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e64138(&local_38,"temperature_target",0x12,*(ushort *)(param_2 + 0x4e),
                            *(undefined2 *)((int)param_2 + 0x13a));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (uVar41 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e64138(&local_38,"temperature_hot",0xf,*(ushort *)(param_2 + 0x4f),
                            *(undefined2 *)((int)param_2 + 0x13e));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (uVar42 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e64138(&local_38,"temperature_dangerous",0x15,*(ushort *)(param_2 + 0x50),
                            *(undefined2 *)((int)param_2 + 0x142));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar43 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,&DAT_00569e28,8,param_2 + 0x2c);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (uVar44 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e64138(&local_38,&DAT_0056a608,8,*(ushort *)(param_2 + 0x51),
                            *(undefined2 *)((int)param_2 + 0x146));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (cVar2 != '\x02') {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61c24(&local_38,"dps_enabled",0xb,*(undefined1 *)((int)param_2 + 0x179));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (uVar45 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e64138(&local_38,&DAT_0056a270,8,*(ushort *)(param_2 + 0x52),
                            *(undefined2 *)((int)param_2 + 0x14a));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (uVar46 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e64138(&local_38,"dps_min_power_target",0x14,*(ushort *)(param_2 + 0x53),
                            *(undefined2 *)((int)param_2 + 0x14e));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (uVar15 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e64138(&local_38,"dps_power_step",0xe,*(ushort *)(param_2 + 0x54),
                            *(undefined2 *)((int)param_2 + 0x152));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar16 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e66024(&local_38,"dps_min_hashrate_target_ghs",0x1b,param_2[8],param_2[9]);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar17 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e66024(&local_38,"dps_hashrate_step_ghs",0x15,param_2[10],param_2[0xb]);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar29 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"first_pool_address",0x12,param_2 + 0x2f);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar30 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"first_pool_user",0xf,param_2 + 0x32);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar31 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"bos_mode",8,param_2 + 0x35);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (cVar3 != '\x02') {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61c24(&local_38,"autoupgrade",0xb,*(undefined1 *)((int)param_2 + 0x17a));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar18 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e66024(&local_38,"quick_ramping_time_up_s",0x17,param_2[0xc],param_2[0xd]);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar19 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e66024(&local_38,"quick_ramping_time_down_s",0x19,param_2[0xe],param_2[0xf]);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar32 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"hw_model_detected",0x11,param_2 + 0x38);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar33 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"psu",3,param_2 + 0x3b);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar34 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"psu_fw_version",0xe,param_2 + 0x3e);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar35 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"psu_calibration_table_raw",0x19,param_2 + 0x41);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar36 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"psu_calibration_curve_raw",0x19,param_2 + 0x44);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar37 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,"pause_mode",10,param_2 + 0x47);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (uVar20 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e64138(&local_38,"pause_cooldown_fan_speed",0x18,uVar20,
                            *(undefined2 *)((int)param_2 + 0x156));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if ((cVar4 != '\x06') && (iVar11 = FUN_00ecff68(&local_38,param_2 + 0x14), iVar11 != 0))
    goto LAB_00eec864;
    if (cVar5 != '\x02') {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e63bf0(&local_38,"original_source",0xf,(char *)((int)param_2 + 0x17b));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (cVar6 != '\x02') {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e63bf0(&local_38,"original_destination",0x14,param_2 + 99);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar38 != -0x80000000) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61384(&local_38,&DAT_0056a6d8,8,param_2 + 0x4a);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar21 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e65e10(param_2[0x11],&local_38,"cold_temp",9,iVar21);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (uVar22 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e64138(&local_38,"fan_speed",9,uVar22,*(undefined2 *)((int)param_2 + 0x15a));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (uVar23 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e64138(&local_38,"min_fan_rpm",0xb,uVar23,*(undefined2 *)((int)param_2 + 0x15e)
                           );
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (uVar24 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e64138(&local_38,"min_fan_speed",0xd,uVar24,
                            *(undefined2 *)((int)param_2 + 0x162));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (uVar25 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e64138(&local_38,"max_fan_speed",0xd,uVar25,
                            *(undefined2 *)((int)param_2 + 0x166));
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (cVar7 != '\x02') {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e61c24(&local_38,"dps_shutdown_enabled",0x14,cVar7);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (iVar26 != 0) {
      if ((char)local_38 != '\0') goto LAB_00eec848;
      iVar11 = FUN_00e65e10(param_2[0x13],&local_38,"dps_shutdown_duration",0x15,iVar26);
      if (iVar11 != 0) goto LAB_00eec864;
    }
    if (cVar8 == '\x02') {
LAB_00eec954:
      if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
        FUN_00f1f6ac(*local_34,"}",1);
      }
      if (((local_40 & 0xff00) != 0) && ((local_40 & 1) == 0)) {
        piVar47 = *local_3c;
        iVar11 = piVar47[2];
        if (*piVar47 == iVar11) {
          FUN_00edff4c(piVar47,iVar11,1,1,1);
          iVar11 = piVar47[2];
        }
        *(undefined1 *)(piVar47[1] + iVar11) = 0x7d;
        piVar47[2] = iVar11 + 1;
      }
      *param_1 = local_50;
      param_1[1] = (int)local_4c;
      param_1[2] = local_48;
      return;
    }
    if ((char)local_38 == '\0') {
      iVar11 = FUN_00e61c24(&local_38,"cb_persistence",0xe,cVar8);
      if (iVar11 == 0) goto LAB_00eec954;
      goto LAB_00eec864;
    }
  }
  else if ((char)local_38 == '\0') {
    iVar11 = FUN_00e61384(&local_38,&DAT_0056a108,8,param_2 + 0x1a);
    if (iVar11 != 0) goto LAB_00eec864;
    goto LAB_00eebcbc;
  }
LAB_00eec848:
  local_30 = 10;
  iVar11 = FUN_0157c50c(&local_30,0,0);
LAB_00eec864:
  *param_1 = -0x80000000;
  param_1[1] = iVar11;
  if (local_50 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_4c);
  return;
}

