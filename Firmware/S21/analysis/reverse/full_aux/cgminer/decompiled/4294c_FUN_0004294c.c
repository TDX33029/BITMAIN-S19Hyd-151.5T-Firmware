// FUN_0004294c @ 0004294c  size=608  callers=1
// program: cgminer


int FUN_0004294c(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *param4;
  uint param5;
  char acStack_820 [2048];
  
  iVar1 = pthread_mutex_init((pthread_mutex_t *)&DAT_00076310,(pthread_mutexattr_t *)0x0);
  if (iVar1 != 0) {
    piVar3 = __errno_location();
    snprintf(acStack_820,0x800,"Failed to pthread_mutex_init errno=%d in %s %s():%d",*piVar3,
             "socketa_api.c","cgminer_socket_init",0x210);
    FUN_0001dd98(3,acStack_820,1);
    FUN_0003c34c(1);
  }
  iVar1 = pthread_mutex_init((pthread_mutex_t *)&DAT_00077d50,(pthread_mutexattr_t *)0x0);
  if (iVar1 != 0) {
    piVar3 = __errno_location();
    snprintf(acStack_820,0x800,"Failed to pthread_mutex_init errno=%d in %s %s():%d",*piVar3,
             "socketa_api.c","cgminer_socket_init",0x211);
    FUN_0001dd98(3,acStack_820,1);
    FUN_0003c34c(1);
  }
  iVar1 = FUN_000448f8(&DAT_000560e8,2);
  if (iVar1 == 0) {
    while( true ) {
      param4 = s_bitmain_api_detect_000682f0;
      param5 = 0;
      do {
        uVar2 = FUN_00044b4c(param4);
        param5 = param5 | uVar2;
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
          snprintf(acStack_820,0x800,"%s reg %s return: %d","cgminer_socket_init",param4,param5);
          FUN_0001dd98(5,acStack_820,0);
        }
        param4 = param4 + 0x84;
      } while (param4 != &DAT_00068500);
      iVar1 = 0;
      if (param5 == 0) break;
      sleep(5);
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
        snprintf(acStack_820,0x800,"%s reg failed wait 5s","cgminer_socket_init");
        FUN_0001dd98(3,acStack_820,0);
      }
    }
  }
  else if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
    snprintf(acStack_820,0x800,"%s trans init failed: %d","cgminer_socket_init",iVar1);
    FUN_0001dd98(3,acStack_820,0);
  }
  return iVar1;
}

