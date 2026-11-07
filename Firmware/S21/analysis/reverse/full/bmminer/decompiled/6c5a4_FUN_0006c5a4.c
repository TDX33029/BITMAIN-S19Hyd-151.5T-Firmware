// FUN_0006c5a4 @ 0006c5a4  size=148  callers=0
// program: bmminer


void FUN_0006c5a4(int param_1,char param_2)

{
  uint uVar1;
  uint local_c;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00945190);
  uVar1 = FUN_0006c428();
  local_c = param_1 << 0x10 | uVar1 & 0xfff0ffff;
  if (param_2 == '\0') {
    local_c = local_c & 0xffbfffff | 0x800000;
  }
  else {
    local_c = local_c | 0xc00000;
  }
  FUN_0006c454(local_c);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00945190);
  return;
}

