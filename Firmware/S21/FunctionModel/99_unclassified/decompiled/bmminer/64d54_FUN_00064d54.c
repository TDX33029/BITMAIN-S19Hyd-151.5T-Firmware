// FUN_00064d54 @ 00064d54  size=136  callers=0
// program: bmminer


undefined4 FUN_00064d54(uint param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(&DAT_00944eb8 + param_1 * 0x18));
  uVar1 = FUN_00063540(param_1 & 0xff);
  pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944eb8 + param_1 * 0x18));
  return uVar1;
}

