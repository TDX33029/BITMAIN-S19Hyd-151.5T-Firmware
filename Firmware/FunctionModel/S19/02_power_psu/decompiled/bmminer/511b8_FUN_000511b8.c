// FUN_000511b8 @ 000511b8  size=496  callers=1
// program: bmminer


int FUN_000511b8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_824 [2];
  int *local_81c;
  char local_818 [2048];
  
  local_824[0] = param_1;
  local_81c = (int *)pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc64);
  if (local_81c == (int *)0x0) {
    iVar1 = FUN_00048c84(DAT_0050fc60,local_824,&local_81c);
    if (iVar1 == 1) {
      iVar1 = *local_81c;
      uVar4 = local_81c[1];
      if (param_3 != 0) {
        iVar2 = param_2;
        do {
          iVar3 = FUN_00050ee8();
          if (iVar3 == 0) {
            free(local_81c);
            builtin_strncpy(local_818,"iic not ready 4 read1\n",0x17);
            FUN_00032218(0,local_818,0);
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
            return -2;
          }
          FUN_00045c40(0xc,iVar1 << 0x1a | 0x2080000U | (uVar4 >> 4) << 0x14 | (uVar4 & 0xe) << 0xf)
          ;
          iVar3 = iVar2 + 1;
          iVar2 = FUN_00050f44(iVar2);
          if (iVar2 == 0) {
            free(local_81c);
            builtin_strncpy(local_818,"iic not ready 4 read2\n",0x17);
            FUN_00032218(0,local_818,0);
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
            return -3;
          }
          iVar2 = iVar3;
        } while (iVar3 != param_2 + param_3);
      }
      free(local_81c);
      usleep(10000);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
      return param_3;
    }
    snprintf(local_818,0x800,"ctx %d not inited\n",local_824[0]);
    FUN_00032218(0,local_818,0);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
    iVar1 = -2;
  }
  else {
    builtin_strncpy(local_818,"failed to i2c lock\n",0x14);
    FUN_00032218(0,local_818);
    iVar1 = -1;
  }
  return iVar1;
}

