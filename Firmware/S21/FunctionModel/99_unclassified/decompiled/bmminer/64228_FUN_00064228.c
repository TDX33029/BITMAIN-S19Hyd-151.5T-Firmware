// FUN_00064228 @ 00064228  size=316  callers=0
// program: bmminer


undefined4 FUN_00064228(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint local_c;
  
  pthread_mutex_lock((pthread_mutex_t *)(&DAT_00944eb8 + param_1 * 0x18));
  local_c = FUN_00063540(param_1 & 0xff);
  if (param_3 < local_c) {
    local_c = param_3;
  }
  if (local_c == 0) {
    pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944eb8 + param_1 * 0x18));
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_000983e0(local_c,1,local_c,1,param_4);
    uVar1 = FUN_000637a4(param_1,param_2,uVar1);
    FUN_000983e0(local_c,1);
    pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944eb8 + param_1 * 0x18));
  }
  return uVar1;
}

