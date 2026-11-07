// FUN_0001e578 @ 0001e578  size=3072  callers=0
// program: bmminer


void FUN_0001e578(int param_1)

{
  uint uVar1;
  int param3;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 local_2084;
  undefined4 uStack_2080;
  undefined4 local_207c;
  undefined4 local_2078;
  undefined4 local_2074;
  undefined4 uStack_2070;
  char acStack_2020 [8196];
  
  pbVar3 = *(byte **)(param_1 + 300);
  uVar1 = DAT_000be63c;
  if (3 < DAT_000be63c) {
    memset(acStack_2020,0,0x2000);
    snprintf(acStack_2020,0x2000,"board_info_version = %d\n",(uint)*pbVar3);
    FUN_0004a3a4(3,acStack_2020,0);
    uVar1 = DAT_000be63c;
    if (3 < DAT_000be63c) {
      memset(acStack_2020,0,0x2000);
      snprintf(acStack_2020,0x2000,"algorithm_and_key_version = 0x%x\n",(uint)pbVar3[1]);
      FUN_0004a3a4(3,acStack_2020,0);
      uVar1 = DAT_000be63c;
      memset(&local_2084,0,100);
      local_2084 = *(undefined4 *)(pbVar3 + 2);
      local_2078 = *(undefined4 *)(pbVar3 + 0xe);
      uStack_2080 = *(undefined4 *)(pbVar3 + 6);
      local_207c = *(undefined4 *)(pbVar3 + 10);
      local_2074 = CONCAT22(local_2074._2_2_,*(undefined2 *)(pbVar3 + 0x12));
      if (3 < uVar1) {
        memset(acStack_2020,0,0x2000);
        snprintf(acStack_2020,0x2000,"board_sn = %s\n",(char *)&local_2084);
        FUN_0004a3a4(3,acStack_2020,0);
        uVar1 = DAT_000be63c;
        memset(&local_2084,0,100);
        local_2084 = CONCAT13(local_2084._3_1_,*(undefined3 *)(pbVar3 + 0x14));
        if (3 < uVar1) {
          memset(acStack_2020,0,0x2000);
          snprintf(acStack_2020,0x2000,"chip_die = %s\n",(char *)&local_2084);
          FUN_0004a3a4(3,acStack_2020,0);
          uVar1 = DAT_000be63c;
          memset(&local_2084,0,100);
          local_2084 = *(undefined4 *)(pbVar3 + 0x17);
          uStack_2080 = *(undefined4 *)(pbVar3 + 0x1b);
          local_207c = *(undefined4 *)(pbVar3 + 0x1f);
          local_2078 = CONCAT22(local_2078._2_2_,*(undefined2 *)(pbVar3 + 0x23));
          if (3 < uVar1) {
            memset(acStack_2020,0,0x2000);
            snprintf(acStack_2020,0x2000,"chip_marking = %s\n",(char *)&local_2084);
            FUN_0004a3a4(3,acStack_2020,0);
            uVar1 = DAT_000be63c;
            if (3 < DAT_000be63c) {
              memset(acStack_2020,0,0x2000);
              snprintf(acStack_2020,0x2000,"chip_bin = %d\n",(uint)pbVar3[0x25]);
              FUN_0004a3a4(3,acStack_2020,0);
              uVar1 = DAT_000be63c;
              memset(&local_2084,0,100);
              local_2084 = *(undefined4 *)(pbVar3 + 0x26);
              uStack_2080 = *(undefined4 *)(pbVar3 + 0x2a);
              local_207c = CONCAT22(local_207c._2_2_,*(undefined2 *)(pbVar3 + 0x2e));
              if (3 < uVar1) {
                memset(acStack_2020,0,0x2000);
                snprintf(acStack_2020,0x2000,"ft_version = %s\n",(char *)&local_2084);
                FUN_0004a3a4(3,acStack_2020,0);
                if (DAT_000be63c < 4) {
LAB_0001ea00:
                  if (DAT_000be63c < 4) {
LAB_0001eb10:
                    uVar1 = DAT_000be63c;
                    if (3 < DAT_000be63c) {
                      memset(acStack_2020,0,0x2000);
                      snprintf(acStack_2020,0x2000,"pic_sensor_addr = 0x%x\n",(uint)pbVar3[0x3a]);
                      FUN_0004a3a4(3,acStack_2020,0);
LAB_0001eb58:
                      uVar1 = DAT_000be63c;
                      memset(&local_2084,0,100);
                      local_2084 = CONCAT13(local_2084._3_1_,*(undefined3 *)(pbVar3 + 0x3b));
                      if (3 < uVar1) {
                        memset(acStack_2020,0,0x2000);
                        snprintf(acStack_2020,0x2000,"chip_tech = %s\n",(char *)&local_2084);
                        FUN_0004a3a4(3,acStack_2020,0);
                        uVar1 = DAT_000be63c;
                        memset(&local_2084,0,100);
                        local_2084 = *(undefined4 *)(pbVar3 + 0x3e);
                        uStack_2080 = *(undefined4 *)(pbVar3 + 0x42);
                        local_207c = CONCAT31(local_207c._1_3_,pbVar3[0x46]);
                        if (3 < uVar1) {
                          memset(acStack_2020,0,0x2000);
                          snprintf(acStack_2020,0x2000,"board_name = %s\n",(char *)&local_2084);
                          FUN_0004a3a4(3,acStack_2020,0);
                          uVar1 = DAT_000be63c;
                          memset(&local_2084,0,100);
                          local_2084 = *(undefined4 *)(pbVar3 + 0x47);
                          uStack_2080 = *(undefined4 *)(pbVar3 + 0x4b);
                          local_207c = *(undefined4 *)(pbVar3 + 0x4f);
                          local_2078 = *(undefined4 *)(pbVar3 + 0x53);
                          local_2074 = *(undefined4 *)(pbVar3 + 0x57);
                          uStack_2070 = *(undefined4 *)(pbVar3 + 0x5b);
                          if (uVar1 < 4) goto LAB_0001e5d4;
                          memset(acStack_2020,0,0x2000);
                          snprintf(acStack_2020,0x2000,"factory_job = %s\n",(char *)&local_2084);
                          FUN_0004a3a4(3,acStack_2020,0);
                          if (DAT_000be63c < 4) {
LAB_0001edb8:
                            if (3 < DAT_000be63c) {
                              memset(acStack_2020,0,0x2000);
                              snprintf(acStack_2020,0x2000,"pcb_temp_in = %d\n",
                                       (int)(char)pbVar3[0x68]);
                              FUN_0004a3a4(3,acStack_2020,0);
                              uVar1 = DAT_000be63c;
                              if (DAT_000be63c < 4) goto LAB_0001e5d4;
                              memset(acStack_2020,0,0x2000);
                              snprintf(acStack_2020,0x2000,"pcb_temp_out = %d\n",
                                       (int)(char)pbVar3[0x69]);
                              FUN_0004a3a4(3,acStack_2020,0);
                              goto LAB_0001ee40;
                            }
LAB_0001eec8:
                            if (3 < DAT_000be63c) {
                              memset(acStack_2020,0,0x2000);
                              snprintf(acStack_2020,0x2000,"param_info_crc = 0x%x\n",
                                       (uint)pbVar3[0x71]);
                              FUN_0004a3a4(3,acStack_2020,0);
                              uVar1 = DAT_000be63c;
                              if (DAT_000be63c < 4) goto LAB_0001e5d4;
                              memset(acStack_2020,0,0x2000);
                              snprintf(acStack_2020,0x2000,"pt1_result = %d\n",(uint)pbVar3[0x5f]);
                              FUN_0004a3a4(3,acStack_2020,0);
                              goto LAB_0001ef50;
                            }
LAB_0001efd8:
                            uVar1 = DAT_000be63c;
                            if (DAT_000be63c < 4) goto LAB_0001e5d4;
                            memset(acStack_2020,0,0x2000);
                            snprintf(acStack_2020,0x2000,"pt2_count = %d\n",(uint)pbVar3[0x6d]);
                            FUN_0004a3a4(3,acStack_2020,0);
                            uVar1 = DAT_000be63c;
                            if (DAT_000be63c < 4) goto LAB_0001e5d4;
                            memset(acStack_2020,0,0x2000);
                            snprintf(acStack_2020,0x2000,"sweep_hashrate = %d\n",
                                     (uint)*(ushort *)(pbVar3 + 0x72));
                            FUN_0004a3a4(3,acStack_2020,0);
                          }
                          else {
                            memset(acStack_2020,0,0x2000);
                            snprintf(acStack_2020,0x2000,"board_info_crc = 0x%x\n",
                                     (uint)pbVar3[0x61]);
                            FUN_0004a3a4(3,acStack_2020,0);
                            uVar1 = DAT_000be63c;
                            if (DAT_000be63c < 4) goto LAB_0001e5d4;
                            memset(acStack_2020,0,0x2000);
                            snprintf(acStack_2020,0x2000,"voltage = %d\n",
                                     (uint)*(ushort *)(pbVar3 + 0x62));
                            FUN_0004a3a4(3,acStack_2020,0);
                            if (3 < DAT_000be63c) {
                              memset(acStack_2020,0,0x2000);
                              snprintf(acStack_2020,0x2000,"frequency = %d\n",
                                       (uint)*(ushort *)(pbVar3 + 100));
                              FUN_0004a3a4(3,acStack_2020,0);
                              uVar1 = DAT_000be63c;
                              if (DAT_000be63c < 4) goto LAB_0001e5d4;
                              memset(acStack_2020,0,0x2000);
                              snprintf(acStack_2020,0x2000,"nonce_rate = %d\n",
                                       (uint)*(ushort *)(pbVar3 + 0x66));
                              FUN_0004a3a4(3,acStack_2020,0);
                              goto LAB_0001edb8;
                            }
LAB_0001ee40:
                            if (3 < DAT_000be63c) {
                              memset(acStack_2020,0,0x2000);
                              snprintf(acStack_2020,0x2000,"test_version = %d\n",(uint)pbVar3[0x6a])
                              ;
                              FUN_0004a3a4(3,acStack_2020,0);
                              uVar1 = DAT_000be63c;
                              if (DAT_000be63c < 4) goto LAB_0001e5d4;
                              memset(acStack_2020,0,0x2000);
                              snprintf(acStack_2020,0x2000,"test_standard = %d\n",(uint)pbVar3[0x6b]
                                      );
                              FUN_0004a3a4(3,acStack_2020,0);
                              goto LAB_0001eec8;
                            }
LAB_0001ef50:
                            if (3 < DAT_000be63c) {
                              memset(acStack_2020,0,0x2000);
                              snprintf(acStack_2020,0x2000,"pt1_count = %d\n",(uint)pbVar3[0x60]);
                              FUN_0004a3a4(3,acStack_2020,0);
                              uVar1 = DAT_000be63c;
                              if (DAT_000be63c < 4) goto LAB_0001e5d4;
                              memset(acStack_2020,0,0x2000);
                              snprintf(acStack_2020,0x2000,"pt2_result = %d\n",(uint)pbVar3[0x6c]);
                              FUN_0004a3a4(3,acStack_2020,0);
                              goto LAB_0001efd8;
                            }
                          }
                          uVar1 = DAT_000be63c;
                          if (3 < DAT_000be63c) {
                            memset(acStack_2020,0,0x2000);
                            snprintf(acStack_2020,0x2000,"sweep_freq_base = %d\n",
                                     (uint)*(ushort *)(pbVar3 + 0x74));
                            FUN_0004a3a4(3,acStack_2020,0);
                            uVar1 = DAT_000be63c;
                            if (3 < DAT_000be63c) {
                              memset(acStack_2020,0,0x2000);
                              snprintf(acStack_2020,0x2000,"sweep_freq_step = %d\n",
                                       (uint)pbVar3[0x76]);
                              FUN_0004a3a4(3,acStack_2020,0);
                              uVar1 = DAT_000be63c;
                            }
                          }
                          goto LAB_0001e5d4;
                        }
                      }
                    }
                  }
                  else {
                    memset(acStack_2020,0,0x2000);
                    snprintf(acStack_2020,0x2000,"asic_sensor_addr[1] = 0x%x\n",(uint)pbVar3[0x36]);
                    FUN_0004a3a4(3,acStack_2020,0);
                    uVar1 = DAT_000be63c;
                    if (3 < DAT_000be63c) {
                      memset(acStack_2020,0,0x2000);
                      snprintf(acStack_2020,0x2000,"asic_sensor_addr[2] = 0x%x\n",(uint)pbVar3[0x37]
                              );
                      FUN_0004a3a4(3,acStack_2020,0);
LAB_0001ea88:
                      if (DAT_000be63c < 4) goto LAB_0001eb58;
                      memset(acStack_2020,0,0x2000);
                      snprintf(acStack_2020,0x2000,"asic_sensor_addr[3] = 0x%x\n",(uint)pbVar3[0x38]
                              );
                      FUN_0004a3a4(3,acStack_2020,0);
                      uVar1 = DAT_000be63c;
                      if (3 < DAT_000be63c) {
                        memset(acStack_2020,0,0x2000);
                        snprintf(acStack_2020,0x2000,"pic_sensor_type = 0x%x\n",(uint)pbVar3[0x39]);
                        FUN_0004a3a4(3,acStack_2020,0);
                        goto LAB_0001eb10;
                      }
                    }
                  }
                }
                else {
                  memset(acStack_2020,0,0x2000);
                  snprintf(acStack_2020,0x2000,"pcb_version = 0x%x\n",
                           (uint)*(ushort *)(pbVar3 + 0x30));
                  FUN_0004a3a4(3,acStack_2020,0);
                  uVar1 = DAT_000be63c;
                  if (3 < DAT_000be63c) {
                    memset(acStack_2020,0,0x2000);
                    snprintf(acStack_2020,0x2000,"bom_version = 0x%x\n",
                             (uint)*(ushort *)(pbVar3 + 0x32));
                    FUN_0004a3a4(3,acStack_2020,0);
                    if (DAT_000be63c < 4) goto LAB_0001ea88;
                    memset(acStack_2020,0,0x2000);
                    snprintf(acStack_2020,0x2000,"asic_sensor_type = 0x%x\n",(uint)pbVar3[0x34]);
                    FUN_0004a3a4(3,acStack_2020,0);
                    uVar1 = DAT_000be63c;
                    if (3 < DAT_000be63c) {
                      memset(acStack_2020,0,0x2000);
                      snprintf(acStack_2020,0x2000,"asic_sensor_addr[0] = 0x%x\n",(uint)pbVar3[0x35]
                              );
                      FUN_0004a3a4(3,acStack_2020,0);
                      goto LAB_0001ea00;
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
  memset(&local_2084,0,100);
  local_2084 = *(undefined4 *)(pbVar3 + 0x47);
  uStack_2080 = *(undefined4 *)(pbVar3 + 0x4b);
  local_207c = *(undefined4 *)(pbVar3 + 0x4f);
  local_2078 = *(undefined4 *)(pbVar3 + 0x53);
  local_2074 = *(undefined4 *)(pbVar3 + 0x57);
  uStack_2070 = *(undefined4 *)(pbVar3 + 0x5b);
LAB_0001e5d4:
  pbVar4 = pbVar3 + 0x76;
  param3 = 0;
  do {
    while ((pbVar4 = pbVar4 + 1, *pbVar4 == 0 || (uVar1 < 4))) {
      param3 = param3 + 1;
      if (param3 == 0x80) goto LAB_0001e654;
    }
    memset(acStack_2020,0,0x2000);
    iVar2 = param3 + 1;
    snprintf(acStack_2020,0x2000,"sweep_level[%d] = %2x\n",param3,(uint)*pbVar4);
    FUN_0004a3a4(3,acStack_2020,0);
    uVar1 = DAT_000be63c;
    param3 = iVar2;
  } while (iVar2 != 0x80);
LAB_0001e654:
  if (3 < uVar1) {
    memset(acStack_2020,0,0x2000);
    snprintf(acStack_2020,0x2000,"sweep_result = 0x%x\n",(uint)pbVar3[0xf7]);
    FUN_0004a3a4(3,acStack_2020,0);
    if (3 < DAT_000be63c) {
      memset(acStack_2020,0,0x2000);
      snprintf(acStack_2020,0x2000,"sweep_info_crc = 0x%x\n",(uint)pbVar3[0xf9]);
      FUN_0004a3a4(3,acStack_2020,0);
      return;
    }
  }
  return;
}

