// function @ 009314ac  size=3216  volt_strings=1
// strings: autotuning | management | autotuning | management | unexpected map keystruct FormatHeader with 4 elementsstruct PoolConfig with 4 elementsstruct ScpiPsuConfig with 3 elementsstruct GroupConfigOnly with 1 elementstruct PowerMeterConfig with 1 elementstruct PowerMeterConfigEntry with 2 elements

/* WARNING: Removing unreachable block (ram,0x0093219c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009314ac(undefined4 *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  byte *******pppppppbVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte ******ppppppbVar8;
  char *pcVar9;
  byte *******pppppppbVar10;
  byte ******ppppppbVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  bool bVar19;
  bool bVar20;
  byte *******local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  int local_244;
  undefined4 *local_240;
  int local_23c;
  byte *******local_238;
  byte *******pppppppbStack_234;
  byte *******pppppppbStack_230;
  byte *******local_210;
  byte *******pppppppbStack_20c;
  byte *******pppppppbStack_208;
  byte *******pppppppbStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  byte *******local_1f8;
  byte *******local_1f4;
  byte *******local_1f0;
  byte *******pppppppbStack_1ec;
  byte *******local_1e8;
  byte *******pppppppbStack_1e4;
  byte *******pppppppbStack_1e0;
  byte *******pppppppbStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 auStack_1c0 [136];
  byte *******local_138;
  byte *******local_134;
  byte *******local_130;
  byte *******local_12c;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  byte *******local_108;
  byte *******local_104;
  byte *******local_100;
  byte *******local_fc;
  byte *******local_f8;
  byte *******local_f4;
  byte *******local_f0;
  byte *******pppppppbStack_ec;
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
  byte *******local_38;
  byte *******local_34;
  byte *******local_30;
  byte *******local_2c;
  undefined1 *local_28;
  
  local_240 = (undefined4 *)&DAT_00000008;
  puVar6 = (undefined4 *)((uint)&local_210 | 4);
  local_23c = 0;
  local_244 = 0;
  pppppppbVar10 = (byte *******)&local_108;
  puVar3 = param_2;
  while( true ) {
    puVar16 = puVar3;
    if (puVar16 == param_2 + param_3 * 8) break;
    uVar4 = *puVar16;
    puVar3 = puVar16 + 8;
    if (uVar4 != 0x80000015) {
      uVar7 = 0x15;
      if ((int)uVar4 < 0) {
        uVar7 = uVar4 ^ 0x80000000;
      }
      switch(uVar7) {
      case 1:
        local_100 = (byte *******)0x80000001;
        local_fc = (byte *******)CONCAT31(local_fc._1_3_,(char)puVar16[1]);
        break;
      default:
        FUN_008f7820(&local_108,puVar16,&local_138,&DAT_018672b8);
        if (local_108 != (byte *******)&SUB_00000002) {
          local_238 = local_fc;
          pppppppbStack_234 = local_f8;
          pppppppbStack_230 = local_f4;
          param_1[8] = local_f0;
          param_1[9] = pppppppbStack_ec;
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
          local_1f8 = local_238;
          local_1f4 = pppppppbStack_234;
          local_1f0 = pppppppbStack_230;
          goto LAB_00932238;
        }
        break;
      case 4:
        local_f8 = (byte *******)puVar16[2];
        local_f4 = (byte *******)puVar16[3];
        local_100 = (byte *******)&DAT_80000004;
        break;
      case 0xc:
        local_298 = (byte *******)puVar16[3];
        uVar4 = puVar16[2];
        if (local_298 == (byte *******)&DAT_0000000a) {
          iVar13 = thunk_FUN_016dd50a(uVar4,"autotuning",10);
          if (iVar13 == 0) {
            local_100 = (byte *******)0x80000016;
          }
          else {
            iVar13 = thunk_FUN_016dd50a(uVar4,"management",10);
            if (iVar13 != 0) goto LAB_009319d0;
            local_100 = (byte *******)&DAT_80000018;
          }
        }
        else if (local_298 == (byte *******)&DAT_0000000d) {
          iVar13 = thunk_FUN_016dd50a(uVar4,&DAT_00348a69,0xd);
          if (iVar13 != 0) goto LAB_009319d0;
          local_100 = (byte *******)0x80000017;
        }
        else {
          if (local_298 == (byte *******)&DAT_0000000f) {
            iVar13 = thunk_FUN_016dd50a(uVar4,&DAT_0034901b,0xf);
            if (iVar13 == 0) {
              local_100 = (byte *******)0x80000015;
              break;
            }
LAB_009319d0:
            pppppppbVar10 = (byte *******)thunk_FUN_016d4a50(local_298);
            if (pppppppbVar10 == (byte *******)0x0) goto LAB_00932694;
          }
          else {
            if ((int)local_298 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600c10();
            }
            if (local_298 != (byte *******)0x0) goto LAB_009319d0;
            pppppppbVar10 = (byte *******)&DAT_00000001;
          }
          FUN_016dd1aa(pppppppbVar10,uVar4,local_298);
          local_100 = (byte *******)&DAT_8000000c;
          local_fc = local_298;
          local_f8 = pppppppbVar10;
          local_f4 = local_298;
        }
        break;
      case 0xd:
        pppppppbVar10 = (byte *******)puVar16[1];
        pppppppbVar5 = (byte *******)puVar16[2];
        if (pppppppbVar5 == (byte *******)&DAT_0000000a) {
          iVar13 = thunk_FUN_016dd50a(pppppppbVar10,"autotuning",10);
          if (iVar13 == 0) {
            local_100 = (byte *******)0x80000016;
          }
          else {
            iVar13 = thunk_FUN_016dd50a(pppppppbVar10,"management",10);
            if (iVar13 != 0) goto LAB_009318e4;
            local_100 = (byte *******)&DAT_80000018;
          }
        }
        else if (pppppppbVar5 == (byte *******)&DAT_0000000d) {
          iVar13 = thunk_FUN_016dd50a(pppppppbVar10,&DAT_00348a69,0xd);
          if (iVar13 != 0) goto LAB_009318e4;
          local_100 = (byte *******)0x80000017;
        }
        else {
          if ((pppppppbVar5 != (byte *******)&DAT_0000000f) ||
             (iVar13 = thunk_FUN_016dd50a(pppppppbVar10,&DAT_0034901b,0xf), iVar13 != 0)) {
LAB_009318e4:
            local_100 = (byte *******)&DAT_8000000d;
            local_fc = pppppppbVar10;
            local_f8 = pppppppbVar5;
            break;
          }
          local_100 = (byte *******)0x80000015;
        }
        break;
      case 0xe:
        local_298 = (byte *******)puVar16[3];
        pcVar9 = (char *)puVar16[2];
        pppppppbVar10 = (byte *******)&DAT_00000001;
        switch(local_298) {
        case (byte *******)0x0:
          goto switchD_009316f0_caseD_0;
        case (byte *******)0xa:
          cVar2 = *pcVar9;
          if (cVar2 == 'm') {
            if (pcVar9[1] == 'a') {
              cVar2 = pcVar9[2];
              bVar19 = cVar2 == 'n';
              if (bVar19) {
                cVar2 = pcVar9[3];
              }
              if (bVar19 && cVar2 == 'a') {
                cVar2 = pcVar9[4];
                bVar19 = cVar2 == 'g';
                if (bVar19) {
                  cVar2 = pcVar9[5];
                }
                if (bVar19 && cVar2 == 'e') {
                  cVar2 = pcVar9[6];
                  bVar19 = cVar2 == 'm';
                  if (bVar19) {
                    cVar2 = pcVar9[7];
                  }
                  if (bVar19 && cVar2 == 'e') {
                    cVar2 = pcVar9[8];
                    bVar19 = cVar2 == 'n';
                    if (bVar19) {
                      cVar2 = pcVar9[9];
                    }
                    if (bVar19 && cVar2 == 't') {
                      local_100 = (byte *******)&DAT_80000018;
                      goto LAB_00931bfc;
                    }
                  }
                }
              }
            }
          }
          else {
            bVar19 = cVar2 != 'a';
            if (!bVar19) {
              cVar2 = pcVar9[1];
            }
            if (!(bVar19 || cVar2 != 'u')) {
              cVar2 = pcVar9[2];
              bVar19 = cVar2 != 't';
              if (!bVar19) {
                cVar2 = pcVar9[3];
              }
              if (!(bVar19 || cVar2 != 'o')) {
                cVar2 = pcVar9[4];
                bVar19 = cVar2 != 't';
                if (!bVar19) {
                  cVar2 = pcVar9[5];
                }
                if (!(bVar19 || cVar2 != 'u')) {
                  cVar2 = pcVar9[6];
                  bVar19 = cVar2 != 'n';
                  if (!bVar19) {
                    cVar2 = pcVar9[7];
                  }
                  if (!(bVar19 || cVar2 != 'i')) {
                    cVar2 = pcVar9[8];
                    bVar19 = cVar2 != 'n';
                    if (!bVar19) {
                      cVar2 = pcVar9[9];
                    }
                    if (!(bVar19 || cVar2 != 'g')) {
                      local_100 = (byte *******)0x80000016;
                      goto LAB_00931bfc;
                    }
                  }
                }
              }
            }
          }
          break;
        case (byte *******)0xd:
          if (*pcVar9 == 'p') {
            cVar2 = pcVar9[1];
            bVar19 = cVar2 == 'o';
            if (bVar19) {
              cVar2 = pcVar9[2];
            }
            if (bVar19 && cVar2 == 'w') {
              cVar2 = pcVar9[3];
              bVar19 = cVar2 == 'e';
              if (bVar19) {
                cVar2 = pcVar9[4];
              }
              if (bVar19 && cVar2 == 'r') {
                cVar2 = pcVar9[5];
                bVar19 = cVar2 == '_';
                if (bVar19) {
                  cVar2 = pcVar9[6];
                }
                if (bVar19 && cVar2 == 's') {
                  cVar2 = pcVar9[7];
                  bVar19 = cVar2 == 'c';
                  if (bVar19) {
                    cVar2 = pcVar9[8];
                  }
                  if (bVar19 && cVar2 == 'a') {
                    cVar2 = pcVar9[9];
                    bVar19 = cVar2 == 'l';
                    if (bVar19) {
                      cVar2 = pcVar9[10];
                    }
                    if (bVar19 && cVar2 == 'i') {
                      cVar2 = pcVar9[0xb];
                      bVar19 = cVar2 == 'n';
                      if (bVar19) {
                        cVar2 = pcVar9[0xc];
                      }
                      if (bVar19 && cVar2 == 'g') {
                        local_100 = (byte *******)0x80000017;
                        goto LAB_00931bfc;
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        case (byte *******)0xf:
          cVar2 = *pcVar9;
          bVar19 = cVar2 == 'm';
          if (bVar19) {
            cVar2 = pcVar9[1];
          }
          bVar20 = bVar19 && cVar2 == 'o';
          if (bVar19 && cVar2 == 'o') {
            bVar20 = pcVar9[2] == 'd';
          }
          if (bVar20) {
            cVar2 = pcVar9[3];
            bVar19 = cVar2 == 'e';
            if (bVar19) {
              cVar2 = pcVar9[4];
            }
            if (bVar19 && cVar2 == 'l') {
              cVar2 = pcVar9[5];
              bVar19 = cVar2 == '_';
              if (bVar19) {
                cVar2 = pcVar9[6];
              }
              if (bVar19 && cVar2 == 'd') {
                cVar2 = pcVar9[7];
                bVar19 = cVar2 == 'e';
                if (bVar19) {
                  cVar2 = pcVar9[8];
                }
                if (bVar19 && cVar2 == 't') {
                  cVar2 = pcVar9[9];
                  bVar19 = cVar2 == 'e';
                  if (bVar19) {
                    cVar2 = pcVar9[10];
                  }
                  if (bVar19 && cVar2 == 'c') {
                    cVar2 = pcVar9[0xb];
                    bVar19 = cVar2 == 't';
                    if (bVar19) {
                      cVar2 = pcVar9[0xc];
                    }
                    if (bVar19 && cVar2 == 'i') {
                      cVar2 = pcVar9[0xd];
                      bVar19 = cVar2 == 'o';
                      if (bVar19) {
                        cVar2 = pcVar9[0xe];
                      }
                      if (bVar19 && cVar2 == 'n') {
                        local_100 = (byte *******)0x80000015;
                        goto LAB_00931bfc;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        pppppppbVar10 = (byte *******)thunk_FUN_016d4a50();
        if (pppppppbVar10 == (byte *******)0x0) {
LAB_00932694:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_298);
        }
switchD_009316f0_caseD_0:
        FUN_016dd1aa(pppppppbVar10,pcVar9,local_298);
        local_100 = (byte *******)0x8000000e;
        local_fc = local_298;
        local_f8 = pppppppbVar10;
        local_f4 = local_298;
        break;
      case 0xf:
        pppppppbVar5 = (byte *******)puVar16[1];
        ppppppbVar8 = (byte ******)puVar16[2];
        if (ppppppbVar8 == (byte ******)0xa) {
          if (*(byte *)pppppppbVar5 != 0x6d) {
            if (*(byte *)pppppppbVar5 == 0x61) {
              bVar1 = *(byte *)((int)pppppppbVar5 + 1);
              bVar19 = bVar1 == 0x75;
              if (bVar19) {
                bVar1 = *(byte *)((int)pppppppbVar5 + 2);
              }
              if (bVar19 && bVar1 == 0x74) {
                bVar1 = *(byte *)((int)pppppppbVar5 + 3);
                bVar19 = bVar1 == 0x6f;
                if (bVar19) {
                  bVar1 = *(byte *)(pppppppbVar5 + 1);
                }
                if (bVar19 && bVar1 == 0x74) {
                  bVar1 = *(byte *)((int)pppppppbVar5 + 5);
                  bVar19 = bVar1 == 0x75;
                  if (bVar19) {
                    bVar1 = *(byte *)((int)pppppppbVar5 + 6);
                  }
                  if (bVar19 && bVar1 == 0x6e) {
                    bVar1 = *(byte *)((int)pppppppbVar5 + 7);
                    bVar19 = bVar1 == 0x69;
                    if (bVar19) {
                      bVar1 = *(byte *)(pppppppbVar5 + 2);
                    }
                    if (bVar19 && bVar1 == 0x6e) {
                      bVar1 = *(byte *)((int)pppppppbVar5 + 9);
                      ppppppbVar11 = (byte ******)0x80000016;
LAB_0093196c:
                      bVar19 = bVar1 == 0x67;
                      goto LAB_009320e8;
                    }
                  }
                }
              }
            }
            goto LAB_00931b5c;
          }
          bVar1 = *(byte *)((int)pppppppbVar5 + 1);
          bVar19 = bVar1 == 0x61;
          if (bVar19) {
            bVar1 = *(byte *)((int)pppppppbVar5 + 2);
          }
          if (!bVar19 || bVar1 != 0x6e) goto LAB_00931b5c;
          bVar1 = *(byte *)((int)pppppppbVar5 + 3);
          bVar19 = bVar1 != 0x61;
          if (!bVar19) {
            bVar1 = *(byte *)(pppppppbVar5 + 1);
          }
          if (bVar19 || bVar1 != 0x67) goto LAB_00931b5c;
          bVar1 = *(byte *)((int)pppppppbVar5 + 5);
          bVar19 = bVar1 != 0x65;
          if (!bVar19) {
            bVar1 = *(byte *)((int)pppppppbVar5 + 6);
          }
          if (bVar19 || bVar1 != 0x6d) goto LAB_00931b5c;
          bVar1 = *(byte *)((int)pppppppbVar5 + 7);
          bVar19 = bVar1 != 0x65;
          if (!bVar19) {
            bVar1 = *(byte *)(pppppppbVar5 + 2);
          }
          if (bVar19 || bVar1 != 0x6e) goto LAB_00931b5c;
          ppppppbVar11 = (byte ******)&DAT_80000018;
          bVar19 = *(byte *)((int)pppppppbVar5 + 9) == 0x74;
LAB_009320e8:
          pppppppbVar10 = (byte *******)&local_100;
          if (!bVar19) goto LAB_00931b5c;
        }
        else {
          if (ppppppbVar8 == (byte ******)0xd) {
            bVar1 = *(byte *)pppppppbVar5;
            bVar19 = bVar1 == 0x70;
            if (bVar19) {
              bVar1 = *(byte *)((int)pppppppbVar5 + 1);
            }
            if (bVar19 && bVar1 == 0x6f) {
              bVar1 = *(byte *)((int)pppppppbVar5 + 2);
              bVar19 = bVar1 == 0x77;
              if (bVar19) {
                bVar1 = *(byte *)((int)pppppppbVar5 + 3);
              }
              if (bVar19 && bVar1 == 0x65) {
                bVar1 = *(byte *)(pppppppbVar5 + 1);
                bVar19 = bVar1 == 0x72;
                if (bVar19) {
                  bVar1 = *(byte *)((int)pppppppbVar5 + 5);
                }
                if (bVar19 && bVar1 == 0x5f) {
                  bVar1 = *(byte *)((int)pppppppbVar5 + 6);
                  bVar19 = bVar1 == 0x73;
                  if (bVar19) {
                    bVar1 = *(byte *)((int)pppppppbVar5 + 7);
                  }
                  if (bVar19 && bVar1 == 99) {
                    bVar1 = *(byte *)(pppppppbVar5 + 2);
                    bVar19 = bVar1 == 0x61;
                    if (bVar19) {
                      bVar1 = *(byte *)((int)pppppppbVar5 + 9);
                    }
                    if (bVar19 && bVar1 == 0x6c) {
                      bVar1 = *(byte *)((int)pppppppbVar5 + 10);
                      bVar19 = bVar1 == 0x69;
                      if (bVar19) {
                        bVar1 = *(byte *)((int)pppppppbVar5 + 0xb);
                      }
                      if (bVar19 && bVar1 == 0x6e) {
                        bVar1 = *(byte *)(pppppppbVar5 + 3);
                        ppppppbVar11 = (byte ******)0x80000017;
                        goto LAB_0093196c;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (ppppppbVar8 == (byte ******)0xf) {
              pppppppbVar10 = (byte *******)(uint)*(byte *)pppppppbVar5;
            }
            if (ppppppbVar8 == (byte ******)0xf && pppppppbVar10 == (byte *******)&DAT_0000006d) {
              bVar1 = *(byte *)((int)pppppppbVar5 + 1);
              bVar19 = bVar1 == 0x6f;
              if (bVar19) {
                bVar1 = *(byte *)((int)pppppppbVar5 + 2);
              }
              if ((bVar19 && bVar1 == 100) && (*(byte *)((int)pppppppbVar5 + 3) == 0x65)) {
                bVar1 = *(byte *)(pppppppbVar5 + 1);
                bVar19 = bVar1 == 0x6c;
                if (bVar19) {
                  bVar1 = *(byte *)((int)pppppppbVar5 + 5);
                }
                if (bVar19 && bVar1 == 0x5f) {
                  bVar1 = *(byte *)((int)pppppppbVar5 + 6);
                  bVar19 = bVar1 == 100;
                  if (bVar19) {
                    bVar1 = *(byte *)((int)pppppppbVar5 + 7);
                  }
                  if (bVar19 && bVar1 == 0x65) {
                    bVar1 = *(byte *)(pppppppbVar5 + 2);
                    bVar19 = bVar1 == 0x74;
                    if (bVar19) {
                      bVar1 = *(byte *)((int)pppppppbVar5 + 9);
                    }
                    if (bVar19 && bVar1 == 0x65) {
                      bVar1 = *(byte *)((int)pppppppbVar5 + 10);
                      bVar19 = bVar1 == 99;
                      if (bVar19) {
                        bVar1 = *(byte *)((int)pppppppbVar5 + 0xb);
                      }
                      if (bVar19 && bVar1 == 0x74) {
                        bVar1 = *(byte *)(pppppppbVar5 + 3);
                        bVar19 = bVar1 == 0x69;
                        if (bVar19) {
                          bVar1 = *(byte *)((int)pppppppbVar5 + 0xd);
                        }
                        if (bVar19 && bVar1 == 0x6f) {
                          ppppppbVar11 = (byte ******)0x80000015;
                          bVar19 = *(byte *)((int)pppppppbVar5 + 0xe) == 0x6e;
                          goto LAB_009320e8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_00931b5c:
          local_100 = (byte *******)&DAT_8000000f;
          ppppppbVar11 = ppppppbVar8;
          pppppppbVar10 = (byte *******)&local_f8;
          local_fc = pppppppbVar5;
        }
        *pppppppbVar10 = ppppppbVar11;
      }
LAB_00931bfc:
      local_238 = local_fc;
      pppppppbStack_234 = local_f8;
      pppppppbStack_230 = local_f4;
      if (local_100 == (byte *******)&DAT_80000019) break;
      pbVar12 = &DAT_00000004;
      if ((byte *******)0x80000014 < local_100) {
        pbVar12 = (byte *)((int)local_100 + 0x7fffffeb);
      }
      if (pbVar12 != &DAT_00000004) {
                    /* WARNING: Could not recover jumptable at 0x00931cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((int)&DAT_00931cdc + (&DAT_00931cdc)[(int)pbVar12]))(&DAT_00931cdc,puVar16 + 4);
        return;
      }
      *puVar6 = local_fc;
      puVar6[1] = local_f8;
      puVar6[2] = local_f4;
      local_210 = local_100;
      FUN_015791cc(&local_100);
      pppppppbStack_ec = local_f4;
      local_f0 = local_f8;
      pppppppbVar5 = local_fc;
      pppppppbVar10 = local_100;
      iVar13 = local_23c;
      local_134 = local_100;
      local_130 = local_fc;
      local_12c = local_f8;
      pppppppbStack_128 = local_f4;
      local_1f8 = local_210;
      local_1f4 = pppppppbStack_20c;
      local_1f0 = pppppppbStack_208;
      pppppppbStack_1ec = pppppppbStack_204;
      local_108 = local_210;
      local_104 = pppppppbStack_20c;
      local_100 = pppppppbStack_208;
      local_fc = pppppppbStack_204;
      local_f8 = pppppppbVar10;
      local_f4 = pppppppbVar5;
      if (local_23c == local_244) {
        FUN_009f4b90(&local_244);
      }
      puVar14 = local_240 + iVar13 * 8;
      *puVar14 = local_108;
      puVar14[1] = local_104;
      puVar14[2] = local_100;
      puVar14[3] = local_fc;
      puVar14[4] = local_f8;
      puVar14[5] = local_f4;
      puVar14[6] = local_f0;
      puVar14[7] = pppppppbStack_ec;
      local_23c = iVar13 + 1;
      pppppppbVar10 = local_f8;
    }
  }
  iVar13 = local_23c;
  puVar6 = local_240;
  FUN_00904ad8(&local_108,local_240,local_23c);
  pppppppbVar5 = local_104;
  pppppppbVar10 = local_108;
  local_138 = local_100;
  local_134 = local_fc;
  local_130 = local_f8;
  local_12c = local_f4;
  pppppppbStack_128 = local_f0;
  pppppppbStack_124 = pppppppbStack_ec;
  local_120 = local_e8;
  uStack_11c = uStack_e4;
  uStack_118 = uStack_e0;
  uStack_114 = uStack_dc;
  uStack_110 = uStack_d8;
  uStack_10c = uStack_d4;
  if (local_108 == (byte *******)0x3 && local_104 == (byte *******)0x0) {
    param_1[2] = local_100;
    param_1[3] = local_fc;
    param_1[4] = local_f8;
    param_1[5] = local_f4;
    param_1[6] = local_f0;
    param_1[7] = pppppppbStack_ec;
    param_1[8] = local_e8;
    param_1[9] = uStack_e4;
    param_1[10] = uStack_e0;
    param_1[0xb] = uStack_dc;
    param_1[0xc] = uStack_d8;
    param_1[0xd] = uStack_d4;
    *param_1 = 3;
    param_1[1] = 0;
LAB_00932238:
    puVar6 = local_240;
    FUN_00953170(local_240,local_23c);
    if (local_244 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(puVar6);
    return;
  }
  FUN_016dd1aa(auStack_1c0,auStack_d0,0x88);
  local_1f0 = local_138;
  pppppppbStack_1ec = local_134;
  local_1e8 = local_130;
  pppppppbStack_1e4 = local_12c;
  pppppppbStack_1e0 = pppppppbStack_128;
  pppppppbStack_1dc = pppppppbStack_124;
  local_1d8 = local_120;
  uStack_1d4 = uStack_11c;
  uStack_1d0 = uStack_118;
  uStack_1cc = uStack_114;
  uStack_1c8 = uStack_110;
  uStack_1c4 = uStack_10c;
  local_3c = puVar6 + iVar13 * 8;
  local_1f8 = pppppppbVar10;
  local_1f4 = pppppppbVar5;
  local_40 = local_244;
  local_44 = puVar6;
  local_48 = puVar6;
  if (iVar13 != 0) {
    iVar13 = iVar13 << 5;
LAB_009322c4:
    local_44 = puVar6 + 8;
    pppppppbVar10 = (byte *******)*puVar6;
    if (pppppppbVar10 == (byte *******)0x80000015) goto code_r0x009322d0;
    puVar14 = (undefined4 *)((uint)&local_138 | 4);
    uVar15 = puVar6[2];
    uVar17 = puVar6[3];
    *puVar14 = puVar6[1];
    puVar14[1] = uVar15;
    puVar14[2] = uVar17;
    uVar15 = puVar6[5];
    uVar17 = puVar6[6];
    uVar18 = puVar6[7];
    puVar14[3] = puVar6[4];
    puVar14[4] = uVar15;
    puVar14[5] = uVar17;
    puVar14[6] = uVar18;
    local_138 = pppppppbVar10;
    if (&SUB_00000002 <= (byte *)((int)pppppppbVar10 + 0x7fffffeb)) {
      uVar4 = 0x15;
      if ((int)pppppppbVar10 < 0) {
        uVar4 = (uint)pppppppbVar10 ^ 0x80000000;
      }
      pppppppbVar10 = local_12c;
      pppppppbVar5 = local_130;
      switch(uVar4) {
      case 0xc:
        break;
      case 0xd:
        pppppppbVar10 = local_130;
        pppppppbVar5 = local_134;
        break;
      case 0xe:
        pppppppbVar10 = local_130;
        pppppppbVar5 = local_12c;
        goto LAB_009323e8;
      case 0xf:
        pppppppbVar10 = local_134;
LAB_009323e8:
        FUN_00fab1e0(&local_108,pppppppbVar10,pppppppbVar5);
        if (local_108 != (byte *******)0x0) {
switchD_009323ac_default:
          iVar13 = thunk_FUN_016d4a50(0x12);
          if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,0x12);
          }
          FUN_016dd1aa(iVar13,
                       "unexpected map keystruct FormatHeader with 4 elementsstruct PoolConfig with 4 elementsstruct ScpiPsuConfig with 3 elementsstruct GroupConfigOnly with 1 elementstruct PowerMeterConfig with 1 elementstruct PowerMeterConfigEntry with 2 elements"
                       ,0x12);
          param_1[5] = 0x12;
          param_1[6] = iVar13;
          param_1[7] = 0x12;
          param_1[8] = 0;
          param_1[9] = 4;
          param_1[10] = 0;
          param_1[0xb] = 0x80000000;
          *param_1 = 3;
          param_1[1] = 0;
          param_1[2] = 0;
          goto LAB_009324c8;
        }
        pppppppbVar10 = local_100;
        pppppppbVar5 = local_104;
        break;
      default:
        goto switchD_009323ac_default;
      }
      local_28 = &LAB_008b9b38;
      local_2c = (byte *******)&local_30;
      local_30 = (byte *******)&local_38;
      local_38 = pppppppbVar5;
      local_34 = pppppppbVar10;
      FUN_00927010(&local_108,&DAT_0059895d,&local_2c);
      param_1[2] = local_108;
      param_1[3] = local_104;
      param_1[4] = local_100;
      param_1[5] = local_fc;
      param_1[6] = local_f8;
      param_1[7] = local_f4;
      param_1[8] = local_f0;
      param_1[9] = pppppppbStack_ec;
      param_1[10] = local_e8;
      param_1[0xb] = uStack_e4;
      param_1[0xc] = uStack_e0;
      param_1[0xd] = uStack_dc;
      *param_1 = 3;
      param_1[1] = 0;
LAB_009324c8:
      FUN_008f7448(&local_138);
      FUN_008f7448(&pppppppbStack_128);
      FUN_009272d4(&local_48);
      FUN_0092e09c(&local_1f8);
      return;
    }
  }
LAB_0093230c:
  FUN_009272d4(&local_48);
  FUN_016dd1aa(param_1,&local_1f8,0xc0);
  param_1[0x34] = local_210;
  param_1[0x35] = pppppppbStack_20c;
  param_1[0x36] = pppppppbStack_208;
  param_1[0x37] = pppppppbStack_204;
  param_1[0x38] = uStack_200;
  param_1[0x39] = uStack_1fc;
  param_1[0x31] = local_290;
  param_1[0x3b] = local_288;
  param_1[0x32] = local_294;
  param_1[0x3c] = local_28c;
  param_1[0x30] = 2;
  param_1[0x3a] = 2;
  param_1[0x33] = 2;
  *(undefined1 *)(param_1 + 0x3d) = 3;
  return;
code_r0x009322d0:
  iVar13 = iVar13 + -0x20;
  puVar6 = local_44;
  if (iVar13 == 0) goto code_r0x009322dc;
  goto LAB_009322c4;
code_r0x009322dc:
  local_44 = local_3c;
  goto LAB_0093230c;
}

