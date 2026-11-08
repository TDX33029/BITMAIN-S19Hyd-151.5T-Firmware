// FUN_00049bd4 @ 00049bd4  size=780  callers=0
// program: bmminer


undefined4 FUN_00049bd4(undefined4 *param_1)

{
  tm *__tp;
  int iVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *__dest;
  char *__s1;
  int local_3060;
  char acStack_305c [20];
  char acStack_3048 [32];
  char acStack_3028 [4096];
  char local_2028 [16];
  uint local_2018;
  char acStack_2014 [8176];
  
  if (param_1 == (undefined4 *)0x0) {
    builtin_strncpy(local_2028,"input arg wrong\n",0x10);
    local_2018 = local_2018 & 0xffffff00;
    FUN_0004948c(0,local_2028,0);
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","logging.c",0x1d4,"log_thread_routine");
  }
  *param_1 = 0;
  iVar1 = DAT_008c67b8;
  param_1[0x17] = "cglog_sync";
  if (iVar1 == 0) {
    uVar4 = 1;
    while (sleep(1), DAT_008c67b8 == 0) {
      uVar4 = uVar4 + 1;
      if (uVar4 == (uVar4 / 0x1e) * 0x1e) {
        __s1 = (char *)((int)param_1 + 0x2a);
        time(&local_3060);
        __tp = localtime(&local_3060);
        strftime(acStack_3048,0xf,"%Y-%m/%d",__tp);
        __dest = (char *)(param_1 + 3);
        strftime(acStack_305c,10,"%H-%M-%S",__tp);
        iVar1 = strncmp(__s1,"1970",4);
        if ((iVar1 == 0) && (0x1e13380 < local_3060)) {
          iVar1 = FUN_00049884(param_1,"cglog_init",acStack_3048,acStack_305c);
          iVar3 = FUN_00049884(param_1,"cglog_sync",acStack_3048,acStack_305c);
          if (iVar1 == 0 && iVar3 == 0) {
            strncpy(__s1,acStack_3048,0x1e);
            strncpy((char *)(param_1 + 0x12),acStack_305c,0x14);
            strcpy(__dest,__s1);
          }
        }
        if (*(char *)(param_1 + 3) == '\0') {
          strcpy(__dest,__s1);
        }
        else {
          __n = strlen(acStack_3048);
          iVar1 = strncmp(__dest,acStack_3048,__n);
          if (iVar1 != 0) {
            uVar2 = snprintf(acStack_3028,0x1000,"/usr/bin/symbollink.sh %s %s %s %s %s",
                             (char *)param_1[2],__s1,(char *)(param_1 + 0x12),"cglog_sync",
                             acStack_3048);
            if (uVar2 < 0x1000) {
              iVar1 = FUN_00049730(acStack_3028);
              if (iVar1 == 0) {
                strncpy(__dest,acStack_3048,0x1e);
              }
              else if (3 < DAT_000be63c) {
                snprintf(local_2028,0x2000,"my_system returned failed %d on LOG_SYMBOL_LINK\n",iVar1
                        );
                FUN_0004948c(3,local_2028,0);
              }
            }
            else if (3 < DAT_000be63c) {
              builtin_strncpy(local_2028,"too large comman",0x10);
              local_2018._0_1_ = 'd';
              local_2018._1_1_ = ' ';
              local_2018._2_1_ = 'L';
              local_2018._3_1_ = 'O';
              builtin_strncpy(acStack_2014,"G_SYMBOL_LINK\n",0xf);
              FUN_0004948c(3,local_2028,0);
            }
          }
        }
        FUN_000499f4(param_1);
      }
    }
  }
  return 0;
}

