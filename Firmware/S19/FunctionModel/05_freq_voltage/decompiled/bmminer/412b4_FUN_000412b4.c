// FUN_000412b4 @ 000412b4  size=1276  callers=1
// program: bmminer


void FUN_000412b4(void)

{
  int iVar1;
  int param3;
  char *param4;
  char *param4_00;
  char local_818 [2052];
  
  if (3 < DAT_00087bbc) {
    snprintf(local_818,0x800,"%-40s : %d\n","voltage",*(int *)*DAT_00507494);
    FUN_00032eb0(3,local_818,0);
    if (3 < DAT_00087bbc) {
      snprintf(local_818,0x800,"%-40s : ","freq_base");
      FUN_00032eb0(3,local_818,0);
    }
  }
  param3 = 0;
  do {
    iVar1 = FUN_000201d8(param3);
    if ((iVar1 != 0) && (3 < DAT_00087bbc)) {
      snprintf(local_818,0x800,"[%d] = %d ",param3,*(int *)(*DAT_00507494 + param3 * 4 + 4));
      FUN_00032eb0(3,local_818,0);
    }
    param3 = param3 + 1;
  } while (param3 != 4);
  if (DAT_00087bbc < 4) {
    return;
  }
  local_818[0] = '\n';
  local_818[1] = '\0';
  FUN_00032eb0(3,local_818,0);
  if (DAT_00087bbc < 4) {
LAB_00041524:
    if (DAT_00087bbc < 4) goto LAB_00041678;
    param4 = "false";
    if (*(char *)(*DAT_00507494 + 0x24) == '\0') {
      param4_00 = "false";
    }
    else {
      param4_00 = "true";
    }
    snprintf(local_818,0x800,"%-40s : %s\n","is_inc_freq_with_high_vol",param4_00);
    FUN_00032eb0(3,local_818,0);
    if (DAT_00087bbc < 4) {
      return;
    }
    if (*(char *)(*DAT_00507494 + 0x25) != '\0') {
      param4 = "true";
    }
    snprintf(local_818,0x800,"%-40s : %s\n","is_inc_freq_with_high_vol_runtime",param4);
    FUN_00032eb0(3,local_818,0);
  }
  else {
    snprintf(local_818,0x800,"%-40s : %d\n","freq_threshold",*(int *)(*DAT_00507494 + 0x14));
    FUN_00032eb0(3,local_818,0);
    if (DAT_00087bbc < 4) {
      return;
    }
    snprintf(local_818,0x800,"%-40s : %d\n","freq_serial_threshold",*(int *)(*DAT_00507494 + 0x18));
    FUN_00032eb0(3,local_818,0);
    if (3 < DAT_00087bbc) {
      snprintf(local_818,0x800,"%-40s : %d\n","freq_diff_threshold",*(int *)(*DAT_00507494 + 0x1c));
      FUN_00032eb0(3,local_818,0);
      if (DAT_00087bbc < 4) {
        return;
      }
      snprintf(local_818,0x800,"%-40s : %d\n","freq_step",*(int *)(*DAT_00507494 + 0x20));
      FUN_00032eb0(3,local_818,0);
      goto LAB_00041524;
    }
  }
  if (DAT_00087bbc < 4) {
    return;
  }
  snprintf(local_818,0x800,"%-40s : %d\n","is_board_init_with_power_off",
           *(int *)(*DAT_00507494 + 0x28));
  FUN_00032eb0(3,local_818,0);
  if (DAT_00087bbc < 4) {
    return;
  }
  snprintf(local_818,0x800,"%-40s : %.4f\n","hw_threshold",(double)*(float *)(*DAT_00507494 + 0x2c))
  ;
  FUN_00032eb0(3,local_818,0);
LAB_00041678:
  if (3 < DAT_00087bbc) {
    snprintf(local_818,0x800,"%-40s : %.2f\n","nonce_rate_threshold",
             (double)*(float *)(*DAT_00507494 + 0x30));
    FUN_00032eb0(3,local_818,0);
    if (3 < DAT_00087bbc) {
      snprintf(local_818,0x800,"%-40s : %.2f\n","nonce_rate_dec_threshold",
               (double)*(float *)(*DAT_00507494 + 0x34));
      FUN_00032eb0(3,local_818,0);
      if (3 < DAT_00087bbc) {
        snprintf(local_818,0x800,"%-40s : %d\n","freq_tuning_fine_step",
                 *(int *)(*DAT_00507494 + 0x38));
        FUN_00032eb0(3,local_818,0);
        if (3 < DAT_00087bbc) {
          snprintf(local_818,0x800,"%-40s : %d\n","freq_tuning_fine_count",
                   *(int *)(*DAT_00507494 + 0x3c));
          FUN_00032eb0(3,local_818,0);
          return;
        }
      }
    }
  }
  return;
}

