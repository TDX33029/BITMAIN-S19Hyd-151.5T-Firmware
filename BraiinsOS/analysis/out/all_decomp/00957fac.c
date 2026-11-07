// FUN_00957fac @ 00957fac size=3512 calls_out=15 calls_in=1
// strings: performance_scaling | autotuning | management | performance_scaling | autotuning | management

/* WARNING: Removing unreachable block (ram,0x00958d4c) */
/* WARNING: Removing unreachable block (ram,0x00958d84) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00957fac(undefined4 *param_1,uint *param_2,uint *param_3)

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
  uint *local_334;
  uint *local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  int local_2d4;
  undefined4 *local_2d0;
  int local_2cc;
  uint *local_2c8;
  uint *puStack_2c4;
  uint *puStack_2c0;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  uint *local_258;
  uint *puStack_254;
  uint *puStack_250;
  uint *puStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  uint *local_228;
  uint *local_224;
  uint *local_220;
  uint *puStack_21c;
  uint *local_218;
  uint *puStack_214;
  uint *puStack_210;
  uint *puStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 auStack_1f0 [160];
  uint *local_150;
  uint *local_14c;
  uint *local_148;
  uint *local_144;
  uint *puStack_140;
  uint *puStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  uint *local_120;
  uint *local_11c;
  uint *local_118;
  uint *local_114;
  uint *local_110;
  uint *local_10c;
  uint *local_108;
  uint *puStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [160];
  undefined4 *local_48;
  undefined4 *local_44;
  int local_40;
  undefined4 *local_3c;
  uint *local_38;
  uint *local_34;
  uint **local_30;
  uint ***local_2c;
  undefined1 *local_28;
  
  local_2d0 = (undefined4 *)&DAT_00000008;
  puVar5 = (undefined4 *)((uint)&local_258 | 4);
  iVar12 = (int)param_3 * 8;
  local_2cc = 0;
  local_2d4 = 0;
  puVar9 = param_2;
  while (puVar14 = puVar9, puVar14 != param_2 + iVar12) {
    uVar3 = *puVar14;
    puVar9 = puVar14 + 8;
    if (uVar3 != 0x80000015) {
      uVar6 = 0x15;
      if ((int)uVar3 < 0) {
        uVar6 = uVar3 ^ 0x80000000;
      }
      puVar7 = &switchD_009580a4::switchdataD_009580a8;
      switch(uVar6) {
      case 1:
        local_118 = (uint *)0x80000001;
        local_114 = (uint *)CONCAT31(local_114._1_3_,(char)puVar14[1]);
        break;
      default:
        FUN_008f7820(&local_120,puVar14,&local_150,&DAT_018672c8);
        if (local_120 == (uint *)&SUB_00000002) {
          goto LAB_00958788;
        }
        local_2c8 = local_114;
        puStack_2c4 = local_110;
        puStack_2c0 = local_10c;
        param_1[8] = local_108;
        param_1[9] = puStack_104;
        param_1[10] = local_100;
        param_1[0xb] = uStack_fc;
        param_1[0xc] = uStack_f8;
        param_1[0xd] = uStack_f4;
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = local_120;
        param_1[3] = local_11c;
        param_1[4] = local_118;
        param_1[5] = local_114;
        param_1[6] = local_110;
        param_1[7] = local_10c;
        local_228 = local_2c8;
        local_224 = puStack_2c4;
        local_220 = puStack_2c0;
        goto LAB_00958e30;
      case 4:
        local_110 = (uint *)puVar14[2];
        local_10c = (uint *)puVar14[3];
        local_118 = (uint *)&DAT_80000004;
        break;
      case 0xc:
        uVar3 = puVar14[2];
        puVar8 = (uint *)puVar14[3];
        if (puVar8 == (uint *)&DAT_0000000a) {
          iVar4 = thunk_FUN_016dd50a(uVar3,"autotuning",10);
          if (iVar4 == 0) {
            local_118 = (uint *)0x80000016;
          }
          else {
            uVar22 = thunk_FUN_016dd50a(uVar3,"management",10);
            puVar7 = (uint *)((ulonglong)uVar22 >> 0x20);
            if ((int)uVar22 != 0) goto LAB_00958664;
            local_118 = (uint *)&DAT_80000018;
          }
        }
        else {
          if (puVar8 == (uint *)&DAT_00000013) {
            uVar22 = thunk_FUN_016dd50a(uVar3,"performance_scaling",0x13);
            puVar7 = (uint *)((ulonglong)uVar22 >> 0x20);
            if ((int)uVar22 == 0) {
              local_118 = (uint *)0x80000017;
              goto LAB_009585d8;
            }
LAB_00958664:
            local_334 = (uint *)thunk_FUN_016d4a50(puVar8,puVar7);
            if (local_334 != (uint *)0x0) {
              puVar7 = puVar8;
              goto LAB_00958678;
            }
LAB_009592ec:
            uVar16 = 1;
            puVar7 = puVar8;
LAB_009592f4:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar16,puVar7);
          }
          if (puVar8 != (uint *)&DAT_0000000f) {
            uVar16 = 0;
            puVar7 = local_334;
            if ((int)puVar8 < 0) goto LAB_009592f4;
            if (puVar8 != (uint *)0x0) goto LAB_00958664;
            puVar7 = (uint *)0x0;
            local_334 = (uint *)&DAT_00000001;
LAB_00958678:
            FUN_016dd1aa(local_334,uVar3,puVar8);
            local_118 = (uint *)&DAT_8000000c;
            local_114 = puVar7;
            local_110 = local_334;
            local_10c = puVar8;
            goto LAB_00958788;
          }
          uVar22 = thunk_FUN_016dd50a(uVar3,&DAT_0034901b,0xf);
          puVar7 = (uint *)((ulonglong)uVar22 >> 0x20);
          if ((int)uVar22 != 0) goto LAB_00958664;
          local_118 = (uint *)0x80000015;
        }
        goto LAB_009585d8;
      case 0xd:
        puVar7 = (uint *)puVar14[1];
        puVar8 = (uint *)puVar14[2];
        if (puVar8 == (uint *)&DAT_0000000a) {
          iVar4 = thunk_FUN_016dd50a(puVar7,"autotuning",10);
          if (iVar4 == 0) {
            local_118 = (uint *)0x80000016;
          }
          else {
            iVar4 = thunk_FUN_016dd50a(puVar7,"management",10);
            if (iVar4 != 0) goto LAB_009584f4;
            local_118 = (uint *)&DAT_80000018;
          }
        }
        else if (puVar8 == (uint *)&DAT_00000013) {
          iVar4 = thunk_FUN_016dd50a(puVar7,"performance_scaling",0x13);
          if (iVar4 != 0) goto LAB_009584f4;
          local_118 = (uint *)0x80000017;
        }
        else {
          if ((puVar8 != (uint *)&DAT_0000000f) ||
             (iVar4 = thunk_FUN_016dd50a(puVar7,&DAT_0034901b,0xf), iVar4 != 0)) {
LAB_009584f4:
            local_118 = (uint *)&DAT_8000000d;
            local_114 = puVar7;
            local_110 = puVar8;
            break;
          }
          local_118 = (uint *)0x80000015;
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
                      local_118 = (uint *)&DAT_80000018;
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
                      local_118 = (uint *)0x80000016;
                      break;
                    }
                  }
                }
              }
            }
          }
LAB_009585a0:
          local_330 = (uint *)thunk_FUN_016d4a50(puVar8,puVar7);
          if (local_330 == (uint *)0x0) goto LAB_009592ec;
          puVar7 = puVar8;
        }
        else {
          puVar7 = local_330;
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
                                local_118 = (uint *)0x80000017;
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
            goto LAB_009585a0;
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
                          local_118 = (uint *)0x80000015;
                          break;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_009585a0;
          }
          uVar16 = 0;
          if ((int)puVar8 < 0) goto LAB_009592f4;
          if (puVar8 != (uint *)0x0) goto LAB_009585a0;
          local_330 = (uint *)&DAT_00000001;
          puVar7 = (uint *)0x0;
        }
        FUN_016dd1aa(local_330,pcVar19,puVar8);
        local_118 = (uint *)0x8000000e;
        local_114 = puVar7;
        local_110 = local_330;
        local_10c = puVar8;
LAB_009585d8:
        goto LAB_00958788;
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
LAB_0095857c:
                      bVar20 = bVar1 == 0x67;
                      goto LAB_00958cd4;
                    }
                  }
                }
              }
            }
            goto LAB_009586f4;
          }
          bVar1 = *(byte *)((int)puVar7 + 1);
          bVar20 = bVar1 == 0x61;
          if (bVar20) {
            bVar1 = *(byte *)((int)puVar7 + 2);
          }
          if (!bVar20 || bVar1 != 0x6e) goto LAB_009586f4;
          bVar1 = *(byte *)((int)puVar7 + 3);
          bVar20 = bVar1 != 0x61;
          if (!bVar20) {
            bVar1 = (byte)puVar7[1];
          }
          if (bVar20 || bVar1 != 0x67) goto LAB_009586f4;
          bVar1 = *(byte *)((int)puVar7 + 5);
          bVar20 = bVar1 != 0x65;
          if (!bVar20) {
            bVar1 = *(byte *)((int)puVar7 + 6);
          }
          if (bVar20 || bVar1 != 0x6d) goto LAB_009586f4;
          bVar1 = *(byte *)((int)puVar7 + 7);
          bVar20 = bVar1 != 0x65;
          if (!bVar20) {
            bVar1 = (byte)puVar7[2];
          }
          if (bVar20 || bVar1 != 0x6e) goto LAB_009586f4;
          puVar10 = (uint *)&DAT_80000018;
          bVar20 = *(byte *)((int)puVar7 + 9) == 0x74;
LAB_00958cd4:
          ppuVar15 = &local_118;
          if (!bVar20) goto LAB_009586f4;
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
                              goto LAB_0095857c;
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
                          goto LAB_00958cd4;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_009586f4:
          local_118 = (uint *)&DAT_8000000f;
          puVar10 = puVar8;
          ppuVar15 = &local_110;
          local_114 = puVar7;
        }
        *ppuVar15 = puVar10;
      }
LAB_00958788:
      local_2c8 = local_114;
      puStack_2c4 = local_110;
      puStack_2c0 = local_10c;
      if (local_118 == (uint *)&DAT_80000019) break;
      pbVar11 = &DAT_00000004;
      if ((uint *)0x80000014 < local_118) {
        pbVar11 = (byte *)((int)local_118 + 0x7fffffeb);
      }
      if (pbVar11 != &DAT_00000004) {
                    /* WARNING: Could not recover jumptable at 0x0095885c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((int)&DAT_00958860 + (&DAT_00958860)[(int)pbVar11]))(&DAT_00958860,puVar14 + 4);
        return;
      }
      *puVar5 = local_114;
      puVar5[1] = local_110;
      puVar5[2] = local_10c;
      local_258 = local_118;
      FUN_015791cc(&local_118);
      puStack_104 = local_10c;
      local_108 = local_110;
      puVar8 = local_114;
      puVar7 = local_118;
      iVar4 = local_2cc;
      local_14c = local_118;
      local_148 = local_114;
      local_144 = local_110;
      puStack_140 = local_10c;
      local_228 = local_258;
      local_224 = puStack_254;
      local_220 = puStack_250;
      puStack_21c = puStack_24c;
      local_120 = local_258;
      local_11c = puStack_254;
      local_118 = puStack_250;
      local_114 = puStack_24c;
      local_110 = puVar7;
      local_10c = puVar8;
      if (local_2cc == local_2d4) {
        FUN_009f4b90(&local_2d4);
      }
      puVar13 = local_2d0 + iVar4 * 8;
      *puVar13 = local_120;
      puVar13[1] = local_11c;
      puVar13[2] = local_118;
      puVar13[3] = local_114;
      puVar13[4] = local_110;
      puVar13[5] = local_10c;
      puVar13[6] = local_108;
      puVar13[7] = puStack_104;
      local_2cc = iVar4 + 1;
      param_3 = local_110;
    }
  }
  iVar12 = local_2cc;
  puVar5 = local_2d0;
  FUN_00900f94(&local_120,local_2d0,local_2cc);
  puVar14 = local_11c;
  puVar9 = local_120;
  local_150 = local_118;
  local_14c = local_114;
  local_148 = local_110;
  local_144 = local_10c;
  puStack_140 = local_108;
  puStack_13c = puStack_104;
  local_138 = local_100;
  uStack_134 = uStack_fc;
  uStack_130 = uStack_f8;
  uStack_12c = uStack_f4;
  uStack_128 = uStack_f0;
  uStack_124 = uStack_ec;
  if (local_120 == (uint *)0x3 && local_11c == (uint *)0x0) {
    param_1[2] = local_118;
    param_1[3] = local_114;
    param_1[4] = local_110;
    param_1[5] = local_10c;
    param_1[6] = local_108;
    param_1[7] = puStack_104;
    param_1[8] = local_100;
    param_1[9] = uStack_fc;
    param_1[10] = uStack_f8;
    param_1[0xb] = uStack_f4;
    param_1[0xc] = uStack_f0;
    param_1[0xd] = uStack_ec;
    *param_1 = 3;
    param_1[1] = 0;
LAB_00958e30:
    puVar5 = local_2d0;
    FUN_00953170(local_2d0,local_2cc);
    if (local_2d4 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(puVar5);
    return;
  }
  FUN_016dd1aa(auStack_1f0,auStack_e8,0xa0);
  local_220 = local_150;
  puStack_21c = local_14c;
  local_218 = local_148;
  puStack_214 = local_144;
  puStack_210 = puStack_140;
  puStack_20c = puStack_13c;
  local_208 = local_138;
  uStack_204 = uStack_134;
  uStack_200 = uStack_130;
  uStack_1fc = uStack_12c;
  uStack_1f8 = uStack_128;
  uStack_1f4 = uStack_124;
  local_3c = puVar5 + iVar12 * 8;
  local_228 = puVar9;
  local_224 = puVar14;
  local_40 = local_2d4;
  local_44 = puVar5;
  local_48 = puVar5;
  if (iVar12 != 0) {
    iVar12 = iVar12 << 5;
LAB_00958ebc:
    local_44 = puVar5 + 8;
    puVar9 = (uint *)*puVar5;
    if (puVar9 == (uint *)0x80000015) goto code_r0x00958ec8;
    puVar13 = (undefined4 *)((uint)&local_150 | 4);
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
    local_150 = puVar9;
    if (&SUB_00000002 <= (byte *)((int)puVar9 + 0x7fffffeb)) {
      uVar3 = 0x15;
      if ((int)puVar9 < 0) {
        uVar3 = (uint)puVar9 ^ 0x80000000;
      }
      puVar9 = local_144;
      puVar14 = local_148;
      switch(uVar3) {
      case 0xc:
        break;
      case 0xd:
        puVar9 = local_148;
        puVar14 = local_14c;
        break;
      case 0xe:
        puVar9 = local_148;
        puVar14 = local_144;
        goto LAB_00959000;
      case 0xf:
        puVar9 = local_14c;
LAB_00959000:
        FUN_00fab1e0(&local_120,puVar9,puVar14);
        if (local_120 != (uint *)0x0) {
switchD_00958fcc_default:
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
          goto LAB_009590e0;
        }
        puVar9 = local_118;
        puVar14 = local_11c;
        break;
      default:
        goto switchD_00958fcc_default;
      }
      local_28 = &LAB_008b9b38;
      local_2c = &local_30;
      local_30 = &local_38;
      local_38 = puVar14;
      local_34 = puVar9;
      FUN_00927010(&local_120,&DAT_0059895d,&local_2c);
      param_1[2] = local_120;
      param_1[3] = local_11c;
      param_1[4] = local_118;
      param_1[5] = local_114;
      param_1[6] = local_110;
      param_1[7] = local_10c;
      param_1[8] = local_108;
      param_1[9] = puStack_104;
      param_1[10] = local_100;
      param_1[0xb] = uStack_fc;
      param_1[0xc] = uStack_f8;
      param_1[0xd] = uStack_f4;
      *param_1 = 3;
      param_1[1] = 0;
LAB_009590e0:
      FUN_008f7448(&local_150);
      FUN_008f7448(&puStack_140);
      FUN_009272d4(&local_48);
      FUN_0092f764(&local_228);
      return;
    }
  }
LAB_00958f04:
  FUN_009272d4(&local_48);
  FUN_016dd1aa(param_1,&local_228,0xd8);
  param_1[0x38] = local_270;
  param_1[0x39] = uStack_26c;
  param_1[0x3a] = uStack_268;
  param_1[0x3b] = uStack_264;
  param_1[0x3c] = uStack_260;
  param_1[0x3d] = uStack_25c;
  param_1[0x40] = local_258;
  param_1[0x41] = puStack_254;
  param_1[0x42] = puStack_250;
  param_1[0x43] = puStack_24c;
  param_1[0x44] = uStack_248;
  param_1[0x45] = uStack_244;
  param_1[0x46] = local_240;
  param_1[0x47] = uStack_23c;
  param_1[0x48] = uStack_238;
  param_1[0x49] = uStack_234;
  param_1[0x4a] = uStack_230;
  param_1[0x4b] = uStack_22c;
  param_1[0x4d] = local_324;
  param_1[0x3e] = 2;
  param_1[0x36] = 2;
  param_1[0x3f] = 0;
  param_1[0x4f] = local_328;
  param_1[0x4c] = local_320;
  param_1[0x37] = 0;
  param_1[0x50] = local_32c;
  param_1[0x4e] = 2;
  *(undefined1 *)(param_1 + 0x51) = 3;
  return;
code_r0x00958ec8:
  iVar12 = iVar12 + -0x20;
  puVar5 = local_44;
  if (iVar12 == 0) goto code_r0x00958ed4;
  goto LAB_00958ebc;
code_r0x00958ed4:
  local_44 = local_3c;
  goto LAB_00958f04;
}

