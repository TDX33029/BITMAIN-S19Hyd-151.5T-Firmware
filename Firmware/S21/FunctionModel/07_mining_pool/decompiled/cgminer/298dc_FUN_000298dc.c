// FUN_000298dc @ 000298dc  size=300  callers=1
// program: cgminer


void FUN_000298dc(void)

{
  int iVar1;
  char local_808 [2052];
  
  if (DAT_00068af0 == 0) {
    iVar1 = pthread_create((pthread_t *)&DAT_00068af0,(pthread_attr_t *)0x0,FUN_0003d300,(void *)0x0
                          );
    if ((iVar1 != 0) && (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (2 < DAT_00067848))))
    {
      builtin_strncpy(local_808,"Failed to create pool_change_thread",0x24);
      FUN_0001dd98(3,local_808,0);
    }
  }
  else if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
    builtin_strncpy(local_808,"config too fast, pool is changing, please wait\n",0x30);
    FUN_0001dd98(3,local_808,0);
  }
  return;
}

