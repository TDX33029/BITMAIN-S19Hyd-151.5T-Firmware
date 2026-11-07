// FUN_00047cb0 @ 00047cb0  size=136  callers=0
// program: bmminer


void FUN_00047cb0(void)

{
  pthread_attr_t pStack_34;
  
  pthread_mutex_init((pthread_mutex_t *)&DAT_0050f93c,(pthread_mutexattr_t *)0x0);
  DAT_0050f958 = 0;
  DAT_0050f95c = 0;
  DAT_0050f960 = 0;
  DAT_0050f964 = 0;
  DAT_0050f968 = 0;
  DAT_0050f954 = FUN_00048b84(&LAB_00047a20,0,0);
  pthread_attr_init(&pStack_34);
  pthread_attr_setstacksize(&pStack_34,0x200000);
  pthread_create((pthread_t *)&DAT_0050f96c,&pStack_34,FUN_00047a74,(void *)0x0);
  DAT_0050f938 = 1;
  return;
}

