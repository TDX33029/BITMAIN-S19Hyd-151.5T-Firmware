// FUN_0006f4a8 @ 0006f4a8  size=468  callers=16
// program: bmminer


int FUN_0006f4a8(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  undefined1 local_12;
  undefined1 local_11;
  int local_10;
  byte local_a;
  byte local_9;
  
  local_9 = 0;
  local_a = 0;
  local_10 = 0;
  local_11 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_009451d8);
  if (DAT_00945390 != '\x01') {
    local_12 = 4;
    FUN_00062ad0(param_1,&local_11,1,&local_12,1,1);
    DAT_00945390 = '\x01';
  }
  for (local_a = 0; local_a < 3; local_a = local_a + 1) {
    for (local_9 = 0; local_9 < param_3; local_9 = local_9 + 1) {
      FUN_00062ad0(param_1,&local_11,1,param_2 + (uint)local_9,1,1);
    }
    usleep(400000);
    for (local_9 = 0; local_9 < param_5; local_9 = local_9 + 1) {
      FUN_00062a08(param_1,&local_11,1,param_4 + (uint)local_9,1,0);
    }
    usleep(100000);
    local_10 = FUN_0006f014(param_2,param_4,param_5);
    if (local_10 == 0) break;
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_009451d8);
  return local_10;
}

