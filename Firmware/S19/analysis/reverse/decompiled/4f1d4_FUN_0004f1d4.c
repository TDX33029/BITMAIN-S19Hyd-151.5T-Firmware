// FUN_0004f1d4 @ 0004f1d4  size=1668
// callers: [FUN_0004f1d4, FUN_0004fe60, FUN_0004f890, FUN_0004fd58, FUN_00050390, FUN_000506f8, FUN_0004f8b4]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004f1d4(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar5;
  uint *puVar4;
  uint uVar6;
  double *pdVar7;
  double *extraout_r1;
  undefined1 *puVar8;
  uint uVar9;
  double *pdVar10;
  double *extraout_r2;
  undefined1 *puVar11;
  uint uVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char *pcVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uint in_fpscr;
  undefined4 uVar19;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double extraout_d4;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 local_898;
  undefined4 local_894;
  undefined4 local_890;
  undefined4 local_88c;
  uint local_888;
  uint uStack_884;
  uint local_880;
  undefined1 local_87c;
  char local_87b [15];
  undefined1 local_86c;
  undefined1 local_86b;
  undefined1 local_86a;
  undefined1 local_869;
  uint local_868;
  undefined4 local_864;
  short local_860;
  undefined4 auStack_844 [5];
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  char local_81c [4];
  char local_818 [4];
  char acStack_814 [4];
  char local_810 [4];
  char cStack_80c;
  undefined1 auStack_80b [3];
  char acStack_808 [4];
  undefined2 uStack_804;
  undefined1 local_802;
  
  local_894 = 0x20001;
  local_898 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc28);
  uVar2 = FUN_00050a64(&local_898);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc28);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  DAT_0050fabc = 1;
  DAT_0050fab8 = uVar2;
  uVar2 = FUN_0004f034();
  if ((int)uVar2 < 0) {
    local_830._0_1_ = s_power_open_power_version_<_0_wil_00072db0[0];
    local_830._1_1_ = s_power_open_power_version_<_0_wil_00072db0[1];
    local_830._2_1_ = s_power_open_power_version_<_0_wil_00072db0[2];
    local_830._3_1_ = s_power_open_power_version_<_0_wil_00072db0[3];
    local_82c._0_1_ = s_power_open_power_version_<_0_wil_00072db0[4];
    local_82c._1_1_ = s_power_open_power_version_<_0_wil_00072db0[5];
    local_82c._2_1_ = s_power_open_power_version_<_0_wil_00072db0[6];
    local_82c._3_1_ = s_power_open_power_version_<_0_wil_00072db0[7];
    local_828._0_1_ = s_power_open_power_version_<_0_wil_00072db0[8];
    local_828._1_1_ = s_power_open_power_version_<_0_wil_00072db0[9];
    local_828._2_1_ = s_power_open_power_version_<_0_wil_00072db0[10];
    local_828._3_1_ = s_power_open_power_version_<_0_wil_00072db0[0xb];
    local_824._0_1_ = s_power_open_power_version_<_0_wil_00072db0[0xc];
    local_824._1_1_ = s_power_open_power_version_<_0_wil_00072db0[0xd];
    local_824._2_1_ = s_power_open_power_version_<_0_wil_00072db0[0xe];
    local_824._3_1_ = s_power_open_power_version_<_0_wil_00072db0[0xf];
    local_820._0_1_ = s_power_open_power_version_<_0_wil_00072db0[0x10];
    local_820._1_1_ = s_power_open_power_version_<_0_wil_00072db0[0x11];
    local_820._2_1_ = s_power_open_power_version_<_0_wil_00072db0[0x12];
    local_820._3_1_ = s_power_open_power_version_<_0_wil_00072db0[0x13];
    local_81c[0] = s_power_open_power_version_<_0_wil_00072db0[0x14];
    local_81c[1] = s_power_open_power_version_<_0_wil_00072db0[0x15];
    local_81c[2] = s_power_open_power_version_<_0_wil_00072db0[0x16];
    local_81c[3] = s_power_open_power_version_<_0_wil_00072db0[0x17];
    local_818[0] = s_power_open_power_version_<_0_wil_00072db0[0x18];
    local_818[1] = s_power_open_power_version_<_0_wil_00072db0[0x19];
    local_818[2] = s_power_open_power_version_<_0_wil_00072db0[0x1a];
    local_818[3] = s_power_open_power_version_<_0_wil_00072db0[0x1b];
    acStack_814[0] = s_power_open_power_version_<_0_wil_00072db0[0x1c];
    acStack_814[1] = s_power_open_power_version_<_0_wil_00072db0[0x1d];
    acStack_814[2] = s_power_open_power_version_<_0_wil_00072db0[0x1e];
    acStack_814[3] = s_power_open_power_version_<_0_wil_00072db0[0x1f];
    local_810[0] = s_power_open_power_version_<_0_wil_00072db0[0x20];
    local_810[1] = s_power_open_power_version_<_0_wil_00072db0[0x21];
    local_810[2] = s_power_open_power_version_<_0_wil_00072db0[0x22];
    local_810[3] = s_power_open_power_version_<_0_wil_00072db0[0x23];
    cStack_80c = s_power_open_power_version_<_0_wil_00072db0[0x24];
    auStack_80b[0] = s_power_open_power_version_<_0_wil_00072db0[0x25];
    auStack_80b[1] = s_power_open_power_version_<_0_wil_00072db0[0x26];
    auStack_80b[2] = s_power_open_power_version_<_0_wil_00072db0[0x27];
    acStack_808[0] = s_power_open_power_version_<_0_wil_00072db0[0x28];
    acStack_808[1] = s_power_open_power_version_<_0_wil_00072db0[0x29];
    acStack_808[2] = s_power_open_power_version_<_0_wil_00072db0[0x2a];
    acStack_808[3] = s_power_open_power_version_<_0_wil_00072db0[0x2b];
    uStack_804 = (undefined2)ram0x00072ddc;
    local_802 = (undefined1)((uint)ram0x00072ddc >> 0x10);
    FUN_00032218(3,&local_830,0);
    if (DAT_0050fabc == 0) {
      return uVar2;
    }
    FUN_0004ee90();
    return uVar2;
  }
  DAT_0050fac0 = uVar2;
  snprintf((char *)&local_830,0x800,"power open power_version = 0x%x\n",uVar2);
  FUN_00032218(3,&local_830,0);
  memset(&DAT_0050fac8,0,0x160);
  bVar18 = 0x61 < DAT_0050fac0;
  bVar16 = DAT_0050fac0 == 0x62;
  if (!bVar16) {
    bVar18 = 1 < DAT_0050fac0 - 100;
  }
  bVar17 = DAT_0050fac0 - 100 != 2;
  uVar2 = DAT_0050fac0;
  if (!bVar18 || (bVar16 || !bVar17)) {
    uVar2 = 1;
  }
  if (bVar18 && (!bVar16 && bVar17)) {
    uVar2 = 0;
  }
  if (bVar18 && (!bVar16 && bVar17)) {
    memset(&local_868,uVar2,0x32);
    local_890 = 0x606aa55;
    local_88c = &DAT_006c2040;
    if ((DAT_0050fabc == 0) && (uVar2 = FUN_0004f1d4(), (int)uVar2 < 0)) {
      snprintf((char *)&local_830,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
               DAT_0004f888);
      FUN_00032218(0,&local_830,0);
      goto LAB_0004f6d8;
    }
    iVar3 = FUN_0004e110(DAT_0050fab8,&local_890,8,&local_868,0x27);
    if (iVar3 != 0) {
      local_830._0_1_ = s_set_DA_conversion_N_failed_00072cd8[0];
      local_830._1_1_ = s_set_DA_conversion_N_failed_00072cd8[1];
      local_830._2_1_ = s_set_DA_conversion_N_failed_00072cd8[2];
      local_830._3_1_ = s_set_DA_conversion_N_failed_00072cd8[3];
      local_82c._0_1_ = s_set_DA_conversion_N_failed_00072cd8[4];
      local_82c._1_1_ = s_set_DA_conversion_N_failed_00072cd8[5];
      local_82c._2_1_ = s_set_DA_conversion_N_failed_00072cd8[6];
      local_82c._3_1_ = s_set_DA_conversion_N_failed_00072cd8[7];
      local_828._0_1_ = s_set_DA_conversion_N_failed_00072cd8[8];
      local_828._1_1_ = s_set_DA_conversion_N_failed_00072cd8[9];
      local_828._2_1_ = s_set_DA_conversion_N_failed_00072cd8[10];
      local_828._3_1_ = s_set_DA_conversion_N_failed_00072cd8[0xb];
      local_824._0_1_ = s_set_DA_conversion_N_failed_00072cd8[0xc];
      local_824._1_1_ = s_set_DA_conversion_N_failed_00072cd8[0xd];
      local_824._2_1_ = s_set_DA_conversion_N_failed_00072cd8[0xe];
      local_824._3_1_ = s_set_DA_conversion_N_failed_00072cd8[0xf];
      local_820._0_1_ = s_set_DA_conversion_N_failed_00072cd8[0x10];
      local_820._1_1_ = s_set_DA_conversion_N_failed_00072cd8[0x11];
      local_820._2_1_ = s_set_DA_conversion_N_failed_00072cd8[0x12];
      local_820._3_1_ = s_set_DA_conversion_N_failed_00072cd8[0x13];
      local_81c[0] = s_set_DA_conversion_N_failed_00072cd8[0x14];
      local_81c[1] = s_set_DA_conversion_N_failed_00072cd8[0x15];
      local_81c[2] = s_set_DA_conversion_N_failed_00072cd8[0x16];
      local_81c[3] = s_set_DA_conversion_N_failed_00072cd8[0x17];
      local_818[0] = s_set_DA_conversion_N_failed_00072cd8[0x18];
      local_818[1] = s_set_DA_conversion_N_failed_00072cd8[0x19];
      local_818[2] = s_set_DA_conversion_N_failed_00072cd8[0x1a];
      local_818[3] = s_set_DA_conversion_N_failed_00072cd8[0x1b];
      FUN_00032218(0,&local_830);
      goto LAB_0004f6d8;
    }
    puVar14 = &local_864;
    puVar8 = (undefined1 *)((int)&local_88c + 3);
    do {
      puVar14 = (undefined4 *)((int)puVar14 + 1);
      puVar8 = puVar8 + 1;
      *puVar8 = *(undefined1 *)puVar14;
    } while (puVar14 != auStack_844);
    if (uVar2 != 0) goto LAB_0004f6d8;
  }
  else {
    local_868 = *DAT_0004f878;
    local_864 = DAT_0004f878[1];
    local_860 = (short)DAT_0004f878[2];
    memset(&local_830,0,0x48);
    uVar2 = local_864 >> 8;
    uVar1 = (ushort)local_864;
    local_864._0_3_ = CONCAT12(0x20,uVar1);
    local_860 = (uVar1 & 0xff) + 0x20 + (short)uVar2 * 0x100 + (short)(local_868 >> 0x10) +
                (ushort)local_864._3_1_ * 0x100;
    iVar3 = FUN_0004e2c4(DAT_0050fab8,&local_868,10,&local_830,0x28);
    if (iVar3 != 0) goto LAB_0004f6d8;
    puVar11 = (undefined1 *)((int)&local_82c + 1);
    puVar8 = (undefined1 *)((int)&local_88c + 3);
    do {
      puVar11 = puVar11 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = *puVar11;
    } while (auStack_80b != puVar11);
  }
  uVar2 = 0xff;
  uVar9 = 0xff;
  puVar5 = &local_888;
  do {
    puVar4 = (uint *)((int)puVar5 + 1);
    uVar12 = (byte)*puVar5 ^ uVar9;
    uVar9 = (byte)(&DAT_000727f8)[uVar12] ^ uVar2;
    uVar2 = (uint)(byte)(&DAT_000728f8)[uVar12];
    puVar5 = puVar4;
  } while (puVar4 != (uint *)&local_86a);
  if ((uint)CONCAT11(local_86a,local_869) == (uVar9 | uVar2 << 8)) {
    local_830 = 0;
    local_82c = 0;
    uVar2 = (local_888 >> 8 & 0xff) << 0x10;
    uVar9 = (local_888 >> 0x10 & 0xff) << 8;
    local_864 = local_888 << 0x18 | uVar2 | uVar9 | local_888 >> 0x18;
    local_828 = 0;
    local_868 = uStack_884 << 0x18 | (uStack_884 >> 8 & 0xff) << 0x10 |
                (uStack_884 >> 0x10 & 0xff) << 8 | uStack_884 >> 0x18;
    local_824 = 0;
    pcVar15 = local_87b;
    local_820 = (uint)local_820._2_2_ << 0x10;
    FUN_0004ef10(&local_830,0xc,local_868,
                 local_888 << 0x18 & 0x1ffffff | uVar2 | uVar9 | local_888 >> 0x18);
    FUN_0004ef10((int)&local_828 + 3,7,
                 local_880 << 0x18 | (local_880 >> 8 & 0xff) << 0x10 |
                 (local_880 >> 0x10 & 0xff) << 8 | local_880 >> 0x18,0);
    puVar14 = DAT_0004f87c;
    uVar12 = (uint)CONCAT11(local_86c,local_86b);
    uVar2 = uVar12 / 0x1f + (uVar12 - uVar12 / 0x1f >> 1) >> 4;
    uVar9 = uVar12 / 0x174;
    *DAT_0004f87c = local_830;
    puVar14[1] = local_82c;
    puVar14[2] = local_828;
    puVar14[3] = local_824;
    *(short *)(puVar14 + 4) = (short)local_820;
    dVar20 = DAT_0004f860;
    DAT_0050fc20 = uVar9 * 10000 + ((uVar2 & 0xffff) % 0xc) * 100 +
                   (uVar12 + uVar2 * -0x1f & 0xffff) + 0x65;
    pcVar13 = pcVar15;
    uVar2 = 0;
    do {
      pcVar13 = pcVar13 + 1;
      uVar12 = uVar2 + 1;
      if (*pcVar13 == -0x80) {
        goto LAB_0004f4d0;
      }
      uVar2 = uVar12;
    } while (uVar12 != 0xe);
    uVar12 = 0xf;
LAB_0004f4d0:
    uVar6 = DAT_0050fac0 - 100;
    bVar18 = 0x61 < DAT_0050fac0;
    bVar16 = DAT_0050fac0 == 0x62;
    if (!bVar16) {
      bVar18 = 1 < uVar6;
    }
    bVar17 = uVar6 != 2;
    iVar3 = (int)CONCAT11(local_87c,local_87b[0]);
    if (!bVar18 || (bVar16 || !bVar17)) {
      uVar9 = 1;
    }
    if (bVar18 && (!bVar16 && bVar17)) {
      uVar9 = 0;
    }
    DAT_0050fadc = uVar12;
    if (bVar18 && (!bVar16 && bVar17)) {
      if (uVar2 - 1 < 0xff) {
        dVar20 = (double)VectorSignedToFloat(uVar12 - 1,(byte)(in_fpscr >> 0x16) & 3);
        dVar20 = DAT_0004f870 / dVar20;
        pcVar13 = DAT_0004f88c;
        do {
          uVar6 = uVar9 + 1;
          dVar21 = (double)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
          dVar21 = round(dVar21 * dVar20);
          pcVar13 = pcVar13 + 1;
          *pcVar13 = (0.0 < dVar21) * (char)(longlong)dVar21;
          uVar9 = uVar6;
        } while (uVar6 != uVar12);
        uVar19 = FUN_0004de38((undefined1)DAT_0050fae0);
        dVar20 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
        pdVar7 = DAT_0004f880 + 0x15;
        DAT_0050fb80 = dVar20 / DAT_0004f868 + (double)CONCAT44(extraout_s1,uVar19);
        pdVar10 = DAT_0004f880;
        do {
          pcVar15 = pcVar15 + 1;
          iVar3 = iVar3 + *pcVar15;
          uVar19 = FUN_0004de38(*(undefined1 *)((int)pdVar10 + 1),pdVar7);
          dVar20 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
          *extraout_r1 = dVar20 / extraout_d4 + (double)CONCAT44(extraout_s1_00,uVar19);
          pdVar7 = extraout_r1 + 1;
          pdVar10 = extraout_r2;
        } while (local_87b + uVar2 != pcVar15);
        goto LAB_0004f5c4;
      }
    }
    else if ((uVar12 != 1) &&
            ((DAT_0050fac0 == 0x62 ||
             (((0x61 < DAT_0050fac0 && (uVar6 < 3)) &&
              ((DAT_0050fac0 == 0x62 || (0x61 < DAT_0050fac0)))))))) {
      dVar21 = (double)VectorSignedToFloat(uVar12 - 1,(byte)(in_fpscr >> 0x16) & 3);
      dVar21 = DAT_0004f858 / dVar21;
      pdVar10 = DAT_0004f880;
      uVar9 = 0;
      do {
        uVar6 = uVar9 + 1;
        dVar22 = (double)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
        *pdVar10 = dVar20 - dVar22 * dVar21;
        dVar22 = DAT_0004f868;
        pdVar10 = pdVar10 + 1;
        uVar9 = uVar6;
      } while (uVar6 != uVar12);
      dVar20 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      DAT_0050fb80 = (double)CONCAT71(DAT_0050fae0._1_7_,(undefined1)DAT_0050fae0) +
                     dVar20 / DAT_0004f868;
      if (uVar2 != 0) {
        pdVar10 = DAT_0004f884;
        do {
          pcVar15 = pcVar15 + 1;
          iVar3 = iVar3 + *pcVar15;
          dVar20 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
          pdVar10[0x14] = dVar20 / dVar22 + *pdVar10;
          pdVar10 = pdVar10 + 1;
        } while (local_87b + uVar2 != pcVar15);
      }
LAB_0004f5c4:
      DAT_0050fac4 = 1;
      local_830._0_1_ = s_power_is_Calibrated_00072e20[0];
      local_830._1_1_ = s_power_is_Calibrated_00072e20[1];
      local_830._2_1_ = s_power_is_Calibrated_00072e20[2];
      local_830._3_1_ = s_power_is_Calibrated_00072e20[3];
      local_82c._0_1_ = s_power_is_Calibrated_00072e20[4];
      local_82c._1_1_ = s_power_is_Calibrated_00072e20[5];
      local_82c._2_1_ = s_power_is_Calibrated_00072e20[6];
      local_82c._3_1_ = s_power_is_Calibrated_00072e20[7];
      local_828._0_1_ = s_power_is_Calibrated_00072e20[8];
      local_828._1_1_ = s_power_is_Calibrated_00072e20[9];
      local_828._2_1_ = s_power_is_Calibrated_00072e20[10];
      local_828._3_1_ = s_power_is_Calibrated_00072e20[0xb];
      local_824._0_1_ = s_power_is_Calibrated_00072e20[0xc];
      local_824._1_1_ = s_power_is_Calibrated_00072e20[0xd];
      local_824._2_1_ = s_power_is_Calibrated_00072e20[0xe];
      local_824._3_1_ = s_power_is_Calibrated_00072e20[0xf];
      local_820._0_1_ = s_power_is_Calibrated_00072e20[0x10];
      local_820._1_1_ = s_power_is_Calibrated_00072e20[0x11];
      local_820._2_1_ = s_power_is_Calibrated_00072e20[0x12];
      local_820._3_1_ = s_power_is_Calibrated_00072e20[0x13];
      local_81c[0] = (char)ram0x00072e34;
      FUN_00032218(3,&local_830,0);
      return 0;
    }
  }
LAB_0004f6d8:
  DAT_0050fac4 = 0;
  local_830._0_1_ = s_power_is_not_Calibrated_00072e04[0];
  local_830._1_1_ = s_power_is_not_Calibrated_00072e04[1];
  local_830._2_1_ = s_power_is_not_Calibrated_00072e04[2];
  local_830._3_1_ = s_power_is_not_Calibrated_00072e04[3];
  local_82c._0_1_ = s_power_is_not_Calibrated_00072e04[4];
  local_82c._1_1_ = s_power_is_not_Calibrated_00072e04[5];
  local_82c._2_1_ = s_power_is_not_Calibrated_00072e04[6];
  local_82c._3_1_ = s_power_is_not_Calibrated_00072e04[7];
  local_828._0_1_ = s_power_is_not_Calibrated_00072e04[8];
  local_828._1_1_ = s_power_is_not_Calibrated_00072e04[9];
  local_828._2_1_ = s_power_is_not_Calibrated_00072e04[10];
  local_828._3_1_ = s_power_is_not_Calibrated_00072e04[0xb];
  local_824._0_1_ = s_power_is_not_Calibrated_00072e04[0xc];
  local_824._1_1_ = s_power_is_not_Calibrated_00072e04[0xd];
  local_824._2_1_ = s_power_is_not_Calibrated_00072e04[0xe];
  local_824._3_1_ = s_power_is_not_Calibrated_00072e04[0xf];
  local_820._0_1_ = s_power_is_not_Calibrated_00072e04[0x10];
  local_820._1_1_ = s_power_is_not_Calibrated_00072e04[0x11];
  local_820._2_1_ = s_power_is_not_Calibrated_00072e04[0x12];
  local_820._3_1_ = s_power_is_not_Calibrated_00072e04[0x13];
  local_81c[0] = s_power_is_not_Calibrated_00072e04[0x14];
  local_81c[1] = s_power_is_not_Calibrated_00072e04[0x15];
  local_81c[2] = s_power_is_not_Calibrated_00072e04[0x16];
  local_81c[3] = s_power_is_not_Calibrated_00072e04[0x17];
  local_818[0] = (char)ram0x00072e1c;
  FUN_00032218(3,&local_830,0);
  return 0;
}


