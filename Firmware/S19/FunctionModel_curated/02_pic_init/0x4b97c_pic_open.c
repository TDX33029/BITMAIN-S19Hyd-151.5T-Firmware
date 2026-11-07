// FUN_0004b97c @ 0004b97c  size=160
// callers: [FUN_0004c050, FUN_0004ce44, FUN_0004bad0, FUN_0004c224, FUN_0004ca78, FUN_0004be78, FUN_0004d104, FUN_0004c3f0, FUN_0004bcd4, FUN_0004da28]

int FUN_0004b97c(uint param_1)

{
  int iVar1;
  uint local_18;
  undefined2 local_14;
  undefined1 local_12;
  undefined1 local_11;
  
  if (param_1 < 0x10) {
    iVar1 = *(int *)(&DAT_00b2d298 + param_1 * 8);
    if ((iVar1 == 0) || (*(int *)(&DAT_00b2d29c + param_1 * 8) == 0)) {
      local_14 = 0;
      local_12 = 4;
      local_11 = (undefined1)param_1;
      local_18 = param_1;
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa9c);
      iVar1 = FUN_00050a64(&local_18);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa9c);
      if (-1 < iVar1) {
        *(int *)(&DAT_00b2d298 + param_1 * 8) = iVar1;
        *(undefined4 *)(&DAT_00b2d29c + param_1 * 8) = 1;
      }
    }
  }
  else {
    iVar1 = FUN_0004b7d8();
  }
  return iVar1;
}


