// FUN_0004a778 @ 0004a778  size=268  callers=0
// program: bmminer


void FUN_0004a778(void)

{
  tm *__tp;
  int iVar1;
  time_t tStack_2014;
  char local_2010 [8192];
  
  if (DAT_008c6fee == '\0') {
    time(&tStack_2014);
    __tp = localtime(&tStack_2014);
    strftime(&DAT_008c6fee,0xf,"%Y-%m/%d",__tp);
    strftime(&DAT_008c700c,10,"%H-%M-%S",__tp);
    DAT_008c6fc8 = "/var/log";
    DAT_008c6fcc = "nvdata";
    DAT_008c7020 = "cglog_init";
    DAT_008c6fc4 = 1;
    FUN_000499f4(&DAT_008c6fc4);
    iVar1 = pthread_create(&DAT_008c7024,(pthread_attr_t *)0x0,FUN_00049bd4,&DAT_008c6fc4);
    if (iVar1 != 0) {
      builtin_strncpy(local_2010,"Failed to create log thread",0x1c);
      FUN_0004948c(0,local_2010,0);
                    /* WARNING: Subroutine does not return */
      __assert_fail("0","logging.c",0x224,"log_init");
    }
  }
  return;
}

