// FUN_0003da58 @ 0003da58  size=324  callers=0
// program: bmminer


undefined4 FUN_0003da58(void)

{
  float fVar1;
  int iVar2;
  char acStack_2018 [8192];
  
  while (DAT_000c74c4 == '\0') {
    pthread_setcancelstate(1,(int *)0x0);
    fVar1 = (float)FUN_00024efc();
    iVar2 = (int)fVar1;
    if (4 < DAT_000be63c) {
      snprintf(acStack_2018,0x2000,"miner_power:%d",iVar2);
      FUN_0004948c(4,acStack_2018,0);
    }
    if (0x16a8 < iVar2) {
      if (3 < DAT_000be63c) {
        snprintf(acStack_2018,0x2000,"power is high when inc_freq, drop vol now, power:%d",iVar2);
        FUN_0004948c(3,acStack_2018,0);
      }
      iVar2 = FUN_00024c74();
      iVar2 = iVar2 + -0xf;
      if (iVar2 < 0x6bd) {
        iVar2 = 0x6bd;
      }
      FUN_000246cc(iVar2,3);
    }
    pthread_setcancelstate(0,(int *)0x0);
    sleep(2);
  }
  if (3 < DAT_000be63c) {
    snprintf(acStack_2018,0x2000,"%s exit ","power_monitor_thread");
    FUN_0004948c(3,acStack_2018,0);
  }
  return 0;
}

