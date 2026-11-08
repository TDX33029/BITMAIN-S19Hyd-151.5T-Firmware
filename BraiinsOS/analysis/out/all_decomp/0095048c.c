// FUN_0095048c @ 0095048c size=3512 calls_out=15 calls_in=1
// strings: performance_scaling | autotuning | management | performance_scaling | autotuning | management

/* WARNING: Removing unreachable block (ram,0x0095122c) */
/* WARNING: Removing unreachable block (ram,0x00951264) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0095048c(undefined4 *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint **ppuVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char *pcVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;
  uint *local_304;
  uint *local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  int local_2a4;
  undefined4 *local_2a0;
  int local_29c;
  uint *local_298;
  uint *puStack_294;
  uint *puStack_290;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  uint *local_228;
  uint *puStack_224;
  uint *puStack_220;
  uint *puStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  uint *local_1f8;
  uint *local_1f4;
  uint *local_1f0;
  uint *puStack_1ec;
  uint *local_1e8;
  uint *puStack_1e4;
  uint *puStack_1e0;
  uint *puStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 auStack_1c0 [136];
  uint *local_138;
  uint *local_134;
  uint *local_130;
  uint *local_12c;
  uint *puStack_128;
  uint *puStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint *local_108;
  uint *local_104;
  uint *local_100;
  uint *local_fc;
  uint *local_f8;
  uint *local_f4;
  uint *local_f0;
  uint *puStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [136];
  undefined4 *local_48;
  undefined4 *local_44;
  int local_40;
  undefined4 *local_3c;
  uint *local_38;
  uint *local_34;
  uint **local_30;
  uint ***local_2c;
  undefined1 *local_28;
  
  local_2a0 = (undefined4 *)&DAT_00000008;
  puVar5 = (undefined4 *)((uint)&local_228 | 4);
  iVar12 = (int)param_3 * 8;
  local_29c = 0;
  local_2a4 = 0;
  puVar9 = param_2;
  while (puVar14 = puVar9, puVar14 != param_2 + iVar12) {
    uVar3 = *puVar14;
    puVar9 = puVar14 + 8;
    if (uVar3 != 0x80000015) {
      uVar6 = 0x15;
      if ((int)uVar3 < 0) {
        uVar6 = uVar3 ^ 0x80000000;
      }
      puVar7 = &switchD_00950584::switchdataD_00950588;
      switch(uVar6) {
      case 1:
        local_100 = (uint *)0x80000001;
        local_fc = (uint *)CONCAT31(local_fc._1_3_,(char)puVar14[1]);
        break;
      default:
        FUN_008f7820(&local_108,puVar14,&local_138,&DAT_01867248);
        if (local_108 == (uint *)&SUB_00000002) {
          goto LAB_00950c68;
        }
        local_298 = local_fc;
        puStack_294 = local_f8;
        puStack_290 = local_f4;
        param_1[8] = local_f0;
        param_1[9] = puStack_ec;
        param_1[10] = local_e8;
        param_1[0xb] = uStack_e4;
        param_1[0xc] = uStack_e0;
        param_1[0xd] = uStack_dc;
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = local_108;
        param_1[3] = local_104;
        param_1[4] = local_100;
        param_1[5] = local_fc;
        param_1[6] = local_f8;
        param_1[7] = local_f4;
        local_1f8 = local_298;
        local_1f4 = puStack_294;
        local_1f0 = puStack_290;
        goto LAB_00951310;
      case 4:
        local_f8 = (uint *)puVar14[2];
        local_f4 = (uint *)puVar14[3];
        local_100 = (uint *)&DAT_80000004;
        break;
      case 0xc:
        uVar3 = puVar14[2];
        puVar8 = (uint *)puVar14[3];
        if (puVar8 == (uint *)&DAT_0000000a) {
          iVar4 = thunk_FUN_016dd50a(uVar3,"autotuning",10);
          if (iVar4 == 0) {
            local_100 = (uint *)0x80000016;
          }
          else {
            uVar22 = thunk_FUN_016dd50a(uVar3,"management",10);
            puVar7 = (uint *)((ulonglong)uVar22 >> 0x20);
            if ((int)uVar22 != 0) goto LAB_00950b44;
            local_100 = (uint *)&DAT_80000018;
          }
        }
        else {
          if (puVar8 == (uint *)&DAT_00000013) {
            uVar22 = thunk_FUN_016dd50a(uVar3,"performance_scaling",0x13);
            puVar7 = (uint *)((ulonglong)uVar22 >> 0x20);
            if ((int)uVar22 == 0) {
              local_100 = (uint *)0x80000017;
              goto LAB_00950ab8;
            }
LAB_00950b44:
            local_304 = (uint *)thunk_FUN_016d4a50(puVar8,puVar7);
            if (local_304 != (uint *)0x0) {
              puVar7 = puVar8;
              goto LAB_00950b58;
            }
LAB_009517cc:
            uVar16 = 1;
            puVar7 = puVar8;
LAB_009517d4:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar16,puVar7);
          }
          if (puVar8 != (uint *)&DAT_0000000f) {
            uVar16 = 0;
            puVar7 = local_304;
            if ((int)puVar8 < 0) goto LAB_009517d4;
            if (puVar8 != (uint *)0x0) goto LAB_00950b44;
            puVar7 = (uint *)0x0;
            local_304 = (uint *)&DAT_00000001;
LAB_00950b58:
            FUN_016dd1aa(local_304,uVar3,puVar8);
            local_100 = (uint *)&DAT_8000000c;
            local_fc = puVar7;
            local_f8 = local_304;
            local_f4 = puVar8;
            goto LAB_00950c68;
          }
          uVar22 = thunk_FUN_016dd50a(uVar3,&DAT_0034901b,0xf);
          puVar7 = (uint *)((ulonglong)uVar22 >> 0x20);
          if ((int)uVar22 != 0) goto LAB_00950b44;
          local_100 = (uint *)0x80000015;
        }
        goto LAB_00950ab8;
      case 0xd:
        puVar7 = (uint *)puVar14[1];
        puVar8 = (uint *)puVar14[2];
        if (puVar8 == (uint *)&DAT_0000000a) {
          iVar4 = thunk_FUN_016dd50a(puVar7,"autotuning",10);
          if (iVar4 == 0) {
            local_100 = (uint *)0x80000016;
          }
          else {
            iVar4 = thunk_FUN_016dd50a(puVar7,"management",10);
            if (iVar4 != 0) goto LAB_009509d4;
            local_100 = (uint *)&DAT_80000018;
          }
        }
        else if (puVar8 == (uint *)&DAT_00000013) {
          iVar4 = thunk_FUN_016dd50a(puVar7,"performance_scaling",0x13);
          if (iVar4 != 0) goto LAB_009509d4;
          local_100 = (uint *)0x80000017;
        }
        else {
          if ((puVar8 != (uint *)&DAT_0000000f) ||
             (iVar4 = thunk_FUN_016dd50a(puVar7,&DAT_0034901b,0xf), iVar4 != 0)) {
LAB_009509d4:
            local_100 = (uint *)&DAT_8000000d;
            local_fc = puVar7;
            local_f8 = puVar8;
            break;
          }
          local_100 = (uint *)0x80000015;
        }
        break;
      case 0xe:
        puVar8 = (uint *)puVar14[3];
        pcVar19 = (char *)puVar14[2];
        if (puVar8 == (uint *)&DAT_0000000a) {
          cVar2 = *pcVar19;
          if (cVar2 == 'm') {
            if (pcVar19[1] == 'a') {
              cVar2 = pcVar19[2];
              bVar20 = cVar2 == 'n';
              if (bVar20) {
                cVar2 = pcVar19[3];
              }
              if (bVar20 && cVar2 == 'a') {
                cVar2 = pcVar19[4];
                bVar20 = cVar2 == 'g';
                if (bVar20) {
                  cVar2 = pcVar19[5];
                }
                if (bVar20 && cVar2 == 'e') {
                  cVar2 = pcVar19[6];
                  bVar20 = cVar2 == 'm';
                  if (bVar20) {
                    cVar2 = pcVar19[7];
                  }
                  if (bVar20 && cVar2 == 'e') {
                    cVar2 = pcVar19[8];
                    bVar20 = cVar2 == 'n';
                    if (bVar20) {
                      cVar2 = pcVar19[9];
                    }
                    if (bVar20 && cVar2 == 't') {
                      local_100 = (uint *)&DAT_80000018;
                      break;
                    }
                  }
                }
              }
            }
          }
          else {
            bVar20 = cVar2 == 'a';
            if (bVar20) {
              cVar2 = pcVar19[1];
            }
            if (bVar20 && cVar2 == 'u') {
              cVar2 = pcVar19[2];
              bVar20 = cVar2 == 't';
              if (bVar20) {
                cVar2 = pcVar19[3];
              }
              if (bVar20 && cVar2 == 'o') {
                cVar2 = pcVar19[4];
                bVar20 = cVar2 == 't';
                if (bVar20) {
                  cVar2 = pcVar19[5];
                }
                if (bVar20 && cVar2 == 'u') {
                  cVar2 = pcVar19[6];
                  bVar20 = cVar2 == 'n';
                  if (bVar20) {
                    cVar2 = pcVar19[7];
                  }
                  if (bVar20 && cVar2 == 'i') {
                    cVar2 = pcVar19[8];
                    bVar20 = cVar2 == 'n';
                    if (bVar20) {
                      cVar2 = pcVar19[9];
                    }
                    if (bVar20 && cVar2 == 'g') {
                      local_100 = (uint *)0x80000016;
                      break;
                    }
                  }
                }
              }
            }
          }
LAB_00950a80:
          local_300 = (uint *)thunk_FUN_016d4a50(puVar8,puVar7);
          if (local_300 == (uint *)0x0) goto LAB_009517cc;
          puVar7 = puVar8;
        }
        else {
          puVar7 = local_300;
          if (puVar8 == (uint *)&DAT_00000013) {
            if (*pcVar19 == 'p') {
              cVar2 = pcVar19[1];
              bVar20 = cVar2 == 'e';
              if (bVar20) {
                cVar2 = pcVar19[2];
              }
              if (bVar20 && cVar2 == 'r') {
                cVar2 = pcVar19[3];
                bVar20 = cVar2 == 'f';
                if (bVar20) {
                  cVar2 = pcVar19[4];
                }
                if (bVar20 && cVar2 == 'o') {
                  cVar2 = pcVar19[5];
                  bVar20 = cVar2 == 'r';
                  if (bVar20) {
                    cVar2 = pcVar19[6];
                  }
                  if (bVar20 && cVar2 == 'm') {
                    cVar2 = pcVar19[7];
                    bVar20 = cVar2 == 'a';
                    if (bVar20) {
                      cVar2 = pcVar19[8];
                    }
                    if (bVar20 && cVar2 == 'n') {
                      cVar2 = pcVar19[9];
                      bVar20 = cVar2 == 'c';
                      if (bVar20) {
                        cVar2 = pcVar19[10];
                      }
                      if (bVar20 && cVar2 == 'e') {
                        cVar2 = pcVar19[0xb];
                        bVar20 = cVar2 == '_';
                        if (bVar20) {
                          cVar2 = pcVar19[0xc];
                        }
                        if (bVar20 && cVar2 == 's') {
                          cVar2 = pcVar19[0xd];
                          bVar20 = cVar2 == 'c';
                          if (bVar20) {
                            cVar2 = pcVar19[0xe];
                          }
                          if (bVar20 && cVar2 == 'a') {
                            cVar2 = pcVar19[0xf];
                            bVar20 = cVar2 == 'l';
                            if (bVar20) {
                              cVar2 = pcVar19[0x10];
                            }
                            if (bVar20 && cVar2 == 'i') {
                              cVar2 = pcVar19[0x11];
                              bVar20 = cVar2 == 'n';
                              if (bVar20) {
                                cVar2 = pcVar19[0x12];
                              }
                              if (bVar20 && cVar2 == 'g') {
                                local_100 = (uint *)0x80000017;
                                break;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_00950a80;
          }
          if (puVar8 == (uint *)&DAT_0000000f) {
            cVar2 = *pcVar19;
            bVar20 = cVar2 == 'm';
            if (bVar20) {
              cVar2 = pcVar19[1];
            }
            bVar21 = bVar20 && cVar2 == 'o';
            if (bVar20 && cVar2 == 'o') {
              bVar21 = pcVar19[2] == 'd';
            }
            if (bVar21) {
              cVar2 = pcVar19[3];
              bVar20 = cVar2 == 'e';
              if (bVar20) {
                cVar2 = pcVar19[4];
              }
              if (bVar20 && cVar2 == 'l') {
                cVar2 = pcVar19[5];
                bVar20 = cVar2 == '_';
                if (bVar20) {
                  cVar2 = pcVar19[6];
                }
                if (bVar20 && cVar2 == 'd') {
                  cVar2 = pcVar19[7];
                  bVar20 = cVar2 == 'e';
                  if (bVar20) {
                    cVar2 = pcVar19[8];
                  }
                  if (bVar20 && cVar2 == 't') {
                    cVar2 = pcVar19[9];
                    bVar20 = cVar2 == 'e';
                    if (bVar20) {
                      cVar2 = pcVar19[10];
                    }
                    if (bVar20 && cVar2 == 'c') {
                      cVar2 = pcVar19[0xb];
                      bVar20 = cVar2 == 't';
                      if (bVar20) {
                        cVar2 = pcVar19[0xc];
                      }
                      if (bVar20 && cVar2 == 'i') {
                        cVar2 = pcVar19[0xd];
                        bVar20 = cVar2 == 'o';
                        if (bVar20) {
                          cVar2 = pcVar19[0xe];
                        }
                        if (bVar20 && cVar2 == 'n') {
                          local_100 = (uint *)0x80000015;
                          break;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_00950a80;
          }
          uVar16 = 0;
          if ((int)puVar8 < 0) goto LAB_009517d4;
          if (puVar8 != (uint *)0x0) goto LAB_00950a80;
          local_300 = (uint *)&DAT_00000001;
          puVar7 = (uint *)0x0;
        }
        FUN_016dd1aa(local_300,pcVar19,puVar8);
        local_100 = (uint *)0x8000000e;
        local_fc = puVar7;
        local_f8 = local_300;
        local_f4 = puVar8;
LAB_00950ab8:
        goto LAB_00950c68;
      case 0xf:
        puVar7 = (uint *)puVar14[1];
        puVar8 = (uint *)puVar14[2];
        if (puVar8 == (uint *)0xa) {
          if ((byte)*puVar7 != 0x6d) {
            if ((byte)*puVar7 == 0x61) {
              bVar1 = *(byte *)((int)puVar7 + 1);
              bVar20 = bVar1 == 0x75;
              if (bVar20) {
                bVar1 = *(byte *)((int)puVar7 + 2);
              }
              if (bVar20 && bVar1 == 0x74) {
                bVar1 = *(byte *)((int)puVar7 + 3);
                bVar20 = bVar1 == 0x6f;
                if (bVar20) {
                  bVar1 = (byte)puVar7[1];
                }
                if (bVar20 && bVar1 == 0x74) {
                  bVar1 = *(byte *)((int)puVar7 + 5);
                  bVar20 = bVar1 == 0x75;
                  if (bVar20) {
                    bVar1 = *(byte *)((int)puVar7 + 6);
                  }
                  if (bVar20 && bVar1 == 0x6e) {
                    bVar1 = *(byte *)((int)puVar7 + 7);
                    bVar20 = bVar1 == 0x69;
                    if (bVar20) {
                      bVar1 = (byte)puVar7[2];
                    }
                    if (bVar20 && bVar1 == 0x6e) {
                      bVar1 = *(byte *)((int)puVar7 + 9);
                      puVar10 = (uint *)0x80000016;
LAB_00950a5c:
                      bVar20 = bVar1 == 0x67;
                      goto LAB_009511b4;
                    }
                  }
                }
              }
            }
            goto LAB_00950bd4;
          }
          bVar1 = *(byte *)((int)puVar7 + 1);
          bVar20 = bVar1 == 0x61;
          if (bVar20) {
            bVar1 = *(byte *)((int)puVar7 + 2);
          }
          if (!bVar20 || bVar1 != 0x6e) goto LAB_00950bd4;
          bVar1 = *(byte *)((int)puVar7 + 3);
          bVar20 = bVar1 != 0x61;
          if (!bVar20) {
            bVar1 = (byte)puVar7[1];
          }
          if (bVar20 || bVar1 != 0x67) goto LAB_00950bd4;
          bVar1 = *(byte *)((int)puVar7 + 5);
          bVar20 = bVar1 != 0x65;
          if (!bVar20) {
            bVar1 = *(byte *)((int)puVar7 + 6);
          }
          if (bVar20 || bVar1 != 0x6d) goto LAB_00950bd4;
          bVar1 = *(byte *)((int)puVar7 + 7);
          bVar20 = bVar1 != 0x65;
          if (!bVar20) {
            bVar1 = (byte)puVar7[2];
          }
          if (bVar20 || bVar1 != 0x6e) goto LAB_00950bd4;
          puVar10 = (uint *)&DAT_80000018;
          bVar20 = *(byte *)((int)puVar7 + 9) == 0x74;
LAB_009511b4:
          ppuVar15 = &local_100;
          if (!bVar20) goto LAB_00950bd4;
        }
        else {
          if (puVar8 == (uint *)0x13) {
            bVar1 = (byte)*puVar7;
            bVar20 = bVar1 == 0x70;
            if (bVar20) {
              bVar1 = *(byte *)((int)puVar7 + 1);
            }
            if (bVar20 && bVar1 == 0x65) {
              bVar1 = *(byte *)((int)puVar7 + 2);
              bVar20 = bVar1 == 0x72;
              if (bVar20) {
                bVar1 = *(byte *)((int)puVar7 + 3);
              }
              if (bVar20 && bVar1 == 0x66) {
                bVar1 = (byte)puVar7[1];
                bVar20 = bVar1 == 0x6f;
                if (bVar20) {
                  bVar1 = *(byte *)((int)puVar7 + 5);
                }
                if (bVar20 && bVar1 == 0x72) {
                  bVar1 = *(byte *)((int)puVar7 + 6);
                  bVar20 = bVar1 == 0x6d;
                  if (bVar20) {
                    bVar1 = *(byte *)((int)puVar7 + 7);
                  }
                  if (bVar20 && bVar1 == 0x61) {
                    bVar1 = (byte)puVar7[2];
                    bVar20 = bVar1 == 0x6e;
                    if (bVar20) {
                      bVar1 = *(byte *)((int)puVar7 + 9);
                    }
                    if (bVar20 && bVar1 == 99) {
                      bVar1 = *(byte *)((int)puVar7 + 10);
                      bVar20 = bVar1 == 0x65;
                      if (bVar20) {
                        bVar1 = *(byte *)((int)puVar7 + 0xb);
                      }
                      if (bVar20 && bVar1 == 0x5f) {
                        bVar1 = (byte)puVar7[3];
                        bVar20 = bVar1 == 0x73;
                        if (bVar20) {
                          bVar1 = *(byte *)((int)puVar7 + 0xd);
                        }
                        if (bVar20 && bVar1 == 99) {
                          bVar1 = *(byte *)((int)puVar7 + 0xe);
                          bVar20 = bVar1 == 0x61;
                          if (bVar20) {
                            bVar1 = *(byte *)((int)puVar7 + 0xf);
                          }
                          if (bVar20 && bVar1 == 0x6c) {
                            bVar1 = (byte)puVar7[4];
                            bVar20 = bVar1 == 0x69;
                            if (bVar20) {
                              bVar1 = *(byte *)((int)puVar7 + 0x11);
                            }
                            if (bVar20 && bVar1 == 0x6e) {
                              bVar1 = *(byte *)((int)puVar7 + 0x12);
                              puVar10 = (uint *)0x80000017;
                              goto LAB_00950a5c;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (puVar8 == (uint *)0xf) {
              param_3 = (uint *)(uint)(byte)*puVar7;
            }
            if (puVar8 == (uint *)0xf && param_3 == (uint *)&DAT_0000006d) {
              bVar1 = *(byte *)((int)puVar7 + 1);
              bVar20 = bVar1 == 0x6f;
              if (bVar20) {
                bVar1 = *(byte *)((int)puVar7 + 2);
              }
              if ((bVar20 && bVar1 == 100) && (*(byte *)((int)puVar7 + 3) == 0x65)) {
                bVar1 = (byte)puVar7[1];
                bVar20 = bVar1 == 0x6c;
                if (bVar20) {
                  bVar1 = *(byte *)((int)puVar7 + 5);
                }
                if (bVar20 && bVar1 == 0x5f) {
                  bVar1 = *(byte *)((int)puVar7 + 6);
                  bVar20 = bVar1 == 100;
                  if (bVar20) {
                    bVar1 = *(byte *)((int)puVar7 + 7);
                  }
                  if (bVar20 && bVar1 == 0x65) {
                    bVar1 = (byte)puVar7[2];
                    bVar20 = bVar1 == 0x74;
                    if (bVar20) {
                      bVar1 = *(byte *)((int)puVar7 + 9);
                    }
                    if (bVar20 && bVar1 == 0x65) {
                      bVar1 = *(byte *)((int)puVar7 + 10);
                      bVar20 = bVar1 == 99;
                      if (bVar20) {
                        bVar1 = *(byte *)((int)puVar7 + 0xb);
                      }
                      if (bVar20 && bVar1 == 0x74) {
                        bVar1 = (byte)puVar7[3];
                        bVar20 = bVar1 == 0x69;
                        if (bVar20) {
                          bVar1 = *(byte *)((int)puVar7 + 0xd);
                        }
                        if (bVar20 && bVar1 == 0x6f) {
                          puVar10 = (uint *)0x80000015;
                          bVar20 = *(byte *)((int)puVar7 + 0xe) == 0x6e;
                          goto LAB_009511b4;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_00950bd4:
          local_100 = (uint *)&DAT_8000000f;
          puVar10 = puVar8;
          ppuVar15 = &local_f8;
          local_fc = puVar7;
        }
        *ppuVar15 = puVar10;
      }
LAB_00950c68:
      local_298 = local_fc;
      puStack_294 = local_f8;
      puStack_290 = local_f4;
      if (local_100 == (uint *)&DAT_80000019) break;
      pbVar11 = &DAT_00000004;
      if ((uint *)0x80000014 < local_100) {
        pbVar11 = (byte *)((int)local_100 + 0x7fffffeb);
      }
      if (pbVar11 != &DAT_00000004) {
                    /* WARNING: Could not recover jumptable at 0x00950d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((int)&DAT_00950d40 + (&DAT_00950d40)[(int)pbVar11]))(&DAT_00950d40,puVar14 + 4);
        return;
      }
      *puVar5 = local_fc;
      puVar5[1] = local_f8;
      puVar5[2] = local_f4;
      local_228 = local_100;
      FUN_015791cc(&local_100);
      puStack_ec = local_f4;
      local_f0 = local_f8;
      puVar8 = local_fc;
      puVar7 = local_100;
      iVar4 = local_29c;
      local_134 = local_100;
      local_130 = local_fc;
      local_12c = local_f8;
      puStack_128 = local_f4;
      local_1f8 = local_228;
      local_1f4 = puStack_224;
      local_1f0 = puStack_220;
      puStack_1ec = puStack_21c;
      local_108 = local_228;
      local_104 = puStack_224;
      local_100 = puStack_220;
      local_fc = puStack_21c;
      local_f8 = puVar7;
      local_f4 = puVar8;
      if (local_29c == local_2a4) {
        FUN_009f4b90(&local_2a4);
      }
      puVar13 = local_2a0 + iVar4 * 8;
      *puVar13 = local_108;
      puVar13[1] = local_104;
      puVar13[2] = local_100;
      puVar13[3] = local_fc;
      puVar13[4] = local_f8;
      puVar13[5] = local_f4;
      puVar13[6] = local_f0;
      puVar13[7] = puStack_ec;
      local_29c = iVar4 + 1;
      param_3 = local_f8;
    }
  }
  iVar12 = local_29c;
  puVar5 = local_2a0;
  FUN_00904ad8(&local_108,local_2a0,local_29c);
  puVar14 = local_104;
  puVar9 = local_108;
  local_138 = local_100;
  local_134 = local_fc;
  local_130 = local_f8;
  local_12c = local_f4;
  puStack_128 = local_f0;
  puStack_124 = puStack_ec;
  local_120 = local_e8;
  uStack_11c = uStack_e4;
  uStack_118 = uStack_e0;
  uStack_114 = uStack_dc;
  uStack_110 = uStack_d8;
  uStack_10c = uStack_d4;
  if (local_108 == (uint *)0x3 && local_104 == (uint *)0x0) {
    param_1[2] = local_100;
    param_1[3] = local_fc;
    param_1[4] = local_f8;
    param_1[5] = local_f4;
    param_1[6] = local_f0;
    param_1[7] = puStack_ec;
    param_1[8] = local_e8;
    param_1[9] = uStack_e4;
    param_1[10] = uStack_e0;
    param_1[0xb] = uStack_dc;
    param_1[0xc] = uStack_d8;
    param_1[0xd] = uStack_d4;
    *param_1 = 3;
    param_1[1] = 0;
LAB_00951310:
    puVar5 = local_2a0;
    FUN_00953170(local_2a0,local_29c);
    if (local_2a4 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(puVar5);
    return;
  }
  FUN_016dd1aa(auStack_1c0,auStack_d0,0x88);
  local_1f0 = local_138;
  puStack_1ec = local_134;
  local_1e8 = local_130;
  puStack_1e4 = local_12c;
  puStack_1e0 = puStack_128;
  puStack_1dc = puStack_124;
  local_1d8 = local_120;
  uStack_1d4 = uStack_11c;
  uStack_1d0 = uStack_118;
  uStack_1cc = uStack_114;
  uStack_1c8 = uStack_110;
  uStack_1c4 = uStack_10c;
  local_3c = puVar5 + iVar12 * 8;
  local_1f8 = puVar9;
  local_1f4 = puVar14;
  local_40 = local_2a4;
  local_44 = puVar5;
  local_48 = puVar5;
  if (iVar12 != 0) {
    iVar12 = iVar12 << 5;
LAB_0095139c:
    local_44 = puVar5 + 8;
    puVar9 = (uint *)*puVar5;
    if (puVar9 == (uint *)0x80000015) goto code_r0x009513a8;
    puVar13 = (undefined4 *)((uint)&local_138 | 4);
    uVar16 = puVar5[2];
    uVar17 = puVar5[3];
    *puVar13 = puVar5[1];
    puVar13[1] = uVar16;
    puVar13[2] = uVar17;
    uVar16 = puVar5[5];
    uVar17 = puVar5[6];
    uVar18 = puVar5[7];
    puVar13[3] = puVar5[4];
    puVar13[4] = uVar16;
    puVar13[5] = uVar17;
    puVar13[6] = uVar18;
    local_138 = puVar9;
    if (&SUB_00000002 <= (byte *)((int)puVar9 + 0x7fffffeb)) {
      uVar3 = 0x15;
      if ((int)puVar9 < 0) {
        uVar3 = (uint)puVar9 ^ 0x80000000;
      }
      puVar9 = local_12c;
      puVar14 = local_130;
      switch(uVar3) {
      case 0xc:
        break;
      case 0xd:
        puVar9 = local_130;
        puVar14 = local_134;
        break;
      case 0xe:
        puVar9 = local_130;
        puVar14 = local_12c;
        goto LAB_009514e0;
      case 0xf:
        puVar9 = local_134;
LAB_009514e0:
        FUN_00fab1e0(&local_108,puVar9,puVar14);
        if (local_108 != (uint *)0x0) {
switchD_009514ac_default:
          iVar12 = thunk_FUN_016d4a50(0x12);
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,0x12);
          }
          FUN_016dd1aa(iVar12,
                       "unexpected map keystruct FormatHeader with 4 elementsstruct PoolConfig with 4 elementsstruct ScpiPsuConfig with 3 elementsstruct GroupConfigOnly with 1 elementstruct PowerMeterConfig with 1 elementstruct PowerMeterConfigEntry with 2 elements"
                       ,0x12);
          param_1[5] = 0x12;
          param_1[6] = iVar12;
          param_1[7] = 0x12;
          param_1[8] = 0;
          param_1[9] = 4;
          param_1[10] = 0;
          param_1[0xb] = 0x80000000;
          *param_1 = 3;
          param_1[1] = 0;
          param_1[2] = 0;
          goto LAB_009515c0;
        }
        puVar9 = local_100;
        puVar14 = local_104;
        break;
      default:
        goto switchD_009514ac_default;
      }
      local_28 = &LAB_008b9b38;
      local_2c = &local_30;
      local_30 = &local_38;
      local_38 = puVar14;
      local_34 = puVar9;
      FUN_00927010(&local_108,&DAT_0059895d,&local_2c);
      param_1[2] = local_108;
      param_1[3] = local_104;
      param_1[4] = local_100;
      param_1[5] = local_fc;
      param_1[6] = local_f8;
      param_1[7] = local_f4;
      param_1[8] = local_f0;
      param_1[9] = puStack_ec;
      param_1[10] = local_e8;
      param_1[0xb] = uStack_e4;
      param_1[0xc] = uStack_e0;
      param_1[0xd] = uStack_dc;
      *param_1 = 3;
      param_1[1] = 0;
LAB_009515c0:
      FUN_008f7448(&local_138);
      FUN_008f7448(&puStack_128);
      FUN_009272d4(&local_48);
      FUN_0092e09c(&local_1f8);
      return;
    }
  }
LAB_009513e4:
  FUN_009272d4(&local_48);
  FUN_016dd1aa(param_1,&local_1f8,0xc0);
  param_1[0x32] = local_240;
  param_1[0x33] = uStack_23c;
  param_1[0x34] = uStack_238;
  param_1[0x35] = uStack_234;
  param_1[0x36] = uStack_230;
  param_1[0x37] = uStack_22c;
  param_1[0x3a] = local_228;
  param_1[0x3b] = puStack_224;
  param_1[0x3c] = puStack_220;
  param_1[0x3d] = puStack_21c;
  param_1[0x3e] = uStack_218;
  param_1[0x3f] = uStack_214;
  param_1[0x40] = local_210;
  param_1[0x41] = uStack_20c;
  param_1[0x42] = uStack_208;
  param_1[0x43] = uStack_204;
  param_1[0x44] = uStack_200;
  param_1[0x45] = uStack_1fc;
  param_1[0x47] = local_2f4;
  param_1[0x38] = 2;
  param_1[0x30] = 2;
  param_1[0x39] = 0;
  param_1[0x49] = local_2f8;
  param_1[0x46] = local_2f0;
  param_1[0x31] = 0;
  param_1[0x4a] = local_2fc;
  param_1[0x48] = 2;
  *(undefined1 *)(param_1 + 0x4b) = 3;
  return;
code_r0x009513a8:
  iVar12 = iVar12 + -0x20;
  puVar5 = local_44;
  if (iVar12 == 0) goto code_r0x009513b4;
  goto LAB_0095139c;
code_r0x009513b4:
  local_44 = local_3c;
  goto LAB_009513e4;
}

