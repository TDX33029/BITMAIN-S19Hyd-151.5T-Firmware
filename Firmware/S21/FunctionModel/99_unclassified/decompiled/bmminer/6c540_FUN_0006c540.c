// FUN_0006c540 @ 0006c540  size=100  callers=0
// program: bmminer


void FUN_0006c540(uint param_1)

{
  uint uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00945190);
  usleep(50000);
  uVar1 = FUN_0006c428();
  FUN_0006c454(uVar1 & 0xffffffc0 | param_1 & 0x3f);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00945190);
  return;
}

