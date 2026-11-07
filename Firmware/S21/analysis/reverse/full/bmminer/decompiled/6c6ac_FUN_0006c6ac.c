// FUN_0006c6ac @ 0006c6ac  size=152  callers=2
// program: bmminer


void FUN_0006c6ac(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint local_c;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00945178);
  for (local_c = 0; local_c < param_2 >> 2; local_c = local_c + 1) {
    if (local_c == 0) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = 0x11;
    }
    FUN_000612bc(uVar1,*(undefined4 *)(param_1 + local_c * 4));
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00945178);
  return;
}

