// FUN_0001af08 @ 0001af08  size=1640  callers=0
// program: bmminer


void FUN_0001af08(byte *param_1)

{
  byte *pbVar1;
  char local_810 [2052];
  
  if (DAT_00087bbc < 4) {
    return;
  }
  snprintf(local_810,0x800,"%-30s : 0x%04x\n","key_version",*param_1 & 0xf);
  FUN_00032218(3,local_810,0);
  if (DAT_00087bbc < 4) {
LAB_0001b074:
    if (3 < DAT_00087bbc) {
      snprintf(local_810,0x800,"%-30s : %s\n","chip_technology",*(char **)(param_1 + 0x1f));
      FUN_00032218(3,local_810,0);
      if (DAT_00087bbc < 4) {
        return;
      }
      snprintf(local_810,0x800,"%-30s : 0x%02x\n","fixture_fmt_version",(uint)param_1[2]);
      FUN_00032218(3,local_810,0);
      goto LAB_0001b0f4;
    }
LAB_0001b17c:
    if (3 < DAT_00087bbc) {
      snprintf(local_810,0x800,"%-30s : 0x%02x-%02x\n","bom",(uint)param_1[0x1d],(uint)param_1[0x1e]
              );
      FUN_00032218(3,local_810,0);
      if (DAT_00087bbc < 4) {
        return;
      }
      snprintf(local_810,0x800,"%-30s : %u\n","hash_board_voltage",(uint)*(ushort *)(param_1 + 0x23)
              );
      FUN_00032218(3,local_810,0);
      goto LAB_0001b204;
    }
LAB_0001b28c:
    if (3 < DAT_00087bbc) {
      snprintf(local_810,0x800,"%-30s : %u\n","inlet_temperature",(uint)param_1[0x2b]);
      FUN_00032218(3,local_810,0);
      if (DAT_00087bbc < 4) {
        return;
      }
      snprintf(local_810,0x800,"%-30s : %u\n","outlet_temperature",(uint)param_1[0x2c]);
      FUN_00032218(3,local_810,0);
      goto LAB_0001b30c;
    }
LAB_0001b3b4:
    if (3 < DAT_00087bbc) {
      snprintf(local_810,0x800,"%-30s : 0x%02x-%02x\n","pic sensor",(uint)(param_1[0x19] >> 7),
               param_1[0x19] & 0x7f);
      FUN_00032218(3,local_810,0);
      if (DAT_00087bbc < 4) {
        return;
      }
      snprintf(local_810,0x800,"%-30s : 0x%02x\n","pic sensor addr",(uint)param_1[0x1a]);
      FUN_00032218(3,local_810,0);
      goto LAB_0001b440;
    }
  }
  else {
    snprintf(local_810,0x800,"%-30s : 0x%04x\n","algorithm_code",(uint)(*param_1 >> 4));
    FUN_00032218(3,local_810,0);
    if (DAT_00087bbc < 4) {
      return;
    }
    snprintf(local_810,0x800,"%-30s : 0x%04x\n","fixture_info_len",(uint)param_1[1]);
    FUN_00032218(3,local_810,0);
    if (3 < DAT_00087bbc) {
      snprintf(local_810,0x800,"%-30s : 0x%04x\n","fixture_standard",(uint)param_1[0x2d]);
      FUN_00032218(3,local_810,0);
      if (DAT_00087bbc < 4) {
        return;
      }
      snprintf(local_810,0x800,"%-30s : 0x%04x\n","test_standard",(uint)param_1[0x2e]);
      FUN_00032218(3,local_810,0);
      goto LAB_0001b074;
    }
LAB_0001b0f4:
    if (3 < DAT_00087bbc) {
      snprintf(local_810,0x800,"%-30s : %s\n","SN",*(char **)(param_1 + 3));
      FUN_00032218(3,local_810,0);
      if (DAT_00087bbc < 4) {
        return;
      }
      snprintf(local_810,0x800,"%-30s : 0x%02x-%02x\n","pcb",(uint)param_1[0x1b],(uint)param_1[0x1c]
              );
      FUN_00032218(3,local_810,0);
      goto LAB_0001b17c;
    }
LAB_0001b204:
    if (3 < DAT_00087bbc) {
      snprintf(local_810,0x800,"%-30s : %u\n","hash_board_freq",(uint)*(ushort *)(param_1 + 0x25));
      FUN_00032218(3,local_810,0);
      if (DAT_00087bbc < 4) {
        return;
      }
      snprintf(local_810,0x800,"%-30s : %.2f\n","nonce_response_rate",
               (double)*(float *)(param_1 + 0x27));
      FUN_00032218(3,local_810,0);
      goto LAB_0001b28c;
    }
LAB_0001b30c:
    if (3 < DAT_00087bbc) {
      snprintf(local_810,0x800,"%-30s : 0x%02x-%02x\n","asic sensor",(uint)(param_1[0x14] >> 7),
               param_1[0x14] & 0x7f);
      FUN_00032218(3,local_810,0);
      if (DAT_00087bbc < 4) {
        return;
      }
      pbVar1 = *(byte **)(param_1 + 0x15);
      snprintf(local_810,0x800,"%-30s : 0x%02x-%02x-%02x-%02x\n","asic sensor addr",(uint)*pbVar1,
               (uint)pbVar1[1],(uint)pbVar1[2],(uint)pbVar1[3]);
      FUN_00032218(3,local_810,0);
      goto LAB_0001b3b4;
    }
LAB_0001b440:
    if (DAT_00087bbc < 4) goto LAB_0001b540;
    snprintf(local_810,0x800,"%-30s : bin%d\n","chip_bin",(uint)param_1[0xf]);
    FUN_00032218(3,local_810,0);
    if (DAT_00087bbc < 4) {
      return;
    }
    snprintf(local_810,0x800,"%-30s : %s\n","FT",*(char **)(param_1 + 0x10));
    FUN_00032218(3,local_810,0);
  }
  if (DAT_00087bbc < 4) {
    return;
  }
  snprintf(local_810,0x800,"%-30s : %s\n","chip_die",*(char **)(param_1 + 7));
  FUN_00032218(3,local_810,0);
  if (DAT_00087bbc < 4) {
    return;
  }
  snprintf(local_810,0x800,"%-30s : %s\n","chip_marking",*(char **)(param_1 + 0xb));
  FUN_00032218(3,local_810,0);
LAB_0001b540:
  if (DAT_00087bbc < 4) {
    return;
  }
  local_810[0] = '\n';
  local_810[1] = '\0';
  FUN_00032218(3,local_810,0);
  return;
}

