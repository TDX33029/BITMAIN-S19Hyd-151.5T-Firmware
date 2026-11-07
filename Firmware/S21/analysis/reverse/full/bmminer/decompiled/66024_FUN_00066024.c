// FUN_00066024 @ 00066024  size=208  callers=0
// program: bmminer


uint FUN_00066024(void)

{
  int iVar1;
  undefined4 uVar2;
  char local_810 [2051];
  char local_d;
  uint local_c;
  
  local_c = 1;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00945038);
  if (iVar1 == 0) {
    uVar2 = FUN_00067d64();
    FUN_000621a4(uVar2,&local_d);
    local_c = (uint)(local_d != '\0');
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00945038);
  }
  else {
    builtin_strncpy(local_810,"failed to api lock\n",0x14);
    FUN_0004948c(0,local_810,0);
    local_c = 0xffffffff;
  }
  return local_c;
}

