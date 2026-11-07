// FUN_00017628 @ 00017628  size=300  callers=16
// program: bmminer


int FUN_00017628(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  char acStack_2018 [8196];
  
  if (param_2 == 0) {
    iVar2 = FUN_0002a5bc();
joined_r0x0001773c:
    if (iVar2 <= param_3) goto LAB_00017660;
  }
  else {
    if (7 < param_3 && param_2 == 4) goto LAB_00017660;
    if (param_2 == 3) {
      iVar2 = FUN_0002adc0();
      goto joined_r0x0001773c;
    }
  }
  if (DAT_000bfab8 != 0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_000bfabc);
    sVar1 = *(short *)(*(int *)(*(int *)(DAT_000bfab8 + param_1 * 4) + param_2 * 4) + param_3 * 6 +
                      2);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_000bfabc);
    return (int)sVar1;
  }
LAB_00017660:
  if (DAT_000be63c < 4) {
    return 0xff;
  }
  iVar2 = FUN_0002a5bc();
  snprintf(acStack_2018,0x2000,
           "get_sensor_temp_by_index invalid return 255!!, location:%d, index:%d, %d, %d",param_2,
           param_3,iVar2,DAT_000bfab8);
  FUN_0004948c(3,acStack_2018,0);
  return 0xff;
}

