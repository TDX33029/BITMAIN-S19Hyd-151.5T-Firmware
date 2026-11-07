// FUN_0004b130 @ 0004b130  size=152  callers=1
// program: bmminer


void FUN_0004b130(undefined4 *param_1,int param_2)

{
  uint local_14;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa6c);
  FUN_00045c40(0x1c,*param_1);
  FUN_00045c40(0x1d,param_1[1]);
  FUN_00045c40(0x1e,param_1[2]);
  FUN_00045bc4(0x1c,&local_14);
  FUN_00045bc4(0x1d,&local_14);
  FUN_00045bc4(0x1e,&local_14);
  FUN_00045bc4(0x1b,&local_14);
  FUN_00049eb0(local_14 & 0xfff0ffff | 0x80800000 | param_2 << 0x10);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa6c);
  return;
}

