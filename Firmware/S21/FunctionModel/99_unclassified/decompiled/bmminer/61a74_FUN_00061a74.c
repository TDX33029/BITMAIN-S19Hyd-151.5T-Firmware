// FUN_00061a74 @ 00061a74  size=216  callers=2
// program: bmminer


undefined4 FUN_00061a74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_848 [2048];
  char acStack_48 [64];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00944cdc);
  if (iVar1 == 0) {
    snprintf(acStack_48,0x40,"/sys/class/gpio/gpio%d",param_1);
    iVar1 = access(acStack_48,0);
    if (iVar1 == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cdc);
      uVar2 = 1;
    }
    else {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cdc);
      uVar2 = 0;
    }
  }
  else {
    builtin_strncpy(local_848,"failed to api lock\n",0x14);
    FUN_0004948c(0,local_848,0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

