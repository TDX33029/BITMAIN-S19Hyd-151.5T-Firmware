// FUN_000186d0 @ 000186d0  size=236  callers=11
// program: bmminer


int FUN_000186d0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  char *__s1;
  int iVar3;
  
  __s1 = (char *)FUN_0001fffc();
  iVar3 = strcmp(__s1,"BHB28601");
  if ((iVar3 == 0) == 0) {
    iVar2 = FUN_000200d8();
    if (iVar2 <= param_2) {
      return 0xff;
    }
  }
  else {
    iVar2 = FUN_000200ac();
    if (iVar2 == 0) {
      return 0xff;
    }
    iVar2 = thunk_FUN_00036ad8();
    if (iVar2 == 0) {
      return 0xff;
    }
    iVar2 = FUN_00017028();
    if (iVar2 <= param_2) {
      return 0xff;
    }
    if (DAT_00089048 == 0) {
      return 0xff;
    }
  }
  if (DAT_00088840 == 0) {
    return 0xff;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00088828);
  sVar1 = *(short *)(*(int *)(*(int *)(DAT_00088840 + param_1 * 4) + (uint)(iVar3 == 0) * 4) +
                     param_2 * 6 + 2);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00088828);
  return (int)sVar1;
}

