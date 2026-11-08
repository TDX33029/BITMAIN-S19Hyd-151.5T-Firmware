// FUN_00067b3c @ 00067b3c  size=360  callers=1
// program: bmminer


undefined4 FUN_00067b3c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char local_820 [2048];
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_009450d8);
  if (iVar1 == 0) {
    local_10 = (undefined4 *)FUN_00068714(DAT_009450f0);
    local_c = (*(code *)*local_10)(local_10);
    while (local_c != 0) {
      local_14 = local_10[5];
      if (*(int *)**(undefined4 **)(local_14 + 0x10) == param_1) {
        local_18 = (void *)(*(code *)local_10[2])(local_c);
        local_1c = *(undefined4 *)((int)local_18 + 4);
        local_20 = param_2;
        (*(code *)local_10[1])(local_10,&local_20,8);
        free(local_18);
        break;
      }
      local_c = (*(code *)*local_10)(local_10);
    }
    FUN_00068798(local_10);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_009450d8);
    uVar2 = 0;
  }
  else {
    builtin_strncpy(local_820,"failed to i2c lock\n",0x14);
    FUN_0004948c(0,local_820,0,local_820,param_2);
    uVar2 = 0xfffffffc;
  }
  return uVar2;
}

