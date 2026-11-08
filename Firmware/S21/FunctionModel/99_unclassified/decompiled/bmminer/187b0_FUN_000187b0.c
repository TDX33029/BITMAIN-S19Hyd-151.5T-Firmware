// FUN_000187b0 @ 000187b0  size=160  callers=2
// program: bmminer


int FUN_000187b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_000bfabc);
  if (DAT_000bfb48 == 3) {
    if (param_2 != 3) goto LAB_00018808;
LAB_00018840:
    iVar1 = FUN_0002a5bc();
LAB_0001880c:
    if ((param_1 < 4) && (param_3 < iVar1)) {
      iVar1 = (int)*(short *)(*(int *)(*(int *)(DAT_000bfab8 + param_1 * 4) + param_2 * 4) +
                              param_3 * 6 + 4);
      goto LAB_000187f0;
    }
  }
  else {
    if (DAT_000bfb48 == 0) {
      if (param_2 == 0) goto LAB_00018840;
LAB_00018808:
      iVar1 = FUN_00017ec4();
      goto LAB_0001880c;
    }
    if (DAT_000bfb48 == 4) {
      iVar1 = 8;
      goto LAB_0001880c;
    }
  }
  iVar1 = 0;
LAB_000187f0:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_000bfabc);
  return iVar1;
}

