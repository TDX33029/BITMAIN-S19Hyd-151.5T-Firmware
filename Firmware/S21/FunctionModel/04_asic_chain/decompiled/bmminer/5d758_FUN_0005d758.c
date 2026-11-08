// FUN_0005d758 @ 0005d758  size=3288  callers=0
// program: bmminer


int FUN_0005d758(void)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int extraout_r1;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  uint in_fpscr;
  undefined4 uVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  undefined8 uVar21;
  undefined4 local_2048;
  undefined1 local_2044 [4];
  undefined4 uStack_2040;
  undefined4 uStack_203c;
  int local_2038;
  char acStack_2034 [12];
  undefined4 local_2028;
  undefined4 local_2024;
  undefined4 local_2020;
  undefined4 local_201c;
  char local_2018 [8164];
  
  if (3 < DAT_000be63c) {
    local_2038._0_1_ = 'D';
    local_2038._1_1_ = 'o';
    local_2038._2_1_ = ' ';
    local_2038._3_1_ = 'f';
    builtin_strncpy(acStack_2034,"req tuning f",0xc);
    local_2028._0_1_ = 'i';
    local_2028._1_1_ = 'n';
    local_2028._2_1_ = 'e';
    local_2028._3_1_ = '.';
    local_2024._0_1_ = '\n';
    local_2024._1_1_ = '\0';
    FUN_0004948c(3,&local_2038,0);
  }
  iVar13 = 0;
  do {
    iVar4 = FUN_0002a6f0(iVar13);
    if ((iVar4 != 0) && (iVar4 = FUN_0002a514(), iVar4 != 0)) {
      iVar5 = *DAT_00944b8c;
      piVar9 = DAT_00944b8c + iVar4 + iVar13 * 0x100;
      piVar12 = DAT_00944b8c + iVar13 * 0x100;
      do {
        piVar12 = piVar12 + 1;
        *piVar12 = *(int *)(iVar5 + iVar13 * 4 + 4);
      } while (piVar12 != piVar9);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 4);
  FUN_00057a04(*(undefined4 *)*DAT_00944b8c);
  memcpy(DAT_00944b8c + 0x405,DAT_00944b8c + 1,0x1000);
  if (3 < DAT_000be63c) {
    memset(&local_2038,0,0x2000);
    local_2038 = CONCAT22(local_2038._2_2_,10);
    FUN_0004a3a4(3,&local_2038,0);
    if (3 < DAT_000be63c) {
      local_2038._0_1_ = '>';
      local_2038._1_1_ = '>';
      local_2038._2_1_ = '>';
      local_2038._3_1_ = '>';
      builtin_strncpy(acStack_2034," Do freq tun",0xc);
      local_2028._0_1_ = 'i';
      local_2028._1_1_ = 'n';
      local_2028._2_1_ = 'g';
      local_2028._3_1_ = ' ';
      local_2024._0_1_ = 'f';
      local_2024._1_1_ = 'i';
      local_2024._2_1_ = 'n';
      local_2024._3_1_ = 'e';
      local_2020._0_1_ = ' ';
      local_2020._1_1_ = 'p';
      local_2020._2_1_ = 'a';
      local_2020._3_1_ = 'r';
      local_201c._0_1_ = 'a';
      local_201c._1_1_ = 'l';
      local_201c._2_1_ = 'l';
      local_201c._3_1_ = 'e';
      builtin_strncpy(local_2018,"l.\n",4);
      FUN_0004948c(3,&local_2038,0);
    }
  }
  iVar13 = 0;
  do {
    iVar4 = FUN_0002a6f0(iVar13);
    if (iVar4 != 0) {
      iVar4 = FUN_0005cafc(iVar13);
      uVar16 = 2;
      if (iVar4 == 0) {
        uVar16 = 1;
      }
      FUN_0005a3cc(iVar13,uVar16);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 4);
LAB_0005d818:
  iVar13 = FUN_0005a738();
  if (iVar13 == 0) {
    iVar13 = 0;
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
          local_2038._0_1_ = '>';
          local_2038._1_1_ = '>';
          local_2038._2_1_ = '>';
          local_2038._3_1_ = '>';
          builtin_strncpy(acStack_2034," Do single g",0xc);
          local_2028._0_1_ = 'r';
          local_2028._1_1_ = 'a';
          local_2028._2_1_ = 'd';
          local_2028._3_1_ = 'e';
          local_2024._0_1_ = ' ';
          local_2024._1_1_ = 't';
          local_2024._2_1_ = 'u';
          local_2024._3_1_ = 'n';
          local_2020._0_1_ = 'i';
          local_2020._1_1_ = 'n';
          local_2020._2_1_ = 'g';
          local_2020._3_1_ = '.';
          local_201c._0_1_ = '\n';
          local_201c._1_1_ = '\0';
          FUN_0004948c(3,&local_2038,0);
        }
      }
    }
    iVar13 = 0;
    do {
      iVar4 = FUN_0002a6f0(iVar13);
      if (((iVar4 != 0) && (iVar4 = FUN_0005a540(iVar13), iVar4 == 1)) && (3 < DAT_000be63c)) {
        snprintf((char *)&local_2038,0x2000,"chain = %d, grade = %d\n",iVar13,
                 DAT_00944b8c[iVar13 + 0xc05]);
        FUN_0004948c(3,&local_2038,0);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 4);
    if (3 < DAT_000be63c) {
      local_2038._0_1_ = 'B';
      local_2038._1_1_ = 'o';
      local_2038._2_1_ = 'a';
      local_2038._3_1_ = 'r';
      builtin_strncpy(acStack_2034,"d init start",0xc);
      local_2028._0_1_ = '.';
      local_2028._1_1_ = '\n';
      local_2028._2_1_ = '\0';
      FUN_0004948c(3,&local_2038,0);
    }
    iVar13 = FUN_0005ad54(*(undefined4 *)(*DAT_00944b8c + 0x28));
    if (iVar13 == 0) {
      FUN_0005a81c();
      piVar9 = DAT_00944b8c;
      DAT_00944b8c[0xc09] = 0;
      piVar9[0xc0a] = 0;
      piVar9[0xc0b] = 0;
      piVar9[0xc0c] = 0;
      memset(&local_2038,0,0x1000);
      iVar13 = 0;
      do {
        iVar4 = FUN_0002a6f0(iVar13);
        if (iVar4 != 0) {
          iVar4 = FUN_0005a540(iVar13);
          if (iVar4 == 1) {
            iVar4 = FUN_0002a514();
            if (iVar4 != 0) {
              piVar12 = DAT_00944b8c + iVar13 * 0x100;
              piVar9 = &local_2038 + iVar13 * 0x100;
              do {
                piVar12 = piVar12 + 1;
                *piVar9 = *piVar12;
                piVar9 = piVar9 + 1;
              } while (piVar12 != DAT_00944b8c + iVar4 + iVar13 * 0x100);
            }
          }
          else {
            uVar7 = FUN_0005c8b8(iVar13,DAT_00944b8c + 1);
            if (*(uint *)(*DAT_00944b8c + 0x18) < uVar7) {
              iVar4 = FUN_0002a514();
              if (iVar4 != 0) {
                piVar9 = &local_2038 + iVar13 * 0x100;
                do {
                  piVar12 = piVar9 + 1;
                  *piVar9 = *(int *)(*DAT_00944b8c + 0x18);
                  piVar9 = piVar12;
                } while (piVar12 != &local_2038 + iVar4 + iVar13 * 0x100);
              }
            }
            else {
              iVar4 = FUN_0002a514();
              if (iVar4 != 0) {
                piVar12 = DAT_00944b8c + iVar13 * 0x100;
                piVar9 = &local_2038 + iVar13 * 0x100;
                do {
                  piVar12 = piVar12 + 1;
                  *piVar9 = *piVar12;
                  piVar9 = piVar9 + 1;
                } while (piVar12 != DAT_00944b8c + iVar4 + iVar13 * 0x100);
              }
            }
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != 4);
      iVar13 = thunk_FUN_00024c74();
      iVar4 = FUN_00057a14();
      if (iVar13 == iVar4) {
        uVar16 = VectorSignedToFloat(DAT_000be8f0,(byte)(in_fpscr >> 0x16) & 3);
        FUN_00026ce8(uVar16,&local_2038,DAT_008c7044,*(undefined1 *)(*DAT_00944b8c + 0x24));
LAB_0005da78:
        iVar13 = FUN_0005a738();
        if (iVar13 == 0) {
          if (DAT_000be63c < 4) goto LAB_0005d818;
          iVar13 = 1;
LAB_0005e008:
          snprintf((char *)&local_2038,0x2000,"is_single_grade_done = %d\n",iVar13);
          FUN_0004948c(3,&local_2038,0);
        }
        else {
          iVar13 = 0;
          do {
            iVar4 = FUN_0002a6f0(iVar13);
            if (((iVar4 != 0) && (iVar4 = FUN_0005a540(iVar13), iVar4 == 1)) &&
               (iVar4 = FUN_0005c8b8(iVar13,DAT_00944b8c + 0x405), 3 < DAT_000be63c)) {
              snprintf((char *)&local_2038,0x2000,"chain = %d, freq_avg = %d, freq_threshold = %d\n"
                       ,iVar13,iVar4,*(int *)(*DAT_00944b8c + 0x18));
              FUN_0004948c(3,&local_2038,0);
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 != 4);
          iVar13 = 1;
          iVar4 = 0;
          do {
            iVar5 = FUN_0002a6f0(iVar4);
            if ((iVar5 != 0) && (iVar5 = FUN_0005a540(iVar4), iVar5 == 1)) {
              iVar5 = DAT_00944b8c[iVar4 + 0xc09];
              if (3 < DAT_000be63c) {
                snprintf((char *)&local_2038,0x2000,
                         "chain = %d, grade_curr = %d, is_grade_curr_done = %d\n",iVar4,
                         DAT_00944b8c[iVar4 + 0xc05],iVar5);
                FUN_0004948c(3,&local_2038,0);
                iVar5 = DAT_00944b8c[iVar4 + 0xc09];
              }
              if (iVar5 == 0) {
                iVar13 = 0;
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 != 4);
          if (3 < DAT_000be63c) goto LAB_0005e008;
        }
        if (iVar13 == 0) {
          iVar13 = 0;
          do {
            iVar4 = FUN_0002a6f0(iVar13);
            if (((iVar4 != 0) && (iVar4 = FUN_0005a540(iVar13), iVar4 == 1)) &&
               (DAT_00944b8c[iVar13 + 0xc09] == 0)) {
              iVar4 = FUN_0002a514();
              if (iVar4 == 0) {
                iVar5 = *DAT_00944b8c;
                iVar4 = 0;
              }
              else {
                iVar5 = *DAT_00944b8c;
                piVar12 = DAT_00944b8c + iVar4 + iVar13 * 0x100;
                piVar10 = DAT_00944b8c + iVar13 * 0x100;
                iVar4 = 0;
                piVar9 = DAT_00944b8c + iVar13 * 0x100 + 0x405;
                do {
                  piVar10 = piVar10 + 1;
                  iVar14 = *piVar10;
                  *piVar9 = iVar14;
                  if (piVar9[0x400] == 1) {
                    iVar4 = iVar14 - *(int *)(iVar5 + 0x20);
                    *piVar9 = iVar4;
                  }
                  piVar9 = piVar9 + 1;
                } while (piVar10 != piVar12);
              }
              if (*(char *)(iVar5 + 0x25) != '\0') {
                FUN_00025b34(iVar4,1);
              }
              uVar16 = VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
              FUN_00081ee8(uVar16,&uStack_2040,local_2044,0);
              uStack_203c._0_3_ = CONCAT12(local_2044[0],(undefined2)uStack_203c);
              if (3 < DAT_000be63c) {
                snprintf((char *)&local_2038,0x2000,
                         "chain = %d, grade_curr = %d, freq_target = %d\n",iVar13,
                         DAT_00944b8c[iVar13 + 0xc05],iVar4);
                FUN_0004948c(3,&local_2038,0);
              }
              iVar5 = FUN_0002a514();
              piVar9 = DAT_00944b8c;
              if (iVar5 != 0) {
                iVar14 = 0;
                do {
                  while (piVar9[iVar13 * 0x100 + iVar14 + 0x405] == iVar4) {
                    if (3 < DAT_000be63c) {
                      snprintf((char *)&local_2038,0x2000,"chain = %d, asic = %d, freq = %d\n",
                               iVar13,iVar14,iVar4);
                      FUN_0004948c(3,&local_2038,0);
                    }
                    sVar3 = FUN_0002a584();
                    sVar1 = (short)iVar14;
                    iVar14 = iVar14 + 1;
                    FUN_0002d6b0(iVar13,0,(int)sVar3 * (int)sVar1 & 0xff,DAT_008c7044,uStack_2040,
                                 uStack_203c);
                    usleep(1000000);
                    piVar9 = DAT_00944b8c;
                    if (iVar5 == iVar14) goto LAB_0005df44;
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar5 != iVar14);
              }
LAB_0005df44:
              FUN_0005cc6c(iVar13,piVar9 + 0x405);
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 != 4);
          iVar5 = 0;
          uVar16 = FUN_0005c964(0xff,DAT_00944b8c + 0x405);
          FUN_0004ef68(uVar16,DAT_000be5ec,0x14);
          local_2048 = FUN_0005ca30(0xff,DAT_00944b8c + 0x405);
          FUN_0005b784(&local_2048);
          uVar21 = FUN_00059f94();
          iVar13 = (int)((ulonglong)uVar21 >> 0x20);
          iVar4 = (int)uVar21;
          do {
            uVar21 = FUN_0002a6f0(iVar5,iVar13);
            iVar13 = (int)((ulonglong)uVar21 >> 0x20);
            if ((int)uVar21 != 0) {
              uVar21 = FUN_0005a540(iVar5);
              iVar13 = (int)((ulonglong)uVar21 >> 0x20);
              if (((int)uVar21 == 1) && (iVar13 = iVar4, DAT_00944b8c[iVar5 + 0xc09] == 0)) {
                FUN_0005adf4(iVar5);
                iVar13 = extraout_r1;
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != 4);
          iVar5 = 0;
          iVar13 = FUN_0002a6f0(0,iVar13);
          do {
            if (((iVar13 != 0) && (iVar13 = FUN_0005a540(iVar5), iVar13 == 1)) &&
               (DAT_00944b8c[iVar5 + 0xc09] == 0)) {
              iVar13 = FUN_0002a514();
              if (0 < iVar13) {
                puVar15 = (undefined4 *)(&DAT_00ff8ffc + iVar5 * 0x400 + iVar4);
                iVar14 = 0;
                do {
                  puVar15 = puVar15 + 1;
                  uVar16 = *puVar15;
                  iVar6 = FUN_0002a554();
                  dVar20 = (double)VectorUnsignedToFloat(uVar16,(byte)(in_fpscr >> 0x16) & 3);
                  iVar8 = iVar5 * 0x100 + iVar14;
                  iVar14 = iVar14 + 1;
                  dVar18 = (double)VectorSignedToFloat(iVar6 << 3,(byte)(in_fpscr >> 0x16) & 3);
                  uVar7 = in_fpscr & 0xfffffff | (uint)(dVar20 == dVar18 * 0.98) << 0x1e;
                  in_fpscr = uVar7 | (uint)(dVar18 * 0.98 <= dVar20) << 0x1d;
                  if ((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar7 >> 0x1e,0)) {
                    DAT_00944b8c[iVar8 + 0x805] = 0;
                  }
                  else {
                    DAT_00944b8c[iVar8 + 0x805] = 1;
                  }
                } while (iVar13 != iVar14);
              }
              iVar13 = FUN_0002a514();
              if (iVar13 < 1) {
LAB_0005e19c:
                FUN_0005a3cc(iVar5,2);
              }
              else {
                iVar14 = 0;
                piVar9 = DAT_00944b8c + iVar5 * 0x100 + 0x804;
                do {
                  piVar9 = piVar9 + 1;
                  iVar14 = iVar14 + *piVar9;
                } while (DAT_00944b8c + iVar13 + iVar5 * 0x100 + 0x804 != piVar9);
                if (iVar14 == 0) goto LAB_0005e19c;
              }
              iVar13 = FUN_0002a514();
              piVar9 = DAT_00944b8c;
              if (iVar13 != 0) {
                piVar12 = DAT_00944b8c + iVar13 + iVar5 * 0x100;
                piVar11 = DAT_00944b8c + iVar5 * 0x100;
                piVar10 = DAT_00944b8c + iVar5 * 0x100 + 0x404;
                do {
                  piVar10 = piVar10 + 1;
                  piVar11 = piVar11 + 1;
                  *piVar11 = *piVar10;
                } while (piVar11 != piVar12);
              }
              uVar7 = DAT_000be63c;
              piVar9[iVar5 + 0x401] = 1;
              if (3 < uVar7) {
                snprintf((char *)&local_2038,0x2000,
                         "Update freq result of high grade, chain = %d, grade_curr = %d.\n",iVar5,
                         piVar9[iVar5 + 0xc05]);
                FUN_0004948c(3,&local_2038,0);
              }
              fVar17 = (float)FUN_0005b740(iVar5,iVar4);
              fVar19 = (float)DAT_00944b8c[iVar5 + 0xc0d];
              uVar7 = in_fpscr & 0xfffffff | (uint)(fVar17 < fVar19) << 0x1f |
                      (uint)(fVar17 == fVar19) << 0x1e;
              in_fpscr = uVar7 | (uint)(NAN(fVar17) || NAN(fVar19)) << 0x1c;
              bVar2 = (byte)(uVar7 >> 0x18);
              if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                DAT_00944b8c[iVar5 + 0xc0d] = (int)fVar17;
              }
              iVar13 = FUN_0005cafc(iVar5);
              if (iVar13 != 0) {
                FUN_0005a3cc(iVar5,2);
              }
            }
            iVar5 = iVar5 + 1;
            if (iVar5 == 4) goto LAB_0005da78;
            iVar13 = FUN_0002a6f0(iVar5);
          } while( true );
        }
        goto LAB_0005d818;
      }
      iVar13 = FUN_00057a28();
      uVar16 = VectorSignedToFloat(DAT_000be8f0,(byte)(in_fpscr >> 0x16) & 3);
      FUN_00026ce8(uVar16,&local_2038,DAT_008c7044,*(undefined1 *)(*DAT_00944b8c + 0x24));
      if (iVar13 == 0) goto LAB_0005da78;
    }
    else {
      if (DAT_000be63c < 4) goto LAB_0005d890;
      local_2038._0_1_ = 'B';
      local_2038._1_1_ = 'o';
      local_2038._2_1_ = 'a';
      local_2038._3_1_ = 'r';
      builtin_strncpy(acStack_2034,"d init faile",0xc);
      local_2028._0_1_ = 'd';
      local_2028._1_1_ = ',';
      local_2028._2_1_ = ' ';
      local_2028._3_1_ = 'e';
      local_2024._0_1_ = 'x';
      local_2024._1_1_ = 'i';
      local_2024._2_1_ = 't';
      local_2024._3_1_ = '.';
      local_2020._0_1_ = '\n';
      local_2020._1_1_ = '\0';
      FUN_0004948c(3,&local_2038,0);
    }
    if (DAT_000be63c < 4) goto LAB_0005d890;
    local_2038._0_1_ = 'P';
    local_2038._1_1_ = 'a';
    local_2038._2_1_ = 'r';
    local_2038._3_1_ = 'a';
    builtin_strncpy(acStack_2034,"llel tuning ",0xc);
    local_2028._0_1_ = 'f';
    local_2028._1_1_ = 'a';
    local_2028._2_1_ = 'i';
    local_2028._3_1_ = 'l';
    local_2024._0_1_ = 'e';
    local_2024._1_1_ = 'd';
    local_2024._2_1_ = ',';
    local_2024._3_1_ = ' ';
    local_2020._0_1_ = 'e';
    local_2020._1_1_ = 'x';
    local_2020._2_1_ = 'i';
    local_2020._3_1_ = 't';
    local_201c._0_1_ = '.';
    local_201c._1_1_ = '\n';
    local_201c._2_1_ = '\0';
    FUN_0004948c(3,&local_2038,0);
  }
  if (3 < DAT_000be63c) {
    local_2038._0_1_ = 'D';
    local_2038._1_1_ = 'u';
    local_2038._2_1_ = 'm';
    local_2038._3_1_ = 'p';
    builtin_strncpy(acStack_2034," freq tuning",0xc);
    local_2028._0_1_ = ' ';
    local_2028._1_1_ = 'f';
    local_2028._2_1_ = 'i';
    local_2028._3_1_ = 'n';
    local_2024._0_1_ = 'e';
    local_2024._1_1_ = ' ';
    local_2024._2_1_ = 'r';
    local_2024._3_1_ = 'e';
    local_2020._0_1_ = 's';
    local_2020._1_1_ = 'u';
    local_2020._2_1_ = 'l';
    local_2020._3_1_ = 't';
    local_201c._0_1_ = ':';
    local_201c._1_1_ = '\n';
    local_201c._2_1_ = '\0';
    FUN_0004948c(3,&local_2038,0);
  }
LAB_0005d890:
  FUN_0005cc6c(0xff,DAT_00944b8c + 1);
  return iVar13;
}

