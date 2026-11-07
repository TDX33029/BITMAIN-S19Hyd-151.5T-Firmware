// FUN_0004f1d4 @ 0004f1d4  size=1668  callers=7
// program: bmminer


uint FUN_0004f1d4(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar5;
  uint *puVar4;
  uint uVar6;
  double *extraout_r1;
  char *pcVar7;
  uint uVar8;
  double *pdVar9;
  undefined8 *puVar10;
  undefined8 *extraout_r2;
  undefined1 *puVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint in_fpscr;
  undefined4 uVar18;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double extraout_d4;
  double dVar19;
  double dVar20;
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
  uint local_81c;
  uint local_818;
  char acStack_814 [2024];
  
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
    local_830._0_1_ = 'p';
    local_830._1_1_ = 'o';
    local_830._2_1_ = 'w';
    local_830._3_1_ = 'e';
    local_82c._0_1_ = 'r';
    local_82c._1_1_ = ' ';
    local_82c._2_1_ = 'o';
    local_82c._3_1_ = 'p';
    local_828._0_1_ = 'e';
    local_828._1_1_ = 'n';
    local_828._2_1_ = ' ';
    local_828._3_1_ = 'p';
    local_824._0_1_ = 'o';
    local_824._1_1_ = 'w';
    local_824._2_1_ = 'e';
    local_824._3_1_ = 'r';
    local_820._0_1_ = '_';
    local_820._1_1_ = 'v';
    local_820._2_1_ = 'e';
    local_820._3_1_ = 'r';
    local_81c._0_1_ = 's';
    local_81c._1_1_ = 'i';
    local_81c._2_1_ = 'o';
    local_81c._3_1_ = 'n';
    local_818._0_1_ = ' ';
    local_818._1_1_ = '<';
    local_818._2_1_ = ' ';
    local_818._3_1_ = '0';
    builtin_strncpy(acStack_814," will close power\n",0x13);
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
  bVar17 = 0x61 < DAT_0050fac0;
  bVar15 = DAT_0050fac0 == 0x62;
  if (!bVar15) {
    bVar17 = 1 < DAT_0050fac0 - 100;
  }
  bVar16 = DAT_0050fac0 - 100 != 2;
  uVar2 = DAT_0050fac0;
  if (!bVar17 || (bVar15 || !bVar16)) {
    uVar2 = 1;
  }
  if (bVar17 && (!bVar15 && bVar16)) {
    uVar2 = 0;
  }
  if (bVar17 && (!bVar15 && bVar16)) {
    memset(&local_868,uVar2,0x32);
    local_890 = 0x606aa55;
    local_88c = &DAT_006c2040;
    if ((DAT_0050fabc == 0) && (uVar2 = FUN_0004f1d4(), (int)uVar2 < 0)) {
      snprintf((char *)&local_830,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
               "bitmain_power_read");
      FUN_00032218(0,&local_830,0);
      goto LAB_0004f6d8;
    }
    iVar3 = FUN_0004e110(DAT_0050fab8,&local_890,8,&local_868,0x27);
    if (iVar3 != 0) {
      local_830._0_1_ = 's';
      local_830._1_1_ = 'e';
      local_830._2_1_ = 't';
      local_830._3_1_ = ' ';
      local_82c._0_1_ = 'D';
      local_82c._1_1_ = 'A';
      local_82c._2_1_ = ' ';
      local_82c._3_1_ = 'c';
      local_828._0_1_ = 'o';
      local_828._1_1_ = 'n';
      local_828._2_1_ = 'v';
      local_828._3_1_ = 'e';
      local_824._0_1_ = 'r';
      local_824._1_1_ = 's';
      local_824._2_1_ = 'i';
      local_824._3_1_ = 'o';
      local_820._0_1_ = 'n';
      local_820._1_1_ = ' ';
      local_820._2_1_ = 'N';
      local_820._3_1_ = ' ';
      local_81c._0_1_ = 'f';
      local_81c._1_1_ = 'a';
      local_81c._2_1_ = 'i';
      local_81c._3_1_ = 'l';
      local_818._0_1_ = 'e';
      local_818._1_1_ = 'd';
      local_818._2_1_ = '\n';
      local_818._3_1_ = '\0';
      FUN_00032218(0,&local_830);
      goto LAB_0004f6d8;
    }
    puVar14 = &local_864;
    puVar11 = (undefined1 *)((int)&local_88c + 3);
    do {
      puVar14 = (undefined4 *)((int)puVar14 + 1);
      puVar11 = puVar11 + 1;
      *puVar11 = *(undefined1 *)puVar14;
    } while (puVar14 != auStack_844);
    if (uVar2 != 0) goto LAB_0004f6d8;
  }
  else {
    local_868 = 0x608aa55;
    local_864 = 0;
    local_860 = 0;
    memset(&local_830,0,0x48);
    uVar2 = local_864 >> 8;
    uVar1 = (ushort)local_864;
    local_864._0_3_ = CONCAT12(0x20,uVar1);
    local_860 = (uVar1 & 0xff) + 0x20 + (short)uVar2 * 0x100 + (short)(local_868 >> 0x10) +
                (ushort)local_864._3_1_ * 0x100;
    iVar3 = FUN_0004e2c4(DAT_0050fab8,&local_868,10,&local_830,0x28);
    if (iVar3 != 0) goto LAB_0004f6d8;
    pcVar12 = (char *)((int)&local_82c + 1);
    pcVar7 = (char *)((int)&local_88c + 3);
    do {
      pcVar12 = pcVar12 + 1;
      pcVar7 = pcVar7 + 1;
      *pcVar7 = *pcVar12;
    } while (acStack_814 + 9 != pcVar12);
  }
  uVar2 = 0xff;
  uVar8 = 0xff;
  puVar5 = &local_888;
  do {
    puVar4 = (uint *)((int)puVar5 + 1);
    uVar13 = (byte)*puVar5 ^ uVar8;
    uVar8 = (byte)(&DAT_000727f8)[uVar13] ^ uVar2;
    uVar2 = (uint)(byte)(&DAT_000728f8)[uVar13];
    puVar5 = puVar4;
  } while (puVar4 != (uint *)&local_86a);
  if ((uint)CONCAT11(local_86a,local_869) == (uVar8 | uVar2 << 8)) {
    local_830 = 0;
    local_82c = 0;
    uVar2 = (local_888 >> 8 & 0xff) << 0x10;
    uVar8 = (local_888 >> 0x10 & 0xff) << 8;
    local_864 = local_888 << 0x18 | uVar2 | uVar8 | local_888 >> 0x18;
    local_828 = 0;
    local_868 = uStack_884 << 0x18 | (uStack_884 >> 8 & 0xff) << 0x10 |
                (uStack_884 >> 0x10 & 0xff) << 8 | uStack_884 >> 0x18;
    local_824 = 0;
    pcVar12 = local_87b;
    local_820 = (uint)local_820._2_2_ << 0x10;
    FUN_0004ef10(&local_830,0xc,local_868,
                 local_888 << 0x18 & 0x1ffffff | uVar2 | uVar8 | local_888 >> 0x18);
    FUN_0004ef10((int)&local_828 + 3,7,
                 local_880 << 0x18 | (local_880 >> 8 & 0xff) << 0x10 |
                 (local_880 >> 0x10 & 0xff) << 8 | local_880 >> 0x18,0);
    uVar13 = (uint)CONCAT11(local_86c,local_86b);
    uVar2 = uVar13 / 0x1f + (uVar13 - uVar13 / 0x1f >> 1) >> 4;
    uVar8 = uVar13 / 0x174;
    DAT_0050fac8 = local_830;
    DAT_0050facc = local_82c;
    DAT_0050fad0 = local_828;
    DAT_0050fad4 = local_824;
    DAT_0050fad8 = (undefined2)local_820;
    DAT_0050fc20 = uVar8 * 10000 + ((uVar2 & 0xffff) % 0xc) * 100 +
                   (uVar13 + uVar2 * -0x1f & 0xffff) + 0x65;
    pcVar7 = pcVar12;
    uVar2 = 0;
    do {
      pcVar7 = pcVar7 + 1;
      uVar13 = uVar2 + 1;
      if (*pcVar7 == -0x80) {
        goto LAB_0004f4d0;
      }
      uVar2 = uVar13;
    } while (uVar13 != 0xe);
    uVar13 = 0xf;
LAB_0004f4d0:
    uVar6 = DAT_0050fac0 - 100;
    bVar17 = 0x61 < DAT_0050fac0;
    bVar15 = DAT_0050fac0 == 0x62;
    if (!bVar15) {
      bVar17 = 1 < uVar6;
    }
    bVar16 = uVar6 != 2;
    iVar3 = (int)CONCAT11(local_87c,local_87b[0]);
    if (!bVar17 || (bVar15 || !bVar16)) {
      uVar8 = 1;
    }
    if (bVar17 && (!bVar15 && bVar16)) {
      uVar8 = 0;
    }
    DAT_0050fadc = uVar13;
    if (bVar17 && (!bVar15 && bVar16)) {
      if (uVar2 - 1 < 0xff) {
        pcVar7 = (char *)((int)&DAT_0050fadc + 3);
        dVar19 = (double)VectorSignedToFloat(uVar13 - 1,(byte)(in_fpscr >> 0x16) & 3);
        do {
          uVar6 = uVar8 + 1;
          dVar20 = (double)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
          dVar20 = round(dVar20 * (255.0 / dVar19));
          pcVar7 = pcVar7 + 1;
          *pcVar7 = (0.0 < dVar20) * (char)(longlong)dVar20;
          uVar8 = uVar6;
        } while (uVar6 != uVar13);
        uVar18 = FUN_0004de38((undefined1)DAT_0050fae0);
        dVar19 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
        puVar10 = &DAT_0050fae0;
        pdVar9 = (double *)&DAT_0050fb88;
        DAT_0050fb80 = dVar19 / 1000.0 + (double)CONCAT44(extraout_s1,uVar18);
        do {
          pcVar12 = pcVar12 + 1;
          iVar3 = iVar3 + *pcVar12;
          uVar18 = FUN_0004de38(*(undefined1 *)((int)puVar10 + 1),pdVar9);
          dVar19 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
          *extraout_r1 = dVar19 / extraout_d4 + (double)CONCAT44(extraout_s1_00,uVar18);
          pdVar9 = extraout_r1 + 1;
          puVar10 = extraout_r2;
        } while (local_87b + uVar2 != pcVar12);
        goto LAB_0004f5c4;
      }
    }
    else if ((uVar13 != 1) &&
            ((DAT_0050fac0 == 0x62 ||
             (((0x61 < DAT_0050fac0 && (uVar6 < 3)) &&
              ((DAT_0050fac0 == 0x62 || (0x61 < DAT_0050fac0)))))))) {
      pdVar9 = (double *)&DAT_0050fae0;
      dVar19 = (double)VectorSignedToFloat(uVar13 - 1,(byte)(in_fpscr >> 0x16) & 3);
      uVar8 = 0;
      do {
        uVar6 = uVar8 + 1;
        dVar20 = (double)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
        *pdVar9 = 21.6 - dVar20 * (4.600000000000001 / dVar19);
        pdVar9 = pdVar9 + 1;
        uVar8 = uVar6;
      } while (uVar6 != uVar13);
      dVar19 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      DAT_0050fb80 = (double)CONCAT71(DAT_0050fae0._1_7_,(undefined1)DAT_0050fae0) + dVar19 / 1000.0
      ;
      if (uVar2 != 0) {
        pdVar9 = (double *)&DAT_0050fae8;
        do {
          pcVar12 = pcVar12 + 1;
          iVar3 = iVar3 + *pcVar12;
          dVar19 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
          pdVar9[0x14] = dVar19 / 1000.0 + *pdVar9;
          pdVar9 = pdVar9 + 1;
        } while (local_87b + uVar2 != pcVar12);
      }
LAB_0004f5c4:
      DAT_0050fac4 = 1;
      local_830._0_1_ = 'p';
      local_830._1_1_ = 'o';
      local_830._2_1_ = 'w';
      local_830._3_1_ = 'e';
      local_82c._0_1_ = 'r';
      local_82c._1_1_ = ' ';
      local_82c._2_1_ = 'i';
      local_82c._3_1_ = 's';
      local_828._0_1_ = ' ';
      local_828._1_1_ = 'C';
      local_828._2_1_ = 'a';
      local_828._3_1_ = 'l';
      local_824._0_1_ = 'i';
      local_824._1_1_ = 'b';
      local_824._2_1_ = 'r';
      local_824._3_1_ = 'a';
      local_820._0_1_ = 't';
      local_820._1_1_ = 'e';
      local_820._2_1_ = 'd';
      local_820._3_1_ = '\n';
      local_81c = local_81c & 0xffffff00;
      FUN_00032218(3,&local_830,0);
      return 0;
    }
  }
LAB_0004f6d8:
  DAT_0050fac4 = 0;
  local_830._0_1_ = 'p';
  local_830._1_1_ = 'o';
  local_830._2_1_ = 'w';
  local_830._3_1_ = 'e';
  local_82c._0_1_ = 'r';
  local_82c._1_1_ = ' ';
  local_82c._2_1_ = 'i';
  local_82c._3_1_ = 's';
  local_828._0_1_ = ' ';
  local_828._1_1_ = 'n';
  local_828._2_1_ = 'o';
  local_828._3_1_ = 't';
  local_824._0_1_ = ' ';
  local_824._1_1_ = 'C';
  local_824._2_1_ = 'a';
  local_824._3_1_ = 'l';
  local_820._0_1_ = 'i';
  local_820._1_1_ = 'b';
  local_820._2_1_ = 'r';
  local_820._3_1_ = 'a';
  local_81c._0_1_ = 't';
  local_81c._1_1_ = 'e';
  local_81c._2_1_ = 'd';
  local_81c._3_1_ = '\n';
  local_818 = local_818 & 0xffffff00;
  FUN_00032218(3,&local_830,0);
  return 0;
}

