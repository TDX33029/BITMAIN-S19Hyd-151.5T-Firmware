// FUN_00037ce0 @ 00037ce0  size=6344  callers=2
// program: cgminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

char FUN_00037ce0(int param_1)

{
  byte bVar1;
  size_t sVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  tm *ptVar6;
  void *pvVar7;
  byte *pbVar8;
  int *piVar9;
  int *piVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  int iVar23;
  byte *pbVar24;
  byte *pbVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  byte *pbVar29;
  byte *pbVar30;
  uint uVar31;
  byte *pbVar32;
  byte *pbVar33;
  char *pcVar34;
  bool bVar35;
  uint in_fpscr;
  double dVar36;
  double dVar37;
  undefined8 uVar38;
  int local_8ac;
  uint local_8a4;
  int local_898;
  undefined4 local_894;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_880;
  undefined4 local_87c;
  undefined4 local_878;
  byte local_874 [12];
  byte local_868 [56];
  time_t local_830;
  char acStack_82c [12];
  uint local_820;
  char acStack_81c [8];
  undefined4 local_814;
  char local_810 [20];
  undefined2 uStack_7fc;
  undefined1 local_7fa;
  
  piVar9 = *(int **)(param_1 + 0x104);
  local_898 = 0;
  iVar23 = piVar9[0x18c];
  bVar1 = *(byte *)(iVar23 + 0x2a);
  if (*(char *)(param_1 + 0x11a) != '\0') {
    return *(char *)(param_1 + 0x11a);
  }
  local_890 = *(undefined4 *)(param_1 + 0x1c);
  local_894 = *(undefined4 *)(param_1 + 0x20);
  local_88c = *(undefined4 *)(param_1 + 0x18);
  local_888 = *(undefined4 *)(param_1 + 0x14);
  local_884 = *(undefined4 *)(param_1 + 0x10);
  local_880 = *(undefined4 *)(param_1 + 0xc);
  local_87c = *(undefined4 *)(param_1 + 8);
  local_878 = *(undefined4 *)(param_1 + 4);
  FUN_0001fa58(local_874,&local_894,0x20);
  if (bVar1 < 5) {
    FUN_00023324(&local_898,iVar23 + 0x2b,bVar1,"cgminer.c","test_work_current",0x1654);
    local_898 = local_898 + -1;
  }
  iVar23 = pthread_mutex_lock((pthread_mutex_t *)(piVar9 + 0x35));
  if (iVar23 == 0) {
    iVar23 = pthread_rwlock_wrlock((pthread_rwlock_t *)(piVar9 + 0x3b));
    if (iVar23 == 0) {
      if ((char)piVar9[0xae] != '\0') {
        *(undefined1 *)(piVar9 + 0xae) = 0;
        *(undefined1 *)(param_1 + 0x118) = 1;
      }
      iVar23 = pthread_rwlock_unlock((pthread_rwlock_t *)(piVar9 + 0x3b));
      if (iVar23 == 0) {
        iVar23 = pthread_mutex_unlock((pthread_mutex_t *)(piVar9 + 0x35));
        if (iVar23 == 0) {
          (*DAT_0006796c)();
          iVar23 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0006a1c0);
          if (iVar23 != 0) {
            piVar9 = __errno_location();
            pcVar34 = "block_exists";
            iVar23 = *piVar9;
            uVar20 = 0x160a;
            goto LAB_0003906c;
          }
          sVar2 = strlen((char *)local_874);
          uVar27 = 0x9e3779b9;
          uVar31 = sVar2;
          if (sVar2 < 0xc) {
            uVar16 = 0xfeedbeef;
            uVar3 = 0x9e3779b9;
            pbVar4 = local_874;
          }
          else {
            uVar3 = 0x9e3779b9;
            uVar16 = 0xfeedbeef;
            pbVar25 = local_868;
            do {
              pbVar4 = pbVar25;
              uVar31 = uVar31 - 0xc;
              iVar23 = (uint)pbVar4[-6] * 0x10000 + (uint)pbVar4[-7] * 0x100 + (uint)pbVar4[-8] +
                       (uint)pbVar4[-5] * 0x1000000 + uVar27;
              uVar16 = (uint)pbVar4[-2] * 0x10000 + (uint)pbVar4[-3] * 0x100 + (uint)pbVar4[-4] +
                       (uint)pbVar4[-1] * 0x1000000 + uVar16;
              uVar3 = ((((uint)pbVar4[-10] * 0x10000 + (uint)pbVar4[-0xb] * 0x100 +
                         (uint)pbVar4[-0xc] + (uint)pbVar4[-9] * 0x1000000) - iVar23) - uVar16) +
                      uVar3 ^ uVar16 >> 0xd;
              uVar27 = (iVar23 - uVar16) - uVar3 ^ uVar3 << 8;
              uVar16 = (uVar16 - uVar3) - uVar27 ^ uVar27 >> 0xd;
              uVar3 = (uVar3 - uVar27) - uVar16 ^ uVar16 >> 0xc;
              uVar27 = (uVar27 - uVar16) - uVar3 ^ uVar3 << 0x10;
              uVar16 = (uVar16 - uVar3) - uVar27 ^ uVar27 >> 5;
              uVar3 = (uVar3 - uVar27) - uVar16 ^ uVar16 >> 3;
              uVar27 = (uVar27 - uVar16) - uVar3 ^ uVar3 << 10;
              uVar16 = (uVar16 - uVar3) - uVar27 ^ uVar27 >> 0xf;
              pbVar25 = pbVar4 + 0xc;
            } while (0xb < uVar31);
          }
          uVar16 = sVar2 + uVar16;
          switch(uVar31) {
          case 0xb:
            uVar16 = uVar16 + (uint)pbVar4[10] * 0x1000000;
          case 10:
            uVar16 = uVar16 + (uint)pbVar4[9] * 0x10000;
          case 9:
            uVar16 = uVar16 + (uint)pbVar4[8] * 0x100;
          case 8:
            uVar27 = uVar27 + (uint)pbVar4[7] * 0x1000000;
          case 7:
            uVar27 = uVar27 + (uint)pbVar4[6] * 0x10000;
          case 6:
            uVar27 = uVar27 + (uint)pbVar4[5] * 0x100;
          case 5:
            uVar27 = uVar27 + pbVar4[4];
          case 4:
            uVar3 = uVar3 + (uint)pbVar4[3] * 0x1000000;
          case 3:
            uVar3 = uVar3 + (uint)pbVar4[2] * 0x10000;
          case 2:
            uVar3 = uVar3 + (uint)pbVar4[1] * 0x100;
          case 1:
            uVar3 = uVar3 + *pbVar4;
          }
          uVar3 = (uVar3 - uVar27) - uVar16 ^ uVar16 >> 0xd;
          uVar27 = (uVar27 - uVar16) - uVar3 ^ uVar3 << 8;
          uVar31 = (uVar16 - uVar3) - uVar27 ^ uVar27 >> 0xd;
          uVar3 = (uVar3 - uVar27) - uVar31 ^ uVar31 >> 0xc;
          uVar16 = (uVar27 - uVar31) - uVar3 ^ uVar3 << 0x10;
          uVar31 = (uVar31 - uVar3) - uVar16 ^ uVar16 >> 5;
          uVar27 = (uVar3 - uVar16) - uVar31 ^ uVar31 >> 3;
          uVar3 = (uVar16 - uVar31) - uVar27 ^ uVar27 << 10;
          uVar31 = (uVar31 - uVar27) - uVar3 ^ uVar3 >> 0xf;
          cVar15 = '\0';
          if (DAT_0006a1e0 != (byte *)0x0) {
            piVar10 = *(int **)(DAT_0006a1e0 + 0x44);
            iVar23 = *(int *)(*piVar10 + (piVar10[1] - 1U & uVar31) * 0xc);
            if (iVar23 != 0) {
              iVar28 = piVar10[5];
              do {
                iVar23 = iVar23 - iVar28;
                if (iVar23 == 0) break;
                if (((uVar31 == *(uint *)(iVar23 + 0x60)) && (sVar2 == *(size_t *)(iVar23 + 0x5c)))
                   && (iVar14 = memcmp(*(void **)(iVar23 + 0x58),local_874,sVar2), iVar14 == 0)) {
                  iVar23 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0006a1c0);
                  if (iVar23 != 0) goto LAB_000391bc;
                  (*DAT_0006796c)();
                  iVar23 = memcmp(piVar9 + 0x88,&local_894,0x20);
                  if (iVar23 == 0) {
                    cVar15 = '\x01';
                  }
                  else {
                    iVar23 = memcmp(&local_894,&DAT_0006a1ec,0x20);
                    if (iVar23 == 0) {
                      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848))
                      {
                        snprintf((char *)&local_830,0x800,"Pool %d now up to date at height %d",
                                 *piVar9,local_898);
                        FUN_0001dd98(6,&local_830,0);
                      }
                      cVar15 = '\x01';
                      FUN_00023324(piVar9 + 0x88,&local_894,0x20,"cgminer.c","test_work_current",
                                   0x169b);
                    }
                    else if ((DAT_000686f1 == '\0') ||
                            (((DAT_00072da0 == '\0' && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7)
                             ))) {
                      cVar15 = '\0';
                    }
                    else {
                      snprintf((char *)&local_830,0x800,"Stale data from pool %d at height %d",
                               *piVar9,local_898);
                      FUN_0001dd98(7,&local_830,0);
                    }
                  }
                  if (*(char *)(param_1 + 0x118) != '\0') {
                    uVar31 = DAT_00068af4 - 3;
                    DAT_00068cac = DAT_00068cac + 1;
                    *(int *)(param_1 + 0x150) = DAT_00068cac;
                    if ((uVar31 < 2) ||
                       (iVar28 = *(int *)(param_1 + 0x104), iVar23 = FUN_0002fbd8(),
                       iVar28 == iVar23)) {
                      if (*(char *)(param_1 + 0x11c) == '\0') {
                        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)
                           ) {
                          pcVar13 = "";
                          if (*(char *)(param_1 + 0x144) != '\0') {
                            pcVar13 = "GBT ";
                          }
                          snprintf((char *)&local_830,0x800,
                                   "%sLONGPOLL from pool %d requested work restart",pcVar13,
                                   **(int **)(param_1 + 0x104));
                          FUN_0001dd98(5,&local_830,0);
                        }
                      }
                      else if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) ||
                              (4 < DAT_00067848)) {
                        snprintf((char *)&local_830,0x800,
                                 "Stratum from pool %d requested work restart",*piVar9);
                        FUN_0001dd98(5,&local_830,0);
                      }
                      FUN_0002c5c8();
                    }
                  }
                  goto LAB_00038224;
                }
                iVar23 = *(int *)(iVar23 + 0x54);
              } while (iVar23 != 0);
            }
          }
          pbVar4 = (byte *)FUN_0001f8e8(0x68,1,"cgminer.c","block_exists",0x160e);
          if (pbVar4 == (byte *)0x0) {
            local_830._0_1_ = 'b';
            local_830._1_1_ = 'l';
            local_830._2_1_ = 'o';
            local_830._3_1_ = 'c';
            builtin_strncpy(acStack_82c,"k_exists OOM",0xc);
            local_820 = local_820 & 0xffffff00;
            FUN_0001dd98(3,&local_830,1);
                    /* WARNING: Subroutine does not return */
            FUN_0002c290(1);
          }
          strcpy((char *)pbVar4,(char *)local_874);
          pbVar25 = DAT_0006a1e0;
          bVar35 = DAT_0006a1e0 != (byte *)0x0;
          *(int *)(pbVar4 + 100) = DAT_000761e8;
          DAT_000761e8 = DAT_000761e8 + 1;
          local_8ac = 0;
          if ((bVar35) && (3 < *(uint *)(*(int *)(pbVar25 + 0x44) + 0xc))) {
            pbVar30 = pbVar25 + 0x44;
            pbVar29 = (byte *)0x1;
LAB_000382e4:
            pbVar32 = (byte *)0x0;
            uVar31 = 0;
            pbVar24 = pbVar30;
            pbVar30 = (byte *)0x0;
LAB_000382f4:
            uVar31 = uVar31 + 1;
            pbVar5 = pbVar29;
            if (pbVar29 == (byte *)0x0) {
              pbVar8 = (byte *)0x0;
              pbVar17 = pbVar24;
            }
            else {
              pbVar17 = *(byte **)(pbVar24 + 8);
              if (pbVar17 != (byte *)0x0) {
                pbVar17 = pbVar17 + *(int *)(*(int *)(pbVar25 + 0x44) + 0x14);
                if (pbVar17 != (byte *)0x0) {
                  pbVar8 = (byte *)0x1;
                  do {
                    if (pbVar8 == pbVar29) {
                      pbVar5 = pbVar8;
                      goto LAB_00038348;
                    }
                    pbVar17 = *(byte **)(pbVar17 + 8);
                    pbVar8 = pbVar8 + 1;
                  } while ((pbVar17 != (byte *)0x0) &&
                          (pbVar17 = pbVar17 + *(int *)(*(int *)(pbVar25 + 0x44) + 0x14),
                          pbVar17 != (byte *)0x0));
                  goto LAB_00038348;
                }
              }
              pbVar8 = (byte *)0x1;
            }
LAB_00038348:
LAB_00038350:
            do {
              pbVar11 = pbVar24;
              pbVar33 = pbVar32;
              if (pbVar8 != (byte *)0x0) goto LAB_000383d0;
LAB_00038358:
              if (pbVar5 == (byte *)0x0 || pbVar17 == (byte *)0x0) {
                pbVar24 = pbVar17;
                if (pbVar17 != (byte *)0x0) goto LAB_000382f4;
                if (pbVar32 != (byte *)0x0) {
                  pbVar32[8] = 0;
                  pbVar32[9] = 0;
                  pbVar32[10] = 0;
                  pbVar32[0xb] = 0;
                }
                if (1 < uVar31) {
                  pbVar29 = (byte *)((int)pbVar29 << 1);
                  if (pbVar30 != (byte *)0x0) goto LAB_000382e4;
                  pbVar32 = pbVar30;
                }
                *(byte **)(*(int *)(pbVar25 + 0x44) + 0x10) = pbVar32;
                pbVar30 = pbVar30 + -*(int *)(*(int *)(pbVar25 + 0x44) + 0x14);
                iVar23 = *(int *)(pbVar30 + 0x48);
                local_8ac = *(int *)(pbVar30 + 100);
                DAT_0006a1e0 = pbVar30;
                if (iVar23 == 0) {
                  pbVar25 = *(byte **)(pbVar30 + 0x4c);
                  puVar12 = *(undefined4 **)(pbVar30 + 0x44);
                  if (pbVar25 != (byte *)0x0) {
                    iVar28 = puVar12[5];
                    if (pbVar30 == (byte *)(puVar12[4] - iVar28)) goto LAB_00039554;
LAB_0003956c:
                    pbVar29 = pbVar25;
                    DAT_0006a1e0 = pbVar25;
                    goto LAB_000384c0;
                  }
                  free((void *)*puVar12);
                  free(*(void **)(pbVar30 + 0x44));
                  DAT_0006a1e0 = (byte *)0x0;
                }
                else {
                  puVar12 = *(undefined4 **)(pbVar30 + 0x44);
                  iVar28 = puVar12[5];
                  if (pbVar30 == (byte *)(puVar12[4] - iVar28)) {
LAB_00039554:
                    puVar12[4] = iVar23 + iVar28;
                    iVar23 = *(int *)(pbVar30 + 0x48);
                    if (iVar23 == 0) {
                      pbVar25 = *(byte **)(pbVar30 + 0x4c);
                      goto LAB_0003956c;
                    }
                    iVar28 = *(int *)(*(int *)(pbVar30 + 0x44) + 0x14);
                  }
                  *(undefined4 *)(iVar23 + iVar28 + 8) = *(undefined4 *)(pbVar30 + 0x4c);
                  pbVar25 = *(byte **)(pbVar30 + 0x4c);
                  pbVar29 = pbVar30;
LAB_000384c0:
                  piVar10 = *(int **)(pbVar29 + 0x44);
                  if (pbVar25 != (byte *)0x0) {
                    *(undefined4 *)(pbVar25 + piVar10[5] + 4) = *(undefined4 *)(pbVar30 + 0x48);
                    piVar10 = *(int **)(pbVar29 + 0x44);
                  }
                  iVar23 = (*(uint *)(pbVar30 + 0x60) & piVar10[1] - 1U) * 0xc;
                  *(int *)(*piVar10 + iVar23 + 4) = *(int *)(*piVar10 + iVar23 + 4) + -1;
                  if (*(byte **)(**(int **)(pbVar29 + 0x44) + iVar23) == pbVar30 + 0x44) {
                    *(undefined4 *)(**(int **)(pbVar29 + 0x44) + iVar23) =
                         *(undefined4 *)(pbVar30 + 0x54);
                  }
                  iVar23 = *(int *)(pbVar30 + 0x54);
                  if (*(int *)(pbVar30 + 0x50) != 0) {
                    *(int *)(*(int *)(pbVar30 + 0x50) + 0x10) = iVar23;
                    iVar23 = *(int *)(pbVar30 + 0x54);
                  }
                  if (iVar23 != 0) {
                    *(undefined4 *)(iVar23 + 0xc) = *(undefined4 *)(pbVar30 + 0x50);
                  }
                  *(int *)(*(int *)(pbVar29 + 0x44) + 0xc) =
                       *(int *)(*(int *)(pbVar29 + 0x44) + 0xc) + -1;
                  pbVar25 = pbVar29;
                }
                free(pbVar30);
                break;
              }
              pbVar11 = pbVar17;
              pbVar22 = pbVar8;
              pbVar33 = pbVar32;
              if (*(int *)(pbVar17 + 8) != 0) {
                pbVar22 = (byte *)(*(int *)(pbVar17 + 8) + *(int *)(*(int *)(pbVar25 + 0x44) + 0x14)
                                  );
              }
LAB_0003837c:
              pbVar17 = pbVar22;
              pbVar5 = pbVar5 + -1;
              if (pbVar33 == (byte *)0x0) goto LAB_00038f88;
              *(int *)(pbVar33 + 8) = (int)pbVar11 - *(int *)(*(int *)(pbVar25 + 0x44) + 0x14);
              pbVar32 = pbVar11;
              if (pbVar11 != (byte *)0x0) {
                while( true ) {
                  iVar23 = (int)pbVar33 - *(int *)(*(int *)(pbVar25 + 0x44) + 0x14);
                  pbVar32 = pbVar11;
                  while( true ) {
                    *(int *)(pbVar32 + 4) = iVar23;
                    pbVar11 = pbVar24;
                    pbVar33 = pbVar32;
                    if (pbVar8 == (byte *)0x0) goto LAB_00038358;
LAB_000383d0:
                    pbVar24 = pbVar11;
                    if (pbVar17 == (byte *)0x0 || pbVar5 == (byte *)0x0) {
                      if (pbVar11 != (byte *)0x0) {
                        pbVar24 = *(byte **)(pbVar11 + 8);
                        if (pbVar24 != (byte *)0x0) {
                          pbVar24 = pbVar24 + *(int *)(*(int *)(pbVar25 + 0x44) + 0x14);
                        }
                      }
                    }
                    else {
                      iVar23 = *(int *)(*(int *)(pbVar25 + 0x44) + 0x14);
                      if (0 < *(int *)(pbVar11 + -iVar23 + 100) - *(int *)(pbVar17 + -iVar23 + 100))
                      {
                        pbVar22 = *(byte **)(pbVar17 + 8);
                        pbVar11 = pbVar17;
                        if (pbVar22 != (byte *)0x0) {
                          pbVar22 = pbVar22 + iVar23;
                        }
                        goto LAB_0003837c;
                      }
                      if (pbVar11 != (byte *)0x0) {
                        if (*(int *)(pbVar11 + 8) == 0) {
                          pbVar24 = (byte *)0x0;
                        }
                        else {
                          pbVar24 = (byte *)(*(int *)(pbVar11 + 8) + iVar23);
                        }
                      }
                    }
                    pbVar8 = pbVar8 + -1;
                    if (pbVar33 != (byte *)0x0) break;
LAB_00038f88:
                    pbVar30 = pbVar11;
                    pbVar32 = pbVar30;
                    if (pbVar30 == (byte *)0x0) goto LAB_00038350;
                    iVar23 = 0;
                  }
                  if (pbVar11 == (byte *)0x0) break;
                  *(int *)(pbVar33 + 8) = (int)pbVar11 - *(int *)(*(int *)(pbVar25 + 0x44) + 0x14);
                }
                pbVar33[8] = 0;
                pbVar33[9] = 0;
                pbVar33[10] = 0;
                pbVar33[0xb] = 0;
                pbVar32 = pbVar11;
              }
            } while( true );
          }
          sVar2 = strlen((char *)pbVar4);
          uVar31 = sVar2;
          if (sVar2 < 0xc) {
            uVar16 = 0x9e3779b9;
            uVar27 = 0xfeedbeef;
            uVar3 = 0x9e3779b9;
            pbVar29 = pbVar4;
          }
          else {
            uVar16 = 0x9e3779b9;
            uVar3 = 0x9e3779b9;
            uVar27 = 0xfeedbeef;
            pbVar30 = pbVar4;
            do {
              pbVar29 = pbVar30 + 0xc;
              uVar31 = uVar31 - 0xc;
              iVar23 = (uint)pbVar30[6] * 0x10000 + (uint)pbVar30[5] * 0x100 + (uint)pbVar30[4] +
                       (uint)pbVar30[7] * 0x1000000 + uVar16;
              uVar27 = (uint)pbVar30[10] * 0x10000 + (uint)pbVar30[9] * 0x100 + (uint)pbVar30[8] +
                       (uint)pbVar30[0xb] * 0x1000000 + uVar27;
              uVar18 = ((((uint)pbVar30[2] * 0x10000 + (uint)pbVar30[1] * 0x100 + (uint)*pbVar30 +
                         (uint)pbVar30[3] * 0x1000000) - iVar23) - uVar27) + uVar3 ^ uVar27 >> 0xd;
              uVar3 = (iVar23 - uVar27) - uVar18 ^ uVar18 << 8;
              uVar16 = (uVar27 - uVar18) - uVar3 ^ uVar3 >> 0xd;
              uVar19 = (uVar18 - uVar3) - uVar16 ^ uVar16 >> 0xc;
              uVar27 = (uVar3 - uVar16) - uVar19 ^ uVar19 << 0x10;
              uVar18 = (uVar16 - uVar19) - uVar27 ^ uVar27 >> 5;
              uVar3 = (uVar19 - uVar27) - uVar18 ^ uVar18 >> 3;
              uVar16 = (uVar27 - uVar18) - uVar3 ^ uVar3 << 10;
              uVar27 = (uVar18 - uVar3) - uVar16 ^ uVar16 >> 0xf;
              pbVar30 = pbVar29;
            } while (0xb < uVar31);
          }
          uVar27 = uVar27 + sVar2;
          switch(uVar31) {
          case 0xb:
            uVar27 = uVar27 + (uint)pbVar29[10] * 0x1000000;
          case 10:
            uVar27 = uVar27 + (uint)pbVar29[9] * 0x10000;
          case 9:
            uVar27 = uVar27 + (uint)pbVar29[8] * 0x100;
          case 8:
            uVar16 = uVar16 + (uint)pbVar29[7] * 0x1000000;
          case 7:
            uVar16 = uVar16 + (uint)pbVar29[6] * 0x10000;
          case 6:
            uVar16 = uVar16 + (uint)pbVar29[5] * 0x100;
          case 5:
            uVar16 = uVar16 + pbVar29[4];
          case 4:
            uVar3 = uVar3 + (uint)pbVar29[3] * 0x1000000;
          case 3:
            uVar3 = uVar3 + (uint)pbVar29[2] * 0x10000;
          case 2:
            uVar3 = uVar3 + (uint)pbVar29[1] * 0x100;
          case 1:
            uVar3 = uVar3 + *pbVar29;
          }
          *(byte **)(pbVar4 + 0x58) = pbVar4;
          uVar3 = (uVar3 - uVar16) - uVar27 ^ uVar27 >> 0xd;
          uVar31 = (uVar16 - uVar27) - uVar3 ^ uVar3 << 8;
          uVar27 = (uVar27 - uVar3) - uVar31 ^ uVar31 >> 0xd;
          uVar3 = (uVar3 - uVar31) - uVar27 ^ uVar27 >> 0xc;
          uVar31 = (uVar31 - uVar27) - uVar3 ^ uVar3 << 0x10;
          uVar27 = (uVar27 - uVar3) - uVar31 ^ uVar31 >> 5;
          uVar3 = (uVar3 - uVar31) - uVar27 ^ uVar27 >> 3;
          uVar31 = (uVar31 - uVar27) - uVar3 ^ uVar3 << 10;
          uVar31 = (uVar27 - uVar3) - uVar31 ^ uVar31 >> 0xf;
          *(uint *)(pbVar4 + 0x60) = uVar31;
          sVar2 = strlen((char *)pbVar4);
          *(size_t *)(pbVar4 + 0x5c) = sVar2;
          if (pbVar25 == (byte *)0x0) {
            pbVar4[0x4c] = 0;
            pbVar4[0x4d] = 0;
            pbVar4[0x4e] = 0;
            pbVar4[0x4f] = 0;
            pbVar4[0x48] = 0;
            pbVar4[0x49] = 0;
            pbVar4[0x4a] = 0;
            pbVar4[0x4b] = 0;
            DAT_0006a1e0 = pbVar4;
            pvVar7 = malloc(0x2c);
            *(void **)(pbVar4 + 0x44) = pvVar7;
            if (pvVar7 == (void *)0x0) goto LAB_00039610;
            memset(pvVar7,0,0x2c);
            *(byte **)(*(int *)(pbVar4 + 0x44) + 0x10) = pbVar4 + 0x44;
            *(undefined4 *)(*(int *)(pbVar4 + 0x44) + 4) = 0x20;
            *(undefined4 *)(*(int *)(pbVar4 + 0x44) + 8) = 5;
            *(undefined4 *)(*(int *)(pbVar4 + 0x44) + 0x14) = 0x44;
            puVar12 = *(undefined4 **)(pbVar4 + 0x44);
            pvVar7 = malloc(0x180);
            *puVar12 = pvVar7;
            if ((void *)**(undefined4 **)(pbVar4 + 0x44) == (void *)0x0) goto LAB_00039610;
            memset((void *)**(undefined4 **)(pbVar4 + 0x44),0,0x180);
            *(undefined4 *)(*(int *)(pbVar4 + 0x44) + 0x28) = 0xa0111fe1;
            pbVar25 = pbVar4;
          }
          else {
            uVar20 = *(undefined4 *)(pbVar25 + 0x44);
            pbVar4[0x4c] = 0;
            pbVar4[0x4d] = 0;
            pbVar4[0x4e] = 0;
            pbVar4[0x4f] = 0;
            *(undefined4 *)(pbVar4 + 0x44) = uVar20;
            *(int *)(pbVar4 + 0x48) =
                 *(int *)(*(int *)(pbVar25 + 0x44) + 0x10) -
                 *(int *)(*(int *)(pbVar25 + 0x44) + 0x14);
            *(byte **)(*(int *)(*(int *)(pbVar25 + 0x44) + 0x10) + 8) = pbVar4;
            *(byte **)(*(int *)(pbVar25 + 0x44) + 0x10) = pbVar4 + 0x44;
          }
          *(int *)(*(int *)(pbVar25 + 0x44) + 0xc) = *(int *)(*(int *)(pbVar25 + 0x44) + 0xc) + 1;
          iVar23 = (uVar31 & (*(int **)(pbVar25 + 0x44))[1] - 1U) * 0xc;
          iVar28 = **(int **)(pbVar25 + 0x44) + iVar23;
          *(int *)(iVar28 + 4) = *(int *)(iVar28 + 4) + 1;
          uVar20 = *(undefined4 *)(**(int **)(pbVar25 + 0x44) + iVar23);
          pbVar4[0x50] = 0;
          pbVar4[0x51] = 0;
          pbVar4[0x52] = 0;
          pbVar4[0x53] = 0;
          *(undefined4 *)(pbVar4 + 0x54) = uVar20;
          iVar28 = **(int **)(pbVar25 + 0x44);
          if (*(int *)(iVar28 + iVar23) != 0) {
            *(byte **)(*(int *)(iVar28 + iVar23) + 0xc) = pbVar4 + 0x44;
            iVar28 = **(int **)(pbVar25 + 0x44);
          }
          *(byte **)(iVar28 + iVar23) = pbVar4 + 0x44;
          if (((uint)((*(int *)(**(int **)(pbVar25 + 0x44) + iVar23 + 8) + 1) * 10) <=
               *(uint *)(**(int **)(pbVar25 + 0x44) + iVar23 + 4)) &&
             (*(int *)(*(int *)(pbVar4 + 0x44) + 0x24) != 1)) {
            pvVar7 = calloc(*(int *)(*(int *)(pbVar4 + 0x44) + 4) * 0x18,1);
            if (pvVar7 == (void *)0x0) {
LAB_00039610:
                    /* WARNING: Subroutine does not return */
              exit(-1);
            }
            iVar23 = *(int *)(pbVar4 + 0x44);
            iVar28 = 0;
            *(uint *)(iVar23 + 0x18) =
                 (uint)((*(int *)(iVar23 + 4) * 2 - 1U & *(uint *)(iVar23 + 0xc)) != 0) +
                 (*(uint *)(iVar23 + 0xc) >> (*(int *)(iVar23 + 8) + 1U & 0xff));
            *(undefined4 *)(*(int *)(pbVar4 + 0x44) + 0x1c) = 0;
            piVar10 = *(int **)(pbVar4 + 0x44);
            uVar31 = piVar10[1];
            if (uVar31 != 0) {
              local_8a4 = 0;
              do {
                iVar23 = *(int *)(*piVar10 + iVar28);
                if (*(int *)(*piVar10 + iVar28) != 0) {
                  while( true ) {
                    iVar26 = *(int *)(iVar23 + 0x10);
                    uVar27 = uVar31 * 2 - 1 & *(uint *)(iVar23 + 0x1c);
                    uVar31 = *(int *)((int)pvVar7 + uVar27 * 0xc + 4) + 1;
                    *(uint *)((int)pvVar7 + uVar27 * 0xc + 4) = uVar31;
                    iVar14 = *(int *)(pbVar4 + 0x44);
                    if (*(uint *)(iVar14 + 0x18) < uVar31) {
                      *(int *)(iVar14 + 0x1c) = *(int *)(iVar14 + 0x1c) + 1;
                      uVar20 = FUN_0004a488(*(undefined4 *)((int)pvVar7 + uVar27 * 0xc + 4),
                                            *(undefined4 *)(*(int *)(pbVar4 + 0x44) + 0x18));
                      *(undefined4 *)((int)pvVar7 + uVar27 * 0xc + 8) = uVar20;
                    }
                    *(undefined4 *)(iVar23 + 0xc) = 0;
                    *(undefined4 *)(iVar23 + 0x10) = *(undefined4 *)((int)pvVar7 + uVar27 * 0xc);
                    iVar14 = *(int *)((int)pvVar7 + uVar27 * 0xc);
                    if (iVar14 != 0) {
                      *(int *)(iVar14 + 0xc) = iVar23;
                    }
                    *(int *)((int)pvVar7 + uVar27 * 0xc) = iVar23;
                    piVar10 = *(int **)(pbVar4 + 0x44);
                    if (iVar26 == 0) break;
                    uVar31 = piVar10[1];
                    iVar23 = iVar26;
                  }
                  uVar31 = piVar10[1];
                }
                iVar28 = iVar28 + 0xc;
                local_8a4 = local_8a4 + 1;
              } while (local_8a4 < uVar31);
            }
            free((void *)*piVar10);
            *(int *)(*(int *)(pbVar4 + 0x44) + 4) = *(int *)(*(int *)(pbVar4 + 0x44) + 4) << 1;
            *(int *)(*(int *)(pbVar4 + 0x44) + 8) = *(int *)(*(int *)(pbVar4 + 0x44) + 8) + 1;
            **(undefined4 **)(pbVar4 + 0x44) = pvVar7;
            iVar23 = *(int *)(pbVar4 + 0x44);
            if (*(uint *)(iVar23 + 0xc) >> 1 < *(uint *)(iVar23 + 0x1c)) {
              iVar28 = *(int *)(iVar23 + 0x20) + 1;
            }
            else {
              iVar28 = 0;
            }
            *(int *)(iVar23 + 0x20) = iVar28;
            if (1 < *(uint *)(*(int *)(pbVar4 + 0x44) + 0x20)) {
              *(undefined4 *)(*(int *)(pbVar4 + 0x44) + 0x24) = 1;
            }
          }
          uVar27 = *(uint *)(param_1 + 0x48);
          uVar31 = (0x1d - (uint)*(byte *)(param_1 + 0x48)) * 8;
          if ((int)uVar31 < 8) {
            uVar31 = 8;
          }
          dVar36 = (double)FUN_0004acbc(0xffff << (uVar31 & 0xff),
                                        0xffff << (uVar31 - 0x20 & 0xff) |
                                        0xffffU >> (0x20 - uVar31 & 0xff));
          dVar37 = (double)VectorSignedToFloat((uVar27 >> 8 & 0xff) << 0x10 |
                                               (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18,
                                               (byte)(in_fpscr >> 0x16) & 3);
          dVar36 = dVar36 / dVar37;
          if (dVar36 != DAT_000681f8) {
            uVar38 = FUN_0004ad88(SUB84(dVar36,0),(int)((ulonglong)dVar36 >> 0x20));
            FUN_00028838((int)uVar38,(int)((ulonglong)uVar38 >> 0x20),&DAT_0006a1e4,8,0);
            DAT_000681f8 = dVar36;
            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
              snprintf((char *)&local_830,0x800,"Network diff set to %s",&DAT_0006a1e4);
              FUN_0001dd98(5,&local_830,0);
            }
          }
          if (((local_8ac != 0) && (DAT_000686f1 != '\0')) &&
             ((DAT_00072da0 != '\0' || ((DAT_000686f0 != '\0' || (6 < DAT_00067848)))))) {
            snprintf((char *)&local_830,0x800,"Deleted block %d from database",local_8ac);
            FUN_0001dd98(7,&local_830,0);
          }
          iVar23 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0006a1c0);
          if (iVar23 == 0) {
            (*DAT_0006796c)();
            iVar23 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076120);
            if (iVar23 == 0) {
              iVar23 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00076138);
              if (iVar23 == 0) {
                FUN_000206d8(&DAT_00072dc4);
                strcpy(&DAT_000761f4,(char *)local_874);
                FUN_00023324(&DAT_0006a1ec,&local_894,0x20,"cgminer.c","set_curblock",0x15d6);
                local_830 = DAT_00072dc4;
                iVar23 = DAT_00072dc8 / 1000;
                ptVar6 = localtime(&local_830);
                snprintf(&DAT_0006a20c,0x20,"[%02d:%02d:%02d.%03d]",ptVar6->tm_hour,ptVar6->tm_min,
                         ptVar6->tm_sec,iVar23);
                iVar23 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00076138);
                if (iVar23 == 0) {
                  iVar23 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076120);
                  if (iVar23 == 0) {
                    (*DAT_0006796c)();
                    iVar23 = 0;
                    pcVar13 = &DAT_000761f4;
                    do {
                      if (*pcVar13 != '0') break;
                      iVar23 = iVar23 + 1;
                      pcVar13 = pcVar13 + 1;
                    } while (iVar23 != 0x39);
                    strncpy(&DAT_0006a22c,&DAT_000761f4 + iVar23,8);
                    DAT_0006a234 = 0;
                    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
                      snprintf((char *)&local_830,0x800,"New block: %s... diff %s",&DAT_000761f4,
                               &DAT_0006a1e4);
                      FUN_0001dd98(6,&local_830,0);
                    }
                    if (((local_8ac != 0) && (DAT_000686f1 != '\0')) &&
                       ((DAT_00072da0 != '\0' || ((DAT_000686f0 != '\0' || (6 < DAT_00067848)))))) {
                      snprintf((char *)&local_830,0x800,"Deleted block %d from database",local_8ac);
                      FUN_0001dd98(7,&local_830,0);
                    }
                    FUN_00023324(piVar9 + 0x88,&local_894,0x20,"cgminer.c","test_work_current",
                                 0x1669);
                    if (DAT_000761e8 == 1) goto LAB_00038224;
                    DAT_00068cac = DAT_00068cac + 1;
                    *(int *)(param_1 + 0x150) = DAT_00068cac;
                    if (*(char *)(param_1 + 0x118) == '\0') {
                      if (DAT_000762d4 == '\0') {
                        if ((((char)piVar9[0xe5] == '\0') && (DAT_000686f1 != '\0')) &&
                           ((DAT_00072da0 != '\0' || ((DAT_000686f0 != '\0' || (6 < DAT_00067848))))
                           )) {
                          local_830._0_1_ = 'N';
                          local_830._1_1_ = 'e';
                          local_830._2_1_ = 'w';
                          local_830._3_1_ = ' ';
                          builtin_strncpy(acStack_82c,"block detect",0xc);
                          local_820._0_1_ = 'e';
                          local_820._1_1_ = 'd';
                          local_820._2_1_ = ' ';
                          local_820._3_1_ = 'o';
                          builtin_strncpy(acStack_81c,"n networ",8);
                          local_814._0_1_ = 'k';
                          local_814._1_1_ = '\0';
                          FUN_0001dd98(7,&local_830,0);
                        }
                      }
                      else if ((((char)piVar9[0xe5] == '\0') && (DAT_000686f1 != '\0')) &&
                              ((DAT_00072da0 != '\0' ||
                               ((DAT_000686f0 != '\0' || (6 < DAT_00067848)))))) {
                        local_830._0_1_ = 'N';
                        local_830._1_1_ = 'e';
                        local_830._2_1_ = 'w';
                        local_830._3_1_ = ' ';
                        builtin_strncpy(acStack_82c,"block detect",0xc);
                        local_820._0_1_ = 'e';
                        local_820._1_1_ = 'd';
                        local_820._2_1_ = ' ';
                        local_820._3_1_ = 'o';
                        builtin_strncpy(acStack_81c,"n networ",8);
                        local_814._0_1_ = 'k';
                        local_814._1_1_ = ' ';
                        local_814._2_1_ = 'b';
                        local_814._3_1_ = 'e';
                        builtin_strncpy(local_810,"fore pool notificati",0x14);
                        uStack_7fc = 0x6e6f;
                        local_7fa = 0;
                        FUN_0001dd98(7,&local_830,0);
                      }
                    }
                    else if (*(char *)(param_1 + 0x11c) == '\0') {
                      if ((DAT_000686f1 != '\0') &&
                         (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848))))
                      {
                        puVar21 = &DAT_0004d140;
                        iVar23 = **(int **)(param_1 + 0x104);
                        pcVar13 = "%sLONGPOLL from pool %d detected new block";
                        if (*(char *)(param_1 + 0x144) != '\0') {
                          puVar21 = &DAT_00053824;
                        }
                        goto LAB_00038c80;
                      }
                    }
                    else if ((DAT_000686f1 != '\0') &&
                            (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)
                             ))) {
                      pcVar13 = "Stratum from pool %d detected new block at height %d";
                      puVar21 = (undefined1 *)*piVar9;
                      iVar23 = local_898;
LAB_00038c80:
                      snprintf((char *)&local_830,0x800,pcVar13,puVar21,iVar23);
                      FUN_0001dd98(7,&local_830,0);
                    }
                    FUN_0002c5c8();
                    cVar15 = '\x01';
LAB_00038224:
                    *(undefined1 *)(param_1 + 0x118) = 0;
                    return cVar15;
                  }
                  piVar9 = __errno_location();
                  iVar23 = *piVar9;
                  pcVar13 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
                }
                else {
                  piVar9 = __errno_location();
                  iVar23 = *piVar9;
                  pcVar13 = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
                }
                snprintf((char *)&local_830,0x800,pcVar13,iVar23,"cgminer.c","set_curblock",0x15d8);
                goto LAB_00038f68;
              }
              piVar9 = __errno_location();
              iVar23 = *piVar9;
              pcVar34 = "set_curblock";
              uVar20 = 0x15d3;
              pcVar13 = "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d";
            }
            else {
              piVar9 = __errno_location();
              iVar23 = *piVar9;
              pcVar34 = "set_curblock";
              uVar20 = 0x15d3;
              pcVar13 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
            }
          }
          else {
LAB_000391bc:
            piVar9 = __errno_location();
            pcVar34 = "block_exists";
            iVar23 = *piVar9;
            uVar20 = 0x1630;
            pcVar13 = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
          }
          snprintf((char *)&local_830,0x800,pcVar13,iVar23,"cgminer.c",pcVar34,uVar20);
          goto LAB_00038f68;
        }
        piVar9 = __errno_location();
        iVar23 = *piVar9;
        pcVar13 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
        pcVar34 = "test_work_current";
        uVar20 = 0x1661;
      }
      else {
        piVar9 = __errno_location();
        iVar23 = *piVar9;
        pcVar13 = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
        pcVar34 = "test_work_current";
        uVar20 = 0x1661;
      }
    }
    else {
      piVar9 = __errno_location();
      pcVar34 = "test_work_current";
      iVar23 = *piVar9;
      uVar20 = 0x1659;
LAB_0003906c:
      pcVar13 = "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d";
    }
  }
  else {
    piVar9 = __errno_location();
    iVar23 = *piVar9;
    pcVar13 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
    pcVar34 = "test_work_current";
    uVar20 = 0x1659;
  }
  snprintf((char *)&local_830,0x800,pcVar13,iVar23,"cgminer.c",pcVar34,uVar20);
LAB_00038f68:
  FUN_0001dd98(3,&local_830,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

