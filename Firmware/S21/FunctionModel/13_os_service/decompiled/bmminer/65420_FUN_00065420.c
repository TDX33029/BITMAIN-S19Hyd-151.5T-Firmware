// FUN_00065420 @ 00065420  size=256  callers=3
// program: bmminer


undefined4 FUN_00065420(void)

{
  pthread_attr_t pStack_34;
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  if (DAT_00945058 == 0) {
    pthread_mutex_init((pthread_mutex_t *)&DAT_00945038,(pthread_mutexattr_t *)0x0);
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
      *(undefined4 *)(&DAT_00945060 + local_c * 4) = 0;
    }
    DAT_00945050 = FUN_00068280(&LAB_00065054,0,0);
    pthread_attr_init(&pStack_34);
    local_10 = 0x200000;
    pthread_attr_setstacksize(&pStack_34,0x200000);
    pthread_create(&DAT_0094505c,&pStack_34,FUN_00064e6c,(void *)0x0);
    DAT_00945058 = 1;
  }
  return 0;
}

