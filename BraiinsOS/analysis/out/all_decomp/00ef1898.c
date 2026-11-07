// FUN_00ef1898 @ 00ef1898 size=2224 calls_out=19 calls_in=1
// strings: session_id | platform_name | devfee_worker_identity | bosminer_version | tuner_mode | event_created_at

void FUN_00ef1898(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int **ppiVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  undefined1 *puVar24;
  int local_58;
  undefined1 *local_54;
  int local_50;
  int *local_4c;
  undefined4 local_48;
  int **local_44;
  undefined4 local_40;
  int **local_3c;
  undefined4 local_30;
  int **local_2c;
  
  local_54 = (undefined1 *)thunk_FUN_016d4a50(0x80);
  if (local_54 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  local_4c = &local_58;
  *local_54 = 0x7b;
  local_50 = 1;
  local_44 = &local_4c;
  local_58 = 0x80;
  local_48 = CONCAT22(local_48._2_2_,0x100);
  iVar7 = FUN_00e63424(&local_48,param_2 + 0x3e);
  ppiVar6 = local_44;
  if (iVar7 != 0) goto LAB_00ef1bf8;
  if ((char)local_48 == '\x01') {
    local_40 = 10;
    iVar7 = FUN_0157c50c(&local_40,0,0);
    goto LAB_00ef1bf8;
  }
  if (local_48._1_1_ != '\x01') {
    piVar21 = *local_44;
    iVar7 = piVar21[2];
    if (*piVar21 == iVar7) {
      FUN_00edff4c(piVar21,iVar7,1,1,1);
      iVar7 = piVar21[2];
    }
    *(undefined1 *)(piVar21[1] + iVar7) = 0x2c;
    piVar21[2] = iVar7 + 1;
  }
  local_48._0_2_ = CONCAT11(2,(char)local_48);
  FUN_00e5d350(&local_40,*ppiVar6,&DAT_00569478,4);
  if ((char)local_40 != '\x04') {
    iVar7 = FUN_0157c4a0(local_40,local_3c);
    goto LAB_00ef1bf8;
  }
  piVar21 = *ppiVar6;
  iVar7 = piVar21[2];
  if (*piVar21 == iVar7) {
    FUN_00edff4c(piVar21,iVar7,1,1,1);
    iVar7 = piVar21[2];
  }
  *(undefined1 *)(piVar21[1] + iVar7) = 0x3a;
  piVar21[2] = iVar7 + 1;
  piVar21 = *ppiVar6;
  iVar7 = piVar21[2];
  if (*piVar21 == iVar7) {
    FUN_00edff4c(piVar21,iVar7,1,1,1);
    iVar7 = piVar21[2];
  }
  iVar19 = *param_2;
  iVar20 = param_2[1];
  local_2c = ppiVar6;
  *(undefined1 *)(piVar21[1] + iVar7) = 0x7b;
  piVar21[2] = iVar7 + 1;
  local_30 = CONCAT22(local_30._2_2_,0x100);
  if (((((iVar19 != 0 || iVar20 != 0) &&
        (iVar7 = FUN_00e64458(&local_30,"session_id",10,iVar20,iVar19,iVar20,param_2[2],param_2[3]),
        iVar7 != 0)) ||
       ((param_2[0x2e] != -0x80000000 &&
        (iVar7 = FUN_00e61384(&local_30,&DAT_0056a108,8), iVar7 != 0)))) ||
      (((param_2[0x31] != -0x80000000 &&
        (iVar7 = FUN_00e61384(&local_30,"platform_name",0xd), iVar7 != 0)) ||
       ((param_2[0x34] != -0x80000000 &&
        (iVar7 = FUN_00e61384(&local_30,"devfee_worker_identity",0x16), iVar7 != 0)))))) ||
     (((param_2[0x37] != -0x80000000 &&
       (iVar7 = FUN_00e61384(&local_30,"bosminer_version",0x10), iVar7 != 0)) ||
      ((param_2[0x3a] != -0x80000000 &&
       (iVar7 = FUN_00e61384(&local_30,"tuner_mode",10), iVar7 != 0)))))) goto LAB_00ef1bf8;
  iVar22 = param_2[4];
  iVar23 = param_2[5];
  iVar8 = param_2[0x25];
  iVar9 = param_2[8];
  iVar10 = param_2[10];
  iVar11 = param_2[0xc];
  iVar12 = param_2[0xe];
  iVar13 = param_2[0x18];
  iVar14 = param_2[0x16];
  iVar15 = param_2[0x14];
  cVar1 = *(char *)((int)param_2 + 0xb5);
  iVar16 = param_2[0x12];
  iVar17 = param_2[0x24];
  iVar19 = param_2[0x2c];
  iVar18 = param_2[0x10];
  iVar20 = param_2[0x2b];
  iVar2 = param_2[0x2a];
  iVar3 = param_2[0x2d];
  iVar4 = param_2[0x29];
  iVar5 = param_2[0x28];
  puVar24 = (undefined1 *)param_2[0x20];
  iVar7 = FUN_00e65a20(&local_30,"event_created_at",0x10,param_2[0x1b],param_2[0x1a],param_2[0x1b],
                       param_2[0x1c]);
  if (((((iVar7 != 0) ||
        ((puVar24 != &DAT_3b9aca00 &&
         (iVar7 = FUN_00e611cc(&local_30,0,param_2[0x1e],param_2[0x1f],puVar24), iVar7 != 0)))) ||
       ((((iVar22 != 0 || iVar23 != 0 &&
          (iVar7 = FUN_00e60924(&local_30,param_2[7],iVar22,iVar23,param_2[6],param_2[7]),
          iVar7 != 0)) ||
         ((iVar9 != 0 &&
          (iVar7 = FUN_00e66024(&local_30,"tuning_duration",0xf,iVar9,param_2[9]), iVar7 != 0)))) ||
        ((iVar8 != -0x80000000 &&
         (iVar7 = FUN_00e61384(&local_30,"tuner_algo",10,param_2 + 0x25), iVar7 != 0)))))) ||
      ((((((short)iVar5 != 0 &&
          (iVar7 = FUN_00e64138(&local_30,"current_power_target",0x14,(short)iVar5,
                                *(undefined2 *)((int)param_2 + 0xa2)), iVar7 != 0)) ||
         ((iVar10 != 0 &&
          (iVar7 = FUN_00e66024(&local_30,"current_hashrate_target_ghs",0x1b,iVar10,param_2[0xb]),
          iVar7 != 0)))) ||
        (((short)iVar4 != 0 &&
         (iVar7 = FUN_00e64138(&local_30,"stage",5,(short)iVar4,*(undefined2 *)((int)param_2 + 0xa6)
                              ), iVar7 != 0)))) ||
       ((iVar11 != 0 &&
        (iVar7 = FUN_00e66024(&local_30,&DAT_00567b50,4,iVar11,param_2[0xd]), iVar7 != 0)))))) ||
     (((((((char)iVar3 != '\x02' && (iVar7 = FUN_00e61c24(&local_30,"bootstrap",9), iVar7 != 0)) ||
         (((short)iVar2 != 0 &&
          (iVar7 = FUN_00e64138(&local_30,"measured_power",0xe,(short)iVar2,
                                *(undefined2 *)((int)param_2 + 0xaa)), iVar7 != 0)))) ||
        ((((short)iVar20 != 0 &&
          (iVar7 = FUN_00e64138(&local_30,"est_power",9,(short)iVar20,
                                *(undefined2 *)((int)param_2 + 0xae)), iVar7 != 0)) ||
         ((iVar12 != 0 &&
          (iVar7 = FUN_00e65e10(param_2[0xf],&local_30,"control_board_temp",0x12,iVar12), iVar7 != 0
          )))))) ||
       ((((iVar18 != 0 &&
          (iVar7 = FUN_00e65e10(param_2[0x11],&local_30,&DAT_00569f20,8,iVar18), iVar7 != 0)) ||
         (((short)iVar19 != 0 &&
          (iVar7 = FUN_00e64138(&local_30,"fan_pwm",7,(short)iVar19,
                                *(undefined2 *)((int)param_2 + 0xb2)), iVar7 != 0)))) ||
        (((iVar17 != 0 && (iVar7 = FUN_00e60c64(&local_30,"rpm",3,param_2[0x23],iVar17), iVar7 != 0)
          ) || ((iVar16 != 0 &&
                (iVar7 = FUN_00e66024(&local_30,"config_from_iter",0x10,iVar16,param_2[0x13]),
                iVar7 != 0)))))))) ||
      (((cVar1 != '\x02' && (iVar7 = FUN_00e61c24(&local_30,"incomplete",10,cVar1), iVar7 != 0)) ||
       ((iVar15 != 0 &&
        (iVar7 = FUN_00e66024(&local_30,"profile_grid_loaded_count",0x19,iVar15,param_2[0x15]),
        iVar7 != 0)))))))) goto LAB_00ef1bf8;
  if (iVar14 == 0) {
    if (iVar13 == 0) goto LAB_00ef20c0;
LAB_00ef2094:
    iVar7 = FUN_00e66024(&local_30,"profile_grid_cell_count",0x17,iVar13,param_2[0x19]);
  }
  else {
    iVar7 = FUN_00e66024(&local_30,"profile_grid_saved_count",0x18,iVar14,param_2[0x17]);
    if ((iVar13 != 0) && (iVar7 == 0)) goto LAB_00ef2094;
  }
  if (iVar7 == 0) {
LAB_00ef20c0:
    local_3c = local_2c;
    local_40 = local_30;
    FUN_00ecfa80(&local_40);
    if (((local_48 & 0xff00) != 0) && ((local_48 & 1) == 0)) {
      piVar21 = *ppiVar6;
      iVar7 = piVar21[2];
      if (*piVar21 == iVar7) {
        FUN_00edff4c(piVar21,iVar7,1,1,1);
        iVar7 = piVar21[2];
      }
      *(undefined1 *)(piVar21[1] + iVar7) = 0x7d;
      piVar21[2] = iVar7 + 1;
    }
    *param_1 = local_58;
    param_1[1] = (int)local_54;
    param_1[2] = local_50;
    return;
  }
LAB_00ef1bf8:
  *param_1 = -0x80000000;
  param_1[1] = iVar7;
  if (local_58 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_54);
  return;
}

