// FUN_018cbcc4 @ 018cbcc4 size=2164 calls_out=5 calls_in=1
// strings: 

void FUN_018cbcc4(undefined4 *param_1,int *param_2,byte *param_3,byte *param_4)

{
  char cVar1;
  int *piVar2;
  byte *pbVar3;
  char cVar4;
  byte *pbVar5;
  uint *puVar6;
  uint *puVar7;
  uint *unaff_r4;
  int iVar8;
  undefined4 uVar9;
  uint *puVar10;
  byte *pbVar11;
  uint *unaff_r11;
  uint uVar12;
  byte *pbVar13;
  uint *local_c0;
  uint local_bc;
  uint local_b4;
  int local_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  byte *local_80;
  byte *local_7c;
  uint *puStack_78;
  uint *puStack_74;
  undefined4 local_54;
  byte **local_50;
  undefined4 local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  uint *local_34;
  uint *local_30;
  int local_2c;
  byte local_28;
  
  FUN_01ae75f4(&local_b0,param_3,param_4,0);
  if (local_b0 == 0) {
    if ((char)local_ac == '\x1c') {
      uVar9 = 0;
      if (param_4 == (byte *)0x0) {
LAB_018cbf94:
        cVar1 = '\0';
LAB_018cbf98:
        cVar4 = cVar1;
        pbVar11 = (byte *)0x0;
      }
      else {
        cVar4 = '\0';
        cVar1 = '\0';
        if ((~*param_3 & 0x1f) == 0) goto LAB_018cbf98;
        pbVar11 = (byte *)0x0;
        if (param_4 != &DAT_00000001) {
          pbVar13 = (byte *)(uint)param_3[1];
          if (-1 < (char)param_3[1]) {
            pbVar5 = (byte *)0x2;
LAB_018cbdc4:
            pbVar3 = pbVar13 + (int)pbVar5;
            cVar4 = '\0';
            cVar1 = '\0';
            if ((pbVar3 < pbVar5) || (param_4 < pbVar3)) goto LAB_018cbf98;
            pbVar11 = (byte *)0x0;
            if (*param_3 != 0x30) goto LAB_018cbf9c;
            local_44 = param_3 + (int)pbVar5;
            local_3c = (byte *)0x0;
            local_40 = pbVar13;
            if (pbVar13 == (byte *)0x0) {
switchD_018cc440_default:
              local_b4 = 0;
LAB_018cbe24:
              pbVar11 = (byte *)0x0;
            }
            else {
              local_3c = &DAT_00000001;
              if ((~*local_44 & 0x1f) == 0 || pbVar13 == &DAT_00000001)
              goto switchD_018cc440_default;
              puVar10 = (uint *)(uint)local_44[1];
              uVar12 = 2;
              local_3c = (byte *)0x2;
              if ((char)local_44[1] < '\0') {
                switch(puVar10) {
                case (uint *)0x81:
                  if ((byte *)0x2 < pbVar13) {
                    puVar10 = (uint *)(uint)local_44[2];
                    uVar12 = 3;
                    local_3c = &DAT_00000003;
                    if ((char)local_44[2] < '\0') goto LAB_018cbff4;
                  }
                  break;
                case (uint *)0x82:
                  if (((byte *)0x2 < pbVar13) &&
                     (local_3c = &DAT_00000003, pbVar13 != &DAT_00000003)) {
                    uVar12 = 4;
                    local_3c = &SUB_00000004;
                    if (local_44[2] != 0) {
                      puVar10 = (uint *)(uint)CONCAT11(local_44[2],local_44[3]);
LAB_018cc2f4:
                      if (puVar10 < (uint *)0xffff) goto LAB_018cbff4;
                    }
                  }
                  break;
                case (uint *)0x83:
                  if (((byte *)0x2 < pbVar13) &&
                     (local_3c = &DAT_00000003, pbVar13 != &DAT_00000003)) {
                    local_3c = &SUB_00000004;
                    if (&SUB_00000004 < pbVar13) {
                      uVar12 = 5;
                      local_3c = &DAT_00000005;
                      if (local_44[2] != 0) {
                        puVar10 = (uint *)((uint)local_44[3] << 8 | (uint)local_44[2] << 0x10 |
                                          (uint)local_44[4]);
                        goto LAB_018cc2f4;
                      }
                    }
                  }
                  break;
                case (uint *)0x84:
                  if (((byte *)0x2 < pbVar13) &&
                     (local_3c = &DAT_00000003, pbVar13 != &DAT_00000003)) {
                    local_3c = &SUB_00000004;
                    if (&SUB_00000004 < pbVar13) {
                      local_3c = &DAT_00000005;
                      if (pbVar13 != &DAT_00000005) {
                        uVar12 = 6;
                        local_3c = &DAT_00000006;
                        if (local_44[2] != 0) {
                          puVar10 = (uint *)((uint)local_44[3] << 0x10 | (uint)local_44[2] << 0x18 |
                                             (uint)local_44[4] << 8 | (uint)local_44[5]);
                          goto LAB_018cc2f4;
                        }
                      }
                    }
                  }
                }
                goto switchD_018cc440_default;
              }
LAB_018cbff4:
              pbVar5 = (byte *)((int)puVar10 + uVar12);
              pbVar11 = (byte *)0x0;
              if (CARRY4((uint)puVar10,uVar12)) goto switchD_018cc440_default;
              local_b4 = 0;
              if (pbVar13 < pbVar5) goto LAB_018cbe28;
              local_3c = pbVar5;
              if (*local_44 != 0x30) goto switchD_018cc440_default;
              local_38 = local_44 + uVar12;
              local_30 = (uint *)0x0;
              local_34 = puVar10;
              FUN_01ae7424(&local_2c,&local_38);
              if (local_2c == 0) {
                local_b4 = (uint)local_28;
                goto LAB_018cbe24;
              }
              local_b4 = FUN_01aeb40c(&local_38,0x30);
              local_b4 = local_b4 & 0xff;
              if (local_b4 != 0x26) goto LAB_018cbe24;
              uVar12 = FUN_01aeb40c(&local_38,0x30);
              local_b4 = uVar12 & 0xff;
              if ((uVar12 & 0xff) == 0x26) {
                uVar12 = FUN_01aeb40c(&local_38,0x30);
                local_b4 = uVar12 & 0xff;
                if ((uVar12 & 0xff) == 0x26) {
                  if (local_30 < local_34) {
                    pbVar11 = (byte *)0x0;
                    if ((~local_38[(int)local_30] & 0x1f) != 0) {
                      unaff_r4 = (uint *)0x0;
                      local_b4 = 0;
                      if (local_34 <= (uint *)((int)local_30 + 1)) goto LAB_018cbe28;
                      puVar10 = (uint *)((int)local_30 + 2);
                      unaff_r4 = (uint *)(int)(char)local_38[(int)local_30 + 1];
                      uVar12 = (uint)local_38[(int)local_30 + 1];
                      if ((int)unaff_r4 < 0) {
                        if (uVar12 - 0x81 < 4) {
                          puVar7 = &switchD_018cc324::switchdataD_018cc328;
                          puVar6 = (uint *)(&switchD_018cc324::switchdataD_018cc328)[uVar12 - 0x81];
                          switch(uVar12) {
                          case 0x81:
                            if ((puVar10 < local_34) &&
                               (0x7fffffff < (uint)(int)(char)local_38[(int)puVar10])) {
                              uVar12 = (uint)local_38[(int)puVar10];
                              puVar10 = (uint *)((int)local_30 + 3);
                              goto LAB_018cc0e8;
                            }
                            break;
                          case 0x82:
                            if (puVar10 < local_34) {
                              puVar6 = (uint *)((int)local_30 + 3);
                            }
                            if ((puVar10 < local_34 && puVar6 < local_34) &&
                               (pbVar11 = local_38 + (int)puVar10, *pbVar11 != 0)) {
                              puVar10 = local_30 + 1;
                              uVar12 = (uint)CONCAT11(*pbVar11,local_38[(int)puVar6]);
LAB_018cc41c:
                              if (uVar12 < 0xffff) goto LAB_018cc0e8;
                            }
                            break;
                          case 0x83:
                            if (puVar10 < local_34) {
                              puVar6 = (uint *)((int)local_30 + 3);
                              if (puVar6 < local_34) {
                                puVar7 = local_30 + 1;
                              }
                              if ((puVar6 < local_34 && puVar7 < local_34) &&
                                 (unaff_r4 = (uint *)(uint)local_38[(int)puVar10],
                                 unaff_r4 != (uint *)0x0)) {
                                puVar10 = (uint *)((int)local_30 + 5);
                                uVar12 = (uint)local_38[(int)puVar6] << 8 | (int)unaff_r4 << 0x10 |
                                         (uint)local_38[(int)puVar7];
                                goto LAB_018cc41c;
                              }
                            }
                            break;
                          case 0x84:
                            if (puVar10 < local_34) {
                              puVar6 = (uint *)((int)local_30 + 3);
                            }
                            if (puVar10 < local_34 && puVar6 < local_34) {
                              puVar7 = local_30 + 1;
                              if (puVar7 < local_34) {
                                unaff_r4 = (uint *)((int)local_30 + 5);
                              }
                              if ((puVar7 < local_34 && unaff_r4 < local_34) &&
                                 (pbVar11 = local_38 + (int)puVar10, *pbVar11 != 0)) {
                                unaff_r4 = (uint *)(uint)local_38[(int)unaff_r4];
                                puVar10 = (uint *)((int)local_30 + 6);
                                uVar12 = (uint)local_38[(int)puVar6] << 0x10 |
                                         (uint)*pbVar11 << 0x18 | (uint)local_38[(int)puVar7] << 8 |
                                         (uint)unaff_r4;
                                goto LAB_018cc41c;
                              }
                            }
                          }
                        }
                      }
                      else {
LAB_018cc0e8:
                        puVar6 = (uint *)((int)puVar10 + uVar12);
                        pbVar11 = (byte *)0x0;
                        if (!CARRY4(uVar12,(uint)puVar10)) {
                          unaff_r4 = (uint *)0x0;
                          local_b4 = 0;
                          if (local_34 < puVar6) goto LAB_018cbe28;
                          if (local_38[(int)local_30] == 0x30) {
                            local_b4 = 0;
                            if (local_34 <= puVar6) goto LAB_018cbe28;
                            unaff_r4 = (uint *)~(uint)local_38[(int)puVar6];
                            if (((uint)unaff_r4 & 0x1f) != 0) {
                              unaff_r4 = (uint *)0x0;
                              local_b4 = 0;
                              if (local_34 <= (uint *)((int)puVar6 + 1)) goto LAB_018cbe28;
                              local_c0 = (uint *)((int)puVar6 + 2);
                              unaff_r11 = (uint *)(uint)local_38[(int)puVar6 + 1];
                              if ((char)local_38[(int)puVar6 + 1] < '\0') {
                                puVar7 = &switchD_018cc440::switchdataD_018cc444;
                                unaff_r4 = (uint *)((int)unaff_r11 + -0x81);
                                switch((uint *)((int)unaff_r11 + -0x81)) {
                                case (uint *)0x0:
                                  unaff_r4 = local_c0;
                                  if (local_c0 < local_34) {
                                    pbVar11 = local_38 + (int)local_c0;
                                    unaff_r4 = (uint *)(int)(char)*pbVar11;
                                    if ((uint *)0x7fffffff < unaff_r4) {
                                      local_c0 = (uint *)((int)puVar6 + 3);
                                      unaff_r11 = (uint *)(uint)*pbVar11;
                                      goto LAB_018cc15c;
                                    }
                                  }
                                  break;
                                case (uint *)0x1:
                                  puVar7 = local_c0;
                                  if (local_c0 < local_34) {
                                    puVar7 = (uint *)((int)puVar6 + 3);
                                  }
                                  unaff_r4 = puVar7;
                                  if ((local_c0 < local_34 && puVar7 < local_34) &&
                                     (pbVar11 = local_38 + (int)local_c0, *pbVar11 != 0)) {
                                    unaff_r4 = (uint *)(uint)local_38[(int)puVar7];
                                    local_c0 = puVar6 + 1;
                                    unaff_r11 = (uint *)(uint)CONCAT11(*pbVar11,local_38[(int)puVar7
                                                                                        ]);
LAB_018cc508:
                                    if (unaff_r11 < (uint *)0xffff) goto LAB_018cc15c;
                                  }
                                  break;
                                case (uint *)0x2:
                                  unaff_r4 = local_c0;
                                  if (local_c0 < local_34) {
                                    unaff_r4 = (uint *)((int)puVar6 + 3);
                                    if (unaff_r4 < local_34) {
                                      puVar7 = puVar6 + 1;
                                    }
                                    if ((unaff_r4 < local_34 && puVar7 < local_34) &&
                                       (pbVar11 = local_38 + (int)local_c0, *pbVar11 != 0)) {
                                      local_c0 = (uint *)((int)puVar6 + 5);
                                      unaff_r4 = (uint *)((uint)local_38[(int)unaff_r4] << 8 |
                                                         (uint)*pbVar11 << 0x10);
                                      unaff_r11 = (uint *)((uint)unaff_r4 |
                                                          (uint)local_38[(int)puVar7]);
                                      goto LAB_018cc508;
                                    }
                                  }
                                  break;
                                case (uint *)0x3:
                                  unaff_r4 = local_c0;
                                  if (local_c0 < local_34) {
                                    unaff_r4 = (uint *)((int)puVar6 + 3);
                                  }
                                  if (local_c0 < local_34 && unaff_r4 < local_34) {
                                    puVar7 = puVar6 + 1;
                                    if (puVar7 < local_34) {
                                      unaff_r11 = (uint *)((int)puVar6 + 5);
                                    }
                                    if ((puVar7 < local_34 && unaff_r11 < local_34) &&
                                       (pbVar11 = local_38 + (int)local_c0, *pbVar11 != 0)) {
                                      local_c0 = (uint *)((int)puVar6 + 6);
                                      unaff_r4 = (uint *)((uint)local_38[(int)unaff_r4] << 0x10 |
                                                          (uint)*pbVar11 << 0x18 |
                                                         (uint)local_38[(int)puVar7] << 8);
                                      unaff_r11 = (uint *)((uint)unaff_r4 |
                                                          (uint)local_38[(int)unaff_r11]);
                                      goto LAB_018cc508;
                                    }
                                  }
                                }
                              }
                              else {
LAB_018cc15c:
                                pbVar11 = (byte *)0x0;
                                puVar7 = (uint *)((int)unaff_r11 + (int)local_c0);
                                unaff_r4 = local_c0;
                                if (((local_c0 <= puVar7) &&
                                    (unaff_r4 = local_c0, puVar7 <= local_34)) &&
                                   (unaff_r4 = local_c0, local_38[(int)puVar6] == 0x30)) {
                                  local_b4 = 0;
                                  unaff_r4 = local_c0;
                                  if (puVar7 == local_34) {
                                    pbVar11 = local_38 + (int)puVar10;
                                    unaff_r4 = (uint *)(local_38 + (int)local_c0);
                                    local_bc = uVar12 >> 8;
                                    local_b4 = uVar12;
                                  }
                                  goto LAB_018cbe28;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto switchD_018cc440_default;
                }
              }
            }
LAB_018cbe28:
            cVar1 = FUN_01aeb40c(&local_44,0x30);
            if (((cVar1 == '&') && (cVar1 = FUN_01aeb40c(&local_44,3), cVar1 == '&')) &&
               (cVar4 = (char)local_b4, cVar1 = cVar4, pbVar11 != (byte *)0x0)) {
              pbVar13 = local_40;
              if (local_3c == local_40) {
                pbVar13 = pbVar3;
              }
              cVar1 = '\0';
              if (local_3c == local_40 && pbVar13 == param_4) {
                local_44 = (byte *)((local_bc & 0xffff) << 8);
                local_44 = (byte *)CONCAT13((char)(local_bc >> 0x10),(undefined3)local_44);
                goto LAB_018cbf9c;
              }
            }
            goto LAB_018cbf98;
          }
          switch(pbVar13) {
          case (byte *)0x81:
            if (((byte *)0x2 < param_4) && (0x7fffffff < (uint)(int)(char)param_3[2])) {
              pbVar13 = (byte *)(uint)param_3[2];
              pbVar5 = &DAT_00000003;
              goto LAB_018cbdc4;
            }
            break;
          case (byte *)0x82:
            if ((&DAT_00000003 < param_4) && (param_3[2] != 0)) {
              pbVar5 = &SUB_00000004;
              pbVar13 = (byte *)(uint)CONCAT11(param_3[2],param_3[3]);
LAB_018cbf88:
              if ((byte *)0xfffe < pbVar13) goto LAB_018cbf94;
              goto LAB_018cbdc4;
            }
            break;
          case (byte *)0x83:
            if ((&SUB_00000004 < param_4) && (param_3[2] != 0)) {
              pbVar13 = (byte *)((uint)param_3[3] << 8 | (uint)param_3[2] << 0x10 | (uint)param_3[4]
                                );
              pbVar5 = &DAT_00000005;
              goto LAB_018cbf88;
            }
            break;
          case (byte *)0x84:
            if (((((byte *)0x2 < param_4) && (param_4 != &DAT_00000003)) &&
                ((&DAT_00000005 < param_4 || ((0x37U >> ((uint)param_4 & 0xff) & 1) == 0)))) &&
               (param_3[2] != 0)) {
              pbVar5 = &DAT_00000006;
              pbVar13 = (byte *)((uint)param_3[3] << 0x10 | (uint)param_3[2] << 0x18 |
                                 (uint)param_3[4] << 8 | (uint)param_3[5]);
              goto LAB_018cbf88;
            }
          }
          cVar4 = '\0';
        }
      }
LAB_018cbf9c:
      local_44 = (byte *)CONCAT31(local_44._1_3_,cVar4);
      local_50 = (byte **)&local_44;
      if (pbVar11 == (byte *)0x0) {
        local_50 = &local_38;
      }
      local_38 = (byte *)((uint)local_38 & 0xffffff00);
      if (pbVar11 != (byte *)0x0) {
        local_7c = *local_50;
        puStack_78 = unaff_r4;
        puStack_74 = unaff_r11;
        goto LAB_018cbd10;
      }
    }
    *param_1 = 10;
    param_1[1] = 0;
  }
  else {
    uVar9 = local_54;
    pbVar11 = local_80;
LAB_018cbd10:
    FUN_018cbbc8(&local_b0,pbVar11,local_7c,puStack_78,puStack_74,uVar9,local_50);
    iVar8 = param_2[2];
    if (iVar8 == *param_2) {
      FUN_0133e324(param_2);
    }
    piVar2 = (int *)(param_2[1] + iVar8 * 0x28);
    *piVar2 = local_b0;
    piVar2[1] = local_ac;
    piVar2[2] = iStack_a8;
    piVar2[3] = iStack_a4;
    piVar2[4] = iStack_a0;
    piVar2[5] = local_9c;
    piVar2[6] = iStack_98;
    piVar2[7] = iStack_94;
    piVar2[8] = iStack_90;
    piVar2[9] = iStack_8c;
    param_2[2] = iVar8 + 1;
    *(undefined1 *)param_1 = 0x14;
  }
  return;
}

