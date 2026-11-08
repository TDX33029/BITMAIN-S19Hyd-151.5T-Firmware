// FUN_0005d758 @ 0005d758  size=3288
// callers: []

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0005d758(void)

{
  short sVar1;
  byte bVar2;
  double dVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int extraout_r1;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  uint in_fpscr;
  undefined4 uVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  undefined8 uVar22;
  undefined4 local_2048;
  undefined1 local_2044 [4];
  undefined4 uStack_2040;
  undefined4 uStack_203c;
  int local_2038;
  char acStack_2034 [4];
  char acStack_2030 [4];
  char acStack_202c [4];
  undefined3 local_2028;
  char cStack_2025;
  undefined2 local_2024 [2];
  undefined2 local_2020 [2];
  undefined3 local_201c;
  char cStack_2019;
  char local_2018 [8164];
  
  if (3 < DAT_000be63c) {
    local_2038 = s_Do_freq_tuning_fine__000a6fac._0_4_;
    acStack_2034 = (char  [4])s_Do_freq_tuning_fine__000a6fac._4_4_;
    acStack_2030 = (char  [4])s_Do_freq_tuning_fine__000a6fac._8_4_;
    acStack_202c = (char  [4])s_Do_freq_tuning_fine__000a6fac._12_4_;
    _local_2028 = s_Do_freq_tuning_fine__000a6fac._16_4_;
    local_2024[0] = (short)ram0x000a6fc0;
    FUN_0004948c(3,&local_2038,0);
  }
  iVar14 = 0;
  do {
    iVar5 = FUN_0002a6f0(iVar14);
    if ((iVar5 != 0) && (iVar5 = FUN_0002a514(), iVar5 != 0)) {
      iVar6 = *DAT_00944b8c;
      piVar10 = DAT_00944b8c + iVar5 + iVar14 * 0x100;
      piVar13 = DAT_00944b8c + iVar14 * 0x100;
      do {
        piVar13 = piVar13 + 1;
        *piVar13 = *(int *)(iVar6 + iVar14 * 4 + 4);
      } while (piVar13 != piVar10);
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 != 4);
  FUN_00057a04(*(undefined4 *)*DAT_00944b8c);
  memcpy(DAT_00944b8c + 0x405,DAT_00944b8c + 1,0x1000);
  if (3 < DAT_000be63c) {
    memset(&local_2038,0,0x2000);
    local_2038 = CONCAT22(local_2038._2_2_,10);
    FUN_0004a3a4(3,&local_2038,0);
    if (3 < DAT_000be63c) {
      local_2038._0_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0];
      local_2038._1_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[1];
      local_2038._2_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[2];
      local_2038._3_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[3];
      acStack_2034[0] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[4];
      acStack_2034[1] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[5];
      acStack_2034[2] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[6];
      acStack_2034[3] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[7];
      acStack_2030[0] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[8];
      acStack_2030[1] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[9];
      acStack_2030[2] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[10];
      acStack_2030[3] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0xb];
      acStack_202c[0] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0xc];
      acStack_202c[1] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0xd];
      acStack_202c[2] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0xe];
      acStack_202c[3] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0xf];
      local_2028._0_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0x10];
      local_2028._1_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0x11];
      local_2028._2_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0x12];
      cStack_2025 = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0x13];
      local_2024 = (undefined2  [2])s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4._20_4_;
      local_2020 = (undefined2  [2])s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4._24_4_;
      local_201c._0_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0x1c];
      local_201c._1_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0x1d];
      local_201c._2_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0x1e];
      cStack_2019 = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0x1f];
      local_2018[0] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0x20];
      local_2018[1] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0x21];
      local_2018[2] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0x22];
      local_2018[3] = s_>>>>_Do_freq_tuning_fine_paralle_000a6fc4[0x23];
      FUN_0004948c(3,&local_2038,0);
    }
  }
  iVar14 = 0;
  do {
    iVar5 = FUN_0002a6f0(iVar14);
    if (iVar5 != 0) {
      iVar5 = FUN_0005cafc(iVar14);
      uVar17 = 2;
      if (iVar5 == 0) {
        uVar17 = 1;
      }
      FUN_0005a3cc(iVar14,uVar17);
    }
    dVar3 = DAT_0005d9a8;
    iVar14 = iVar14 + 1;
  } while (iVar14 != 4);
LAB_0005d818:
  iVar14 = FUN_0005a738();
  if (iVar14 == 0) {
    iVar14 = 0;
  }
  else {
    if (3 < DAT_000be63c) {
      snprintf((char *)&local_2038,0x2000,"is_need_serial = %d\n",0);
      FUN_0004948c(3,&local_2038,0);
      if (3 < DAT_000be63c) {
        memset(&local_2038,0,0x2000);
        local_2038 = CONCAT22(local_2038._2_2_,10);
        FUN_0004a3a4(3,&local_2038,0);
        if (3 < DAT_000be63c) {
          local_2038._0_1_ = s_>>>>_Do_single_grade_tuning__000a7000[0];
          local_2038._1_1_ = s_>>>>_Do_single_grade_tuning__000a7000[1];
          local_2038._2_1_ = s_>>>>_Do_single_grade_tuning__000a7000[2];
          local_2038._3_1_ = s_>>>>_Do_single_grade_tuning__000a7000[3];
          acStack_2034[0] = s_>>>>_Do_single_grade_tuning__000a7000[4];
          acStack_2034[1] = s_>>>>_Do_single_grade_tuning__000a7000[5];
          acStack_2034[2] = s_>>>>_Do_single_grade_tuning__000a7000[6];
          acStack_2034[3] = s_>>>>_Do_single_grade_tuning__000a7000[7];
          acStack_2030[0] = s_>>>>_Do_single_grade_tuning__000a7000[8];
          acStack_2030[1] = s_>>>>_Do_single_grade_tuning__000a7000[9];
          acStack_2030[2] = s_>>>>_Do_single_grade_tuning__000a7000[10];
          acStack_2030[3] = s_>>>>_Do_single_grade_tuning__000a7000[0xb];
          acStack_202c[0] = s_>>>>_Do_single_grade_tuning__000a7000[0xc];
          acStack_202c[1] = s_>>>>_Do_single_grade_tuning__000a7000[0xd];
          acStack_202c[2] = s_>>>>_Do_single_grade_tuning__000a7000[0xe];
          acStack_202c[3] = s_>>>>_Do_single_grade_tuning__000a7000[0xf];
          local_2028._0_1_ = s_>>>>_Do_single_grade_tuning__000a7000[0x10];
          local_2028._1_1_ = s_>>>>_Do_single_grade_tuning__000a7000[0x11];
          local_2028._2_1_ = s_>>>>_Do_single_grade_tuning__000a7000[0x12];
          cStack_2025 = s_>>>>_Do_single_grade_tuning__000a7000[0x13];
          local_2024 = (undefined2  [2])s_>>>>_Do_single_grade_tuning__000a7000._20_4_;
          local_2020 = (undefined2  [2])s_>>>>_Do_single_grade_tuning__000a7000._24_4_;
          local_201c._0_1_ = (char)ram0x000a701c;
          local_201c._1_1_ = (char)((uint)ram0x000a701c >> 8);
          FUN_0004948c(3,&local_2038,0);
        }
      }
    }
    iVar14 = 0;
    do {
      iVar5 = FUN_0002a6f0(iVar14);
      if (((iVar5 != 0) && (iVar5 = FUN_0005a540(iVar14), iVar5 == 1)) && (3 < DAT_000be63c)) {
        snprintf((char *)&local_2038,0x2000,"chain = %d, grade = %d\n",iVar14,
                 DAT_00944b8c[iVar14 + 0xc05]);
        FUN_0004948c(3,&local_2038,0);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != 4);
    if (3 < DAT_000be63c) {
      local_2038._0_1_ = s_Board_init_start__000a7038[0];
      local_2038._1_1_ = s_Board_init_start__000a7038[1];
      local_2038._2_1_ = s_Board_init_start__000a7038[2];
      local_2038._3_1_ = s_Board_init_start__000a7038[3];
      acStack_2034[0] = s_Board_init_start__000a7038[4];
      acStack_2034[1] = s_Board_init_start__000a7038[5];
      acStack_2034[2] = s_Board_init_start__000a7038[6];
      acStack_2034[3] = s_Board_init_start__000a7038[7];
      acStack_2030[0] = s_Board_init_start__000a7038[8];
      acStack_2030[1] = s_Board_init_start__000a7038[9];
      acStack_2030[2] = s_Board_init_start__000a7038[10];
      acStack_2030[3] = s_Board_init_start__000a7038[0xb];
      acStack_202c[0] = s_Board_init_start__000a7038[0xc];
      acStack_202c[1] = s_Board_init_start__000a7038[0xd];
      acStack_202c[2] = s_Board_init_start__000a7038[0xe];
      acStack_202c[3] = s_Board_init_start__000a7038[0xf];
      local_2028 = (undefined3)ram0x000a7048;
      FUN_0004948c(3,&local_2038,0);
    }
    iVar14 = FUN_0005ad54(*(undefined4 *)(*DAT_00944b8c + 0x28));
    if (iVar14 == 0) {
      FUN_0005a81c();
      piVar10 = DAT_00944b8c;
      DAT_00944b8c[0xc09] = 0;
      piVar10[0xc0a] = 0;
      piVar10[0xc0b] = 0;
      piVar10[0xc0c] = 0;
      memset(&local_2038,0,0x1000);
      iVar14 = 0;
      do {
        iVar5 = FUN_0002a6f0(iVar14);
        if (iVar5 != 0) {
          iVar5 = FUN_0005a540(iVar14);
          if (iVar5 == 1) {
            iVar5 = FUN_0002a514();
            if (iVar5 != 0) {
              piVar13 = DAT_00944b8c + iVar14 * 0x100;
              piVar10 = &local_2038 + iVar14 * 0x100;
              do {
                piVar13 = piVar13 + 1;
                *piVar10 = *piVar13;
                piVar10 = piVar10 + 1;
              } while (piVar13 != DAT_00944b8c + iVar5 + iVar14 * 0x100);
            }
          }
          else {
            uVar8 = FUN_0005c8b8(iVar14,DAT_00944b8c + 1);
            if (*(uint *)(*DAT_00944b8c + 0x18) < uVar8) {
              iVar5 = FUN_0002a514();
              if (iVar5 != 0) {
                piVar10 = &local_2038 + iVar14 * 0x100;
                do {
                  piVar13 = piVar10 + 1;
                  *piVar10 = *(int *)(*DAT_00944b8c + 0x18);
                  piVar10 = piVar13;
                } while (piVar13 != &local_2038 + iVar5 + iVar14 * 0x100);
              }
            }
            else {
              iVar5 = FUN_0002a514();
              if (iVar5 != 0) {
                piVar13 = DAT_00944b8c + iVar14 * 0x100;
                piVar10 = &local_2038 + iVar14 * 0x100;
                do {
                  piVar13 = piVar13 + 1;
                  *piVar10 = *piVar13;
                  piVar10 = piVar10 + 1;
                } while (piVar13 != DAT_00944b8c + iVar5 + iVar14 * 0x100);
              }
            }
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != 4);
      iVar14 = thunk_FUN_00024c74();
      iVar5 = FUN_00057a14();
      if (iVar14 == iVar5) {
        uVar17 = VectorSignedToFloat(DAT_000be8f0,(byte)(in_fpscr >> 0x16) & 3);
        FUN_00026ce8(uVar17,&local_2038,DAT_008c7044,*(undefined1 *)(*DAT_00944b8c + 0x24));
LAB_0005da78:
        iVar14 = FUN_0005a738();
        if (iVar14 == 0) {
          if (DAT_000be63c < 4) goto LAB_0005d818;
          iVar14 = 1;
LAB_0005e008:
          snprintf((char *)&local_2038,0x2000,"is_single_grade_done = %d\n",iVar14);
          FUN_0004948c(3,&local_2038,0);
        }
        else {
          iVar14 = 0;
          do {
            iVar5 = FUN_0002a6f0(iVar14);
            if (((iVar5 != 0) && (iVar5 = FUN_0005a540(iVar14), iVar5 == 1)) &&
               (iVar5 = FUN_0005c8b8(iVar14,DAT_00944b8c + 0x405), 3 < DAT_000be63c)) {
              snprintf((char *)&local_2038,0x2000,"chain = %d, freq_avg = %d, freq_threshold = %d\n"
                       ,iVar14,iVar5,*(int *)(*DAT_00944b8c + 0x18));
              FUN_0004948c(3,&local_2038,0);
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 != 4);
          iVar14 = 1;
          iVar5 = 0;
          do {
            iVar6 = FUN_0002a6f0(iVar5);
            if ((iVar6 != 0) && (iVar6 = FUN_0005a540(iVar5), iVar6 == 1)) {
              iVar6 = DAT_00944b8c[iVar5 + 0xc09];
              if (3 < DAT_000be63c) {
                snprintf((char *)&local_2038,0x2000,
                         "chain = %d, grade_curr = %d, is_grade_curr_done = %d\n",iVar5,
                         DAT_00944b8c[iVar5 + 0xc05],iVar6);
                FUN_0004948c(3,&local_2038,0);
                iVar6 = DAT_00944b8c[iVar5 + 0xc09];
              }
              if (iVar6 == 0) {
                iVar14 = 0;
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != 4);
          if (3 < DAT_000be63c) goto LAB_0005e008;
        }
        if (iVar14 == 0) {
          iVar14 = 0;
          do {
            iVar5 = FUN_0002a6f0(iVar14);
            if (((iVar5 != 0) && (iVar5 = FUN_0005a540(iVar14), iVar5 == 1)) &&
               (DAT_00944b8c[iVar14 + 0xc09] == 0)) {
              iVar5 = FUN_0002a514();
              if (iVar5 == 0) {
                iVar6 = *DAT_00944b8c;
                iVar5 = 0;
              }
              else {
                iVar6 = *DAT_00944b8c;
                piVar13 = DAT_00944b8c + iVar5 + iVar14 * 0x100;
                piVar11 = DAT_00944b8c + iVar14 * 0x100;
                iVar5 = 0;
                piVar10 = DAT_00944b8c + iVar14 * 0x100 + 0x405;
                do {
                  piVar11 = piVar11 + 1;
                  iVar15 = *piVar11;
                  *piVar10 = iVar15;
                  if (piVar10[0x400] == 1) {
                    iVar5 = iVar15 - *(int *)(iVar6 + 0x20);
                    *piVar10 = iVar5;
                  }
                  piVar10 = piVar10 + 1;
                } while (piVar11 != piVar13);
              }
              if (*(char *)(iVar6 + 0x25) != '\0') {
                FUN_00025b34(iVar5,1);
              }
              uVar17 = VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
              FUN_00081ee8(uVar17,&uStack_2040,local_2044,0);
              uStack_203c._0_3_ = CONCAT12(local_2044[0],(undefined2)uStack_203c);
              if (3 < DAT_000be63c) {
                snprintf((char *)&local_2038,0x2000,
                         "chain = %d, grade_curr = %d, freq_target = %d\n",iVar14,
                         DAT_00944b8c[iVar14 + 0xc05],iVar5);
                FUN_0004948c(3,&local_2038,0);
              }
              iVar6 = FUN_0002a514();
              piVar10 = DAT_00944b8c;
              if (iVar6 != 0) {
                iVar15 = 0;
                do {
                  while (piVar10[iVar14 * 0x100 + iVar15 + 0x405] == iVar5) {
                    if (3 < DAT_000be63c) {
                      snprintf((char *)&local_2038,0x2000,"chain = %d, asic = %d, freq = %d\n",
                               iVar14,iVar15,iVar5);
                      FUN_0004948c(3,&local_2038,0);
                    }
                    sVar4 = FUN_0002a584();
                    sVar1 = (short)iVar15;
                    iVar15 = iVar15 + 1;
                    FUN_0002d6b0(iVar14,0,(int)sVar4 * (int)sVar1 & 0xff,DAT_008c7044,uStack_2040,
                                 uStack_203c);
                    usleep(1000000);
                    piVar10 = DAT_00944b8c;
                    if (iVar6 == iVar15) goto LAB_0005df44;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar6 != iVar15);
              }
LAB_0005df44:
              FUN_0005cc6c(iVar14,piVar10 + 0x405);
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 != 4);
          iVar6 = 0;
          uVar17 = FUN_0005c964(0xff,DAT_00944b8c + 0x405);
          FUN_0004ef68(uVar17,DAT_000be5ec,0x14);
          local_2048 = FUN_0005ca30(0xff,DAT_00944b8c + 0x405);
          FUN_0005b784(&local_2048);
          uVar22 = FUN_00059f94();
          iVar14 = (int)((ulonglong)uVar22 >> 0x20);
          iVar5 = (int)uVar22;
          do {
            uVar22 = FUN_0002a6f0(iVar6,iVar14);
            iVar14 = (int)((ulonglong)uVar22 >> 0x20);
            if ((int)uVar22 != 0) {
              uVar22 = FUN_0005a540(iVar6);
              iVar14 = (int)((ulonglong)uVar22 >> 0x20);
              if (((int)uVar22 == 1) && (iVar14 = iVar5, DAT_00944b8c[iVar6 + 0xc09] == 0)) {
                FUN_0005adf4(iVar6);
                iVar14 = extraout_r1;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 != 4);
          iVar6 = 0;
          iVar14 = FUN_0002a6f0(0,iVar14);
          do {
            if (((iVar14 != 0) && (iVar14 = FUN_0005a540(iVar6), iVar14 == 1)) &&
               (DAT_00944b8c[iVar6 + 0xc09] == 0)) {
              iVar14 = FUN_0002a514();
              if (0 < iVar14) {
                puVar16 = (undefined4 *)(&DAT_00ff8ffc + iVar6 * 0x400 + iVar5);
                iVar15 = 0;
                do {
                  puVar16 = puVar16 + 1;
                  uVar17 = *puVar16;
                  iVar7 = FUN_0002a554();
                  dVar21 = (double)VectorUnsignedToFloat(uVar17,(byte)(in_fpscr >> 0x16) & 3);
                  iVar9 = iVar6 * 0x100 + iVar15;
                  iVar15 = iVar15 + 1;
                  dVar19 = (double)VectorSignedToFloat(iVar7 << 3,(byte)(in_fpscr >> 0x16) & 3);
                  uVar8 = in_fpscr & 0xfffffff | (uint)(dVar21 == dVar19 * dVar3) << 0x1e;
                  in_fpscr = uVar8 | (uint)(dVar19 * dVar3 <= dVar21) << 0x1d;
                  if ((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar8 >> 0x1e,0)) {
                    DAT_00944b8c[iVar9 + 0x805] = 0;
                  }
                  else {
                    DAT_00944b8c[iVar9 + 0x805] = 1;
                  }
                } while (iVar14 != iVar15);
              }
              iVar14 = FUN_0002a514();
              if (iVar14 < 1) {
LAB_0005e19c:
                FUN_0005a3cc(iVar6,2);
              }
              else {
                iVar15 = 0;
                piVar10 = DAT_00944b8c + iVar6 * 0x100 + 0x804;
                do {
                  piVar10 = piVar10 + 1;
                  iVar15 = iVar15 + *piVar10;
                } while (DAT_00944b8c + iVar14 + iVar6 * 0x100 + 0x804 != piVar10);
                if (iVar15 == 0) goto LAB_0005e19c;
              }
              iVar14 = FUN_0002a514();
              piVar10 = DAT_00944b8c;
              if (iVar14 != 0) {
                piVar13 = DAT_00944b8c + iVar14 + iVar6 * 0x100;
                piVar12 = DAT_00944b8c + iVar6 * 0x100;
                piVar11 = DAT_00944b8c + iVar6 * 0x100 + 0x404;
                do {
                  piVar11 = piVar11 + 1;
                  piVar12 = piVar12 + 1;
                  *piVar12 = *piVar11;
                } while (piVar12 != piVar13);
              }
              uVar8 = DAT_000be63c;
              piVar10[iVar6 + 0x401] = 1;
              if (3 < uVar8) {
                snprintf((char *)&local_2038,0x2000,
                         "Update freq result of high grade, chain = %d, grade_curr = %d.\n",iVar6,
                         piVar10[iVar6 + 0xc05]);
                FUN_0004948c(3,&local_2038,0);
              }
              fVar18 = (float)FUN_0005b740(iVar6,iVar5);
              fVar20 = (float)DAT_00944b8c[iVar6 + 0xc0d];
              uVar8 = in_fpscr & 0xfffffff | (uint)(fVar18 < fVar20) << 0x1f |
                      (uint)(fVar18 == fVar20) << 0x1e;
              in_fpscr = uVar8 | (uint)(NAN(fVar18) || NAN(fVar20)) << 0x1c;
              bVar2 = (byte)(uVar8 >> 0x18);
              if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                DAT_00944b8c[iVar6 + 0xc0d] = (int)fVar18;
              }
              iVar14 = FUN_0005cafc(iVar6);
              if (iVar14 != 0) {
                FUN_0005a3cc(iVar6,2);
              }
            }
            iVar6 = iVar6 + 1;
            if (iVar6 == 4) goto LAB_0005da78;
            iVar14 = FUN_0002a6f0(iVar6);
          } while( true );
        }
        goto LAB_0005d818;
      }
      iVar14 = FUN_00057a28();
      uVar17 = VectorSignedToFloat(DAT_000be8f0,(byte)(in_fpscr >> 0x16) & 3);
      FUN_00026ce8(uVar17,&local_2038,DAT_008c7044,*(undefined1 *)(*DAT_00944b8c + 0x24));
      if (iVar14 == 0) goto LAB_0005da78;
    }
    else {
      if (DAT_000be63c < 4) goto LAB_0005d890;
      local_2038._0_1_ = s_Board_init_failed__exit__000a704c[0];
      local_2038._1_1_ = s_Board_init_failed__exit__000a704c[1];
      local_2038._2_1_ = s_Board_init_failed__exit__000a704c[2];
      local_2038._3_1_ = s_Board_init_failed__exit__000a704c[3];
      acStack_2034[0] = s_Board_init_failed__exit__000a704c[4];
      acStack_2034[1] = s_Board_init_failed__exit__000a704c[5];
      acStack_2034[2] = s_Board_init_failed__exit__000a704c[6];
      acStack_2034[3] = s_Board_init_failed__exit__000a704c[7];
      acStack_2030[0] = s_Board_init_failed__exit__000a704c[8];
      acStack_2030[1] = s_Board_init_failed__exit__000a704c[9];
      acStack_2030[2] = s_Board_init_failed__exit__000a704c[10];
      acStack_2030[3] = s_Board_init_failed__exit__000a704c[0xb];
      acStack_202c[0] = s_Board_init_failed__exit__000a704c[0xc];
      acStack_202c[1] = s_Board_init_failed__exit__000a704c[0xd];
      acStack_202c[2] = s_Board_init_failed__exit__000a704c[0xe];
      acStack_202c[3] = s_Board_init_failed__exit__000a704c[0xf];
      local_2028._0_1_ = s_Board_init_failed__exit__000a704c[0x10];
      local_2028._1_1_ = s_Board_init_failed__exit__000a704c[0x11];
      local_2028._2_1_ = s_Board_init_failed__exit__000a704c[0x12];
      cStack_2025 = s_Board_init_failed__exit__000a704c[0x13];
      local_2024 = (undefined2  [2])s_Board_init_failed__exit__000a704c._20_4_;
      local_2020[0] = (short)ram0x000a7064;
      FUN_0004948c(3,&local_2038,0);
    }
    if (DAT_000be63c < 4) goto LAB_0005d890;
    local_2038._0_1_ = s_Parallel_tuning_failed__exit__000a7180[0];
    local_2038._1_1_ = s_Parallel_tuning_failed__exit__000a7180[1];
    local_2038._2_1_ = s_Parallel_tuning_failed__exit__000a7180[2];
    local_2038._3_1_ = s_Parallel_tuning_failed__exit__000a7180[3];
    acStack_2034[0] = s_Parallel_tuning_failed__exit__000a7180[4];
    acStack_2034[1] = s_Parallel_tuning_failed__exit__000a7180[5];
    acStack_2034[2] = s_Parallel_tuning_failed__exit__000a7180[6];
    acStack_2034[3] = s_Parallel_tuning_failed__exit__000a7180[7];
    acStack_2030[0] = s_Parallel_tuning_failed__exit__000a7180[8];
    acStack_2030[1] = s_Parallel_tuning_failed__exit__000a7180[9];
    acStack_2030[2] = s_Parallel_tuning_failed__exit__000a7180[10];
    acStack_2030[3] = s_Parallel_tuning_failed__exit__000a7180[0xb];
    acStack_202c[0] = s_Parallel_tuning_failed__exit__000a7180[0xc];
    acStack_202c[1] = s_Parallel_tuning_failed__exit__000a7180[0xd];
    acStack_202c[2] = s_Parallel_tuning_failed__exit__000a7180[0xe];
    acStack_202c[3] = s_Parallel_tuning_failed__exit__000a7180[0xf];
    local_2028._0_1_ = s_Parallel_tuning_failed__exit__000a7180[0x10];
    local_2028._1_1_ = s_Parallel_tuning_failed__exit__000a7180[0x11];
    local_2028._2_1_ = s_Parallel_tuning_failed__exit__000a7180[0x12];
    cStack_2025 = s_Parallel_tuning_failed__exit__000a7180[0x13];
    local_2024 = (undefined2  [2])s_Parallel_tuning_failed__exit__000a7180._20_4_;
    local_2020 = (undefined2  [2])s_Parallel_tuning_failed__exit__000a7180._24_4_;
    local_201c = (undefined3)ram0x000a719c;
    FUN_0004948c(3,&local_2038,0);
  }
  if (3 < DAT_000be63c) {
    local_2038._0_1_ = s_Dump_freq_tuning_fine_result__000a71a0[0];
    local_2038._1_1_ = s_Dump_freq_tuning_fine_result__000a71a0[1];
    local_2038._2_1_ = s_Dump_freq_tuning_fine_result__000a71a0[2];
    local_2038._3_1_ = s_Dump_freq_tuning_fine_result__000a71a0[3];
    acStack_2034[0] = s_Dump_freq_tuning_fine_result__000a71a0[4];
    acStack_2034[1] = s_Dump_freq_tuning_fine_result__000a71a0[5];
    acStack_2034[2] = s_Dump_freq_tuning_fine_result__000a71a0[6];
    acStack_2034[3] = s_Dump_freq_tuning_fine_result__000a71a0[7];
    acStack_2030[0] = s_Dump_freq_tuning_fine_result__000a71a0[8];
    acStack_2030[1] = s_Dump_freq_tuning_fine_result__000a71a0[9];
    acStack_2030[2] = s_Dump_freq_tuning_fine_result__000a71a0[10];
    acStack_2030[3] = s_Dump_freq_tuning_fine_result__000a71a0[0xb];
    acStack_202c[0] = s_Dump_freq_tuning_fine_result__000a71a0[0xc];
    acStack_202c[1] = s_Dump_freq_tuning_fine_result__000a71a0[0xd];
    acStack_202c[2] = s_Dump_freq_tuning_fine_result__000a71a0[0xe];
    acStack_202c[3] = s_Dump_freq_tuning_fine_result__000a71a0[0xf];
    local_2028._0_1_ = s_Dump_freq_tuning_fine_result__000a71a0[0x10];
    local_2028._1_1_ = s_Dump_freq_tuning_fine_result__000a71a0[0x11];
    local_2028._2_1_ = s_Dump_freq_tuning_fine_result__000a71a0[0x12];
    cStack_2025 = s_Dump_freq_tuning_fine_result__000a71a0[0x13];
    local_2024 = (undefined2  [2])s_Dump_freq_tuning_fine_result__000a71a0._20_4_;
    local_2020 = (undefined2  [2])s_Dump_freq_tuning_fine_result__000a71a0._24_4_;
    local_201c = (undefined3)ram0x000a71bc;
    FUN_0004948c(3,&local_2038,0);
  }
LAB_0005d890:
  FUN_0005cc6c(0xff,DAT_00944b8c + 1);
  return iVar14;
}


