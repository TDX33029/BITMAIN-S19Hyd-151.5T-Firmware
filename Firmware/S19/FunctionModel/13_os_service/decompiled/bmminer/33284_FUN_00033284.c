// FUN_00033284 @ 00033284  size=288  callers=1
// program: bmminer


void FUN_00033284(void)

{
  tm *__tp;
  int iVar1;
  time_t tStack_818;
  pthread_t local_814;
  char local_810 [2048];
  
  if (DAT_0048d332 != '\0') {
    return;
  }
  time(&tStack_818);
  __tp = localtime(&tStack_818);
  strftime(&DAT_0048d332,0xf,"%Y-%m/%d",__tp);
  strftime(&DAT_0048d350,10,"%H-%M-%S",__tp);
  DAT_0048d30c = "/var/log";
  DAT_0048d310 = "nvdata";
  DAT_0048d364 = "cglog_init";
  DAT_0048d308 = 1;
  FUN_000327b4(&DAT_0048d308);
  iVar1 = pthread_create(&local_814,(pthread_attr_t *)0x0,FUN_00032998,&DAT_0048d308);
  if (iVar1 != 0) {
    builtin_strncpy(local_810,"Failed to create log thread",0x1c);
    FUN_00032218(0,local_810,0);
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","logging.c",0x1d3,"log_init");
  }
  pthread_detach(local_814);
  return;
}

