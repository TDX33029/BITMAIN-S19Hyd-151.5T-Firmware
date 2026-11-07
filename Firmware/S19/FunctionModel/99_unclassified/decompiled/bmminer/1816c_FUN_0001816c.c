// FUN_0001816c @ 0001816c  size=200  callers=0
// program: bmminer


int FUN_0001816c(int param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_000201d8();
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = param_3 >> 0x1f;
  }
  if (uVar3 == 0) {
    if (param_2 == 1) {
      iVar2 = FUN_00017028();
    }
    else {
      if (param_2 == 2) {
        iVar2 = FUN_00017028();
        if (iVar2 <= (int)param_3) {
          return 0xff;
        }
        iVar2 = FUN_000200ac();
        if (iVar2 == 0) {
          return 0xff;
        }
        iVar2 = thunk_FUN_00036ad8();
        if (iVar2 == 0) {
          return 0xff;
        }
        goto LAB_000181b8;
      }
      if (param_2 != 0) goto LAB_000181b8;
      iVar2 = FUN_000200d8();
    }
    if ((int)param_3 < iVar2) {
LAB_000181b8:
      pthread_mutex_lock((pthread_mutex_t *)&DAT_00088828);
      sVar1 = *(short *)(*(int *)(*(int *)(DAT_00088840 + param_1 * 4) + param_2 * 4) + param_3 * 6
                        + 2);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00088828);
      return (int)sVar1;
    }
  }
  return 0xff;
}

