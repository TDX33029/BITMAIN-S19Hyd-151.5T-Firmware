// FUN_00912148 @ 00912148 size=4456 calls_out=11 calls_in=1
// strings: min_power_target | SetGloba | SetGloba | lDefaultError | SetGloba | SetGloba

void FUN_00912148(undefined4 *param_1,int param_2,int param_3,double ***param_4,double *param_5)

{
  double *pdVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 ****ppppuVar10;
  uint uVar11;
  char ***pppcVar12;
  int iVar13;
  undefined4 ****ppppuVar14;
  double **ppdVar15;
  undefined8 *puVar16;
  int ****ppppiVar17;
  undefined4 uVar18;
  int ***pppiVar19;
  byte bVar20;
  double ***pppdVar21;
  undefined *puVar22;
  byte bVar23;
  uint in_fpscr;
  uint uVar24;
  float fVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  undefined4 local_198;
  undefined4 local_194;
  double local_170;
  undefined1 auStack_164 [12];
  double local_158;
  undefined1 auStack_14c [12];
  double **local_140;
  double **ppdStack_13c;
  double **ppdStack_138;
  double **ppdStack_134;
  double **ppdStack_130;
  double **ppdStack_12c;
  char ***local_128;
  int ****local_124;
  undefined4 ***local_120;
  undefined4 ***pppuStack_11c;
  undefined4 ***pppuStack_118;
  undefined4 ***pppuStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 *****local_100;
  double **local_fc;
  double **local_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 ***local_e8;
  undefined4 *****local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_cc [12];
  char ***local_c0;
  double **local_bc;
  undefined8 local_b8;
  undefined4 *****local_b0;
  double **local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  int ****local_88;
  undefined4 local_84;
  undefined8 local_80;
  int *local_78;
  undefined8 ****local_70;
  double ***local_6c;
  undefined *local_68;
  double ***local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  double **local_4c;
  undefined8 *local_48;
  undefined4 ****local_44;
  
  uVar11 = *(uint *)(param_2 + 0xf8);
  iVar13 = *(int *)(param_2 + 0xfc);
  uVar6 = uVar11 ^ 2;
  if (uVar6 == 0 && iVar13 == 0) {
    local_170 = *(double *)(param_4 + 0x16);
    if (999 < (uint)(0.0 < local_170) * (int)(longlong)local_170 - 1) goto LAB_00913268;
    local_158 = *(double *)(param_4 + 0x12);
    goto LAB_009126ac;
  }
  bVar3 = *(byte *)(param_2 + 0x138);
  if (*(int *)(param_2 + 0x118) == 0) {
    dVar26 = *(double *)(param_4 + 0x16);
  }
  else {
    dVar26 = (double)VectorUnsignedToFloat
                               (*(undefined4 *)(param_2 + 0x11c),(byte)(in_fpscr >> 0x16) & 3);
  }
  local_170 = dVar26;
  if (999 < (uint)(0.0 < dVar26) * (int)(longlong)dVar26 - 1) {
LAB_00913268:
    local_c0 = (char ***)&local_170;
    local_b8 = 6.85061998012758e-306;
    local_bc = (double **)FUN_00f5c774;
    FUN_00600d2c(auStack_164,&DAT_00574ffb,&local_c0);
    uVar9 = FUN_009337e4(auStack_164);
    *param_1 = 5;
    param_1[1] = 0;
    param_1[2] = uVar9;
    return;
  }
  if (*(int *)(param_2 + 0x120) == 1) {
    local_110 = *(double *)(param_4 + 0x12);
    local_80 = (double)VectorUnsignedToFloat
                                 (*(undefined4 *)(param_2 + 0x124),(byte)(in_fpscr >> 0x16) & 3);
    local_100 = (undefined4 *****)((uint)local_100 & 0xffffff00);
    local_48 = (undefined8 *)&DAT_00000010;
    local_4c = (double **)0x565090;
    in_fpscr = in_fpscr & 0xfffffff;
    local_108 = param_5[3];
    if (NAN(local_110)) {
LAB_0091226c:
      if ((DAT_018d9130 < 4) && (DAT_018d97dc != '\0')) {
        if (DAT_018d97dc == '\x01') {
LAB_009122ec:
          DataMemoryBarrier(0xb);
          puVar22 = &DAT_018ae394;
          pcVar7 = s_SetGloba_00414c05;
          if (DAT_018dd984 == 2) {
            pcVar7 = DAT_018daa74;
            puVar22 = DAT_018daa78;
            if (DAT_018daa70 != 0) {
              pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
          }
          iVar8 = (**(code **)(puVar22 + 0x14))(pcVar7,DAT_018d97d4);
          if (iVar8 == 0) goto LAB_0091265c;
        }
        else if (DAT_018d97dc != '\x02') {
          cVar5 = FUN_0169ac90(&DAT_018d97d4);
          if (cVar5 == '\0') goto LAB_0091265c;
          if (cVar5 != '\x02') goto LAB_009122ec;
        }
        if (*(int *)(DAT_018d97d4 + 0x20) == 0) goto LAB_00913440;
        local_e4 = *(undefined4 ******)(DAT_018d97d4 + 0x20);
        local_e0 = *(undefined8 *)(DAT_018d97d4 + 0x24);
        local_58 = (undefined4 *)(DAT_018d97d4 + 0x1c);
        local_e8 = (undefined4 ***)*local_58;
        local_88 = (int ****)&local_110;
        local_70 = (undefined8 ****)&DAT_00590034;
        iVar8 = DAT_018d97d4;
LAB_00912604:
        ppppiVar17 = local_88;
        local_6c = (double ***)&local_c0;
        local_ac = (double **)FUN_008d6cdc;
        local_b0 = &local_88;
        local_b8 = (double)CONCAT44(FUN_00f5c774,&local_80);
        local_bc = (double **)&DAT_0157d360;
        local_c0 = (char ***)&local_4c;
        local_d8 = 0;
        local_120 = (undefined4 ***)&DAT_018abb78;
        local_5c = 1;
        local_60 = (double ***)&local_128;
        local_124 = (int ****)&local_70;
        local_128 = (char ***)&local_e8;
        FUN_0169bb88(iVar8,&local_60);
      }
      else {
LAB_0091265c:
        ppppiVar17 = (int ****)&local_110;
      }
    }
    else {
      if (NAN(local_110) || NAN(local_80)) {
        uVar24 = in_fpscr | (uint)(local_110 == local_80) << 0x1e;
        in_fpscr = uVar24 | (uint)(local_80 <= local_110) << 0x1d;
        if ((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar24 >> 0x1e,0)) goto LAB_00913334;
      }
      else {
        uVar24 = in_fpscr | (uint)(local_110 == local_80) << 0x1e;
        in_fpscr = uVar24 | (uint)(local_80 <= local_110) << 0x1d;
        if ((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar24 >> 0x1e,0)) goto LAB_0091226c;
      }
      uVar24 = in_fpscr & 0xfffffff;
      ppppiVar17 = (int ****)&local_80;
      in_fpscr = uVar24;
      if ((!NAN(local_108)) &&
         (uVar2 = uVar24 | (uint)(local_108 < local_80) << 0x1f,
         in_fpscr = uVar2 | (uint)(NAN(local_108) || NAN(local_80)) << 0x1c,
         (byte)(uVar2 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1))) {
        uVar24 = uVar24 | (uint)(local_108 == local_80) << 0x1e;
        in_fpscr = uVar24 | (uint)(local_80 <= local_108) << 0x1d;
        if ((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar24 >> 0x1e,0)) goto LAB_00913334;
        ppppiVar17 = (int ****)&local_108;
        if ((DAT_018d9130 < 4) && (DAT_018d97d0 != '\0')) {
          if (DAT_018d97d0 == '\x01') {
LAB_009124d0:
            DataMemoryBarrier(0xb);
            puVar22 = &DAT_018ae394;
            pcVar7 = s_SetGloba_00414c05;
            if (DAT_018dd984 == 2) {
              pcVar7 = DAT_018daa74;
              puVar22 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
            }
            iVar8 = (**(code **)(puVar22 + 0x14))(pcVar7,DAT_018d97c8);
            if (iVar8 == 0) goto LAB_0091266c;
          }
          else if (DAT_018d97d0 != '\x02') {
            cVar5 = FUN_0169ac90(&DAT_018d97c8);
            if (cVar5 == '\0') goto LAB_0091266c;
            if (cVar5 != '\x02') goto LAB_009124d0;
          }
          if (*(int *)(DAT_018d97c8 + 0x20) == 0) goto LAB_00913424;
          local_e4 = *(undefined4 ******)(DAT_018d97c8 + 0x20);
          local_e0 = *(undefined8 *)(DAT_018d97c8 + 0x24);
          local_58 = (undefined4 *)(DAT_018d97c8 + 0x1c);
          local_e8 = (undefined4 ***)*local_58;
          local_70 = (undefined8 ****)&DAT_0059251f;
          iVar8 = DAT_018d97c8;
          local_88 = ppppiVar17;
          goto LAB_00912604;
        }
      }
    }
LAB_0091266c:
    local_158 = *(double *)ppppiVar17;
  }
  else {
    local_158 = *(double *)(param_4 + 0x12);
  }
  if ((uVar11 & 1) == 0) {
LAB_009126ac:
                    /* WARNING: Could not recover jumptable at 0x009126d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_009126dc + *(int *)(&DAT_009126dc + (int)param_4[0xc] * 4)))(param_4[0xe]);
    return;
  }
  pdVar1 = (double *)(param_2 + 0x100);
  uVar9 = *(undefined4 *)pdVar1;
  uVar18 = *(undefined4 *)(param_2 + 0x104);
  local_b8 = *pdVar1;
  dVar29 = *pdVar1;
  ppppuVar10 = (undefined4 ****)&local_c0;
  if ((NAN(dVar29)) ||
     (uVar11 = in_fpscr & 0xfffffff | (uint)(dVar29 == 100.0) << 0x1e,
     uVar24 = uVar11 | (uint)(100.0 <= dVar29) << 0x1d,
     (bool)((byte)(uVar24 >> 0x1d) & 1) && !SUB41(uVar11 >> 0x1e,0))) {
    local_c0 = (char ***)0x4;
    local_bc = (double **)0x0;
    local_108 = 6.848186305594858e-306;
    local_110 = (double)CONCAT44(&LAB_010e14c0,ppppuVar10);
    FUN_00600d2c(auStack_14c,&DAT_0058314d,&local_110);
    uVar9 = FUN_009337e4(auStack_14c);
    *param_1 = 5;
    param_1[1] = 0;
    param_1[2] = uVar9;
    return;
  }
  if (uVar6 == 0 && iVar13 == 0) {
    local_140 = *param_4;
    ppdStack_13c = param_4[1];
    ppdStack_138 = param_4[2];
    ppdStack_134 = param_4[3];
    ppdStack_130 = param_4[4];
    ppdStack_12c = param_4[5];
    bVar20 = 0;
    fVar25 = 10800.0;
    bVar4 = 0;
  }
  else {
    pppdVar21 = param_4;
    if ((*(uint *)(param_2 + 0x108) & 1) != 0) {
      local_e0 = *(undefined8 *)(param_2 + 0x110);
      local_e8 = (undefined4 ***)0x4;
      local_e4 = (undefined4 *****)0x0;
      local_c0 = (char ***)*param_4;
      local_bc = param_4[1];
      local_b8 = *(double *)(param_4 + 2);
      local_b0 = (undefined4 *****)param_4[4];
      local_ac = param_4[5];
      ppppuVar14 = (undefined4 ****)&local_a8;
      local_a8 = *param_5;
      local_a0 = *(uint *)(param_5 + 1);
      uStack_9c = *(undefined4 *)((int)param_5 + 0xc);
      uStack_98 = *(undefined4 *)(param_5 + 2);
      uStack_94 = *(undefined4 *)((int)param_5 + 0x14);
      local_84 = 0x13;
      local_90 = 0;
      local_88 = (int ****)0x35afba;
      cVar5 = FUN_010e1310(&local_e8,ppppuVar10);
      if (cVar5 < '\0') {
        if ((DAT_018d9130 < 4) && (DAT_018d97dc != '\0')) {
          if (DAT_018d97dc == '\x01') {
LAB_00912ad4:
            DataMemoryBarrier(0xb);
            puVar22 = &DAT_018ae394;
            pcVar7 = s_SetGloba_00414c05;
            if (DAT_018dd984 == 2) {
              pcVar7 = DAT_018daa74;
              puVar22 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
            }
            iVar8 = (**(code **)(puVar22 + 0x14))(pcVar7,DAT_018d97d4);
            if (iVar8 == 0) goto LAB_00912c4c;
          }
          else if (DAT_018d97dc != '\x02') {
            cVar5 = FUN_0169ac90(&DAT_018d97d4);
            if (cVar5 == '\0') goto LAB_00912c4c;
            if (cVar5 != '\x02') goto LAB_00912ad4;
          }
          if (*(int *)(DAT_018d97d4 + 0x20) == 0) {
LAB_00913440:
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01867ba0);
          }
          local_54 = *(undefined4 *)(DAT_018d97d4 + 0x28);
          local_50 = 0;
          local_5c = *(undefined4 *)(DAT_018d97d4 + 0x20);
          local_58 = *(undefined4 **)(DAT_018d97d4 + 0x24);
          local_78 = (int *)(DAT_018d97d4 + 0x1c);
          local_60 = (double ***)*local_78;
          ppppuVar14 = (undefined4 ****)&local_c0;
          local_fc = (double **)&DAT_0094abb8;
          local_100 = &local_44;
          local_80 = (double)CONCAT44(1,&local_70);
          local_6c = &local_4c;
          local_48 = &local_110;
          local_70 = &local_60;
          local_4c = (double **)&DAT_00590034;
          local_108 = (double)CONCAT44(&LAB_010e14c0,&local_e8);
          local_110 = (double)CONCAT44(&DAT_0157d360,&local_88);
          local_68 = &DAT_018abb78;
          local_44 = ppppuVar14;
          FUN_0169bb88(DAT_018d97d4,&local_80);
LAB_00912c18:
          ppppuVar10 = ppppuVar14;
        }
LAB_00912c4c:
      }
      else {
        cVar5 = FUN_010e1310(&local_e8,ppppuVar14);
        ppppuVar10 = &local_e8;
        if ('\0' < cVar5) {
          if ((DAT_018d9130 < 4) && (DAT_018d97d0 != '\0')) {
            if (DAT_018d97d0 == '\x01') {
LAB_009128d0:
              DataMemoryBarrier(0xb);
              puVar22 = &DAT_018ae394;
              pcVar7 = s_SetGloba_00414c05;
              if (DAT_018dd984 == 2) {
                pcVar7 = DAT_018daa74;
                puVar22 = DAT_018daa78;
                if (DAT_018daa70 != 0) {
                  pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                }
              }
              iVar8 = (**(code **)(puVar22 + 0x14))(pcVar7,DAT_018d97c8);
              if (iVar8 == 0) goto LAB_00912c24;
            }
            else if (DAT_018d97d0 != '\x02') {
              cVar5 = FUN_0169ac90(&DAT_018d97c8);
              if (cVar5 == '\0') goto LAB_00912c24;
              if (cVar5 != '\x02') goto LAB_009128d0;
            }
            if (*(int *)(DAT_018d97c8 + 0x20) == 0) {
LAB_00913424:
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01867b90);
            }
            local_54 = *(undefined4 *)(DAT_018d97c8 + 0x28);
            local_50 = 0;
            local_5c = *(undefined4 *)(DAT_018d97c8 + 0x20);
            local_58 = *(undefined4 **)(DAT_018d97c8 + 0x24);
            local_78 = (int *)(DAT_018d97c8 + 0x1c);
            local_60 = (double ***)*local_78;
            local_fc = (double **)&DAT_0094abb8;
            local_100 = &local_44;
            local_80 = (double)CONCAT44(1,&local_70);
            local_6c = &local_4c;
            local_48 = &local_110;
            local_70 = &local_60;
            local_4c = (double **)&DAT_0059251f;
            local_108 = (double)CONCAT44(&LAB_010e14c0,&local_e8);
            local_110 = (double)CONCAT44(&DAT_0157d360,&local_88);
            local_68 = &DAT_018abb78;
            local_44 = ppppuVar14;
            FUN_0169bb88(DAT_018d97c8,&local_80);
            goto LAB_00912c18;
          }
LAB_00912c24:
          ppppuVar10 = ppppuVar14;
        }
      }
      pppdVar21 = (double ***)&local_128;
      local_128 = (char ***)*ppppuVar10;
      local_124 = (int ****)ppppuVar10[1];
      local_120 = ppppuVar10[2];
      pppuStack_11c = ppppuVar10[3];
      pppuStack_118 = ppppuVar10[4];
      pppuStack_114 = ppppuVar10[5];
    }
    local_140 = *pppdVar21;
    ppdStack_13c = pppdVar21[1];
    ppdStack_138 = pppdVar21[2];
    ppdStack_134 = pppdVar21[3];
    ppdStack_130 = pppdVar21[4];
    ppdStack_12c = pppdVar21[5];
    bVar4 = *(byte *)(param_2 + 0x13a);
    bVar20 = *(byte *)(param_2 + 0x139);
    fVar25 = 10800.0;
    if (*(int *)(param_2 + 0x128) != 0) {
      fVar25 = *(float *)(param_2 + 300) * 3600.0;
    }
  }
  bVar23 = 1;
  uVar11 = *(uint *)(param_2 + 0xd8) ^ 2;
  if (uVar11 == 0 && *(int *)(param_2 + 0xdc) == 0) {
    cVar5 = *(char *)(param_4 + 0x1c);
  }
  else {
    cVar5 = *(char *)(param_2 + 0xf1);
    if (cVar5 == '\x02') {
      cVar5 = *(char *)(param_4 + 0x1c);
    }
    bVar23 = *(byte *)(param_2 + 0xf0) == 2 | *(byte *)(param_2 + 0xf0);
  }
  dVar28 = (double)VectorUnsignedToFloat(*(undefined4 *)(param_2 + 0xec),(byte)(uVar24 >> 0x16) & 3)
  ;
  pppcVar12 = *(char ****)(param_3 + 0x80);
  ppdVar15 = *(double ***)(param_3 + 0x84);
  puVar16 = (undefined8 *)(param_2 + 0xe0);
  dVar29 = *(double *)(param_3 + 0xb0);
  if ((*(uint *)(param_2 + 0xe8) & 1) != 0) {
    dVar29 = dVar28;
  }
  local_ac = *(double ***)(param_3 + 0x94);
  local_b0 = *(undefined4 ******)(param_3 + 0x90);
  local_a8 = *(double *)(param_3 + 0xb0);
  if (uVar11 != 0 || *(int *)(param_2 + 0xdc) != 0) {
    local_a8 = dVar29;
  }
  if ((*(uint *)(param_2 + 0xd8) & 1) == 0) {
    puVar16 = (undefined8 *)(param_3 + 0x88);
  }
  else {
    ppdVar15 = (double **)0x0;
    pppcVar12 = (char ***)&DAT_00000004;
  }
  uVar27 = *puVar16;
  local_a0 = CONCAT31(CONCAT21(local_a0._2_2_,cVar5),bVar23) & 0xffff0101;
  local_c0 = pppcVar12;
  local_bc = ppdVar15;
  local_b8 = (double)uVar27;
  iVar8 = FUN_00911fb0(&local_c0);
  if (iVar8 != 0) goto LAB_00912da0;
  iVar8 = (int)uVar27;
  local_e8 = (undefined4 ***)local_b8._4_4_;
  local_e4 = local_b0;
  local_e0 = CONCAT44((double **)local_a8,local_ac);
  local_d8 = local_a8._4_4_;
  uStack_d4 = local_a0;
  uStack_d0 = uStack_9c;
  if (pppcVar12 == (char ***)&DAT_00000005 && ppdVar15 == (double **)0x0) goto LAB_00912da0;
  local_100 = local_b0;
  local_fc = local_ac;
  local_f8 = (double **)local_a8;
  uStack_f4 = local_a8._4_4_;
  uStack_f0 = local_a0;
  uStack_ec = uStack_9c;
  local_108 = (double)CONCAT44(local_b8._4_4_,iVar8);
  local_110 = (double)CONCAT44(ppdVar15,pppcVar12);
  if (bVar3 == 2 || (bVar3 & 1) != 0) {
    if (NAN(local_158)) {
      if (!NAN(local_a8)) goto LAB_0091321c;
    }
    else if (local_a8 < local_158) {
      if (local_158 < local_a8) {
LAB_00913334:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
      }
LAB_0091321c:
      local_c0 = (char ***)&local_158;
      local_b8 = (double)CONCAT44(FUN_00f5c774,&local_f8);
      local_bc = (double **)FUN_00f5c774;
      FUN_00600d2c(auStack_cc,&DAT_0056d31d,&local_c0);
      iVar8 = FUN_009337e4(auStack_cc);
LAB_00912da0:
      *param_1 = 5;
      param_1[1] = 0;
      param_1[2] = iVar8;
      return;
    }
  }
  ppppuVar10 = *(undefined4 *****)(param_2 + 0x134);
  local_68 = (undefined *)0x0;
  if ((*(uint *)(param_2 + 0x130) & 1) == 0) {
    ppppuVar10 = (undefined4 ****)0x64;
  }
  if (uVar6 == 0 && iVar13 == 0) {
    ppppuVar10 = (undefined4 ****)0x64;
  }
  local_6c = (double ***)0x64;
  local_70 = (undefined8 ****)0x32;
  local_44 = ppppuVar10;
  local_48 = (undefined8 *)0x17;
  local_4c = (double **)0x35afe1;
  if (ppppuVar10 < (undefined4 ****)0x32) {
    if ((DAT_018d9130 < 4) && (DAT_018d97c4 != '\0')) {
      if (DAT_018d97c4 == '\x01') {
LAB_00912ed0:
        DataMemoryBarrier(0xb);
        puVar22 = &DAT_018ae394;
        pcVar7 = s_SetGloba_00414c05;
        if (DAT_018dd984 == 2) {
          pcVar7 = DAT_018daa74;
          puVar22 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar13 = (**(code **)(puVar22 + 0x14))(pcVar7,DAT_018d97bc);
        if (iVar13 == 0) goto LAB_00913100;
      }
      else if (DAT_018d97c4 != '\x02') {
        cVar5 = FUN_0169ac90(&DAT_018d97bc);
        if (cVar5 == '\0') goto LAB_00913100;
        if (cVar5 != '\x02') goto LAB_00912ed0;
      }
      if (*(int *)(DAT_018d97bc + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01867b00);
      }
      local_e4 = *(undefined4 ******)(DAT_018d97bc + 0x20);
      local_e0 = *(undefined8 *)(DAT_018d97bc + 0x24);
      local_58 = (undefined4 *)(DAT_018d97bc + 0x1c);
      local_e8 = (undefined4 ***)*local_58;
      puVar22 = &DAT_0059996e;
      iVar13 = DAT_018d97bc;
      local_88 = (int ****)&local_70;
LAB_009130e4:
      ppppiVar17 = local_88;
      local_80 = (double)CONCAT44(&local_c0,puVar22);
      local_ac = (double **)FUN_00933120;
      local_b0 = &local_88;
      local_b8 = (double)CONCAT44(&LAB_00fac484,&local_44);
      local_bc = (double **)&DAT_0157d360;
      local_c0 = (char ***)&local_4c;
      local_d8 = 0;
      local_120 = (undefined4 ***)&DAT_018abb78;
      local_124 = (int ****)&local_80;
      local_5c = 1;
      local_60 = (double ***)&local_128;
      local_128 = (char ***)&local_e8;
      FUN_0169bb88(iVar13,&local_60);
    }
    else {
LAB_00913100:
      ppppiVar17 = (int ****)&local_70;
    }
  }
  else {
    if (ppppuVar10 < (undefined4 ****)0x65) {
      ppppiVar17 = (int ****)&local_44;
      goto LAB_00913130;
    }
    ppppiVar17 = (int ****)((uint)&local_70 | 4);
    if ((DAT_018d9130 < 4) &&
       (((DAT_018d97b8 - 1 < 2 ||
         ((DAT_018d97b8 != 0 && (cVar5 = FUN_0169ac90(&DAT_018d97b0), cVar5 != '\0')))) &&
        (iVar13 = FUN_016949d8(DAT_018d97b0), iVar13 != 0)))) {
      if (*(int *)(DAT_018d97b0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01867af0);
      }
      local_e4 = *(undefined4 ******)(DAT_018d97b0 + 0x20);
      local_e0 = *(undefined8 *)(DAT_018d97b0 + 0x24);
      local_58 = (undefined4 *)(DAT_018d97b0 + 0x1c);
      local_e8 = (undefined4 ***)*local_58;
      puVar22 = &DAT_00588e65;
      iVar13 = DAT_018d97b0;
      local_88 = ppppiVar17;
      goto LAB_009130e4;
    }
  }
  ppppuVar10 = (undefined4 ****)(uint)DAT_018dd947;
LAB_00913130:
  pppiVar19 = *ppppiVar17;
  fVar25 = (float)FUN_016d6208(fVar25,ppppuVar10);
  dVar29 = *(double *)(param_3 + 0x18);
  param_1[6] = local_140;
  param_1[7] = ppdStack_13c;
  param_1[8] = ppdStack_138;
  param_1[9] = ppdStack_134;
  param_1[10] = ppdStack_130;
  param_1[0xb] = ppdStack_12c;
  param_1[2] = uVar9;
  param_1[3] = uVar18;
  param_1[4] = local_198;
  param_1[5] = local_194;
  *param_1 = 4;
  param_1[1] = 0;
  param_1[0x15] = pppiVar19;
  *(byte *)((int)param_1 + 0x5a) = bVar4 & 1;
  *(double *)(param_1 + 0x10) = dVar26;
  *(byte *)((int)param_1 + 0x59) = bVar20 & 1;
  *(double *)(param_1 + 0x12) = local_158;
  *(byte *)(param_1 + 0x16) = bVar3 == 2 | bVar3 & 1;
  param_1[0x14] = (float)dVar29;
  param_1[0xe] = 0;
  uVar27 = FUN_01845a24(fVar25);
  if (fVar25 < 0.0) {
    uVar27 = 0;
  }
  if (1.8446743e+19 < fVar25) {
    uVar27 = 0xffffffffffffffff;
  }
  *(undefined8 *)(param_1 + 0xc) = uVar27;
  return;
}

