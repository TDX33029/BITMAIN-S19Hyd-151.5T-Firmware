// FUN_0005be5c @ 0005be5c  size=1068  callers=0
// program: bmminer


void FUN_0005be5c(void)

{
  char *param4;
  char *param4_00;
  char acStack_2018 [8196];
  
  if (DAT_000be63c < 4) {
    return;
  }
  memset(acStack_2018,0,0x2000);
  snprintf(acStack_2018,0x2000,"%-40s : %d\n","voltage",*(int *)*DAT_00944b88);
  FUN_0004a3a4(3,acStack_2018,0);
  if (DAT_000be63c < 4) {
LAB_0005c03c:
    if (DAT_000be63c < 4) goto LAB_0005c1c8;
    memset(acStack_2018,0,0x2000);
    param4 = "false";
    if (*(char *)(*DAT_00944b88 + 0x14) == '\0') {
      param4_00 = "false";
    }
    else {
      param4_00 = "true";
    }
    snprintf(acStack_2018,0x2000,"%-40s : %s\n","is_inc_freq_with_high_vol",param4_00);
    FUN_0004a3a4(3,acStack_2018,0);
    if (DAT_000be63c < 4) {
      return;
    }
    memset(acStack_2018,0,0x2000);
    if (*(char *)(*DAT_00944b88 + 0x15) != '\0') {
      param4 = "true";
    }
    snprintf(acStack_2018,0x2000,"%-40s : %s\n","is_inc_freq_with_high_vol_runtime",param4);
    FUN_0004a3a4(3,acStack_2018,0);
  }
  else {
    memset(acStack_2018,0,0x2000);
    snprintf(acStack_2018,0x2000,"%-40s : %d\n","freq_base",*(int *)(*DAT_00944b88 + 4));
    FUN_0004a3a4(3,acStack_2018,0);
    if (DAT_000be63c < 4) {
      return;
    }
    memset(acStack_2018,0,0x2000);
    snprintf(acStack_2018,0x2000,"%-40s : %d\n","freq_threshold",*(int *)(*DAT_00944b88 + 8));
    FUN_0004a3a4(3,acStack_2018,0);
    if (3 < DAT_000be63c) {
      memset(acStack_2018,0,0x2000);
      snprintf(acStack_2018,0x2000,"%-40s : %d\n","freq_serial_threshold",
               *(int *)(*DAT_00944b88 + 0xc));
      FUN_0004a3a4(3,acStack_2018,0);
      if (DAT_000be63c < 4) {
        return;
      }
      memset(acStack_2018,0,0x2000);
      snprintf(acStack_2018,0x2000,"%-40s : %d\n","freq_step",*(int *)(*DAT_00944b88 + 0x10));
      FUN_0004a3a4(3,acStack_2018,0);
      goto LAB_0005c03c;
    }
  }
  if (DAT_000be63c < 4) {
    return;
  }
  memset(acStack_2018,0,0x2000);
  snprintf(acStack_2018,0x2000,"%-40s : %d\n","is_board_init_with_power_off",
           *(int *)(*DAT_00944b88 + 0x18));
  FUN_0004a3a4(3,acStack_2018,0);
  if (DAT_000be63c < 4) {
    return;
  }
  memset(acStack_2018,0,0x2000);
  snprintf(acStack_2018,0x2000,"%-40s : %.4f\n","hw_threshold",
           (double)*(float *)(*DAT_00944b88 + 0x1c));
  FUN_0004a3a4(3,acStack_2018,0);
LAB_0005c1c8:
  if (3 < DAT_000be63c) {
    memset(acStack_2018,0,0x2000);
    snprintf(acStack_2018,0x2000,"%-40s : %.2f\n","nonce_rate_threshold",
             (double)*(float *)(*DAT_00944b88 + 0x20));
    FUN_0004a3a4(3,acStack_2018,0);
    if (3 < DAT_000be63c) {
      memset(acStack_2018,0,0x2000);
      snprintf(acStack_2018,0x2000,"%-40s : %.2f\n","nonce_rate_dec_threshold",
               (double)*(float *)(*DAT_00944b88 + 0x24));
      FUN_0004a3a4(3,acStack_2018,0);
      return;
    }
  }
  return;
}

