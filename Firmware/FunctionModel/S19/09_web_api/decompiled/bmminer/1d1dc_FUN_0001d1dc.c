// FUN_0001d1dc @ 0001d1dc  size=712  callers=1
// program: bmminer


int FUN_0001d1dc(void)

{
  bool bVar1;
  void *__ptr;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char acStack_9a4 [128];
  int local_924 [23];
  char acStack_8c8 [160];
  char local_828 [12];
  undefined4 uStack_81c;
  uint local_818;
  char acStack_814 [8];
  undefined2 local_80c;
  
  iVar5 = 1;
  do {
    memset(acStack_9a4,0,0x80);
    sprintf(acStack_9a4,"http://%s:%d/api/v1/power","10.76.16.198",0x17c0);
    __ptr = (void *)FUN_00027970(acStack_9a4);
    if (__ptr == (void *)0x0) {
      if (3 < DAT_00087bbc) {
        builtin_strncpy(local_828,"http get fai",0xc);
        uStack_81c._0_1_ = 'l';
        uStack_81c._1_1_ = 'e';
        uStack_81c._2_1_ = 'd';
        uStack_81c._3_1_ = '\n';
        local_818 = local_818 & 0xffffff00;
        FUN_00032218(3,local_828,0);
        goto LAB_0001d2e8;
      }
    }
    else {
      iVar2 = FUN_00054b30(__ptr,0,local_924);
      if (iVar2 == 0) {
        if (3 < DAT_00087bbc) {
          snprintf(local_828,0x800,"JSON decode failed(%d): %s",local_924[0],acStack_8c8);
          FUN_00032218(3,local_828,0);
          free(__ptr);
          goto LAB_0001d2e8;
        }
      }
      else {
        iVar3 = FUN_000559d4(iVar2,"power");
        if (iVar3 == 0) {
          if (DAT_00087bbc < 4) {
LAB_0001d360:
            iVar3 = *(int *)(iVar2 + 4);
          }
          else {
            builtin_strncpy(local_828,"no json obje",0xc);
            uStack_81c._0_1_ = 'c';
            uStack_81c._1_1_ = 't';
            uStack_81c._2_1_ = ' ';
            uStack_81c._3_1_ = '[';
            local_818._0_1_ = 'p';
            local_818._1_1_ = 'o';
            local_818._2_1_ = 'w';
            local_818._3_1_ = 'e';
            builtin_strncpy(acStack_814,"r] found",8);
            local_80c = 10;
            FUN_00032218(3,local_828,0);
            iVar3 = *(int *)(iVar2 + 4);
          }
        }
        else {
          iVar3 = FUN_00056164();
          if (-1 < iVar3) {
            if (*(int *)(iVar2 + 4) == -1) goto LAB_0001d278;
            piVar4 = (int *)(iVar2 + 4);
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar4;
              bVar1 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar1);
            *piVar4 = iVar5 + -1;
            if (iVar5 + -1 == 0) {
              FUN_0005630c(iVar2);
              free(__ptr);
            }
            else {
LAB_0001d278:
              free(__ptr);
            }
            return iVar3;
          }
          if (DAT_00087bbc < 4) goto LAB_0001d360;
          builtin_strncpy(local_828,"IP not found",0xc);
          uStack_81c._0_1_ = '.';
          uStack_81c._1_1_ = '\n';
          uStack_81c._2_1_ = '\0';
          FUN_00032218(3,local_828,0);
          iVar3 = *(int *)(iVar2 + 4);
        }
        if (iVar3 != -1) {
          piVar4 = (int *)(iVar2 + 4);
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar3 + -1;
          if (iVar3 + -1 == 0) {
            FUN_0005630c(iVar2);
          }
        }
      }
      free(__ptr);
LAB_0001d2e8:
      if (3 < DAT_00087bbc) {
        snprintf(local_828,0x800,"Error get power error, NO.%d time.\n",iVar5);
        FUN_00032218(3,local_828,0);
      }
    }
    iVar5 = iVar5 + 1;
    sleep(5);
    if (iVar5 == 0xb) {
      return 0;
    }
  } while( true );
}

