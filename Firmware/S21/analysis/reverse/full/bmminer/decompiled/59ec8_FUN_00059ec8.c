// FUN_00059ec8 @ 00059ec8  size=204  callers=0
// program: bmminer


void FUN_00059ec8(undefined4 param_1)

{
  char local_2010 [8196];
  
  if ((DAT_00944b84 == 0) || (*(int *)(DAT_00944b84 + 4) == 0)) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2010,"Handle is NULL.\n",0x11);
      FUN_0004948c(3,local_2010,0);
      return;
    }
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9614);
    if (*(int *)(DAT_00944b84 + 0x40) == 0) {
      FUN_00059e50(param_1);
    }
    else {
      (**(code **)(*(int *)(DAT_00944b84 + 4) + 0x18))(param_1);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
  }
  return;
}

