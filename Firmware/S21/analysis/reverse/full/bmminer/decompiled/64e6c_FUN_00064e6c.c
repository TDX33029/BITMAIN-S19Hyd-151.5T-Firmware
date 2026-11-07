// FUN_00064e6c @ 00064e6c  size=488  callers=0
// program: bmminer


undefined4 FUN_00064e6c(void)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  
  prctl(0xf,&DAT_000a7c84,0,0,0);
  while (DAT_00945058 != 0) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00945038);
    if (iVar1 == 0) {
      local_10 = (undefined4 *)FUN_00068714(DAT_00945050);
      local_c = (*(code *)*local_10)(local_10);
      while (local_c != 0) {
        local_14 = (undefined4 *)(*(code *)local_10[2])(local_c);
        local_18 = local_10[5];
        if (local_14[1] == 0) {
          FUN_00062388(*(undefined4 *)**(undefined4 **)(local_18 + 0x10),local_14[2] & 0xff);
          local_14[2] = (uint)(local_14[2] != 1);
          local_14[1] = *local_14;
        }
        local_14[1] = local_14[1] + -200;
        local_14[1] = local_14[1];
        local_24 = *local_14;
        local_20 = local_14[1];
        local_1c = local_14[2];
        (*(code *)local_10[1])(local_10,&local_24,0xc);
        free(local_14);
        local_c = (*(code *)*local_10)(local_10);
      }
      FUN_00068798(local_10);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00945038);
    }
    usleep(200000);
  }
  return 0;
}

