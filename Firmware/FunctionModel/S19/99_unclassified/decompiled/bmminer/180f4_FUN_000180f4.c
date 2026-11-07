// FUN_000180f4 @ 000180f4  size=116  callers=1
// program: bmminer


int FUN_000180f4(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00088828);
  if (param_2 == 0) {
    iVar1 = FUN_000200d8();
  }
  else {
    iVar1 = FUN_00017028();
  }
  if ((param_1 < 4) && (param_3 < iVar1)) {
    iVar1 = (int)*(short *)(*(int *)(*(int *)(DAT_00088840 + param_1 * 4) + param_2 * 4) +
                            param_3 * 6 + 4);
  }
  else {
    iVar1 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00088828);
  return iVar1;
}

