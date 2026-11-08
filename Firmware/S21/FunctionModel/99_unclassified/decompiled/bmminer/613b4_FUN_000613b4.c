// FUN_000613b4 @ 000613b4  size=452  callers=0
// program: bmminer


undefined4 FUN_000613b4(void)

{
  int iVar1;
  undefined4 local_2c;
  uint local_28;
  byte local_21;
  undefined4 local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  
  local_10 = 0;
  prctl(0xf,&DAT_000a75cc,0,0,0);
  do {
    if (DAT_00944cd4 == 0) {
      return 0;
    }
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00944cf4);
    if (iVar1 == 0) {
      local_14 = (undefined4 *)FUN_00068714(DAT_00944d0c);
      local_c = (*(code *)*local_14)(local_14);
      while (local_c != 0) {
        local_18 = local_14[5];
        local_1c = (undefined4 *)(*(code *)local_14[2])(local_c);
        local_20 = *(undefined4 *)**(undefined4 **)(local_18 + 0x10);
        local_21 = 0;
        local_10 = FUN_000621a4(local_20,&local_21);
        if (local_10 != 0) {
          free(local_1c);
          break;
        }
        if (local_1c[1] != (uint)local_21) {
          (*(code *)*local_1c)(local_20,local_21);
          local_2c = *local_1c;
          local_28 = (uint)local_21;
          (*(code *)local_14[1])(local_14,&local_2c,8);
        }
        free(local_1c);
        local_c = (*(code *)*local_14)(local_14);
      }
      FUN_00068798(local_14);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cf4);
    }
    usleep(200000);
  } while( true );
}

