// FUN_0004dad8 @ 0004dad8  size=224  callers=0
// program: bmminer


void FUN_0004dad8(void)

{
  char local_2010 [8192];
  
  if (3 < DAT_000be63c) {
    builtin_strncpy(local_2010,"start_stable_test *****",0x18);
    FUN_0004948c(3,local_2010,0);
  }
  FUN_000170ac(100);
  sleep(10);
  FUN_0004d27c(&DAT_008c7030,&DAT_000be89c);
  if (3 < DAT_000be63c) {
    snprintf(local_2010,0x2000,"last status index:%d,item:%d",DAT_008c7030,DAT_000be89c);
    FUN_0004948c(3,local_2010,0);
  }
  pthread_create((pthread_t *)&DAT_00a6c84c,(pthread_attr_t *)0x0,FUN_0004d884,(void *)0x0);
  return;
}

