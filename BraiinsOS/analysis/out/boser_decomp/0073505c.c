// FUN_0073505c @ 0073505c size=3240 calls_out=20 calls_in=0
// strings: /pro

undefined4 FUN_0073505c(uint *param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint extraout_r3;
  byte *pbVar31;
  int *piVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int *piVar36;
  uint uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  int unaff_r9;
  uint uVar40;
  int *piVar41;
  int *piVar42;
  bool bVar43;
  undefined8 uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  int *local_a8;
  int *local_a0;
  int local_9c;
  undefined1 *local_98;
  int local_70;
  undefined1 *local_6c;
  int local_68;
  uint local_64;
  int iStack_60;
  uint uStack_5c;
  uint local_58;
  int local_54;
  undefined1 *local_50;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  int *local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar15 = param_1[2];
  pbVar31 = (byte *)param_1[1];
  uVar40 = *param_1;
  iVar16 = param_3[2];
  uVar33 = (uint)(ushort)param_1[3];
  if (pbVar31 == (byte *)0x0) {
    if (uVar40 == 0) goto LAB_007350e4;
    if (iVar16 == 0) goto LAB_0073510c;
    puVar12 = (undefined1 *)0x1;
    iVar7 = 0;
    iVar16 = 0;
  }
  else {
    if (uVar40 == 0) {
LAB_007350e4:
      FUN_019a0a30(&local_70);
      if (local_70 != -0x80000000) {
        iVar16 = local_70;
        puVar12 = local_6c;
        iVar7 = local_68;
        goto LAB_00735b2c;
      }
      FUN_0069263c((uint)local_6c & 0xff,local_68);
      goto LAB_00735b00;
    }
    if (iVar16 == 0) {
      param_1 = (uint *)(uint)*pbVar31;
    }
    if (iVar16 == 0 && param_1 == (uint *)0x0) {
LAB_0073510c:
      local_4c = 0;
      local_50 = (undefined1 *)0x4;
      local_54 = 0;
      local_70 = 0;
      local_64 = local_64 & 0xffff0000;
      local_6c = (undefined1 *)0x1b6;
      local_68 = 1;
      FUN_019a581c(&local_30,&local_70,"/pro",0xf);
      uVar37 = local_2c;
      if ((char)local_30 == '\x04') {
        local_48 = local_2c;
        local_3c = (int *)0x0;
        local_40 = 1;
        local_44 = 0;
        FUN_01980288(&local_70,&local_48,&local_44);
        piVar14 = local_3c;
        iVar16 = local_40;
        if ((char)local_70 == '\x04') {
          local_a0 = (int *)0x0;
          iVar7 = local_40 + -2;
          iVar35 = local_40 + -1;
          local_9c = 0;
          local_98 = (undefined1 *)0x4;
          piVar32 = (int *)0x0;
LAB_007351e0:
          if (piVar14 < local_a0) {
LAB_00735288:
            bVar43 = true;
            piVar8 = piVar14;
            local_a8 = piVar32;
            if (piVar14 != piVar32) goto LAB_007352a8;
          }
          else {
            uVar24 = (int)piVar14 - (int)local_a0;
            iVar34 = iVar16 + (int)local_a0;
            if (uVar24 < 8) {
              uVar17 = 0;
              if (uVar24 == 0) {
                uVar46 = 0;
              }
              else {
                do {
                  if (*(char *)(iVar34 + uVar17) == '\n') {
                    uVar46 = CONCAT44(uVar17,1);
                    goto LAB_00735244;
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar24 != uVar17);
                uVar46 = (ulonglong)uVar24 << 0x20;
              }
            }
            else {
              uVar46 = FUN_01307168(10,iVar34);
            }
LAB_00735244:
            iVar28 = (int)(uVar46 >> 0x20);
            if ((uVar46 & 1) == 0) {
              local_a0 = piVar14;
              goto LAB_00735288;
            }
            piVar8 = (int *)(iVar28 + (int)local_a0);
            local_a0 = (int *)((int)piVar8 + 1);
            if ((piVar14 <= piVar8) || (*(char *)(iVar34 + iVar28) != '\n')) goto LAB_007351e0;
            bVar43 = false;
            piVar8 = local_a0;
            local_a8 = local_a0;
LAB_007352a8:
            piVar18 = (int *)((int)piVar8 - (int)piVar32);
            piVar9 = (int *)(iVar16 + (int)piVar32);
            if ((piVar18 == (int *)0x0) || (*(char *)(iVar35 + (int)piVar8) != '\n')) {
              piVar41 = piVar18;
            }
            else {
              piVar41 = (int *)((int)piVar18 - 1);
              if (piVar41 == (int *)0x0) {
                piVar41 = (int *)0x0;
              }
              else if (*(char *)(iVar7 + (int)piVar8) == '\r') {
                piVar41 = (int *)((int)piVar18 - 2);
              }
            }
            if (piVar9 != (int *)0x0) {
              uVar44 = FUN_0073498c(piVar9,piVar41);
              piVar18 = (int *)((ulonglong)uVar44 >> 0x20);
              piVar8 = (int *)uVar44;
              piVar36 = (int *)0x0;
              do {
                uVar24 = (int)piVar18 - (int)piVar36;
                if (uVar24 < 8) {
                  uVar17 = 0;
                  if (uVar24 == 0) {
                    uVar46 = 0;
                  }
                  else {
                    do {
                      if (*(char *)((int)piVar8 + (int)piVar36 + uVar17) == ' ') {
                        uVar46 = CONCAT44(uVar17,1);
                        goto LAB_00735360;
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar24 != uVar17);
                    uVar46 = (ulonglong)uVar24 << 0x20;
                  }
                }
                else {
                  uVar46 = FUN_01307168(0x20,(int)piVar8 + (int)piVar36);
                }
LAB_00735360:
                uVar24 = (uint)uVar46;
                piVar25 = (int *)0x0;
                piVar42 = param_3;
                if ((uVar46 & 1) == 0) break;
                piVar32 = (int *)((int)(uVar46 >> 0x20) + (int)piVar36);
                piVar36 = (int *)((int)piVar32 + 1);
                if ((piVar32 < piVar18) &&
                   (uVar24 = (uint)*(byte *)((int)piVar8 + (int)piVar32), uVar24 == 0x20)) {
                  uVar24 = (int)piVar8 + (int)piVar36;
                  piVar25 = piVar8;
                  piVar42 = (int *)((int)piVar18 - (int)piVar36);
                  break;
                }
              } while (piVar36 <= piVar18);
              if (piVar25 == (int *)0x0) {
                uVar24 = 1;
                piVar32 = piVar41;
                piVar25 = piVar9;
                piVar42 = piVar25;
              }
              if (piVar32 != (int *)0x0) {
                uVar44 = FUN_0073498c(uVar24,piVar42);
                piVar9 = (int *)((ulonglong)uVar44 >> 0x20);
                uVar17 = (uint)uVar44;
                piVar18 = (int *)0x0;
                piVar8 = piVar25;
                do {
                  uVar26 = (int)piVar9 - (int)piVar18;
                  if (uVar26 < 8) {
                    uVar19 = 0;
                    if (uVar26 == 0) {
                      uVar46 = 0;
                    }
                    else {
                      do {
                        if (*(char *)(uVar17 + (int)piVar18 + uVar19) == ' ') {
                          uVar46 = CONCAT44(uVar19,1);
                          goto LAB_00735438;
                        }
                        uVar19 = uVar19 + 1;
                      } while (uVar26 != uVar19);
                      uVar46 = (ulonglong)uVar26 << 0x20;
                    }
                  }
                  else {
                    uVar46 = FUN_01307168(0x20,uVar17 + (int)piVar18);
                  }
LAB_00735438:
                  uVar19 = (uint)uVar46;
                  uVar26 = 0;
                  if ((uVar46 & 1) == 0) break;
                  piVar8 = (int *)((int)(uVar46 >> 0x20) + (int)piVar18);
                  piVar18 = (int *)((int)piVar8 + 1);
                  if ((piVar8 < piVar9) &&
                     (uVar19 = (uint)*(byte *)(uVar17 + (int)piVar8), uVar19 == 0x20)) {
                    uVar19 = uVar17 + (int)piVar18;
                    piVar41 = (int *)((int)piVar9 - (int)piVar18);
                    uVar26 = uVar17;
                    break;
                  }
                } while (piVar18 <= piVar9);
                if (uVar26 == 0) {
                  uVar19 = 1;
                  piVar41 = (int *)0x0;
                  piVar8 = piVar42;
                  uVar26 = uVar24;
                }
                if (piVar8 != (int *)0x0) {
                  uVar44 = FUN_0073498c(uVar19,piVar41);
                  piVar9 = (int *)((ulonglong)uVar44 >> 0x20);
                  uVar24 = (uint)uVar44;
                  piVar18 = (int *)0x0;
                  do {
                    uVar17 = (int)piVar9 - (int)piVar18;
                    if (uVar17 < 8) {
                      uVar20 = 0;
                      if (uVar17 == 0) {
                        uVar46 = 0;
                      }
                      else {
                        do {
                          if (*(char *)(uVar24 + (int)piVar18 + uVar20) == ' ') {
                            uVar46 = CONCAT44(uVar20,1);
                            goto LAB_00735510;
                          }
                          uVar20 = uVar20 + 1;
                        } while (uVar17 != uVar20);
                        uVar46 = (ulonglong)uVar17 << 0x20;
                      }
                    }
                    else {
                      uVar46 = FUN_01307168(0x20,uVar24 + (int)piVar18);
                    }
LAB_00735510:
                    iVar34 = (int)(uVar46 >> 0x20);
                    uVar20 = (uint)uVar46;
                    uVar17 = 0;
                    if ((uVar46 & 1) == 0) break;
                    piVar42 = (int *)(iVar34 + (int)piVar18);
                    piVar18 = (int *)((int)piVar42 + 1);
                    if ((piVar42 < piVar9) &&
                       (uVar20 = (uint)*(byte *)(uVar24 + (int)piVar42), uVar20 == 0x20)) {
                      uVar46 = CONCAT44((int)piVar9 - (int)piVar18,uVar24 + (int)piVar18);
                      uVar17 = uVar24;
                      break;
                    }
                    uVar46 = CONCAT44(iVar34,uVar20);
                  } while (piVar18 <= piVar9);
                  if (uVar17 == 0) {
                    uVar46 = 1;
                    piVar42 = piVar41;
                    uVar17 = uVar19;
                  }
                  if (piVar42 != (int *)0x0) {
                    uVar44 = FUN_0073498c();
                    uVar19 = (uint)((ulonglong)uVar44 >> 0x20);
                    iVar34 = (int)uVar44;
                    uVar20 = 0;
                    uVar24 = uVar17;
                    do {
                      uVar27 = uVar19 - uVar20;
                      uVar30 = iVar34 + uVar20;
                      if (uVar27 < 8) {
                        uVar21 = 0;
                        if (uVar27 == 0) {
                          uVar45 = 0;
                        }
                        else {
                          do {
                            if (*(char *)(uVar30 + uVar21) == ' ') {
                              uVar45 = CONCAT44(uVar21,1);
                              goto LAB_007355e8;
                            }
                            uVar21 = uVar21 + 1;
                          } while (uVar27 != uVar21);
                          uVar45 = (ulonglong)uVar27 << 0x20;
                        }
                      }
                      else {
                        uVar45 = FUN_01307168(0x20,uVar30);
                        uVar30 = extraout_r3;
                      }
LAB_007355e8:
                      uVar27 = (uint)uVar45;
                      iVar28 = 0;
                      if ((uVar45 & 1) == 0) break;
                      uVar24 = (int)(uVar45 >> 0x20) + uVar20;
                      uVar20 = uVar24 + 1;
                      if ((uVar24 < uVar19) &&
                         (uVar27 = (uint)*(byte *)(iVar34 + uVar24), uVar27 == 0x20)) {
                        uVar27 = iVar34 + uVar20;
                        uVar30 = uVar19 - uVar20;
                        iVar28 = iVar34;
                        break;
                      }
                    } while (uVar20 <= uVar19);
                    uVar45 = CONCAT44(uVar24,iVar28);
                    if (iVar28 == 0) {
                      uVar27 = 1;
                      uVar30 = 0;
                      uVar45 = uVar46;
                    }
                    iVar34 = (int)(uVar45 >> 0x20);
                    if (iVar34 != 0) {
                      uVar44 = FUN_0073498c(uVar27,uVar30);
                      uVar20 = (uint)((ulonglong)uVar44 >> 0x20);
                      uVar19 = (uint)uVar44;
                      uVar21 = 0;
                      uVar24 = (uint)uVar45;
                      do {
                        uVar29 = uVar20 - uVar21;
                        if (uVar29 < 8) {
                          uVar22 = 0;
                          if (uVar29 == 0) {
                            uVar46 = 0;
                          }
                          else {
                            do {
                              if (*(char *)(uVar19 + uVar21 + uVar22) == ' ') {
                                uVar46 = CONCAT44(uVar22,1);
                                goto LAB_007356c8;
                              }
                              uVar22 = uVar22 + 1;
                            } while (uVar29 != uVar22);
                            uVar46 = (ulonglong)uVar29 << 0x20;
                          }
                        }
                        else {
                          uVar46 = FUN_01307168(0x20,uVar19 + uVar21);
                        }
LAB_007356c8:
                        iVar28 = (int)(uVar46 >> 0x20);
                        uVar22 = (uint)uVar46;
                        uVar29 = 0;
                        if ((uVar46 & 1) == 0) break;
                        uVar24 = iVar28 + uVar21;
                        uVar21 = uVar24 + 1;
                        if ((uVar24 < uVar20) &&
                           (uVar22 = (uint)*(byte *)(uVar19 + uVar24), uVar22 == 0x20)) {
                          uVar46 = CONCAT44(uVar20 - uVar21,uVar19 + uVar21);
                          uVar29 = uVar19;
                          break;
                        }
                        uVar46 = CONCAT44(iVar28,uVar22);
                      } while (uVar21 <= uVar20);
                      uVar39 = (undefined4)(uVar46 >> 0x20);
                      uVar38 = (undefined4)uVar46;
                      if (uVar29 == 0) {
                        uVar38 = 1;
                      }
                      else {
                        uVar30 = uVar24;
                        uVar27 = uVar29;
                      }
                      if (uVar30 != 0) {
                        if (uVar29 == 0) {
                          uVar39 = 0;
                        }
                        uVar44 = FUN_0073498c(uVar38,uVar39);
                        piVar9 = (int *)0x0;
                        do {
                          uVar24 = (int)piVar32 - (int)piVar9;
                          if (uVar24 < 8) {
                            uVar19 = 0;
                            if (uVar24 == 0) {
                              uVar46 = 0;
                            }
                            else {
                              do {
                                if (*(char *)((int)piVar25 + (int)piVar9 + uVar19) == '-') {
                                  uVar46 = CONCAT44(uVar19,1);
                                  goto LAB_007357a4;
                                }
                                uVar19 = uVar19 + 1;
                              } while (uVar24 != uVar19);
                              uVar46 = (ulonglong)uVar24 << 0x20;
                            }
                          }
                          else {
                            uVar46 = FUN_01307168(0x2d,(int)piVar25 + (int)piVar9);
                          }
LAB_007357a4:
                          if ((uVar46 & 1) == 0) break;
                          piVar18 = (int *)((int)(uVar46 >> 0x20) + (int)piVar9);
                          piVar9 = (int *)((int)piVar18 + 1);
                          if ((piVar18 < piVar32) && (*(char *)((int)piVar25 + (int)piVar18) == '-')
                             ) goto LAB_007357d4;
                          if (piVar32 < piVar9) break;
                        } while( true );
                      }
                    }
                  }
                }
              }
              goto LAB_00735ab8;
            }
          }
          local_98 = local_50;
          goto LAB_00735c34;
        }
        FUN_0069263c(local_70,local_6c);
LAB_00735ab8:
        FUN_019bb7e0(local_44,local_40);
        FUN_01bf01d6(uVar37);
      }
      else {
        FUN_0069263c(local_30,local_2c);
      }
      piVar14 = &local_54;
      goto LAB_00735ad4;
    }
    iVar7 = FUN_01bedbda(pbVar31);
    if (iVar7 < 0) {
      uVar38 = 0;
      iVar7 = unaff_r9;
LAB_007350b4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar38,iVar7);
    }
    if (iVar7 == 0) {
      puVar12 = (undefined1 *)0x1;
      iVar16 = 0;
    }
    else {
      uVar38 = 1;
      puVar12 = (undefined1 *)FUN_01298504(iVar7,1);
      if (puVar12 == (undefined1 *)0x0) goto LAB_007350b4;
      iVar16 = iVar7;
    }
    FUN_01bed4e2(puVar12,pbVar31,iVar7);
  }
LAB_00735b28:
  goto LAB_00735b2c;
LAB_007357d4:
  FUN_00734ad4(&local_70,piVar25);
  puVar12 = local_6c;
  if ((local_70 != 0) ||
     (FUN_00734ad4(&local_70,(int)piVar25 + (int)piVar9,(int)piVar32 - (int)piVar9),
     puVar1 = local_6c, local_70 != 0)) goto LAB_00735ab8;
  local_34 = uVar26 + (int)piVar8;
  local_38 = uVar26;
  FUN_00734bc0(&local_70,&local_38);
  puVar2 = local_6c;
  if (((((local_70 != 0) || (FUN_00734bc0(&local_70,&local_38), puVar3 = local_6c, local_70 != 0))
       || (FUN_00734bc0(&local_70,&local_38), puVar4 = local_6c, local_70 != 0)) ||
      ((FUN_00734bc0(&local_70,&local_38), puVar5 = local_6c, local_70 != 0 ||
       (puVar10 = (undefined1 *)FUN_00734c78(&local_38), puVar10 != &DAT_00110000)))) ||
     ((FUN_00734ad4(&local_70,uVar17,piVar42), puVar10 = local_6c, local_70 != 0 ||
      (((FUN_00734d10(&local_70,(uint)uVar45,iVar34), uVar24 = local_64, iVar34 = local_68,
        local_70 == 0 ||
        (FUN_00734ad4(&local_38,local_70,local_6c), iVar28 = local_34, local_38 != 0)) ||
       ((FUN_00734ad4(&local_38,iVar34,uVar24), iVar34 = local_34, local_38 != 0 ||
        ((FUN_00734ad4(&local_70,uVar27,uVar30), puVar6 = local_6c, local_70 != 0 ||
         (FUN_012bbd90(&local_30,(int)uVar44,(int)((ulonglong)uVar44 >> 0x20)), uVar26 = local_28,
         uVar17 = local_2c, uVar24 = local_30, puVar2 == &DAT_00110000)))))))))) goto LAB_00735ab8;
  if (local_9c == local_54) {
    FUN_00719344(&local_54);
    local_98 = local_50;
  }
  iVar11 = local_9c * 0x34;
  local_9c = local_9c + 1;
  puVar23 = (undefined4 *)(local_98 + iVar11);
  *puVar23 = puVar2;
  puVar23[1] = puVar3;
  puVar23[2] = puVar4;
  puVar23[3] = puVar5;
  puVar23[5] = uVar17;
  puVar23[7] = puVar12;
  puVar23[9] = puVar10;
  puVar23[10] = iVar28;
  puVar23[0xb] = iVar34;
  puVar23[0xc] = puVar6;
  puVar23[4] = uVar24;
  puVar23[6] = uVar26;
  puVar23[8] = puVar1;
  piVar32 = local_a8;
  local_4c = local_9c;
  if (bVar43) goto LAB_00735c34;
  goto LAB_007351e0;
LAB_00735c34:
  iVar16 = local_54;
  FUN_019bb7e0(local_44,local_40);
  FUN_01bf01d6(uVar37);
  if (iVar16 != -0x80000000) {
    local_68 = local_9c;
    local_6c = local_98;
    local_70 = iVar16;
    if (local_9c != 0) {
      local_9c = local_9c * 0x34;
      do {
        bVar43 = uVar40 <= *(uint *)(local_98 + 0x1c);
        if (*(uint *)(local_98 + 0x1c) <= uVar40) {
          bVar43 = *(uint *)(local_98 + 0x20) <= uVar40;
        }
        if (!bVar43) {
          iVar16 = *(int *)(local_98 + 0x18);
          if (iVar16 != 0) {
            uVar38 = 0;
            if (-1 < iVar16) {
              uVar39 = *(undefined4 *)(local_98 + 0x14);
              uVar38 = 1;
              puVar12 = (undefined1 *)FUN_01298504(iVar16,1);
              if (puVar12 != (undefined1 *)0x0) {
                FUN_01bed4e2(puVar12,uVar39,iVar16);
                FUN_00735d84(&local_70);
                iVar7 = iVar16;
                goto LAB_00735b28;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar38,iVar16);
          }
        }
        local_98 = local_98 + 0x34;
        local_9c = local_9c + -0x34;
      } while (local_9c != 0);
    }
    piVar14 = &local_70;
LAB_00735ad4:
    FUN_00735d84(piVar14);
  }
  FUN_019a0a30(&local_70);
  iVar16 = local_70;
  puVar12 = local_6c;
  iVar7 = local_68;
  if (local_70 != -0x80000000) goto LAB_00735b2c;
  FUN_0069263c(local_6c,local_68);
LAB_00735b00:
  iVar16 = 0;
  puVar12 = (undefined1 *)0x1;
  iVar7 = 0;
LAB_00735b2c:
  uVar37 = uVar15;
  if (uVar33 == 0) {
    uVar37 = 4;
  }
  if (uVar15 == 0) {
    uVar37 = 4;
    uVar33 = 0;
  }
  if (uVar33 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = FUN_01298504(uVar33 << 3,4);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,uVar33 << 3);
    }
    puVar13 = (undefined4 *)(local_2c + 4);
    puVar23 = (undefined4 *)(uVar37 + 0x14);
    uVar15 = uVar33;
    do {
      uVar15 = uVar15 - 1;
      uVar38 = *puVar23;
      puVar13[-1] = puVar23[-3];
      *puVar13 = uVar38;
      puVar13 = puVar13 + 2;
      puVar23 = puVar23 + 8;
      local_30 = uVar33;
    } while (uVar15 != 0);
  }
  local_64 = local_30;
  iStack_60 = local_2c;
  iVar35 = param_3[2];
  local_70 = iVar16;
  local_6c = puVar12;
  local_68 = iVar7;
  uStack_5c = local_30;
  local_58 = uVar40;
  if (iVar35 == *param_3) {
    local_28 = local_30;
    FUN_0126724c(param_3);
  }
  piVar14 = (int *)(param_3[1] + iVar35 * 0x1c);
  *piVar14 = local_70;
  piVar14[1] = (int)local_6c;
  piVar14[2] = local_68;
  piVar14[3] = local_64;
  piVar14[4] = iStack_60;
  piVar14[5] = uStack_5c;
  piVar14[6] = local_58;
  param_3[2] = iVar35 + 1;
  return 0;
}

