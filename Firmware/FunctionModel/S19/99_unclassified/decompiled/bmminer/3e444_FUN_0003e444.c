// FUN_0003e444 @ 0003e444  size=204  callers=0
// program: bmminer


void FUN_0003e444(undefined4 param_1)

{
  char local_810 [2052];
  
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_810,"Handle is NULL.\n",0x11);
      FUN_00032218(3,local_810,0);
      return;
    }
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0008a974);
    if (*(int *)(DAT_0050748c + 0x40) == 0) {
      FUN_0003e3cc(param_1);
    }
    else {
      (**(code **)(*(int *)(DAT_0050748c + 4) + 0x18))(param_1);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a974);
  }
  return;
}

