// FUN_0005d010 @ 0005d010  size=1532  callers=1
// program: bmminer


void FUN_0005d010(void)

{
  int iVar1;
  int param3;
  char *param4;
  char *param4_00;
  char local_2018 [8196];
  
  if (3 < DAT_000be63c) {
    memset(local_2018,0,0x2000);
    snprintf(local_2018,0x2000,"%-40s : %d\n","voltage",*(int *)*DAT_00944b8c);
    FUN_0004a3a4(3,local_2018,0);
    if (3 < DAT_000be63c) {
      memset(local_2018,0,0x2000);
      snprintf(local_2018,0x2000,"%-40s : ","freq_base");
      FUN_0004a3a4(3,local_2018,0);
    }
  }
  param3 = 0;
  do {
    iVar1 = FUN_0002a6f0(param3);
    if ((iVar1 != 0) && (3 < DAT_000be63c)) {
      memset(local_2018,0,0x2000);
      snprintf(local_2018,0x2000,"[%d] = %d ",param3,*(int *)(*DAT_00944b8c + param3 * 4 + 4));
      FUN_0004a3a4(3,local_2018,0);
    }
    param3 = param3 + 1;
  } while (param3 != 4);
  if (DAT_000be63c < 4) {
    return;
  }
  memset(local_2018,0,0x2000);
  local_2018[0] = '\n';
  local_2018[1] = '\0';
  FUN_0004a3a4(3,local_2018,0);
  if (DAT_000be63c < 4) {
LAB_0005d300:
    if (DAT_000be63c < 4) goto LAB_0005d494;
    memset(local_2018,0,0x2000);
    param4 = "false";
    if (*(char *)(*DAT_00944b8c + 0x24) == '\0') {
      param4_00 = "false";
    }
    else {
      param4_00 = "true";
    }
    snprintf(local_2018,0x2000,"%-40s : %s\n","is_inc_freq_with_high_vol",param4_00);
    FUN_0004a3a4(3,local_2018,0);
    if (DAT_000be63c < 4) {
      return;
    }
    memset(local_2018,0,0x2000);
    if (*(char *)(*DAT_00944b8c + 0x25) != '\0') {
      param4 = "true";
    }
    snprintf(local_2018,0x2000,"%-40s : %s\n","is_inc_freq_with_high_vol_runtime",param4);
    FUN_0004a3a4(3,local_2018,0);
  }
  else {
    memset(local_2018,0,0x2000);
    snprintf(local_2018,0x2000,"%-40s : %d\n","freq_threshold",*(int *)(*DAT_00944b8c + 0x14));
    FUN_0004a3a4(3,local_2018,0);
    if (DAT_000be63c < 4) {
      return;
    }
    memset(local_2018,0,0x2000);
    snprintf(local_2018,0x2000,"%-40s : %d\n","freq_serial_threshold",*(int *)(*DAT_00944b8c + 0x18)
            );
    FUN_0004a3a4(3,local_2018,0);
    if (3 < DAT_000be63c) {
      memset(local_2018,0,0x2000);
      snprintf(local_2018,0x2000,"%-40s : %d\n","freq_diff_threshold",*(int *)(*DAT_00944b8c + 0x1c)
              );
      FUN_0004a3a4(3,local_2018,0);
      if (DAT_000be63c < 4) {
        return;
      }
      memset(local_2018,0,0x2000);
      snprintf(local_2018,0x2000,"%-40s : %d\n","freq_step",*(int *)(*DAT_00944b8c + 0x20));
      FUN_0004a3a4(3,local_2018,0);
      goto LAB_0005d300;
    }
  }
  if (DAT_000be63c < 4) {
    return;
  }
  memset(local_2018,0,0x2000);
  snprintf(local_2018,0x2000,"%-40s : %d\n","is_board_init_with_power_off",
           *(int *)(*DAT_00944b8c + 0x28));
  FUN_0004a3a4(3,local_2018,0);
  if (DAT_000be63c < 4) {
    return;
  }
  memset(local_2018,0,0x2000);
  snprintf(local_2018,0x2000,"%-40s : %.4f\n","hw_threshold",
           (double)*(float *)(*DAT_00944b8c + 0x2c));
  FUN_0004a3a4(3,local_2018,0);
LAB_0005d494:
  if (3 < DAT_000be63c) {
    memset(local_2018,0,0x2000);
    snprintf(local_2018,0x2000,"%-40s : %.2f\n","nonce_rate_threshold",
             (double)*(float *)(*DAT_00944b8c + 0x30));
    FUN_0004a3a4(3,local_2018,0);
    if (3 < DAT_000be63c) {
      memset(local_2018,0,0x2000);
      snprintf(local_2018,0x2000,"%-40s : %.2f\n","nonce_rate_dec_threshold",
               (double)*(float *)(*DAT_00944b8c + 0x34));
      FUN_0004a3a4(3,local_2018,0);
      if (3 < DAT_000be63c) {
        memset(local_2018,0,0x2000);
        snprintf(local_2018,0x2000,"%-40s : %d\n","freq_tuning_fine_step",
                 *(int *)(*DAT_00944b8c + 0x38));
        FUN_0004a3a4(3,local_2018,0);
        if (3 < DAT_000be63c) {
          memset(local_2018,0,0x2000);
          snprintf(local_2018,0x2000,"%-40s : %d\n","freq_tuning_fine_count",
                   *(int *)(*DAT_00944b8c + 0x3c));
          FUN_0004a3a4(3,local_2018,0);
          return;
        }
      }
    }
  }
  return;
}

