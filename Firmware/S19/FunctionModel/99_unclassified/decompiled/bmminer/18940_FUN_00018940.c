// FUN_00018940 @ 00018940  size=88  callers=3
// program: bmminer


/* WARNING: Removing unreachable block (ram,0x000180a0) */
/* WARNING: Removing unreachable block (ram,0x000180ac) */

int FUN_00018940(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_000200ac();
  if ((iVar2 == 0) || (iVar2 = thunk_FUN_00036ad8(), iVar2 == 0)) {
    iVar2 = FUN_000186d0(param_1,param_2);
    if (iVar2 == 0xff) {
      return 0xff;
    }
    return (int)(short)((short)iVar2 + 0xf);
  }
  iVar2 = FUN_000200ac();
  if ((((iVar2 == 0) || (iVar2 = thunk_FUN_00036ad8(), iVar2 == 0)) ||
      (iVar2 = FUN_00017028(), iVar2 <= param_2)) || ((DAT_00089048 == 0 || (DAT_00088840 == 0)))) {
    return 0xff;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00088828);
  sVar1 = *(short *)(*(int *)(*(int *)(DAT_00088840 + param_1 * 4) + 8) + param_2 * 6 + 2);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00088828);
  return (int)sVar1;
}

