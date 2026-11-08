// FUN_00061594 @ 00061594  size=296  callers=1
// program: bmminer


undefined4 FUN_00061594(void)

{
  char local_830 [2048];
  pthread_attr_t pStack_30;
  undefined4 local_c;
  
  if (DAT_00944cd0 == 0) {
    pthread_mutex_init((pthread_mutex_t *)&DAT_00944cf4,(pthread_mutexattr_t *)0x0);
    DAT_00944d0c = FUN_00068280(&LAB_0006137c,0,0);
    pthread_mutex_init((pthread_mutex_t *)&DAT_00944cdc,(pthread_mutexattr_t *)0x0);
    DAT_00944cd4 = 1;
    pthread_attr_init(&pStack_30);
    local_c = 0x200000;
    pthread_attr_setstacksize(&pStack_30,0x200000);
    pthread_create(&DAT_00944cd8,&pStack_30,FUN_000613b4,(void *)0x0);
    DAT_00944cd0 = 1;
  }
  else {
    builtin_strncpy(local_830,"gpio re init\n",0xe);
    FUN_0004948c(1,local_830,0);
  }
  return 0;
}

