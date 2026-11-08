// FUN_0006c638 @ 0006c638  size=116  callers=1
// program: bmminer


void FUN_0006c638(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00945190);
  FUN_0006c398(param_1);
  uVar1 = FUN_0006c428();
  FUN_0006c454(param_2 << 0x10 | uVar1 & 0xfff0ffff | 0x80800000);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00945190);
  return;
}

