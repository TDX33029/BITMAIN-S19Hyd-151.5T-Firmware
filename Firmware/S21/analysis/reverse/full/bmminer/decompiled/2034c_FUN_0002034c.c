// FUN_0002034c @ 0002034c  size=2704  callers=0
// program: bmminer


void FUN_0002034c(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 local_2090;
  undefined4 uStack_208c;
  undefined4 local_2088;
  undefined4 local_2084;
  undefined4 local_2080;
  undefined4 uStack_207c;
  char acStack_2010 [8192];
  
  pbVar2 = *(byte **)(param_1 + 300);
  if (DAT_000be63c < 4) {
    return;
  }
  memset(acStack_2010,0,0x2000);
  snprintf(acStack_2010,0x2000,"board_info_version = %d\n",(uint)*pbVar2);
  FUN_0004a3a4(3,acStack_2010,0);
  if (DAT_000be63c < 4) {
    return;
  }
  memset(acStack_2010,0,0x2000);
  snprintf(acStack_2010,0x2000,"algorithm_and_key_version = 0x%x\n",(uint)pbVar2[1]);
  FUN_0004a3a4(3,acStack_2010,0);
  uVar1 = DAT_000be63c;
  memset(&local_2090,0,0x80);
  local_2090 = *(undefined4 *)(pbVar2 + 2);
  local_2084 = *(undefined4 *)(pbVar2 + 0xe);
  uStack_208c = *(undefined4 *)(pbVar2 + 6);
  local_2088 = *(undefined4 *)(pbVar2 + 10);
  local_2080 = CONCAT22(local_2080._2_2_,*(undefined2 *)(pbVar2 + 0x12));
  if (uVar1 < 4) {
    return;
  }
  memset(acStack_2010,0,0x2000);
  snprintf(acStack_2010,0x2000,"board_sn = %s\n",(char *)&local_2090);
  FUN_0004a3a4(3,acStack_2010,0);
  uVar1 = DAT_000be63c;
  memset(&local_2090,0,0x80);
  local_2090 = CONCAT13(local_2090._3_1_,*(undefined3 *)(pbVar2 + 0x14));
  if (uVar1 < 4) {
    return;
  }
  memset(acStack_2010,0,0x2000);
  snprintf(acStack_2010,0x2000,"chip_die = %s\n",(char *)&local_2090);
  FUN_0004a3a4(3,acStack_2010,0);
  uVar1 = DAT_000be63c;
  memset(&local_2090,0,0x80);
  local_2090 = *(undefined4 *)(pbVar2 + 0x17);
  uStack_208c = *(undefined4 *)(pbVar2 + 0x1b);
  local_2088 = *(undefined4 *)(pbVar2 + 0x1f);
  local_2084 = CONCAT22(local_2084._2_2_,*(undefined2 *)(pbVar2 + 0x23));
  if (uVar1 < 4) {
    return;
  }
  memset(acStack_2010,0,0x2000);
  snprintf(acStack_2010,0x2000,"chip_marking = %s\n",(char *)&local_2090);
  FUN_0004a3a4(3,acStack_2010,0);
  if (DAT_000be63c < 4) {
    return;
  }
  memset(acStack_2010,0,0x2000);
  snprintf(acStack_2010,0x2000,"chip_bin = %d\n",(uint)pbVar2[0x25]);
  FUN_0004a3a4(3,acStack_2010,0);
  uVar1 = DAT_000be63c;
  memset(&local_2090,0,0x80);
  local_2090 = *(undefined4 *)(pbVar2 + 0x26);
  uStack_208c = *(undefined4 *)(pbVar2 + 0x2a);
  local_2088 = CONCAT22(local_2088._2_2_,*(undefined2 *)(pbVar2 + 0x2e));
  if (uVar1 < 4) {
    return;
  }
  memset(acStack_2010,0,0x2000);
  snprintf(acStack_2010,0x2000,"ft_version = %s\n",(char *)&local_2090);
  FUN_0004a3a4(3,acStack_2010,0);
  if (DAT_000be63c < 4) {
LAB_00020708:
    if (3 < DAT_000be63c) {
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"asic_sensor_addr[1] = 0x%x\n",(uint)pbVar2[0x36]);
      FUN_0004a3a4(3,acStack_2010,0);
      if (DAT_000be63c < 4) {
        return;
      }
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"asic_sensor_addr[2] = 0x%x\n",(uint)pbVar2[0x37]);
      FUN_0004a3a4(3,acStack_2010,0);
      goto LAB_00020790;
    }
LAB_00020818:
    if (DAT_000be63c < 4) {
      return;
    }
    memset(acStack_2010,0,0x2000);
    snprintf(acStack_2010,0x2000,"pic_sensor_addr = 0x%x\n",(uint)pbVar2[0x3a]);
    FUN_0004a3a4(3,acStack_2010,0);
  }
  else {
    memset(acStack_2010,0,0x2000);
    snprintf(acStack_2010,0x2000,"pcb_version = 0x%x\n",(uint)*(ushort *)(pbVar2 + 0x30));
    FUN_0004a3a4(3,acStack_2010,0);
    if (DAT_000be63c < 4) {
      return;
    }
    memset(acStack_2010,0,0x2000);
    snprintf(acStack_2010,0x2000,"bom_version = 0x%x\n",(uint)*(ushort *)(pbVar2 + 0x32));
    FUN_0004a3a4(3,acStack_2010,0);
    if (3 < DAT_000be63c) {
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"asic_sensor_type = 0x%x\n",(uint)pbVar2[0x34]);
      FUN_0004a3a4(3,acStack_2010,0);
      if (DAT_000be63c < 4) {
        return;
      }
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"asic_sensor_addr[0] = 0x%x\n",(uint)pbVar2[0x35]);
      FUN_0004a3a4(3,acStack_2010,0);
      goto LAB_00020708;
    }
LAB_00020790:
    if (3 < DAT_000be63c) {
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"asic_sensor_addr[3] = 0x%x\n",(uint)pbVar2[0x38]);
      FUN_0004a3a4(3,acStack_2010,0);
      if (DAT_000be63c < 4) {
        return;
      }
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"pic_sensor_type = 0x%x\n",(uint)pbVar2[0x39]);
      FUN_0004a3a4(3,acStack_2010,0);
      goto LAB_00020818;
    }
  }
  uVar1 = DAT_000be63c;
  memset(&local_2090,0,0x80);
  local_2090 = CONCAT13(local_2090._3_1_,*(undefined3 *)(pbVar2 + 0x3b));
  if (uVar1 < 4) {
    return;
  }
  memset(acStack_2010,0,0x2000);
  snprintf(acStack_2010,0x2000,"chip_tech = %s\n",(char *)&local_2090);
  FUN_0004a3a4(3,acStack_2010,0);
  uVar1 = DAT_000be63c;
  memset(&local_2090,0,0x80);
  local_2090 = *(undefined4 *)(pbVar2 + 0x3e);
  uStack_208c = *(undefined4 *)(pbVar2 + 0x42);
  local_2088 = CONCAT31(local_2088._1_3_,pbVar2[0x46]);
  if (uVar1 < 4) {
    return;
  }
  memset(acStack_2010,0,0x2000);
  snprintf(acStack_2010,0x2000,"board_name = %s\n",(char *)&local_2090);
  FUN_0004a3a4(3,acStack_2010,0);
  uVar1 = DAT_000be63c;
  memset(&local_2090,0,0x80);
  local_2090 = *(undefined4 *)(pbVar2 + 0x47);
  uStack_208c = *(undefined4 *)(pbVar2 + 0x4b);
  local_2088 = *(undefined4 *)(pbVar2 + 0x4f);
  local_2084 = *(undefined4 *)(pbVar2 + 0x53);
  local_2080 = *(undefined4 *)(pbVar2 + 0x57);
  uStack_207c = *(undefined4 *)(pbVar2 + 0x5b);
  if (uVar1 < 4) {
    return;
  }
  memset(acStack_2010,0,0x2000);
  snprintf(acStack_2010,0x2000,"factory_job = %s\n",(char *)&local_2090);
  FUN_0004a3a4(3,acStack_2010,0);
  if (DAT_000be63c < 4) {
LAB_00020ac0:
    if (3 < DAT_000be63c) {
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"pcb_temp_in = %d\n",(int)(char)pbVar2[0x68]);
      FUN_0004a3a4(3,acStack_2010,0);
      if (DAT_000be63c < 4) {
        return;
      }
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"pcb_temp_out = %d\n",(int)(char)pbVar2[0x69]);
      FUN_0004a3a4(3,acStack_2010,0);
      goto LAB_00020b48;
    }
LAB_00020bd0:
    if (3 < DAT_000be63c) {
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"param_info_crc = 0x%x\n",(uint)pbVar2[0x71]);
      FUN_0004a3a4(3,acStack_2010,0);
      if (DAT_000be63c < 4) {
        return;
      }
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"pt1_result = %d\n",(uint)pbVar2[0x5f]);
      FUN_0004a3a4(3,acStack_2010,0);
      goto LAB_00020c58;
    }
  }
  else {
    memset(acStack_2010,0,0x2000);
    snprintf(acStack_2010,0x2000,"board_info_crc = 0x%x\n",(uint)pbVar2[0x61]);
    FUN_0004a3a4(3,acStack_2010,0);
    if (DAT_000be63c < 4) {
      return;
    }
    memset(acStack_2010,0,0x2000);
    snprintf(acStack_2010,0x2000,"voltage = %d\n",(uint)*(ushort *)(pbVar2 + 0x62));
    FUN_0004a3a4(3,acStack_2010,0);
    if (3 < DAT_000be63c) {
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"frequency = %d\n",(uint)*(ushort *)(pbVar2 + 100));
      FUN_0004a3a4(3,acStack_2010,0);
      if (DAT_000be63c < 4) {
        return;
      }
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"nonce_rate = %d\n",(uint)*(ushort *)(pbVar2 + 0x66));
      FUN_0004a3a4(3,acStack_2010,0);
      goto LAB_00020ac0;
    }
LAB_00020b48:
    if (3 < DAT_000be63c) {
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"test_version = %d\n",(uint)pbVar2[0x6a]);
      FUN_0004a3a4(3,acStack_2010,0);
      if (DAT_000be63c < 4) {
        return;
      }
      memset(acStack_2010,0,0x2000);
      snprintf(acStack_2010,0x2000,"test_standard = %d\n",(uint)pbVar2[0x6b]);
      FUN_0004a3a4(3,acStack_2010,0);
      goto LAB_00020bd0;
    }
LAB_00020c58:
    if (DAT_000be63c < 4) goto LAB_00020d6c;
    memset(acStack_2010,0,0x2000);
    snprintf(acStack_2010,0x2000,"pt1_count = %d\n",(uint)pbVar2[0x60]);
    FUN_0004a3a4(3,acStack_2010,0);
    if (DAT_000be63c < 4) {
      return;
    }
    memset(acStack_2010,0,0x2000);
    snprintf(acStack_2010,0x2000,"pt2_result = %d\n",(uint)pbVar2[0x6c]);
    FUN_0004a3a4(3,acStack_2010,0);
  }
  if (DAT_000be63c < 4) {
    return;
  }
  memset(acStack_2010,0,0x2000);
  snprintf(acStack_2010,0x2000,"pt2_count = %d\n",(uint)pbVar2[0x6d]);
  FUN_0004a3a4(3,acStack_2010,0);
  if (DAT_000be63c < 4) {
    return;
  }
  memset(acStack_2010,0,0x2000);
  snprintf(acStack_2010,0x2000,"sweep_hashrate = %d\n",(uint)*(ushort *)(pbVar2 + 0x72));
  FUN_0004a3a4(3,acStack_2010,0);
LAB_00020d6c:
  uVar1 = DAT_000be63c;
  memset(&local_2090,0,0x80);
  memcpy(&local_2090,pbVar2 + 0x77,0x80);
  if (uVar1 < 4) {
    return;
  }
  memset(acStack_2010,0,0x2000);
  snprintf(acStack_2010,0x2000,"sweep_result = %d\n",(uint)pbVar2[0xf7]);
  FUN_0004a3a4(3,acStack_2010,0);
  return;
}

