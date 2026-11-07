// FUN_00027854 @ 00027854  size=284  callers=1
// program: bmminer


void FUN_00027854(void)

{
  int param3;
  pthread_t pStack_830;
  pthread_attr_t pStack_82c;
  char local_808 [2048];
  
  if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
    builtin_strncpy(local_808,"start the http log.\n",0x15);
    FUN_00032218(5,local_808,0);
  }
  pthread_attr_init(&pStack_82c);
  pthread_attr_setstacksize(&pStack_82c,0x200000);
  param3 = pthread_create(&pStack_830,&pStack_82c,FUN_000274d4,(void *)0x0);
  if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 5)) {
    return;
  }
  snprintf(local_808,0x800,"httpListenThread start ret=%d",param3);
  FUN_00032218(5,local_808,0);
  return;
}

