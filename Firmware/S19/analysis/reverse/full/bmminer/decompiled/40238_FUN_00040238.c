// FUN_00040238 @ 00040238  size=892  callers=0
// program: bmminer


void FUN_00040238(void)

{
  char *param4;
  char *param4_00;
  char acStack_818 [2052];
  
  if (DAT_00087bbc < 4) {
    return;
  }
  snprintf(acStack_818,0x800,"%-40s : %d\n","voltage",*(int *)*DAT_00507490);
  FUN_00032eb0(3,acStack_818,0);
  if (DAT_00087bbc < 4) {
LAB_000403c8:
    if (DAT_00087bbc < 4) goto LAB_00040514;
    param4 = "false";
    if (*(char *)(*DAT_00507490 + 0x14) == '\0') {
      param4_00 = "false";
    }
    else {
      param4_00 = "true";
    }
    snprintf(acStack_818,0x800,"%-40s : %s\n","is_inc_freq_with_high_vol",param4_00);
    FUN_00032eb0(3,acStack_818,0);
    if (DAT_00087bbc < 4) {
      return;
    }
    if (*(char *)(*DAT_00507490 + 0x15) != '\0') {
      param4 = "true";
    }
    snprintf(acStack_818,0x800,"%-40s : %s\n","is_inc_freq_with_high_vol_runtime",param4);
    FUN_00032eb0(3,acStack_818,0);
  }
  else {
    snprintf(acStack_818,0x800,"%-40s : %d\n","freq_base",*(int *)(*DAT_00507490 + 4));
    FUN_00032eb0(3,acStack_818,0);
    if (DAT_00087bbc < 4) {
      return;
    }
    snprintf(acStack_818,0x800,"%-40s : %d\n","freq_threshold",*(int *)(*DAT_00507490 + 8));
    FUN_00032eb0(3,acStack_818,0);
    if (3 < DAT_00087bbc) {
      snprintf(acStack_818,0x800,"%-40s : %d\n","freq_serial_threshold",
               *(int *)(*DAT_00507490 + 0xc));
      FUN_00032eb0(3,acStack_818,0);
      if (DAT_00087bbc < 4) {
        return;
      }
      snprintf(acStack_818,0x800,"%-40s : %d\n","freq_step",*(int *)(*DAT_00507490 + 0x10));
      FUN_00032eb0(3,acStack_818,0);
      goto LAB_000403c8;
    }
  }
  if (DAT_00087bbc < 4) {
    return;
  }
  snprintf(acStack_818,0x800,"%-40s : %d\n","is_board_init_with_power_off",
           *(int *)(*DAT_00507490 + 0x18));
  FUN_00032eb0(3,acStack_818,0);
  if (DAT_00087bbc < 4) {
    return;
  }
  snprintf(acStack_818,0x800,"%-40s : %.4f\n","hw_threshold",
           (double)*(float *)(*DAT_00507490 + 0x1c));
  FUN_00032eb0(3,acStack_818,0);
LAB_00040514:
  if (3 < DAT_00087bbc) {
    snprintf(acStack_818,0x800,"%-40s : %.2f\n","nonce_rate_threshold",
             (double)*(float *)(*DAT_00507490 + 0x20));
    FUN_00032eb0(3,acStack_818,0);
    if (3 < DAT_00087bbc) {
      snprintf(acStack_818,0x800,"%-40s : %.2f\n","nonce_rate_dec_threshold",
               (double)*(float *)(*DAT_00507490 + 0x24));
      FUN_00032eb0(3,acStack_818,0);
      return;
    }
  }
  return;
}

