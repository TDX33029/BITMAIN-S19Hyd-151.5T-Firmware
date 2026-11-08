// FUN_00044b08 @ 00044b08  size=56  callers=1
// program: bmminer


undefined4 FUN_00044b08(void)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9440);
  uVar1 = FUN_0004d18c(DAT_000c945c,DAT_000c9458);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9440);
  return uVar1;
}

