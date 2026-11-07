// FUN_000223f0 @ 000223f0  size=3140
// callers: []

void FUN_000223f0(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  bool bVar5;
  undefined4 local_20a0;
  undefined4 uStack_209c;
  undefined4 local_2098;
  undefined4 local_2094;
  undefined4 local_2090;
  undefined4 uStack_208c;
  char acStack_2020 [4];
  char acStack_201c [4];
  char acStack_2018 [8184];
  
  pbVar4 = *(byte **)(param_1 + 300);
  if (3 < DAT_000be63c) {
    memset(acStack_2020,0,0x2000);
    snprintf(acStack_2020,0x2000,"board_info_version = %d\n",(uint)*pbVar4);
    FUN_0004a3a4(3,acStack_2020,0);
    if (3 < DAT_000be63c) {
      memset(acStack_2020,0,0x2000);
      snprintf(acStack_2020,0x2000,"algorithm_and_key_version = 0x%x\n",(uint)pbVar4[1]);
      FUN_0004a3a4(3,acStack_2020,0);
      uVar3 = DAT_000be63c;
      memset(&local_20a0,0,0x80);
      local_20a0 = *(undefined4 *)(pbVar4 + 2);
      local_2094 = *(undefined4 *)(pbVar4 + 0xe);
      uStack_209c = *(undefined4 *)(pbVar4 + 6);
      local_2098 = *(undefined4 *)(pbVar4 + 10);
      local_2090 = CONCAT22(local_2090._2_2_,*(undefined2 *)(pbVar4 + 0x12));
      if (3 < uVar3) {
        memset(acStack_2020,0,0x2000);
        snprintf(acStack_2020,0x2000,"board_sn = %s\n",(char *)&local_20a0);
        FUN_0004a3a4(3,acStack_2020,0);
        uVar3 = DAT_000be63c;
        memset(&local_20a0,0,0x80);
        local_20a0 = CONCAT13(local_20a0._3_1_,*(undefined3 *)(pbVar4 + 0x14));
        if (3 < uVar3) {
          memset(acStack_2020,0,0x2000);
          snprintf(acStack_2020,0x2000,"chip_die = %s\n",(char *)&local_20a0);
          FUN_0004a3a4(3,acStack_2020,0);
          uVar3 = DAT_000be63c;
          memset(&local_20a0,0,0x80);
          local_20a0 = *(undefined4 *)(pbVar4 + 0x17);
          uStack_209c = *(undefined4 *)(pbVar4 + 0x1b);
          local_2098 = *(undefined4 *)(pbVar4 + 0x1f);
          local_2094 = CONCAT22(local_2094._2_2_,*(undefined2 *)(pbVar4 + 0x23));
          if (3 < uVar3) {
            memset(acStack_2020,0,0x2000);
            snprintf(acStack_2020,0x2000,"chip_marking = %s\n",(char *)&local_20a0);
            FUN_0004a3a4(3,acStack_2020,0);
            if (3 < DAT_000be63c) {
              memset(acStack_2020,0,0x2000);
              snprintf(acStack_2020,0x2000,"chip_bin = %d\n",(uint)pbVar4[0x25]);
              FUN_0004a3a4(3,acStack_2020,0);
              uVar3 = DAT_000be63c;
              memset(&local_20a0,0,0x80);
              local_20a0 = *(undefined4 *)(pbVar4 + 0x26);
              uStack_209c = *(undefined4 *)(pbVar4 + 0x2a);
              local_2098 = CONCAT22(local_2098._2_2_,*(undefined2 *)(pbVar4 + 0x2e));
              if (3 < uVar3) {
                memset(acStack_2020,0,0x2000);
                snprintf(acStack_2020,0x2000,"ft_version = %s\n",(char *)&local_20a0);
                FUN_0004a3a4(3,acStack_2020,0);
                if (DAT_000be63c < 4) {
LAB_00022868:
                  if (DAT_000be63c < 4) {
LAB_00022978:
                    if (3 < DAT_000be63c) {
                      memset(acStack_2020,0,0x2000);
                      snprintf(acStack_2020,0x2000,"sensor_offset[5] = %d\n",(uint)pbVar4[0x3a]);
                      FUN_0004a3a4(3,acStack_2020,0);
LAB_000229c0:
                      uVar3 = DAT_000be63c;
                      memset(&local_20a0,0,0x80);
                      local_20a0 = CONCAT13(local_20a0._3_1_,*(undefined3 *)(pbVar4 + 0x3b));
                      if (3 < uVar3) {
                        memset(acStack_2020,0,0x2000);
                        snprintf(acStack_2020,0x2000,"chip_tech = %s\n",(char *)&local_20a0);
                        FUN_0004a3a4(3,acStack_2020,0);
                        uVar3 = DAT_000be63c;
                        memset(&local_20a0,0,0x80);
                        local_20a0 = *(undefined4 *)(pbVar4 + 0x3e);
                        uStack_209c = *(undefined4 *)(pbVar4 + 0x42);
                        local_2098 = CONCAT31(local_2098._1_3_,pbVar4[0x46]);
                        if (3 < uVar3) {
                          memset(acStack_2020,0,0x2000);
                          snprintf(acStack_2020,0x2000,"board_name = %s\n",(char *)&local_20a0);
                          FUN_0004a3a4(3,acStack_2020,0);
                          uVar3 = DAT_000be63c;
                          memset(&local_20a0,0,0x80);
                          local_20a0 = *(undefined4 *)(pbVar4 + 0x47);
                          uStack_209c = *(undefined4 *)(pbVar4 + 0x4b);
                          local_2098 = *(undefined4 *)(pbVar4 + 0x4f);
                          local_2094 = *(undefined4 *)(pbVar4 + 0x53);
                          local_2090 = *(undefined4 *)(pbVar4 + 0x57);
                          uStack_208c = *(undefined4 *)(pbVar4 + 0x5b);
                          if (3 < uVar3) {
                            memset(acStack_2020,0,0x2000);
                            snprintf(acStack_2020,0x2000,"factory_job = %s\n",(char *)&local_20a0);
                            FUN_0004a3a4(3,acStack_2020,0);
                            if (DAT_000be63c < 4) {
LAB_00022c20:
                              if (DAT_000be63c < 4) {
LAB_00022d30:
                                if (DAT_000be63c < 4) {
LAB_00022e40:
                                  if (DAT_000be63c < 4) {
LAB_00022f54:
                                    uVar3 = DAT_000be63c;
                                    memset(&local_20a0,0,0x80);
                                    memcpy(&local_20a0,pbVar4 + 0x77,0x80);
                                    if (3 < uVar3) {
                                      memset(acStack_2020,0,0x2000);
                                      acStack_2020[0] = s_asic_freq__0009b0fc[0];
                                      acStack_2020[1] = s_asic_freq__0009b0fc[1];
                                      acStack_2020[2] = s_asic_freq__0009b0fc[2];
                                      acStack_2020[3] = s_asic_freq__0009b0fc[3];
                                      acStack_201c[0] = s_asic_freq__0009b0fc[4];
                                      acStack_201c[1] = s_asic_freq__0009b0fc[5];
                                      acStack_201c[2] = s_asic_freq__0009b0fc[6];
                                      acStack_201c[3] = s_asic_freq__0009b0fc[7];
                                      acStack_2018[0] = s_asic_freq__0009b0fc[8];
                                      acStack_2018[1] = s_asic_freq__0009b0fc[9];
                                      acStack_2018[2] = s_asic_freq__0009b0fc[10];
                                      acStack_2018[3] = s_asic_freq__0009b0fc[0xb];
                                      FUN_0004a3a4(3,acStack_2020,0);
                                    }
                                    goto LAB_00022438;
                                  }
                                  memset(acStack_2020,0,0x2000);
                                  snprintf(acStack_2020,0x2000,"pt2_count = %d\n",(uint)pbVar4[0x6d]
                                          );
                                  FUN_0004a3a4(3,acStack_2020,0);
                                  if (3 < DAT_000be63c) {
                                    memset(acStack_2020,0,0x2000);
                                    snprintf(acStack_2020,0x2000,"sweep_hashrate = %d\n",
                                             (uint)*(ushort *)(pbVar4 + 0x72));
                                    FUN_0004a3a4(3,acStack_2020,0);
LAB_00022ec8:
                                    if (3 < DAT_000be63c) {
                                      memset(acStack_2020,0,0x2000);
                                      snprintf(acStack_2020,0x2000,"sweep_freq_base = %d\n",
                                               (uint)*(ushort *)(pbVar4 + 0x74));
                                      FUN_0004a3a4(3,acStack_2020,0);
                                      if (3 < DAT_000be63c) {
                                        memset(acStack_2020,0,0x2000);
                                        snprintf(acStack_2020,0x2000,"sweep_freq_step = %d\n",
                                                 (uint)pbVar4[0x76]);
                                        FUN_0004a3a4(3,acStack_2020,0);
                                        goto LAB_00022f54;
                                      }
                                    }
                                  }
                                }
                                else {
                                  memset(acStack_2020,0,0x2000);
                                  snprintf(acStack_2020,0x2000,"param_info_crc = 0x%x\n",
                                           (uint)pbVar4[0x71]);
                                  FUN_0004a3a4(3,acStack_2020,0);
                                  if (3 < DAT_000be63c) {
                                    memset(acStack_2020,0,0x2000);
                                    snprintf(acStack_2020,0x2000,"pt1_result = %d\n",
                                             (uint)pbVar4[0x5f]);
                                    FUN_0004a3a4(3,acStack_2020,0);
LAB_00022db8:
                                    if (DAT_000be63c < 4) goto LAB_00022ec8;
                                    memset(acStack_2020,0,0x2000);
                                    snprintf(acStack_2020,0x2000,"pt1_count = %d\n",
                                             (uint)pbVar4[0x60]);
                                    FUN_0004a3a4(3,acStack_2020,0);
                                    if (3 < DAT_000be63c) {
                                      memset(acStack_2020,0,0x2000);
                                      snprintf(acStack_2020,0x2000,"pt2_result = %d\n",
                                               (uint)pbVar4[0x6c]);
                                      FUN_0004a3a4(3,acStack_2020,0);
                                      goto LAB_00022e40;
                                    }
                                  }
                                }
                              }
                              else {
                                memset(acStack_2020,0,0x2000);
                                snprintf(acStack_2020,0x2000,"pcb_temp_in = %d\n",
                                         (int)(char)pbVar4[0x68]);
                                FUN_0004a3a4(3,acStack_2020,0);
                                if (3 < DAT_000be63c) {
                                  memset(acStack_2020,0,0x2000);
                                  snprintf(acStack_2020,0x2000,"pcb_temp_out = %d\n",
                                           (int)(char)pbVar4[0x69]);
                                  FUN_0004a3a4(3,acStack_2020,0);
LAB_00022ca8:
                                  if (DAT_000be63c < 4) goto LAB_00022db8;
                                  memset(acStack_2020,0,0x2000);
                                  snprintf(acStack_2020,0x2000,"test_version = %d\n",
                                           (uint)pbVar4[0x6a]);
                                  FUN_0004a3a4(3,acStack_2020,0);
                                  if (3 < DAT_000be63c) {
                                    memset(acStack_2020,0,0x2000);
                                    snprintf(acStack_2020,0x2000,"test_standard = %d\n",
                                             (uint)pbVar4[0x6b]);
                                    FUN_0004a3a4(3,acStack_2020,0);
                                    goto LAB_00022d30;
                                  }
                                }
                              }
                            }
                            else {
                              memset(acStack_2020,0,0x2000);
                              snprintf(acStack_2020,0x2000,"board_info_crc = 0x%x\n",
                                       (uint)pbVar4[0x61]);
                              FUN_0004a3a4(3,acStack_2020,0);
                              if (3 < DAT_000be63c) {
                                memset(acStack_2020,0,0x2000);
                                snprintf(acStack_2020,0x2000,"voltage = %d\n",
                                         (uint)*(ushort *)(pbVar4 + 0x62));
                                FUN_0004a3a4(3,acStack_2020,0);
                                if (DAT_000be63c < 4) goto LAB_00022ca8;
                                memset(acStack_2020,0,0x2000);
                                snprintf(acStack_2020,0x2000,"frequency = %d\n",
                                         (uint)*(ushort *)(pbVar4 + 100));
                                FUN_0004a3a4(3,acStack_2020,0);
                                if (3 < DAT_000be63c) {
                                  memset(acStack_2020,0,0x2000);
                                  snprintf(acStack_2020,0x2000,"nonce_rate = %d\n",
                                           (uint)*(ushort *)(pbVar4 + 0x66));
                                  FUN_0004a3a4(3,acStack_2020,0);
                                  goto LAB_00022c20;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    memset(acStack_2020,0,0x2000);
                    snprintf(acStack_2020,0x2000,"sensor_offset[1] = %d\n",(uint)pbVar4[0x36]);
                    FUN_0004a3a4(3,acStack_2020,0);
                    if (3 < DAT_000be63c) {
                      memset(acStack_2020,0,0x2000);
                      snprintf(acStack_2020,0x2000,"sensor_offset[2] = %d\n",(uint)pbVar4[0x37]);
                      FUN_0004a3a4(3,acStack_2020,0);
LAB_000228f0:
                      if (DAT_000be63c < 4) goto LAB_000229c0;
                      memset(acStack_2020,0,0x2000);
                      snprintf(acStack_2020,0x2000,"sensor_offset[3] = %d\n",(uint)pbVar4[0x38]);
                      FUN_0004a3a4(3,acStack_2020,0);
                      if (3 < DAT_000be63c) {
                        memset(acStack_2020,0,0x2000);
                        snprintf(acStack_2020,0x2000,"sensor_offset[4] = %d\n",(uint)pbVar4[0x39]);
                        FUN_0004a3a4(3,acStack_2020,0);
                        goto LAB_00022978;
                      }
                    }
                  }
                }
                else {
                  memset(acStack_2020,0,0x2000);
                  snprintf(acStack_2020,0x2000,"pcb_version = 0x%x\n",
                           (uint)*(ushort *)(pbVar4 + 0x30));
                  FUN_0004a3a4(3,acStack_2020,0);
                  if (3 < DAT_000be63c) {
                    memset(acStack_2020,0,0x2000);
                    snprintf(acStack_2020,0x2000,"bom_version = 0x%x\n",
                             (uint)*(ushort *)(pbVar4 + 0x32));
                    FUN_0004a3a4(3,acStack_2020,0);
                    if (DAT_000be63c < 4) goto LAB_000228f0;
                    memset(acStack_2020,0,0x2000);
                    snprintf(acStack_2020,0x2000,"asic_sensor_type = 0x%x\n",(uint)pbVar4[0x34]);
                    FUN_0004a3a4(3,acStack_2020,0);
                    if (3 < DAT_000be63c) {
                      memset(acStack_2020,0,0x2000);
                      snprintf(acStack_2020,0x2000,"sensor_offset[0] = %d\n",(uint)pbVar4[0x35]);
                      FUN_0004a3a4(3,acStack_2020,0);
                      goto LAB_00022868;
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
  memset(&local_20a0,0,0x80);
  memcpy(&local_20a0,pbVar4 + 0x77,0x80);
LAB_00022438:
  uVar3 = 0;
  do {
    if (uVar3 == (uVar3 / 0xc) * 0xc) {
      if (uVar3 != 0) {
        putchar(10);
        goto LAB_00022478;
      }
      uVar2 = (uint)pbVar4[0x77];
LAB_0002248c:
      uVar2 = uVar2 & 0xf;
    }
    else {
LAB_00022478:
      bVar5 = (uVar3 & 1) != 0;
      bVar1 = pbVar4[((int)uVar3 >> 1) + 0x77];
      if (bVar5) {
        bVar1 = bVar1 >> 4;
      }
      uVar2 = (uint)bVar1;
      if (!bVar5) goto LAB_0002248c;
    }
    uVar3 = uVar3 + 1;
    printf("%d ",pbVar4[0x76] * uVar2 + (uint)*(ushort *)(pbVar4 + 0x74));
    if (uVar3 == 0x100) {
      putchar(10);
      if (3 < DAT_000be63c) {
        memset(acStack_2020,0,0x2000);
        snprintf(acStack_2020,0x2000,"sweep_result = %d\n",(uint)pbVar4[0xf7]);
        FUN_0004a3a4(3,acStack_2020,0);
        if (3 < DAT_000be63c) {
          memset(acStack_2020,0,0x2000);
          snprintf(acStack_2020,0x2000,"board_name:%.9s\n\n",(char *)(pbVar4 + 0x3e));
          FUN_0004a3a4(3,acStack_2020,0);
          return;
        }
      }
      return;
    }
  } while( true );
}


