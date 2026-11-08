// FUN_0003c4b0 @ 0003c4b0  size=308  callers=1
// program: bmminer


void FUN_0003c4b0(void)

{
  int iVar1;
  char *param3;
  pthread_t pStack_2038;
  pthread_attr_t pStack_2034;
  char local_2010 [8196];
  
  if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
    builtin_strncpy(local_2010,"start the http server\n",0x17);
    FUN_0004948c(5,local_2010,0);
  }
  pthread_attr_init(&pStack_2034);
  iVar1 = pthread_create(&pStack_2038,&pStack_2034,(__start_routine *)&DAT_0003c0d4,(void *)0x0);
  if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 5)) {
    return;
  }
  param3 = "ok";
  if (iVar1 != 0) {
    param3 = "failed";
  }
  snprintf(local_2010,0x2000,"httpserver:6060 started %s",param3);
  FUN_0004948c(5,local_2010,0);
  return;
}

