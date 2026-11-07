// FUN_00040744 @ 00040744  size=276
// callers: [FUN_00055518]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00040744(void)

{
  int iVar1;
  pthread_attr_t pStack_2034;
  char local_2010 [4];
  char acStack_200c [4];
  char acStack_2008 [4];
  char acStack_2004 [4];
  char acStack_2000 [4];
  undefined2 local_1ffc;
  
  if (DAT_000c8b4c == (void *)0x0) {
    pthread_attr_init(&pStack_2034);
    pthread_attr_setstacksize(&pStack_2034,0x800000);
    DAT_000c8b4c = calloc(1,0x40);
    iVar1 = FUN_0004c5a0(DAT_000c8b4c,&pStack_2034,FUN_0003dc38,DAT_000c8b4c);
    if (iVar1 != 0) {
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      local_2010[0] = s_create_thread_failed_000a06a0[0];
      local_2010[1] = s_create_thread_failed_000a06a0[1];
      local_2010[2] = s_create_thread_failed_000a06a0[2];
      local_2010[3] = s_create_thread_failed_000a06a0[3];
      acStack_200c[0] = s_create_thread_failed_000a06a0[4];
      acStack_200c[1] = s_create_thread_failed_000a06a0[5];
      acStack_200c[2] = s_create_thread_failed_000a06a0[6];
      acStack_200c[3] = s_create_thread_failed_000a06a0[7];
      acStack_2008[0] = s_create_thread_failed_000a06a0[8];
      acStack_2008[1] = s_create_thread_failed_000a06a0[9];
      acStack_2008[2] = s_create_thread_failed_000a06a0[10];
      acStack_2008[3] = s_create_thread_failed_000a06a0[0xb];
      acStack_2004[0] = s_create_thread_failed_000a06a0[0xc];
      acStack_2004[1] = s_create_thread_failed_000a06a0[0xd];
      acStack_2004[2] = s_create_thread_failed_000a06a0[0xe];
      acStack_2004[3] = s_create_thread_failed_000a06a0[0xf];
      acStack_2000[0] = s_create_thread_failed_000a06a0[0x10];
      acStack_2000[1] = s_create_thread_failed_000a06a0[0x11];
      acStack_2000[2] = s_create_thread_failed_000a06a0[0x12];
      acStack_2000[3] = s_create_thread_failed_000a06a0[0x13];
      local_1ffc = (undefined2)ram0x000a06b4;
      FUN_0004948c(3,local_2010,0);
      return 0xffffffff;
    }
    pthread_detach(*(pthread_t *)((int)DAT_000c8b4c + 0xc));
    if (3 < DAT_000be63c) {
      snprintf(local_2010,0x2000,"create thread %s\n","get_nonce_and_register_thread");
      FUN_0004948c(3,local_2010,0);
      return 0;
    }
  }
  return 0;
}


