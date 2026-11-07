// FUN_00029b74 @ 00029b74  size=672  callers=1
// program: bmminer


void FUN_00029b74(int param_1)

{
  uint uVar1;
  char acStack_2018 [8196];
  
  if ((0x47e < *(int *)(param_1 + 0xb0) - 1000U) &&
     (*(undefined4 *)(param_1 + 0xb0) = 0x834, 3 < DAT_000be63c)) {
    snprintf(acStack_2018,0x2000,"set default open_core_high_voltage: %d\n",0x834);
    FUN_0004948c(3,acStack_2018,0);
  }
  if ((0x44c < *(int *)(param_1 + 0xb4) - 1000U) &&
     (*(undefined4 *)(param_1 + 0xb4) = 2000, 3 < DAT_000be63c)) {
    snprintf(acStack_2018,0x2000,"set default inc_freq_voltage: %d\n",2000);
    FUN_0004948c(3,acStack_2018,0);
  }
  uVar1 = DAT_000be63c;
  if (1.0 <= *(float *)(param_1 + 0xb8)) {
    if (*(float *)(param_1 + 0xb8) <= 100.0) goto LAB_00029c08;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0x40c80000;
  if (3 < uVar1) {
    snprintf(acStack_2018,0x2000,"set default inc_freq_step: %f\n",6.25);
    FUN_0004948c(3,acStack_2018,0);
  }
LAB_00029c08:
  if ((900 < *(int *)(param_1 + 0xbc) - 100U) &&
     (*(undefined4 *)(param_1 + 0xbc) = 200, 3 < DAT_000be63c)) {
    snprintf(acStack_2018,0x2000,"set default inc_freq_delay: %d\n",200);
    FUN_0004948c(3,acStack_2018,0);
  }
  if ((*(int *)(param_1 + 0xc0) < 0) && (*(undefined4 *)(param_1 + 0xc0) = 0, 3 < DAT_000be63c)) {
    snprintf(acStack_2018,0x2000,"set default poweron_with_reset_high: %d\n",0);
    FUN_0004948c(3,acStack_2018,0);
  }
  if ((0x4f < *(int *)(param_1 + 0xc4) - 1U) &&
     (*(undefined4 *)(param_1 + 0xc4) = 0x32, 3 < DAT_000be63c)) {
    snprintf(acStack_2018,0x2000,"set default pid_target_temp: %d\n",0x32);
    FUN_0004948c(3,acStack_2018,0);
  }
  if ((*(int *)(param_1 + 200) - 1U < 500) ||
     (*(undefined4 *)(param_1 + 200) = 10, DAT_000be63c < 4)) {
    return;
  }
  snprintf(acStack_2018,0x2000,"set default voltage_adjust_setp: %d\n",10);
  FUN_0004948c(3,acStack_2018,0);
  return;
}

