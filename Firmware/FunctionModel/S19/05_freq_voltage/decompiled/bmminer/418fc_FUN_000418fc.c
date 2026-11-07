// FUN_000418fc @ 000418fc  size=3280  callers=0
// program: bmminer


int FUN_000418fc(void)

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
  undefined4 local_1048;
  undefined1 local_1044 [4];
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  int local_1038;
  char acStack_1034 [12];
  undefined4 local_1028;
  undefined4 local_1024;
  undefined4 local_1020;
  undefined4 local_101c;
  char local_1018 [4068];
  
  if (3 < DAT_00087bbc) {
    local_1038._0_1_ = 'D';
    local_1038._1_1_ = 'o';
    local_1038._2_1_ = ' ';
    local_1038._3_1_ = 'f';
    builtin_strncpy(acStack_1034,"req tuning f",0xc);
    local_1028._0_1_ = 'i';
    local_1028._1_1_ = 'n';
    local_1028._2_1_ = 'e';
    local_1028._3_1_ = '.';
    local_1024._0_1_ = '\n';
    local_1024._1_1_ = '\0';
    FUN_00032218(3,&local_1038,0);
  }
  iVar13 = 0;
  do {
    iVar4 = FUN_000201d8(iVar13);
    if ((iVar4 != 0) && (iVar4 = FUN_0002002c(), iVar4 != 0)) {
      iVar5 = *DAT_00507494;
      piVar9 = DAT_00507494 + iVar4 + iVar13 * 0x100;
      piVar12 = DAT_00507494 + iVar13 * 0x100;
      do {
        piVar12 = piVar12 + 1;
        *piVar12 = *(int *)(iVar5 + iVar13 * 4 + 4);
      } while (piVar12 != piVar9);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 4);
  FUN_0003b500(*(undefined4 *)*DAT_00507494);
  memcpy(DAT_00507494 + 0x405,DAT_00507494 + 1,0x1000);
  if (3 < DAT_00087bbc) {
    local_1038 = CONCAT22(local_1038._2_2_,10);
    FUN_00032eb0(3,&local_1038,0);
    if (3 < DAT_00087bbc) {
      local_1038._0_1_ = '>';
      local_1038._1_1_ = '>';
      local_1038._2_1_ = '>';
      local_1038._3_1_ = '>';
      builtin_strncpy(acStack_1034," Do freq tun",0xc);
      local_1028._0_1_ = 'i';
      local_1028._1_1_ = 'n';
      local_1028._2_1_ = 'g';
      local_1028._3_1_ = ' ';
      local_1024._0_1_ = 'f';
      local_1024._1_1_ = 'i';
      local_1024._2_1_ = 'n';
      local_1024._3_1_ = 'e';
      local_1020._0_1_ = ' ';
      local_1020._1_1_ = 'p';
      local_1020._2_1_ = 'a';
      local_1020._3_1_ = 'r';
      local_101c._0_1_ = 'a';
      local_101c._1_1_ = 'l';
      local_101c._2_1_ = 'l';
      local_101c._3_1_ = 'e';
      builtin_strncpy(local_1018,"l.\n",4);
      FUN_00032218(3,&local_1038,0);
    }
  }
  iVar13 = 0;
  do {
    iVar4 = FUN_000201d8(iVar13);
    if (iVar4 != 0) {
      iVar4 = FUN_00040e04(iVar13);
      uVar16 = 2;
      if (iVar4 == 0) {
        uVar16 = 1;
      }
      FUN_0003e948(iVar13,uVar16);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 4);
LAB_000419c4:
  iVar13 = FUN_0003ecb4();
  if (iVar13 == 0) {
    iVar13 = 0;
  }
  else {
    if (3 < DAT_00087bbc) {
      snprintf((char *)&local_1038,0x800,"is_need_serial = %d\n",0);
      FUN_00032218(3,&local_1038,0);
      if (3 < DAT_00087bbc) {
        local_1038 = CONCAT22(local_1038._2_2_,10);
        FUN_00032eb0(3,&local_1038,0);
        if (3 < DAT_00087bbc) {
          local_1038._0_1_ = '>';
          local_1038._1_1_ = '>';
          local_1038._2_1_ = '>';
          local_1038._3_1_ = '>';
          builtin_strncpy(acStack_1034," Do single g",0xc);
          local_1028._0_1_ = 'r';
          local_1028._1_1_ = 'a';
          local_1028._2_1_ = 'd';
          local_1028._3_1_ = 'e';
          local_1024._0_1_ = ' ';
          local_1024._1_1_ = 't';
          local_1024._2_1_ = 'u';
          local_1024._3_1_ = 'n';
          local_1020._0_1_ = 'i';
          local_1020._1_1_ = 'n';
          local_1020._2_1_ = 'g';
          local_1020._3_1_ = '.';
          local_101c._0_1_ = '\n';
          local_101c._1_1_ = '\0';
          FUN_00032218(3,&local_1038,0);
        }
      }
    }
    iVar13 = 0;
    do {
      iVar4 = FUN_000201d8(iVar13);
      if (((iVar4 != 0) && (iVar4 = FUN_0003eabc(iVar13), iVar4 == 1)) && (3 < DAT_00087bbc)) {
        snprintf((char *)&local_1038,0x800,"chain = %d, grade = %d\n",iVar13,
                 DAT_00507494[iVar13 + 0xc05]);
        FUN_00032218(3,&local_1038,0);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 4);
    if (3 < DAT_00087bbc) {
      local_1038._0_1_ = 'B';
      local_1038._1_1_ = 'o';
      local_1038._2_1_ = 'a';
      local_1038._3_1_ = 'r';
      builtin_strncpy(acStack_1034,"d init start",0xc);
      local_1028._0_1_ = '.';
      local_1028._1_1_ = '\n';
      local_1028._2_1_ = '\0';
      FUN_00032218(3,&local_1038,0);
    }
    iVar13 = FUN_0003f2d0(*(undefined4 *)(*DAT_00507494 + 0x28));
    if (iVar13 == 0) {
      FUN_0003ed98();
      piVar9 = DAT_00507494;
      DAT_00507494[0xc09] = 0;
      piVar9[0xc0a] = 0;
      piVar9[0xc0b] = 0;
      piVar9[0xc0c] = 0;
      memset(&local_1038,0,0x1000);
      iVar13 = 0;
      do {
        iVar4 = FUN_000201d8(iVar13);
        if (iVar4 != 0) {
          iVar4 = FUN_0003eabc(iVar13);
          if (iVar4 == 1) {
            iVar4 = FUN_0002002c();
            if (iVar4 != 0) {
              piVar12 = DAT_00507494 + iVar13 * 0x100;
              piVar9 = &local_1038 + iVar13 * 0x100;
              do {
                piVar12 = piVar12 + 1;
                *piVar9 = *piVar12;
                piVar9 = piVar9 + 1;
              } while (piVar12 != DAT_00507494 + iVar4 + iVar13 * 0x100);
            }
          }
          else {
            uVar7 = FUN_00040bc0(iVar13,DAT_00507494 + 1);
            if (*(uint *)(*DAT_00507494 + 0x18) < uVar7) {
              iVar4 = FUN_0002002c();
              if (iVar4 != 0) {
                piVar9 = &local_1038 + iVar13 * 0x100;
                do {
                  piVar12 = piVar9 + 1;
                  *piVar9 = *(int *)(*DAT_00507494 + 0x18);
                  piVar9 = piVar12;
                } while (piVar12 != &local_1038 + iVar4 + iVar13 * 0x100);
              }
            }
            else {
              iVar4 = FUN_0002002c();
              if (iVar4 != 0) {
                piVar12 = DAT_00507494 + iVar13 * 0x100;
                piVar9 = &local_1038 + iVar13 * 0x100;
                do {
                  piVar12 = piVar12 + 1;
                  *piVar9 = *piVar12;
                  piVar9 = piVar9 + 1;
                } while (piVar12 != DAT_00507494 + iVar4 + iVar13 * 0x100);
              }
            }
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != 4);
      iVar13 = thunk_FUN_0001cf54();
      iVar4 = FUN_0003b510();
      if (iVar13 == iVar4) {
        uVar16 = VectorSignedToFloat(DAT_00087df4,(byte)(in_fpscr >> 0x16) & 3);
        FUN_0001e400(uVar16,&local_1038,DAT_0048d39c,*(undefined1 *)(*DAT_00507494 + 0x24));
LAB_00041c18:
        iVar13 = FUN_0003ecb4();
        if (iVar13 == 0) {
          if (DAT_00087bbc < 4) goto LAB_000419c4;
          iVar13 = 1;
LAB_000421a8:
          snprintf((char *)&local_1038,0x800,"is_single_grade_done = %d\n",iVar13);
          FUN_00032218(3,&local_1038,0);
        }
        else {
          iVar13 = 0;
          do {
            iVar4 = FUN_000201d8(iVar13);
            if (((iVar4 != 0) && (iVar4 = FUN_0003eabc(iVar13), iVar4 == 1)) &&
               (iVar4 = FUN_00040bc0(iVar13,DAT_00507494 + 0x405), 3 < DAT_00087bbc)) {
              snprintf((char *)&local_1038,0x800,"chain = %d, freq_avg = %d, freq_threshold = %d\n",
                       iVar13,iVar4,*(int *)(*DAT_00507494 + 0x18));
              FUN_00032218(3,&local_1038,0);
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 != 4);
          iVar13 = 1;
          iVar4 = 0;
          do {
            iVar5 = FUN_000201d8(iVar4);
            if ((iVar5 != 0) && (iVar5 = FUN_0003eabc(iVar4), iVar5 == 1)) {
              iVar5 = DAT_00507494[iVar4 + 0xc09];
              if (3 < DAT_00087bbc) {
                snprintf((char *)&local_1038,0x800,
                         "chain = %d, grade_curr = %d, is_grade_curr_done = %d\n",iVar4,
                         DAT_00507494[iVar4 + 0xc05],iVar5);
                FUN_00032218(3,&local_1038,0);
                iVar5 = DAT_00507494[iVar4 + 0xc09];
              }
              if (iVar5 == 0) {
                iVar13 = 0;
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 != 4);
          if (3 < DAT_00087bbc) goto LAB_000421a8;
        }
        if (iVar13 == 0) {
          iVar13 = 0;
          do {
            iVar4 = FUN_000201d8(iVar13);
            if (((iVar4 != 0) && (iVar4 = FUN_0003eabc(iVar13), iVar4 == 1)) &&
               (DAT_00507494[iVar13 + 0xc09] == 0)) {
              iVar4 = FUN_0002002c();
              if (iVar4 == 0) {
                iVar5 = *DAT_00507494;
                iVar4 = 0;
              }
              else {
                iVar5 = *DAT_00507494;
                piVar12 = DAT_00507494 + iVar4 + iVar13 * 0x100;
                piVar10 = DAT_00507494 + iVar13 * 0x100;
                iVar4 = 0;
                piVar9 = DAT_00507494 + iVar13 * 0x100 + 0x405;
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
                FUN_0001db30(iVar4,1);
              }
              uVar16 = VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
              FUN_00057ae4(uVar16,&uStack_1040,local_1044,0);
              uStack_103c._0_3_ = CONCAT12(local_1044[0],(undefined2)uStack_103c);
              if (3 < DAT_00087bbc) {
                snprintf((char *)&local_1038,0x800,"chain = %d, grade_curr = %d, freq_target = %d\n"
                         ,iVar13,DAT_00507494[iVar13 + 0xc05],iVar4);
                FUN_00032218(3,&local_1038,0);
              }
              iVar5 = FUN_0002002c();
              piVar9 = DAT_00507494;
              if (iVar5 != 0) {
                iVar14 = 0;
                do {
                  while (piVar9[iVar13 * 0x100 + iVar14 + 0x405] == iVar4) {
                    if (3 < DAT_00087bbc) {
                      snprintf((char *)&local_1038,0x800,"chain = %d, asic = %d, freq = %d\n",iVar13
                               ,iVar14,iVar4);
                      FUN_00032218(3,&local_1038,0);
                    }
                    sVar3 = FUN_0002009c();
                    sVar1 = (short)iVar14;
                    iVar14 = iVar14 + 1;
                    FUN_000210e4(iVar13,0,(int)sVar3 * (int)sVar1 & 0xff,DAT_0048d39c,uStack_1040,
                                 uStack_103c);
                    usleep(1000000);
                    piVar9 = DAT_00507494;
                    if (iVar5 == iVar14) goto LAB_000420e4;
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar5 != iVar14);
              }
LAB_000420e4:
              FUN_00040f68(iVar13,piVar9 + 0x405);
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 != 4);
          iVar5 = 0;
          uVar16 = FUN_00040c6c(0xff,DAT_00507494 + 0x405);
          FUN_000368b4(uVar16,DAT_00087b68,0x14);
          local_1048 = FUN_00040d38(0xff,DAT_00507494 + 0x405);
          FUN_0003fb88(&local_1048);
          uVar21 = FUN_0003e510();
          iVar13 = (int)((ulonglong)uVar21 >> 0x20);
          iVar4 = (int)uVar21;
          do {
            uVar21 = FUN_000201d8(iVar5,iVar13);
            iVar13 = (int)((ulonglong)uVar21 >> 0x20);
            if ((int)uVar21 != 0) {
              uVar21 = FUN_0003eabc(iVar5);
              iVar13 = (int)((ulonglong)uVar21 >> 0x20);
              if (((int)uVar21 == 1) && (iVar13 = iVar4, DAT_00507494[iVar5 + 0xc09] == 0)) {
                FUN_0003f370(iVar5);
                iVar13 = extraout_r1;
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != 4);
          iVar5 = 0;
          iVar13 = FUN_000201d8(0,iVar13);
          do {
            if (((iVar13 != 0) && (iVar13 = FUN_0003eabc(iVar5), iVar13 == 1)) &&
               (DAT_00507494[iVar5 + 0xc09] == 0)) {
              iVar13 = FUN_0002002c();
              if (0 < iVar13) {
                puVar15 = (undefined4 *)(&DAT_00808ffc + iVar5 * 0x400 + iVar4);
                iVar14 = 0;
                do {
                  puVar15 = puVar15 + 1;
                  uVar16 = *puVar15;
                  iVar6 = FUN_0002006c();
                  dVar20 = (double)VectorUnsignedToFloat(uVar16,(byte)(in_fpscr >> 0x16) & 3);
                  iVar8 = iVar5 * 0x100 + iVar14;
                  iVar14 = iVar14 + 1;
                  dVar18 = (double)VectorSignedToFloat(iVar6 << 3,(byte)(in_fpscr >> 0x16) & 3);
                  uVar7 = in_fpscr & 0xfffffff | (uint)(dVar20 == dVar18 * 0.98) << 0x1e;
                  in_fpscr = uVar7 | (uint)(dVar18 * 0.98 <= dVar20) << 0x1d;
                  if ((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar7 >> 0x1e,0)) {
                    DAT_00507494[iVar8 + 0x805] = 0;
                  }
                  else {
                    DAT_00507494[iVar8 + 0x805] = 1;
                  }
                } while (iVar13 != iVar14);
              }
              iVar13 = FUN_0002002c();
              if (iVar13 < 1) {
LAB_0004233c:
                FUN_0003e948(iVar5,2);
              }
              else {
                iVar14 = 0;
                piVar9 = DAT_00507494 + iVar5 * 0x100 + 0x804;
                do {
                  piVar9 = piVar9 + 1;
                  iVar14 = iVar14 + *piVar9;
                } while (DAT_00507494 + iVar13 + iVar5 * 0x100 + 0x804 != piVar9);
                if (iVar14 == 0) goto LAB_0004233c;
              }
              iVar13 = FUN_0002002c();
              piVar9 = DAT_00507494;
              if (iVar13 != 0) {
                piVar12 = DAT_00507494 + iVar13 + iVar5 * 0x100;
                piVar11 = DAT_00507494 + iVar5 * 0x100;
                piVar10 = DAT_00507494 + iVar5 * 0x100 + 0x404;
                do {
                  piVar10 = piVar10 + 1;
                  piVar11 = piVar11 + 1;
                  *piVar11 = *piVar10;
                } while (piVar11 != piVar12);
              }
              uVar7 = DAT_00087bbc;
              piVar9[iVar5 + 0x401] = 1;
              if (3 < uVar7) {
                snprintf((char *)&local_1038,0x800,
                         "Update freq result of high grade, chain = %d, grade_curr = %d.\n",iVar5,
                         piVar9[iVar5 + 0xc05]);
                FUN_00032218(3,&local_1038,0);
              }
              fVar17 = (float)FUN_0003fb44(iVar5,iVar4);
              fVar19 = (float)DAT_00507494[iVar5 + 0xc0d];
              uVar7 = in_fpscr & 0xfffffff | (uint)(fVar17 < fVar19) << 0x1f |
                      (uint)(fVar17 == fVar19) << 0x1e;
              in_fpscr = uVar7 | (uint)(NAN(fVar17) || NAN(fVar19)) << 0x1c;
              bVar2 = (byte)(uVar7 >> 0x18);
              if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                DAT_00507494[iVar5 + 0xc0d] = (int)fVar17;
              }
              iVar13 = FUN_00040e04(iVar5);
              if (iVar13 != 0) {
                FUN_0003e948(iVar5,2);
              }
            }
            iVar5 = iVar5 + 1;
            if (iVar5 == 4) goto LAB_00041c18;
            iVar13 = FUN_000201d8(iVar5);
          } while( true );
        }
        goto LAB_000419c4;
      }
      iVar13 = FUN_0003b524();
      uVar16 = VectorSignedToFloat(DAT_00087df4,(byte)(in_fpscr >> 0x16) & 3);
      FUN_0001e400(uVar16,&local_1038,DAT_0048d39c,*(undefined1 *)(*DAT_00507494 + 0x24));
      if (iVar13 == 0) goto LAB_00041c18;
    }
    else {
      if (DAT_00087bbc < 4) goto LAB_00041a44;
      local_1038._0_1_ = 'B';
      local_1038._1_1_ = 'o';
      local_1038._2_1_ = 'a';
      local_1038._3_1_ = 'r';
      builtin_strncpy(acStack_1034,"d init faile",0xc);
      local_1028._0_1_ = 'd';
      local_1028._1_1_ = ',';
      local_1028._2_1_ = ' ';
      local_1028._3_1_ = 'e';
      local_1024._0_1_ = 'x';
      local_1024._1_1_ = 'i';
      local_1024._2_1_ = 't';
      local_1024._3_1_ = '.';
      local_1020._0_1_ = '\n';
      local_1020._1_1_ = '\0';
      FUN_00032218(3,&local_1038,0);
    }
    if (DAT_00087bbc < 4) goto LAB_00041a44;
    local_1038._0_1_ = 'P';
    local_1038._1_1_ = 'a';
    local_1038._2_1_ = 'r';
    local_1038._3_1_ = 'a';
    builtin_strncpy(acStack_1034,"llel tuning ",0xc);
    local_1028._0_1_ = 'f';
    local_1028._1_1_ = 'a';
    local_1028._2_1_ = 'i';
    local_1028._3_1_ = 'l';
    local_1024._0_1_ = 'e';
    local_1024._1_1_ = 'd';
    local_1024._2_1_ = ',';
    local_1024._3_1_ = ' ';
    local_1020._0_1_ = 'e';
    local_1020._1_1_ = 'x';
    local_1020._2_1_ = 'i';
    local_1020._3_1_ = 't';
    local_101c._0_1_ = '.';
    local_101c._1_1_ = '\n';
    local_101c._2_1_ = '\0';
    FUN_00032218(3,&local_1038,0);
  }
  if (3 < DAT_00087bbc) {
    local_1038._0_1_ = 'D';
    local_1038._1_1_ = 'u';
    local_1038._2_1_ = 'm';
    local_1038._3_1_ = 'p';
    builtin_strncpy(acStack_1034," freq tuning",0xc);
    local_1028._0_1_ = ' ';
    local_1028._1_1_ = 'f';
    local_1028._2_1_ = 'i';
    local_1028._3_1_ = 'n';
    local_1024._0_1_ = 'e';
    local_1024._1_1_ = ' ';
    local_1024._2_1_ = 'r';
    local_1024._3_1_ = 'e';
    local_1020._0_1_ = 's';
    local_1020._1_1_ = 'u';
    local_1020._2_1_ = 'l';
    local_1020._3_1_ = 't';
    local_101c._0_1_ = ':';
    local_101c._1_1_ = '\n';
    local_101c._2_1_ = '\0';
    FUN_00032218(3,&local_1038,0);
  }
LAB_00041a44:
  FUN_00040f68(0xff,DAT_00507494 + 1);
  return iVar13;
}

