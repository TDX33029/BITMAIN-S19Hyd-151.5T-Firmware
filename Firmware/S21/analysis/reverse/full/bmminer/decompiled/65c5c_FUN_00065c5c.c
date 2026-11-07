// FUN_00065c5c @ 00065c5c  size=432  callers=0
// program: bmminer


undefined4 FUN_00065c5c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_810 [2048];
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00945038);
  if (iVar1 == 0) {
    if (DAT_00945074 == 0) {
      uVar2 = FUN_0006508c(0x100);
      FUN_00061760(uVar2,FUN_00065238);
      uVar2 = FUN_0006508c(0x101);
      FUN_00061760(uVar2,FUN_00065238);
      DAT_00945074 = 1;
    }
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
      if (*(int *)(&DAT_00945060 + local_c * 4) == 0) {
        *(undefined4 *)(&DAT_00945060 + local_c * 4) = param_1;
        break;
      }
    }
    if (4 < local_c) {
      local_10 = 0xfffffffe;
      builtin_strncpy(local_810,"no more listener available\n",0x1c);
      FUN_0004948c(0,local_810,0);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00945038);
  }
  else {
    builtin_strncpy(local_810,"failed to api lock\n",0x14);
    FUN_0004948c(0,local_810,0);
    local_10 = 0xffffffff;
  }
  return local_10;
}

