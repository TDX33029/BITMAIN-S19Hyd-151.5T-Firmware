// FUN_00032998 @ 00032998  size=744  callers=0
// program: bmminer


void FUN_00032998(undefined4 *param_1)

{
  tm *__tp;
  int iVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *__s1;
  char *__dest;
  int local_1860;
  char acStack_185c [20];
  char acStack_1848 [32];
  char local_1828 [2048];
  char local_1028 [4100];
  
  if (param_1 == (undefined4 *)0x0) {
    builtin_strncpy(local_1028,"input arg wrong\n",0x11);
    FUN_00032218(0,local_1028,0);
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","logging.c",0x184,"log_thread_routine");
  }
  __s1 = (char *)((int)param_1 + 0x2a);
  __dest = (char *)(param_1 + 3);
  uVar4 = 1;
  *param_1 = 0;
  param_1[0x17] = "cglog_sync";
  do {
    do {
      uVar4 = uVar4 + 1;
      sleep(1);
    } while (uVar4 != (uVar4 / 0x1e) * 0x1e);
    time(&local_1860);
    __tp = localtime(&local_1860);
    strftime(acStack_1848,0xf,"%Y-%m/%d",__tp);
    strftime(acStack_185c,10,"%H-%M-%S",__tp);
    iVar1 = strncmp(__s1,"1970",4);
    if ((iVar1 == 0) && (0x1e13380 < local_1860)) {
      iVar1 = FUN_00032664(param_1,"cglog_init",acStack_1848,acStack_185c);
      iVar3 = FUN_00032664(param_1,"cglog_sync",acStack_1848,acStack_185c);
      if (iVar1 == 0 && iVar3 == 0) {
        strncpy(__s1,acStack_1848,0x1e);
        strncpy((char *)(param_1 + 0x12),acStack_185c,0x14);
        strcpy(__dest,__s1);
      }
    }
    if (*(char *)(param_1 + 3) == '\0') {
      strcpy(__dest,__s1);
    }
    else {
      __n = strlen(acStack_1848);
      iVar1 = strncmp(__dest,acStack_1848,__n);
      if (iVar1 != 0) {
        uVar2 = snprintf(local_1028,0x1000,"/usr/bin/symbollink.sh %s %s %s %s %s",
                         (char *)param_1[2],__s1,(char *)(param_1 + 0x12),"cglog_sync",acStack_1848)
        ;
        if (uVar2 < 0x1000) {
          iVar1 = FUN_000324bc(local_1028);
          if (iVar1 == 0) {
            strncpy(__dest,acStack_1848,0x1e);
          }
          else if (3 < DAT_00087bbc) {
            snprintf(local_1828,0x800,"my_system returned failed %d on LOG_SYMBOL_LINK\n",iVar1);
            FUN_00032218(3,local_1828,0);
          }
        }
        else if (3 < DAT_00087bbc) {
          builtin_strncpy(local_1828,"too large command LOG_SYMBOL_LINK\n",0x23);
          FUN_00032218(3,local_1828,0);
        }
      }
    }
    FUN_000327b4(param_1);
  } while( true );
}

