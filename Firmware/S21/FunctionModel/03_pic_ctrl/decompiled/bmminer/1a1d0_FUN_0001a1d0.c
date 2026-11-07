// FUN_0001a1d0 @ 0001a1d0  size=5412  callers=0
// program: bmminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_0001a1d0(void)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 extraout_r1;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  int iVar22;
  bool bVar23;
  uint in_fpscr;
  float fVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  byte *local_2098;
  uint local_2094;
  int local_2090;
  int local_208c;
  uint local_2088;
  int local_2084;
  int local_2080;
  int local_2074;
  int local_2070;
  int local_2068;
  int local_2064;
  int local_2060;
  int iStack_205c;
  int iStack_2058;
  int local_2054;
  timespec local_2050 [2];
  char local_2040 [4];
  uint local_203c;
  char acStack_2038 [16];
  uint local_2028;
  char acStack_2024 [8168];
  
  prctl(0xf,"temp_mtr",0,0,0);
  if (3 < DAT_000be63c) {
    builtin_strncpy(local_2040,"temp",4);
    local_203c._0_1_ = 'e';
    local_203c._1_1_ = 'r';
    local_203c._2_1_ = 'a';
    local_203c._3_1_ = 't';
    builtin_strncpy(acStack_2038,"ure_monitor_thre",0x10);
    local_2028._0_1_ = 'a';
    local_2028._1_1_ = 'd';
    local_2028._2_1_ = ' ';
    local_2028._3_1_ = 's';
    builtin_strncpy(acStack_2024,"tart...",8);
    FUN_0004948c(3,local_2040,0);
  }
  do {
    while( true ) {
      if (DAT_000bfb74 == 0) {
        if (3 < DAT_000be63c) {
          builtin_strncpy(local_2040,"temp",4);
          local_203c._0_1_ = ' ';
          local_203c._1_1_ = 'm';
          local_203c._2_1_ = 'o';
          local_203c._3_1_ = 'n';
          builtin_strncpy(acStack_2038,"itor thread exit",0x10);
          local_2028 = local_2028 & 0xffffff00;
          FUN_0004948c(3,local_2040,0);
        }
        return 0;
      }
      if (DAT_000bd310 != 0) break;
      usleep(1000000);
    }
    iVar20 = 0;
    local_2090 = 0;
    local_2098 = &DAT_008c70d4;
    do {
      iVar4 = FUN_0002a6f0(iVar20);
      if (iVar4 != 0) {
        iVar4 = 0;
        do {
          iVar5 = FUN_0002a6f0(iVar4);
          iVar12 = iVar4 + 1;
          if (iVar5 != 0 && iVar4 != iVar20) {
            FUN_00017bcc(iVar4);
          }
          iVar4 = iVar12;
        } while (iVar12 != 4);
        iVar12 = 0;
        iVar4 = iVar20 * 4;
        iVar5 = 0;
        do {
          FUN_0002a4e4();
          DAT_000bfb48 = 4;
          if (DAT_000bfb98 == 0) {
            if (iVar5 == 7) {
              bVar17 = (DAT_000c042c ^ 1) & 1;
            }
            else {
              bVar17 = 0;
            }
            if (bVar17 == 0) {
              FUN_0004bd34(&local_2060);
              iVar6 = FUN_0002a6f0(iVar20);
              if (iVar6 == 0) {
                if (DAT_000be63c < 5) {
                  uVar14 = 0xff;
LAB_0001a360:
                  if (iVar5 < 2) {
                    uVar14 = uVar14 + 1;
                    goto LAB_0001ab68;
                  }
                }
                else {
                  snprintf(local_2040,0x2000,"%s chain %d not pluged","read_sensor_on_switch",iVar20
                          );
                  uVar14 = 0xff;
                  FUN_0004948c(4,local_2040,0);
LAB_0001ac20:
                  if (iVar5 < 2) {
LAB_0001ac2c:
                    uVar14 = uVar14 + 1;
                  }
LAB_0001ab68:
                  if (4 < DAT_000be63c) {
LAB_0001ab70:
                    snprintf(local_2040,0x2000,"index %d ,debug_temp %d",iVar5,uVar14);
                    FUN_0004948c(4,local_2040,0);
                  }
                }
                if (iVar5 == 7) goto LAB_0001ada8;
              }
              else {
                if (iVar5 == 0) {
                  iVar6 = FUN_00017ac8(iVar20,5);
                  if ((-1 < iVar6) && (iVar6 = FUN_00017954(iVar20,1), -1 < iVar6)) {
                    iVar6 = FUN_00017cb4(iVar20,1);
                    if (4 < DAT_000be63c) {
                      snprintf(local_2040,0x2000,"read_sensor_on_lm75a index %d sensor temp %d",1,
                               iVar6);
                      FUN_0004948c(4,local_2040,0);
                    }
                    if (iVar6 < 1) {
                      uVar14 = 0x100;
                    }
                    else {
                      uVar14 = iVar6 + 1;
                    }
                    goto LAB_0001ab68;
                  }
LAB_0001ab60:
                  uVar14 = 0x100;
                  goto LAB_0001ab68;
                }
                if (iVar5 == 1) {
                  FUN_00017ac8(iVar20,6);
                  iVar6 = FUN_00017954(iVar20,0);
                  if (-1 < iVar6) {
                    uVar14 = FUN_00017cb4(iVar20,0);
                    if (4 < DAT_000be63c) {
                      snprintf(local_2040,0x2000,"read_sensor_on_lm75a index %d sensor temp %d",0,
                               uVar14);
                      uVar14 = uVar14 + 1;
                      FUN_0004948c(4,local_2040,0);
                      goto LAB_0001ab68;
                    }
                    goto LAB_0001ac2c;
                  }
                  goto LAB_0001ab60;
                }
                if (iVar5 != 7) {
                  iVar6 = FUN_00017ac8(iVar20,(int)(char)((char)iVar5 + -2));
                  if (iVar6 < 0) {
                    uVar14 = 0xff;
                    goto LAB_0001ac20;
                  }
                  usleep(100);
                  uVar14 = FUN_00017dbc(iVar20,0);
                  iVar6 = 0;
                  if (DAT_000be63c < 5) goto LAB_0001a360;
LAB_0001abf4:
                  snprintf(local_2040,0x2000,"tmp451 index %d sensor temp %d is remote %d",iVar5,
                           uVar14,iVar6);
                  FUN_0004948c(4,local_2040,0);
                  goto LAB_0001ac20;
                }
                iVar6 = FUN_00017ac8(iVar20,1);
                if (iVar6 < 0) {
                  uVar14 = 0xff;
                  if (DAT_000be63c < 5) goto LAB_0001ada8;
                  goto LAB_0001ab70;
                }
                usleep(100);
                uVar14 = FUN_00017dbc(iVar20,1);
                if (4 < DAT_000be63c) {
                  iVar6 = 1;
                  goto LAB_0001abf4;
                }
LAB_0001ada8:
                dVar25 = (double)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
                local_2040[0] = '\0';
                local_2040[1] = '\0';
                local_2040[2] = '\0';
                local_2040[3] = '\0';
                local_203c = local_203c & 0xffffff00;
                dVar26 = (double)VectorSignedToFloat((uint)*local_2098,(byte)(in_fpscr >> 0x16) & 3)
                ;
                uVar14 = (uint)(longlong)(dVar25 * 1.15 - dVar26);
                FUN_0001d438(iVar20,local_2040,5);
                pcVar7 = strstr(local_2040,"PM");
                if (pcVar7 != (char *)0x0) {
                  iVar6 = FUN_00017628(iVar20,4,0);
                  if (iVar6 + 0x13 < (int)(uVar14 - 0x19)) {
                    uVar14 = uVar14 - 0x19;
                  }
                }
                uVar14 = uVar14 & ~((int)uVar14 >> 0x1f);
              }
              FUN_0004bd34(&iStack_2058);
              iVar6 = local_2054 - iStack_205c;
              bVar23 = iVar6 < 0;
              if (bVar23) {
                iVar6 = iVar6 + 0xf4000;
              }
              iVar22 = iStack_2058 - local_2060;
              if (bVar23) {
                iVar22 = iVar22 + -1;
                iVar6 = iVar6 + 0x240;
              }
              if (4 < DAT_000be63c) {
                snprintf(local_2040,0x2000,
                         "read_sensor_on_switch read %d on chain %d takes %ldms temp:%d",iVar5,
                         iVar20,iVar22 * 1000 + iVar6 / 1000,uVar14);
                FUN_0004948c(4,local_2040,0);
              }
              pthread_mutex_lock((pthread_mutex_t *)&DAT_000bfabc);
              iVar6 = DAT_000bfab8;
              if (uVar14 == 0xff) {
                iVar6 = *(int *)(*(int *)(DAT_000bfab8 + iVar4) + 0x10) + iVar12;
                *(short *)(iVar6 + 4) = *(short *)(iVar6 + 4) + 1;
              }
              else if ((uVar14 == 0) ||
                      (0x96 < (int)((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)))) {
                if (3 < DAT_000be63c) {
                  snprintf(local_2040,0x2000,
                           "got abnormal temp: chain %d index %d ,error_temp %d, temporary skip the error temp"
                           ,iVar20,iVar5,uVar14);
                  FUN_0004948c(3,local_2040,0);
                }
              }
              else {
                *(short *)(*(int *)(*(int *)(DAT_000bfab8 + iVar4) + 0x10) + iVar12 + 2) =
                     (short)uVar14;
                *(undefined2 *)(*(int *)(*(int *)(iVar6 + iVar4) + 0x10) + iVar12 + 4) = 0;
              }
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_000bfabc);
            }
          }
          iVar5 = iVar5 + 1;
          iVar12 = iVar12 + 6;
        } while (iVar5 != 8);
        clock_gettime(1,local_2050);
        pthread_mutex_lock((pthread_mutex_t *)&DAT_000bfabc);
        iVar5 = FUN_00018d1c();
        switch(iVar5) {
        case 0:
          local_208c = FUN_0002a5bc();
          break;
        case 1:
        case 2:
          local_208c = FUN_00017ec4();
          break;
        case 3:
          local_208c = FUN_0002adc0();
          break;
        case 4:
          local_208c = 8;
          goto LAB_0001a488;
        default:
          goto switchD_0001a438_default;
        }
        if (local_208c < 1) {
switchD_0001a438_default:
          *(__time_t *)(&DAT_000bfbac + *(int *)(&DAT_000bfb9c + iVar4) * 0x2c + iVar20 * 0x1b8) =
               local_2050[0].tv_sec;
        }
        else {
LAB_0001a488:
          iVar12 = 0;
          iVar6 = *(int *)(&DAT_000bfb9c + iVar4);
          iVar5 = *(int *)(*(int *)(DAT_000bfab8 + iVar4) + iVar5 * 4);
          piVar10 = (int *)(&DAT_000bfbb0 + local_2090 + iVar6 * 0x2c);
          do {
            iVar12 = iVar12 + 1;
            if (*(short *)(iVar5 + 4) == 0) {
              *piVar10 = (int)*(short *)(iVar5 + 2);
            }
            else {
              *piVar10 = 0;
            }
            iVar5 = iVar5 + 6;
            piVar10 = piVar10 + 1;
          } while (iVar12 < local_208c);
          local_2074 = DAT_000c0290;
          local_2070 = DAT_000c028c;
          local_2094 = DAT_000c0294;
          iVar5 = 0;
          bVar1 = false;
          bVar23 = false;
          bVar2 = false;
          *(__time_t *)(&DAT_000bfbac + iVar6 * 0x2c + iVar20 * 0x1b8) = local_2050[0].tv_sec;
          do {
            if (iVar5 < 7) {
              iVar12 = iVar6 + -1;
              bVar21 = false;
              do {
                iVar22 = iVar12;
                if (iVar12 < 0) {
                  iVar22 = iVar12 + 10;
                }
                iVar11 = *(int *)(&DAT_000bfbb0 + (iVar22 * 0xb + iVar20 * 0x6e + iVar5) * 4);
                iVar9 = local_2050[0].tv_sec -
                        *(int *)(&DAT_000bfbac + iVar22 * 0x2c + iVar20 * 0x1b8);
                iVar22 = 0;
                if (iVar11 != 0) {
                  iVar22 = iVar9;
                }
                if ((iVar11 != 0 && iVar9 != 0) && -1 < iVar22) {
                  if (*(int *)(&DAT_000bfbb0 + local_2090 + iVar6 * 0x2c + iVar5 * 4) == 0) break;
                  dVar26 = (double)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
                  dVar25 = (double)VectorSignedToFloat(*(int *)(&DAT_000bfbb0 +
                                                               local_2090 + iVar6 * 0x2c + iVar5 * 4
                                                               ) - iVar11,
                                                       (byte)(in_fpscr >> 0x16) & 3);
                  dVar25 = dVar25 / dVar26;
                  if (iVar9 == 1) {
                    dVar26 = 2.0;
                  }
                  else if (iVar9 == 2) {
                    dVar26 = 1.0;
                  }
                  else {
                    dVar26 = 0.67;
                    if ((iVar9 != 3) && (dVar26 = 0.49, 1 < iVar5)) {
                      dVar26 = 0.5;
                    }
                  }
                  uVar14 = in_fpscr & 0xfffffff | (uint)(dVar25 < dVar26) << 0x1f |
                           (uint)(dVar25 == dVar26) << 0x1e;
                  in_fpscr = uVar14 | (uint)(NAN(dVar25) || NAN(dVar26)) << 0x1c;
                  bVar17 = (byte)(uVar14 >> 0x18);
                  if (!(bool)(bVar17 >> 6 & 1) && bVar17 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                    bVar21 = true;
                  }
                }
                iVar12 = iVar12 + -1;
              } while (iVar12 != iVar6 + -10);
              if (bVar21) {
                if (iVar5 == 0) {
                  local_2070 = local_2070 + 1;
                  bVar2 = true;
                }
                else if (iVar5 == 1) {
                  local_2074 = local_2074 + 1;
                  bVar23 = true;
                }
                else {
                  local_2094 = local_2094 + 1;
                  bVar1 = true;
                }
              }
            }
            iVar5 = iVar5 + 1;
          } while (local_208c != iVar5);
          if (bVar2) {
            DAT_000c028c = local_2070;
          }
          if (bVar23) {
            DAT_000c0290 = local_2074;
          }
          if (bVar1) {
            DAT_000c0294 = local_2094;
          }
        }
        if ((1 < (uint)(DAT_000c028c + DAT_000c0290)) &&
           (iVar5 = FUN_0002a6e0(), (uint)(iVar5 * 3) <= DAT_000c0294)) {
          if (3 < DAT_000be63c) {
            fVar24 = (float)FUN_00024efc();
            snprintf(local_2040,0x2000,"power: %.2f",(double)fVar24);
            FUN_0004948c(3,local_2040,0);
          }
          FUN_00056e88(8,0xff);
          iVar5 = 0;
          FUN_0002ff38(1);
          FUN_0004e8c8(0x10,"temp rise too much");
          iVar12 = FUN_0002a6f0(0);
          while( true ) {
            if (iVar12 != 0) {
              iVar12 = 0;
              plVar16 = (long *)(&DAT_000bfbac + iVar5 * 0x1b8);
              do {
                if (3 < DAT_000be63c) {
                  snprintf(local_2040,0x2000,
                           "chain :%d seq:%d time:%ld  temp:%d-%d-%d-%d-%d-%d-%d-%d",iVar5,iVar12,
                           *plVar16,plVar16[1],plVar16[2],plVar16[3],plVar16[4],plVar16[5],
                           plVar16[6],plVar16[7],plVar16[8]);
                  FUN_0004948c(3,local_2040,0);
                }
                iVar12 = iVar12 + 1;
                plVar16 = plVar16 + 0xb;
              } while (iVar12 != 10);
            }
            iVar5 = iVar5 + 1;
            if (iVar5 == 4) break;
            iVar12 = FUN_0002a6f0(iVar5);
          }
        }
        iVar5 = *(int *)(&DAT_000bfb9c + iVar4) + 1;
        if (9 < iVar5) {
          iVar5 = 0;
        }
        *(int *)(&DAT_000bfb9c + iVar4) = iVar5;
        iVar4 = FUN_0002a6e0();
        if (iVar4 + -1 == iVar20) {
          DAT_000c028c = 0;
          DAT_000c0290 = 0;
          DAT_000c0294 = 0;
        }
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000bfabc);
        FUN_00018e18(iVar20,0);
      }
      iVar20 = iVar20 + 1;
      local_2098 = local_2098 + 1;
      local_2090 = local_2090 + 0x1b8;
    } while (iVar20 != 4);
    DAT_000bfb14 = 1;
    if (DAT_000bfb48 == 3) {
      iVar20 = 0xff;
      iVar4 = 0;
      local_2094 = FUN_00019e50();
      do {
        sVar3 = FUN_00019c28(iVar4,3);
        iVar4 = iVar4 + 1;
        if (sVar3 < iVar20) {
          iVar20 = (int)sVar3;
        }
        uVar27 = CONCAT44(extraout_r1,iVar20);
      } while (iVar4 != 4);
      local_2084 = 0;
      local_2090 = 0;
      local_2080 = 0;
    }
    else if (DAT_000bfb48 == 4) {
      local_2094 = FUN_0001a134(&local_2068);
      local_2084 = local_2068;
      local_2090 = FUN_0001a048(&local_2064,local_2050,4);
      uVar27 = FUN_00019f9c();
      local_2080 = local_2094;
    }
    else {
      local_2084 = 0;
      local_2094 = FUN_00019ae8();
      local_2090 = 0;
      local_2080 = 0;
      uVar27 = FUN_00018aa0();
    }
    uVar14 = (uint)((ulonglong)uVar27 >> 0x20);
    iVar20 = (int)uVar27;
    iVar5 = 0;
    uVar15 = 0;
    iVar4 = 0;
    do {
      uVar27 = FUN_0002a6f0(iVar4,uVar14);
      uVar14 = (uint)((ulonglong)uVar27 >> 0x20);
      if ((int)uVar27 != 0) {
        uVar28 = FUN_00017ec4();
        uVar14 = (uint)(uVar28 >> 0x20);
        uVar15 = uVar15 + 1 & 0xff;
        if (DAT_000bfb48 == 4) {
          uVar13 = 8;
        }
        else {
          uVar13 = (uint)uVar28 & 0xff;
          if ((uVar28 & 0xff) == 0) goto LAB_0001a7cc;
        }
        uVar18 = 0;
        do {
          uVar14 = uVar18 & 0xff;
          if (DAT_000bfb48 == 3) {
LAB_0001af4c:
            uVar27 = FUN_000187b0(iVar4,DAT_000bfb48,uVar18 & 0xff);
            uVar14 = (uint)((ulonglong)uVar27 >> 0x20);
            iVar5 = iVar5 + (int)uVar27;
          }
          else if (DAT_000bfb48 == 4) {
            if ((int)uVar18 < 4) goto LAB_0001af4c;
          }
          else {
            uVar27 = FUN_00019610(iVar4);
            uVar14 = (uint)((ulonglong)uVar27 >> 0x20);
            iVar5 = iVar5 + (int)uVar27;
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)uVar13);
      }
LAB_0001a7cc:
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    pcVar7 = (char *)FUN_0002a4e4();
    iVar4 = strcmp(pcVar7,"HHB68502");
    if (iVar4 == 0) {
      iVar4 = 0x3a;
    }
    else {
      iVar4 = 0x36;
    }
    iVar12 = FUN_0002e388();
    if (iVar12 < 0x4b0) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0x13;
    }
    pcVar7 = (char *)FUN_0002a4e4();
    iVar6 = strcmp(pcVar7,"H6HB70601");
    if (iVar6 == 0) {
LAB_0001a81c:
      if (((iVar12 <= iVar20) || (DAT_000bfb64 != '\0')) ||
         (iVar6 = FUN_0004eb2c(iVar20), iVar6 != 0)) goto LAB_0001a830;
      if (3 < DAT_000be63c) {
        snprintf(local_2040,0x2000,"too low water temperature pic temp %d (min %d)\n",iVar20,iVar12)
        ;
        FUN_0004948c(3,local_2040,0);
      }
      FUN_000190dc();
      bVar17 = 1;
      FUN_0004e8c8(0x11,"low temp ");
      FUN_00056e88(9,0);
    }
    else {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar6 = strcmp(pcVar7,"H6HB70602");
      if (iVar6 == 0) goto LAB_0001a81c;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar6 = strcmp(pcVar7,"H6HB70801");
      if (iVar6 == 0) goto LAB_0001a81c;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar6 = strcmp(pcVar7,"H6HB70802");
      if (iVar6 == 0) goto LAB_0001a81c;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar6 = strcmp(pcVar7,"H6HB70501");
      if (iVar6 == 0) goto LAB_0001a81c;
LAB_0001a830:
      bVar17 = 0;
    }
    pcVar7 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar7,"H6HB70601");
    if (iVar12 == 0) {
LAB_0001a84c:
      if ((iVar20 != 200 && iVar4 <= iVar20) && (DAT_000bfb64 == '\0')) {
        if (3 < DAT_000be63c) {
          snprintf(local_2040,0x2000,"too hot water temperature pic temp %d (min %d)\n",iVar20,iVar4
                  );
          FUN_0004948c(3,local_2040,0);
        }
        FUN_000190dc();
        FUN_0004e8c8(0x10,"over max temp");
        FUN_00056e88(8,0);
        bVar17 = 1;
      }
    }
    else {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar7,"H6HB70602");
      if (iVar12 == 0) goto LAB_0001a84c;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar7,"H6HB70801");
      if (iVar12 == 0) goto LAB_0001a84c;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar7,"H6HB70802");
      if (iVar12 == 0) goto LAB_0001a84c;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar7,"H6HB70501");
      if (iVar12 == 0) goto LAB_0001a84c;
    }
    pcVar7 = (char *)FUN_0002a4e4();
    iVar20 = strcmp(pcVar7,"H6HB70601");
    if (iVar20 == 0) {
LAB_0001a8c0:
      local_2098 = (byte *)0x55;
    }
    else {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar20 = strcmp(pcVar7,"H6HB70602");
      if (iVar20 == 0) goto LAB_0001a8c0;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar20 = strcmp(pcVar7,"H6HB70501");
      if (iVar20 == 0) goto LAB_0001a8c0;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar20 = strcmp(pcVar7,"H6HB70801");
      if (iVar20 == 0) goto LAB_0001a8c0;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar20 = strcmp(pcVar7,"H6HB70802");
      if (iVar20 == 0) goto LAB_0001a8c0;
      local_2098 = (byte *)0x50;
    }
    pcVar7 = (char *)FUN_0002a4e4();
    iVar20 = strcmp(pcVar7,"H6HB70601");
    if (iVar20 == 0) {
LAB_0001a8e0:
      if (local_2090 < 0x6a) goto LAB_0001b174;
      iVar20 = 0;
      iVar4 = 0;
      do {
        iVar12 = FUN_0002a6f0(iVar4);
        if ((iVar12 != 0) && (0x69 < (&local_2050[0].tv_sec)[iVar4])) {
          iVar20 = iVar20 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
      if (iVar20 < 2) goto LAB_0001b174;
      bVar23 = true;
LAB_0001a930:
      FUN_0002ff38(1);
    }
    else {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar20 = strcmp(pcVar7,"H6HB70602");
      if (iVar20 == 0) goto LAB_0001a8e0;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar20 = strcmp(pcVar7,"H6HB70801");
      if (iVar20 == 0) goto LAB_0001a8e0;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar20 = strcmp(pcVar7,"H6HB70802");
      if (iVar20 == 0) goto LAB_0001a8e0;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar20 = strcmp(pcVar7,"H6HB70501");
      if (iVar20 == 0) goto LAB_0001a8e0;
LAB_0001b174:
      bVar23 = (int)local_2098 < (int)local_2094;
      if ((bool)(bVar23 | bVar17)) goto LAB_0001a930;
      FUN_0002ff38(0);
      bVar23 = false;
    }
    uVar14 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar13 = 0;
    FUN_0002ff50((int)(uVar15 * 2) <= iVar5);
    bVar1 = false;
    local_2088 = 0;
    do {
      iVar20 = FUN_0002a6f0(uVar13);
      if (iVar20 != 0) {
        uVar8 = FUN_00017628(uVar13,4,0);
        uVar18 = uVar8 & 0xffff;
        uVar14 = FUN_00017628(uVar13,4,1);
        uVar14 = uVar14 & 0xffff;
        if ((int)(uVar14 - uVar18) < 0x11) {
          DAT_000c0298 = 0;
        }
        else {
          DAT_000c0298 = DAT_000c0298 + 1;
          if (DAT_000c0298 < 0xb) {
            if (DAT_000c0298 < 1) goto LAB_0001afe4;
          }
          else {
            bVar1 = true;
            local_2088 = local_2088 | 1 << (uVar13 & 0xff) & 0xffU;
          }
          if (3 < DAT_000be63c) {
            uVar28 = CONCAT44(DAT_000c0298,uVar8) & 0xffffffff0000ffff;
            snprintf(local_2040,0x2000,
                     "got abnormal water temp_max %d temp_min %d exceed  temp limit 25, temporarily skiped. error_count = %d"
                     ,uVar14,(int)uVar28,(int)(uVar28 >> 0x20));
            FUN_0004948c(3,local_2040,0);
          }
        }
LAB_0001afe4:
        if (2 < (int)(uVar18 - uVar14)) {
          uVar19 = uVar19 + 1 & 0xff;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 4);
    if (bVar1) {
      FUN_000190dc();
      if (3 < DAT_000be63c) {
        snprintf(local_2040,0x2000,"inlet_water_temp:%d, outlet_water_temp:%d, chain : 0x%0x",uVar18
                 ,uVar14,local_2088);
        FUN_0004948c(3,local_2040,0);
      }
      FUN_0004e8c8(0x10,"water temp diff err");
    }
    iVar20 = FUN_0002a6e0();
    if ((iVar20 <= (int)uVar19) && (DAT_000c045c != '\0')) {
      FUN_000190dc();
      if (DAT_000be63c < 4) {
        FUN_0004e8c8(0x12,"water flow is reverse");
      }
      else {
        memcpy(local_2040,
               "water flow is reverse, please swap the water pipes at the inlet and outlet",0x4b);
        FUN_0004948c(3,local_2040,0);
        FUN_0004e8c8(0x12,"water flow is reverse");
      }
    }
    if ((bVar23) && (iVar20 = FUN_0004e8b8(), iVar20 == 2)) {
      if (3 < DAT_000be63c) {
        snprintf(local_2040,0x2000,
                 "over max temp, pic temp(chain%d) %d (max %d), pcb temp(chain%d) %d (max %d), chip temp(chain%d) %d(max %d) pcb temp rise %d chip temp rise %d, total_exit_failure %d\n"
                 ,local_2068,local_2094,(int)local_2098,local_2084,local_2080,0x55,local_2064,
                 local_2090,0x69,0,0,iVar5);
        FUN_0004948c(3,local_2040,0);
      }
      FUN_000190dc();
      FUN_0004e8c8(0x10,"over max temp");
      FUN_00056e88(8,0);
    }
    if ((int)(uVar15 * 2) < iVar5) {
LAB_0001a9d0:
      if (3 < DAT_000be63c) {
        snprintf(local_2040,0x2000,
                 "over max temp, pic temp(chain%d) %d (max %d), pcb temp(chain%d) %d (max %d), chip temp(chain%d) %d(max %d) pcb temp rise %d chip temp rise %d, total_exit_failure %d\n"
                 ,local_2068,local_2094,(int)local_2098,local_2084,local_2080,0x55,local_2064,
                 local_2090,0x5f,0,0,iVar5);
        FUN_0004948c(3,local_2040,0);
      }
      FUN_000190dc();
      FUN_0004e8c8(0x10,"over max temp");
      FUN_00056e88(0xb,0);
    }
    else {
      iVar20 = FUN_0004e8b8();
      if (local_2094 == 0 && iVar20 == 2) {
        iVar20 = 0xff;
        iVar4 = 0;
        do {
          iVar12 = iVar4 + 1;
          iVar4 = FUN_00019cf0(iVar4);
          if (iVar4 < iVar20) {
            iVar20 = iVar4;
          }
          iVar20 = (int)(short)iVar20;
          iVar4 = iVar12;
        } while (iVar12 != 4);
        if ((iVar20 == 0) && (DAT_000c029c = DAT_000c029c + 1, 10 < DAT_000c029c))
        goto LAB_0001a9d0;
      }
      DAT_000c029c = 0;
    }
    pcVar7 = (char *)FUN_0002a4e4();
    iVar20 = strcmp(pcVar7,"H6HB70601");
    if (iVar20 != 0) {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar20 = strcmp(pcVar7,"H6HB70801");
      if (iVar20 != 0) {
        pcVar7 = (char *)FUN_0002a4e4();
        iVar20 = strcmp(pcVar7,"H6HB70802");
        if (iVar20 != 0) {
          pcVar7 = (char *)FUN_0002a4e4();
          iVar20 = strcmp(pcVar7,"H6HB70602");
          if (iVar20 != 0) {
            pcVar7 = (char *)FUN_0002a4e4();
            iVar20 = strcmp(pcVar7,"H6HB70501");
            if (iVar20 != 0) {
              FUN_00016de0(400,0);
              iVar20 = FUN_0004e8a8();
              if (((iVar20 != 0) && (DAT_000c94e8 != 1)) &&
                 ((DAT_000c02a0 - 1 < 0x4f || ((0x4f < DAT_000c02a0 && ((DAT_000c02a0 & 3) == 0)))))
                 ) {
                FUN_000171dc();
              }
            }
          }
        }
      }
    }
    if (DAT_000bfb65 != '\0') {
      DAT_000c02a0 = DAT_000c02a0 + 1;
    }
  } while( true );
}

