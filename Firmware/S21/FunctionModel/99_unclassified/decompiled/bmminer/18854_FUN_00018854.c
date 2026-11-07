// FUN_00018854 @ 00018854  size=184  callers=0
// program: bmminer


int FUN_00018854(int param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_0002a6f0();
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = param_3 >> 0x1f;
  }
  if (uVar3 == 0) {
    if (param_2 == 1) {
      iVar2 = FUN_00017ec4();
    }
    else {
      if (param_2 == 2) {
        iVar2 = FUN_00017ec4();
        if (iVar2 <= (int)param_3) {
          return 0xff;
        }
        iVar2 = FUN_0002a594();
        if (iVar2 == 0) {
          return 0xff;
        }
        goto LAB_000188a0;
      }
      if (param_2 != 0) goto LAB_000188a0;
      iVar2 = FUN_0002a5bc();
    }
    if ((int)param_3 < iVar2) {
LAB_000188a0:
      pthread_mutex_lock((pthread_mutex_t *)&DAT_000bfabc);
      sVar1 = *(short *)(*(int *)(*(int *)(DAT_000bfab8 + param_1 * 4) + param_2 * 4) + param_3 * 6
                        + 2);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_000bfabc);
      return (int)sVar1;
    }
  }
  return 0xff;
}

