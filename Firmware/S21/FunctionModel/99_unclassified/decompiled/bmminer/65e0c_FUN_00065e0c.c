// FUN_00065e0c @ 00065e0c  size=328  callers=0
// program: bmminer


undefined4 FUN_00065e0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_80c [2048];
  int local_c;
  
  local_c = 0;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00945038);
  if (iVar1 == 0) {
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
      if (param_1 == *(int *)(&DAT_00945060 + local_c * 4)) {
        *(undefined4 *)(&DAT_00945060 + local_c * 4) = 0;
        break;
      }
    }
    if (4 < local_c) {
      builtin_strncpy(local_80c,"listener not registered before\n",0x20);
      FUN_0004948c(1,local_80c,0);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00945038);
    uVar2 = 0;
  }
  else {
    builtin_strncpy(local_80c,"failed to api lock\n",0x14);
    FUN_0004948c(0,local_80c,0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

