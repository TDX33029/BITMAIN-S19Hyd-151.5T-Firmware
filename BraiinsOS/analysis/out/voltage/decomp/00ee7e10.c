// function @ 00ee7e10  size=2336  volt_strings=1
// strings: session_id | hashboard_idx | round_duration | voltage | avg_frequency_mhz | measured_hr | calculated_hr | total_ghs | temperature_local | outlet_max_temp | outlet_avg_temp | inlet_max_temp | inlet_avg_temp | chip_min_temp | chip_max_temp | chip_avg_temp | chip_percentile_90_temp | power_limit | interim_hr | interim_duration | chip_count | chip_count_below_threshold | hashboard_fingerprint

void FUN_00ee7e10(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int **ppiVar10;
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
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  undefined1 *puVar29;
  int iVar30;
  int local_48;
  undefined1 *local_44;
  int local_40;
  int *local_3c;
  undefined4 local_38;
  int **local_34;
  uint local_30;
  int **local_2c;
  
  local_44 = (undefined1 *)thunk_FUN_016d4a50(0x80);
  if (local_44 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  local_3c = &local_48;
  *local_44 = 0x7b;
  local_40 = 1;
  local_34 = &local_3c;
  local_48 = 0x80;
  local_38 = CONCAT22(local_38._2_2_,0x100);
  iVar11 = FUN_00e63424(&local_38,param_2 + 0x34);
  ppiVar10 = local_34;
  if (iVar11 != 0) goto LAB_00ee85c0;
  if ((char)local_38 == '\x01') {
    local_30 = 10;
    iVar11 = FUN_0157c50c(&local_30,0,0);
    goto LAB_00ee85c0;
  }
  if (local_38._1_1_ != '\x01') {
    piVar26 = *local_34;
    iVar11 = piVar26[2];
    if (*piVar26 == iVar11) {
      FUN_00edff4c(piVar26,iVar11,1,1,1);
      iVar11 = piVar26[2];
    }
    *(undefined1 *)(piVar26[1] + iVar11) = 0x2c;
    piVar26[2] = iVar11 + 1;
  }
  local_38._0_2_ = CONCAT11(2,(char)local_38);
  FUN_00e5d350(&local_30,*ppiVar10,&DAT_00569478,4);
  if ((char)local_30 != '\x04') {
    iVar11 = FUN_0157c4a0(local_30,local_2c);
    goto LAB_00ee85c0;
  }
  piVar26 = *ppiVar10;
  iVar11 = piVar26[2];
  if (*piVar26 == iVar11) {
    FUN_00edff4c(piVar26,iVar11,1,1,1);
    iVar11 = piVar26[2];
  }
  *(undefined1 *)(piVar26[1] + iVar11) = 0x3a;
  piVar26[2] = iVar11 + 1;
  piVar26 = *ppiVar10;
  iVar11 = piVar26[2];
  if (*piVar26 == iVar11) {
    FUN_00edff4c(piVar26,iVar11,1,1,1);
    iVar11 = piVar26[2];
  }
  local_2c = ppiVar10;
  *(undefined1 *)(piVar26[1] + iVar11) = 0x7b;
  piVar26[2] = iVar11 + 1;
  iVar11 = param_2[1];
  local_30 = CONCAT22(local_30._2_2_,0x100);
  if ((*param_2 != 0 || iVar11 != 0) &&
     (iVar11 = FUN_00e64458(&local_30,"session_id",10,iVar11,*param_2,iVar11,param_2[2],param_2[3]),
     iVar11 != 0)) goto LAB_00ee85c0;
  iVar12 = param_2[5];
  iVar13 = param_2[0xe];
  iVar14 = param_2[0x28];
  iVar1 = param_2[0x32];
  iVar2 = param_2[0x31];
  iVar15 = param_2[0x20];
  iVar16 = param_2[0x1e];
  iVar3 = param_2[0x30];
  iVar4 = param_2[0x2f];
  iVar5 = param_2[0x2e];
  iVar6 = param_2[0x2d];
  iVar7 = param_2[0x2c];
  iVar8 = param_2[0x2b];
  iVar17 = param_2[0x1c];
  iVar18 = param_2[0x1a];
  iVar19 = param_2[0x18];
  iVar20 = param_2[0x16];
  iVar24 = param_2[4];
  iVar21 = param_2[0x14];
  iVar27 = param_2[8];
  iVar30 = param_2[10];
  iVar28 = param_2[0xc];
  iVar9 = param_2[0x2a];
  puVar29 = (undefined1 *)param_2[0x24];
  iVar22 = param_2[0x12];
  iVar23 = param_2[0x10];
  iVar25 = iVar24;
  if ((short)param_2[0x29] != 0) {
    iVar11 = FUN_00e64138(&local_30,"hashboard_idx",0xd,(short)param_2[0x29],
                          *(undefined2 *)((int)param_2 + 0xa6));
    iVar25 = 0;
    if (iVar11 != 0) goto LAB_00ee85c0;
  }
  if (((((((((puVar29 != &DAT_3b9aca00) &&
            (iVar11 = FUN_00e611cc(&local_30,iVar25,param_2[0x22],param_2[0x23],puVar29),
            iVar11 != 0)) ||
           ((iVar27 != 0 &&
            (iVar11 = FUN_00e66024(&local_30,&DAT_00567b50,4,iVar27,param_2[9]), iVar11 != 0)))) ||
          ((iVar30 != 0 &&
           (iVar11 = FUN_00e65e10(param_2[0xb],&local_30,"round_duration",0xe,iVar30), iVar11 != 0))
          )) || (((iVar28 != 0 &&
                  (iVar11 = FUN_00e65e10(param_2[0xd],&local_30,"voltage",7,iVar28), iVar11 != 0))
                 || (((((short)iVar9 != 0 &&
                       (iVar11 = FUN_00e64138(&local_30,"avg_frequency_mhz",0x11,(short)iVar9,
                                              *(undefined2 *)((int)param_2 + 0xaa)), iVar11 != 0))
                      || ((iVar13 != 0 &&
                          (iVar11 = FUN_00e65e10(param_2[0xf],&local_30,"measured_hr",0xb),
                          iVar11 != 0)))) ||
                     ((iVar23 != 0 &&
                      (iVar11 = FUN_00e65e10(param_2[0x11],&local_30,"calculated_hr",0xd),
                      iVar11 != 0)))))))) ||
        (((iVar22 != 0 &&
          (iVar11 = FUN_00e66024(&local_30,"total_ghs",9,iVar22,param_2[0x13]), iVar11 != 0)) ||
         ((((iVar21 != 0 &&
            (iVar11 = FUN_00e65e10(param_2[0x15],&local_30,"temperature_local",0x11), iVar11 != 0))
           || ((iVar20 != 0 &&
               (iVar11 = FUN_00e65e10(param_2[0x17],&local_30,"outlet_max_temp",0xf), iVar11 != 0)))
           ) || ((((iVar19 != 0 &&
                   (iVar11 = FUN_00e65e10(param_2[0x19],&local_30,"outlet_avg_temp",0xf),
                   iVar11 != 0)) ||
                  ((iVar18 != 0 &&
                   (iVar11 = FUN_00e65e10(param_2[0x1b],&local_30,"inlet_max_temp",0xe), iVar11 != 0
                   )))) || ((((iVar17 != 0 &&
                              (iVar11 = FUN_00e65e10(param_2[0x1d],&local_30,"inlet_avg_temp",0xe),
                              iVar11 != 0)) ||
                             (((short)iVar8 != 0 &&
                              (iVar11 = FUN_00e64138(&local_30,"chip_min_temp",0xd,(short)iVar8,
                                                     *(undefined2 *)((int)param_2 + 0xae)),
                              iVar11 != 0)))) ||
                            (((short)iVar7 != 0 &&
                             (iVar11 = FUN_00e64138(&local_30,"chip_max_temp",0xd,(short)iVar7,
                                                    *(undefined2 *)((int)param_2 + 0xb2)),
                             iVar11 != 0)))))))))))) ||
       (((short)iVar6 != 0 &&
        (iVar11 = FUN_00e64138(&local_30,"chip_avg_temp",0xd,(short)iVar6,
                               *(undefined2 *)((int)param_2 + 0xb6)), iVar11 != 0)))) ||
      (((((short)iVar5 != 0 &&
         (iVar11 = FUN_00e64138(&local_30,"chip_percentile_90_temp",0x17,(short)iVar5,
                                *(undefined2 *)((int)param_2 + 0xba)), iVar11 != 0)) ||
        (((short)iVar4 != 0 &&
         (iVar11 = FUN_00e64138(&local_30,"power_limit",0xb,(short)iVar4,
                                *(undefined2 *)((int)param_2 + 0xbe)), iVar11 != 0)))) ||
       ((((short)iVar3 != 0 &&
         (iVar11 = FUN_00e64138(&local_30,&DAT_005648c0,0x10,(short)iVar3,
                                *(undefined2 *)((int)param_2 + 0xc2)), iVar11 != 0)) ||
        ((iVar16 != 0 &&
         (iVar11 = FUN_00e65e10(param_2[0x1f],&local_30,"interim_hr",10,iVar16), iVar11 != 0))))))))
     || ((((iVar15 != 0 &&
           (iVar11 = FUN_00e65e10(param_2[0x21],&local_30,"interim_duration",0x10,iVar15),
           iVar11 != 0)) ||
          (((short)iVar2 != 0 &&
           (iVar11 = FUN_00e64138(&local_30,"chip_count",10,(short)iVar2,
                                  *(undefined2 *)((int)param_2 + 0xc6)), iVar11 != 0)))) ||
         (((short)iVar1 != 0 &&
          (iVar11 = FUN_00e64138(&local_30,"chip_count_below_threshold",0x1a,(short)iVar1,
                                 *(undefined2 *)((int)param_2 + 0xca)), iVar11 != 0))))))
  goto LAB_00ee85c0;
  if (iVar24 == 0 && iVar12 == 0) {
    if (iVar14 == 0) goto LAB_00ee867c;
LAB_00ee8660:
    iVar11 = FUN_00e61810(&local_30,param_2[0x27],iVar14);
  }
  else {
    iVar11 = FUN_00e64458(&local_30,"hashboard_fingerprint",0x15,param_2[7],iVar24,iVar12,param_2[6]
                          ,param_2[7]);
    if ((iVar14 != 0) && (iVar11 == 0)) goto LAB_00ee8660;
  }
  if (iVar11 == 0) {
LAB_00ee867c:
    if ((local_30 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9514);
    }
    if ((local_30 & 0xff00) != 0) {
      FUN_00f1f6ac(*local_2c,"}",1);
    }
    if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
      piVar26 = *ppiVar10;
      iVar11 = piVar26[2];
      if (*piVar26 == iVar11) {
        FUN_00edff4c(piVar26,iVar11,1,1,1);
        iVar11 = piVar26[2];
      }
      *(undefined1 *)(piVar26[1] + iVar11) = 0x7d;
      piVar26[2] = iVar11 + 1;
    }
    *param_1 = local_48;
    param_1[1] = (int)local_44;
    param_1[2] = local_40;
    return;
  }
LAB_00ee85c0:
  *param_1 = -0x80000000;
  param_1[1] = iVar11;
  if (local_48 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_44);
  return;
}

