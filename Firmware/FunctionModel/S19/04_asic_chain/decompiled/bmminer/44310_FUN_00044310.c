// FUN_00044310 @ 00044310  size=3716  callers=1
// program: bmminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00044310(uint param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int local_38c8;
  int local_38c4;
  int local_38c0 [32];
  undefined8 local_3840;
  undefined8 local_3040;
  char acStack_2840 [2048];
  double adStack_2040 [1024];
  
  memset(adStack_2040,0,0x2000);
  pcVar1 = (char *)FUN_0001fffc();
  iVar2 = strcmp(pcVar1,"BHB28601");
  if (iVar2 != 0) {
    pcVar1 = (char *)FUN_0001fffc();
    iVar2 = strcmp(pcVar1,"BHB28701");
    if (iVar2 != 0) {
      pcVar1 = (char *)FUN_0001fffc();
      iVar2 = strcmp(pcVar1,"HHB28601");
      if (iVar2 != 0) {
        pcVar1 = (char *)FUN_0001fffc();
        iVar2 = strcmp(pcVar1,"HHB28602");
        if (iVar2 != 0) {
          iVar2 = FUN_0002002c();
          if (iVar2 != 0) {
            iVar6 = 0;
            puVar12 = &local_3840;
            iVar13 = 0;
            do {
              iVar11 = iVar13 + 1;
              iVar13 = FUN_00018274(iVar13);
              if (iVar13 == 0) {
                FUN_00058cd4(param_1 & 0xff,iVar6);
                usleep(5000);
                FUN_00058d70(param_1 & 0xff,iVar6);
                usleep(10000);
                *puVar12 = 0;
              }
              iVar6 = iVar6 + param_2;
              puVar12 = puVar12 + 1;
              iVar13 = iVar11;
            } while (iVar2 != iVar11);
          }
          usleep(100000);
          iVar2 = FUN_0002001c();
          if (iVar2 != 0) {
            iVar13 = 0;
            do {
              iVar6 = FUN_0002003c();
              if (iVar6 != 0) {
                iVar11 = 0;
                do {
                  while( true ) {
                    iVar3 = FUN_0002003c();
                    iVar4 = iVar13 * iVar3 + iVar11;
                    iVar3 = FUN_00018274(iVar4);
                    if (iVar3 == 0) break;
LAB_00044eb8:
                    iVar11 = iVar11 + 1;
                    if (iVar6 == iVar11) goto LAB_00045074;
                  }
                  iVar3 = iVar4 * param_2;
                  memset(local_38c0,0,0x80);
                  uVar8 = FUN_0002fa34(0xb0,iVar3,param_1);
                  if ((uVar8 & 4) == 0) {
                    if (DAT_00507498 == 0) {
                      DAT_00507498 = FUN_0005b008("bmminer_adc");
                    }
                    FUN_0005c5c4(DAT_00507498,"log/adc_sample.c",0x10,"check_adc_voltage",0x11,0xd7,
                                 0x14,"chain::%d, asic::%d adc control vm sample not ready %08x.\n",
                                 param_1,iVar4,uVar8);
                    goto LAB_00044eb8;
                  }
                  uVar8 = FUN_0002fa34(0xb4,iVar3,param_1);
                  uVar5 = FUN_0002fa34(0xb8,iVar3,param_1);
                  fVar15 = (float)VectorSignedToFloat(uVar8 & 0xfff,(byte)(in_fpscr >> 0x16) & 3);
                  fVar19 = (float)VectorSignedToFloat((uVar8 & 0xfffffff) >> 0x10,
                                                      (byte)(in_fpscr >> 0x16) & 3);
                  fVar17 = (float)VectorSignedToFloat(uVar5 & 0xfff,(byte)(in_fpscr >> 0x16) & 3);
                  dVar16 = (double)(fVar15 * 0.00048828125) * 1.1880000829696655 -
                           1.1880000829696655;
                  fVar15 = (float)VectorSignedToFloat((uVar5 & 0xfffffff) >> 0x10,
                                                      (byte)(in_fpscr >> 0x16) & 3);
                  dVar20 = (double)(fVar19 * 0.00048828125) * 1.1880000829696655 -
                           1.1880000829696655;
                  dVar18 = (double)(fVar17 * 0.00048828125) * 1.1880000829696655 -
                           1.1880000829696655;
                  dVar21 = (double)(fVar15 * 0.00048828125) * 1.1880000829696655 -
                           1.1880000829696655;
                  dVar23 = dVar16 + dVar20 + dVar18 + dVar21;
                  adStack_2040[iVar4 * 4 + 3] = dVar21;
                  adStack_2040[iVar4 * 4] = dVar16;
                  adStack_2040[iVar4 * 4 + 1] = dVar20;
                  dVar22 = dVar23 * 0.25;
                  adStack_2040[iVar4 * 4 + 2] = dVar18;
                  (&local_3840)[iVar4] = dVar22;
                  sprintf((char *)local_38c0,
                          "chain %2d asic %03d adc:\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",param_1,
                          iVar4,dVar16,dVar20,dVar18,dVar21,dVar23,dVar22);
                  if (DAT_00507498 == 0) {
                    DAT_00507498 = FUN_0005b008("bmminer_adc");
                  }
                  iVar11 = iVar11 + 1;
                  FUN_0005c5c4(DAT_00507498,"log/adc_sample.c",0x10,"check_adc_voltage",0x11,0xe7,
                               0x14,"asic adc:%s");
                } while (iVar6 != iVar11);
              }
LAB_00045074:
              iVar13 = iVar13 + 1;
            } while (iVar2 != iVar13);
          }
          iVar2 = FUN_0002001c();
          if (iVar2 != 0) {
            iVar13 = 0;
            do {
              iVar6 = sprintf((char *)local_38c0,"domain %2d:",iVar13);
              iVar11 = FUN_0002003c();
              if (iVar11 != 0) {
                iVar3 = 0;
                do {
                  iVar4 = FUN_0002003c();
                  iVar4 = iVar13 * iVar4 + iVar3;
                  iVar3 = iVar3 + 1;
                  iVar4 = sprintf((char *)((int)local_38c0 + iVar6),"\t%.2f",
                                  (double)(&local_3840)[iVar4]);
                  iVar6 = iVar6 + iVar4;
                } while (iVar11 != iVar3);
              }
              if (DAT_00507498 == 0) {
                DAT_00507498 = FUN_0005b008("bmminer_adc");
              }
              iVar13 = iVar13 + 1;
              FUN_0005c5c4(DAT_00507498,"log/adc_sample.c",0x10,"check_adc_voltage",0x11,0xf3,0x14,
                           "chain %2d %s",param_1,local_38c0);
            } while (iVar2 != iVar13);
          }
          goto LAB_00044854;
        }
      }
      uVar8 = param_1 & 0xff;
      FUN_00034828(&local_38c8);
      pthread_mutex_lock((pthread_mutex_t *)&DAT_00089070);
      FUN_00019b74(1);
      usleep(20000);
      FUN_00058ce0(uVar8);
      usleep(20000);
      FUN_00058d0c(uVar8);
      usleep(20000);
      iVar2 = FUN_0002001c();
      if (iVar2 != 0) {
        iVar13 = 0;
        do {
          iVar6 = FUN_0002003c();
          if (iVar6 != 0) {
            iVar11 = 0;
            do {
              while( true ) {
                iVar3 = FUN_0002003c();
                iVar4 = iVar13 * iVar3 + iVar11;
                iVar3 = FUN_00018274(iVar4);
                if (iVar3 == 0) break;
LAB_000449e4:
                iVar11 = iVar11 + 1;
                if (iVar6 == iVar11) goto LAB_00044b9c;
              }
              iVar3 = iVar4 * param_2;
              memset(local_38c0,0,0x80);
              uVar5 = FUN_0002fa34(0xb0,iVar3,param_1);
              if ((uVar5 & 4) == 0) {
                if (DAT_00507498 == 0) {
                  DAT_00507498 = FUN_0005b008("bmminer_adc");
                }
                FUN_0005c5c4(DAT_00507498,"log/adc_sample.c",0x10,"check_adc_voltage",0x11,0x95,0x14
                             ,"chain::%d, asic::%d adc control vm sample not ready %08x.\n",param_1,
                             iVar4,uVar5);
                goto LAB_000449e4;
              }
              uVar5 = FUN_0002fa34(0xb4,iVar3,param_1);
              uVar7 = FUN_0002fa34(0xb8,iVar3,param_1);
              fVar15 = (float)VectorSignedToFloat(uVar5 & 0xfff,(byte)(in_fpscr >> 0x16) & 3);
              fVar19 = (float)VectorSignedToFloat((uVar5 & 0xfffffff) >> 0x10,
                                                  (byte)(in_fpscr >> 0x16) & 3);
              fVar17 = (float)VectorSignedToFloat(uVar7 & 0xfff,(byte)(in_fpscr >> 0x16) & 3);
              dVar16 = (double)(fVar15 * 0.00048828125) * 1.1880000829696655 - 1.1880000829696655;
              fVar15 = (float)VectorSignedToFloat((uVar7 & 0xfffffff) >> 0x10,
                                                  (byte)(in_fpscr >> 0x16) & 3);
              dVar20 = (double)(fVar19 * 0.00048828125) * 1.1880000829696655 - 1.1880000829696655;
              dVar18 = (double)(fVar17 * 0.00048828125) * 1.1880000829696655 - 1.1880000829696655;
              dVar21 = (double)(fVar15 * 0.00048828125) * 1.1880000829696655 - 1.1880000829696655;
              dVar23 = dVar16 + dVar20 + dVar18 + dVar21;
              adStack_2040[iVar4 * 4 + 3] = dVar21;
              adStack_2040[iVar4 * 4] = dVar16;
              adStack_2040[iVar4 * 4 + 1] = dVar20;
              dVar22 = dVar23 * 0.25;
              adStack_2040[iVar4 * 4 + 2] = dVar18;
              (&local_3840)[iVar4] = dVar22;
              sprintf((char *)local_38c0,
                      "chain %2d asic %03d adc:\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",param_1,iVar4,
                      dVar16,dVar20,dVar18,dVar21,dVar23,dVar22);
              if (DAT_00507498 == 0) {
                DAT_00507498 = FUN_0005b008("bmminer_adc");
              }
              iVar11 = iVar11 + 1;
              FUN_0005c5c4(DAT_00507498,"log/adc_sample.c",0x10,"check_adc_voltage",0x11,0xa5,0x14,
                           "asic adc:%s");
            } while (iVar6 != iVar11);
          }
LAB_00044b9c:
          iVar13 = iVar13 + 1;
        } while (iVar2 != iVar13);
      }
      iVar2 = FUN_0002001c();
      if (iVar2 != 0) {
        iVar13 = 0;
        do {
          iVar6 = sprintf((char *)local_38c0,"domain %2d:",iVar13);
          iVar11 = FUN_0002003c();
          if (iVar11 != 0) {
            iVar3 = 0;
            do {
              iVar4 = FUN_0002003c();
              iVar4 = iVar13 * iVar4 + iVar3;
              iVar3 = iVar3 + 1;
              iVar4 = sprintf((char *)((int)local_38c0 + iVar6),"\t%.2f",
                              (double)(&local_3840)[iVar4]);
              iVar6 = iVar6 + iVar4;
            } while (iVar11 != iVar3);
          }
          if (DAT_00507498 == 0) {
            DAT_00507498 = FUN_0005b008("bmminer_adc");
          }
          iVar13 = iVar13 + 1;
          FUN_0005c5c4(DAT_00507498,"log/adc_sample.c",0x10,"check_adc_voltage",0x11,0xb1,0x14,
                       "chain %2d %s",param_1,local_38c0);
        } while (iVar2 != iVar13);
      }
      FUN_00058c64(uVar8);
      usleep(20000);
      FUN_00019b74(0);
      usleep(20000);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00089070);
      FUN_00034828(&local_3040);
      local_3040._0_4_ = (int)local_3040 - local_38c8;
      puVar9 = (undefined *)(local_3040._4_4_ - local_38c4);
      if ((int)puVar9 < 0) {
        local_3040._0_4_ = (int)local_3040 + -1;
        puVar9 = &DAT_000f4240 + (int)puVar9;
      }
      if (4 < DAT_00087bbc) {
        snprintf(acStack_2840,0x800,"on chain %d takes %ldms\n",param_1,
                 (int)local_3040 * 1000 + (int)puVar9 / 1000);
        FUN_00032218(4,acStack_2840,0);
      }
      goto LAB_00044854;
    }
  }
  uVar8 = param_1 & 0xff;
  FUN_00034828(local_38c0);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00089070);
  FUN_00019b74(1);
  usleep(20000);
  FUN_00058ce0(uVar8);
  usleep(20000);
  FUN_00058d0c(uVar8);
  usleep(20000);
  uVar24 = FUN_0002001c();
  iVar2 = (int)uVar24;
  if (iVar2 != 0) {
    iVar13 = 0;
    do {
      uVar25 = FUN_0002003c((int)uVar24,(int)(uVar24 >> 0x20));
      iVar6 = (int)uVar25;
      uVar24 = uVar25 & 0xffffffff00000000;
      if (iVar6 != 0) {
        iVar11 = 0;
        do {
          while( true ) {
            iVar3 = FUN_0002003c((int)uVar25,(int)(uVar25 >> 0x20));
            iVar10 = iVar13 * iVar3 + iVar11;
            iVar3 = FUN_0002009c();
            iVar3 = iVar10 * iVar3;
            iVar4 = FUN_00018274(iVar10);
            uVar25 = CONCAT44(iVar3,0xb0);
            if (iVar4 == 0) break;
LAB_00044450:
            iVar11 = iVar11 + 1;
            uVar24 = uVar25;
            if (iVar6 == iVar11) goto LAB_00044568;
          }
          uVar5 = FUN_0002fa34(0xb0,iVar3,param_1);
          if ((uVar5 & 4) == 0) {
            if (DAT_00507498 == 0) {
              DAT_00507498 = FUN_0005b008("bmminer_adc",iVar3,param_1);
            }
            uVar25 = FUN_0005c5c4(DAT_00507498,"log/adc_sample.c",0x10,"get_adc_data_with_addr",0x16
                                  ,0x30,0x14,
                                  "chain::%d, asic::%d adc control vm sample not ready %08x.\n",
                                  param_1,iVar10,uVar5);
            goto LAB_00044450;
          }
          uVar5 = FUN_0002fa34(0xb4);
          uVar25 = FUN_0002fa34(0xb8,iVar3,param_1);
          iVar11 = iVar11 + 1;
          dVar16 = (double)VectorUnsignedToFloat(uVar5 & 0xfff,(byte)(in_fpscr >> 0x16) & 3);
          dVar20 = (double)VectorUnsignedToFloat
                                     ((uVar5 & 0xfffffff) >> 0x10,(byte)(in_fpscr >> 0x16) & 3);
          dVar18 = (double)VectorUnsignedToFloat
                                     (((uint)uVar25 & 0xfffffff) >> 0x10,
                                      (byte)(in_fpscr >> 0x16) & 3);
          dVar22 = (double)VectorUnsignedToFloat((uint)uVar25 & 0xfff,(byte)(in_fpscr >> 0x16) & 3);
          dVar16 = dVar16 * 1.6 * 0.00048828125 - 1.6;
          dVar20 = dVar20 * 1.6 * 0.00048828125 - 1.6;
          dVar21 = dVar18 * 1.6 * 0.00048828125 - 1.6;
          adStack_2040[iVar10 * 4] = dVar16;
          dVar18 = dVar22 * 1.6 * 0.00048828125 - 1.6;
          (&local_3040)[iVar10] = dVar21;
          adStack_2040[iVar10 * 4 + 1] = dVar20 - dVar16;
          adStack_2040[iVar10 * 4 + 2] = dVar18 - dVar20;
          adStack_2040[iVar10 * 4 + 3] = dVar21 - dVar18;
          uVar24 = uVar25;
        } while (iVar6 != iVar11);
      }
LAB_00044568:
      iVar13 = iVar13 + 1;
    } while (iVar2 != iVar13);
  }
  iVar2 = FUN_0002001c();
  if (iVar2 != 0) {
    iVar13 = 0;
    do {
      if (DAT_00507498 == 0) {
        DAT_00507498 = FUN_0005b008("bmminer_adc");
      }
      FUN_0005c5c4(DAT_00507498,"log/adc_sample.c",0x10,"dump_adc_voltage",0x10,0x46,0x14,
                   "[C: %d], [D: %d]",param_1);
      iVar6 = FUN_0002003c();
      if (iVar6 != 0) {
        iVar11 = 0;
        do {
          memset(acStack_2840,0,0x100);
          iVar3 = FUN_0002003c();
          iVar4 = iVar13 * iVar3 + iVar11;
          iVar3 = FUN_0002003c();
          iVar3 = FUN_00067190(iVar11,iVar3 + -1);
          if (iVar3 == 1) {
            snprintf(acStack_2840,0x100,"{I} %2d: d0 %.3f, d1 %.3f, d2 %.3f, d3 %.3f, sum = %f\n",
                     iVar4,adStack_2040[iVar4 * 4],adStack_2040[iVar4 * 4 + 1],
                     adStack_2040[iVar4 * 4 + 2],adStack_2040[iVar4 * 4 + 3],
                     (double)(&local_3040)[iVar4]);
          }
          else {
            snprintf(acStack_2840,0x100,"{I} %2d: d0 %.3f, d1 %.3f, d2 %.3f, d3 %.3f, sum = %f",
                     iVar4,adStack_2040[iVar4 * 4],adStack_2040[iVar4 * 4 + 1],
                     adStack_2040[iVar4 * 4 + 2],adStack_2040[iVar4 * 4 + 3],
                     (double)(&local_3040)[iVar4]);
          }
          if (DAT_00507498 == 0) {
            DAT_00507498 = FUN_0005b008("bmminer_adc");
          }
          iVar11 = iVar11 + 1;
          FUN_0005c5c4(DAT_00507498,"log/adc_sample.c",0x10,"dump_adc_voltage",0x10,0x54,0x14,"%s",
                       acStack_2840);
        } while (iVar6 != iVar11);
      }
      iVar13 = iVar13 + 1;
    } while (iVar2 != iVar13);
  }
  FUN_00058c64(uVar8);
  usleep(20000);
  FUN_00019b74(0);
  usleep(20000);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00089070);
  FUN_00034828(&local_3840);
  local_3840._4_4_ = local_3840._4_4_ - local_38c0[1];
  bVar14 = local_3840._4_4_ < 0;
  if (bVar14) {
    local_3840._4_4_ = local_3840._4_4_ + 0xf4000;
  }
  local_3840._0_4_ = (int)local_3840 - local_38c0[0];
  if (bVar14) {
    local_3840._0_4_ = (int)local_3840 + -1;
    local_3840._4_4_ = local_3840._4_4_ + 0x240;
  }
  if (3 < DAT_00087bbc) {
    snprintf(acStack_2840,0x800,"1 on chain %d takes %ldms\n",param_1,
             (int)local_3840 * 1000 + local_3840._4_4_ / 1000);
    FUN_00032218(3,acStack_2840,0);
  }
LAB_00044854:
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050749c);
  memcpy(&DAT_005074b8 + param_1 * 0x2000,adStack_2040,0x2000);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050749c);
  return 0;
}

