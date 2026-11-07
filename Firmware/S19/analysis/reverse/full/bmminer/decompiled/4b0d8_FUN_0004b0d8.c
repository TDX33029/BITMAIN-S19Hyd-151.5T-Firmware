// FUN_0004b0d8 @ 0004b0d8  size=84  callers=0
// program: bmminer


void FUN_0004b0d8(int param_1,int param_2)

{
  uint uVar1;
  uint local_14 [2];
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa6c);
  FUN_00045bc4(0x1b,local_14);
  uVar1 = local_14[0] & 0xfff0ffff | param_1 << 0x10;
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xffbfffff | 0x800000;
  }
  else {
    uVar1 = uVar1 | 0xc00000;
  }
  FUN_00049eb0(uVar1);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa6c);
  return;
}

