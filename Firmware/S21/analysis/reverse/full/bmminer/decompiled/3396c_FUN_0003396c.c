// FUN_0003396c @ 0003396c  size=976  callers=1
// program: bmminer


undefined4 FUN_0003396c(int param_1)

{
  char *__format;
  char acStack_2008 [8196];
  
  if ((*(int *)(param_1 + 0x30) == 0) || (**(uint **)(param_1 + 0x34) < 0x65)) {
    if ((*(int *)(param_1 + 0x38) == 0) || (**(uint **)(param_1 + 0x3c) < 0x3e9)) {
      if ((*(int *)(param_1 + 0x40) == 0) || (**(uint **)(param_1 + 0x44) < 0xbb9)) {
        if ((*(int *)(param_1 + 0x48) == 0) || (**(uint **)(param_1 + 0x4c) < 0xb)) {
          if ((*(int *)(param_1 + 0x50) == 0) || (**(uint **)(param_1 + 0x54) < 0xb)) {
            if ((*(int *)(param_1 + 0x58) == 0) || (**(uint **)(param_1 + 0x5c) < 0xb)) {
              if ((*(int *)(param_1 + 0x68) == 0) || (**(uint **)(param_1 + 0x6c) < 0x65)) {
                if (*(int *)(param_1 + 0x70) == 0) {
                  return 0;
                }
                if (**(uint **)(param_1 + 0x74) < 0x65) {
                  return 0;
                }
              }
              if ((DAT_008c702e != '\0') &&
                 (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
                __format = "invaild freq_level[%d]";
                goto LAB_00033a70;
              }
            }
            else if ((DAT_008c702e != '\0') &&
                    (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
              __format = "invaild work_mode[%d]";
LAB_00033a70:
              snprintf(acStack_2008,0x2000,__format);
              FUN_0004948c(7,acStack_2008,0);
              return 0xffffffff;
            }
          }
          else if ((DAT_008c702e != '\0') &&
                  (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
            __format = "invaild bitmain_pwth[%d]";
            goto LAB_00033a70;
          }
        }
        else if ((DAT_008c702e != '\0') &&
                (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
          __format = "invaild bitmain_ccdelay[%d]";
          goto LAB_00033a70;
        }
      }
      else if ((DAT_008c702e != '\0') &&
              (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
        __format = "invaild bitmain_voltage[%d]";
        goto LAB_00033a70;
      }
    }
    else if ((DAT_008c702e != '\0') &&
            (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
      __format = "invaild bitmain_freq[%d]";
      goto LAB_00033a70;
    }
  }
  else if ((DAT_008c702e != '\0') &&
          (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
    __format = "invaild bitmain_fan_pwm[%d]";
    goto LAB_00033a70;
  }
  return 0xffffffff;
}

