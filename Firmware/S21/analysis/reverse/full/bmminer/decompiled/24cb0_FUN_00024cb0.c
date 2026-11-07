// FUN_00024cb0 @ 00024cb0  size=588  callers=0
// program: bmminer


undefined4 FUN_00024cb0(char *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  void *__ptr;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char acStack_21b4 [32];
  char acStack_2194 [128];
  int local_2114 [23];
  char acStack_20b8 [160];
  char local_2018 [16];
  uint local_2008;
  uint local_2004;
  char acStack_2000 [8172];
  
  memset(acStack_2194,0,0x80);
  memset(acStack_21b4,0,0x20);
  iVar2 = FUN_0003cb28(acStack_21b4);
  if (iVar2 == 0) {
    sprintf(acStack_2194,"http://%s:%d/power/%s",param_1,param_2,acStack_21b4);
    __ptr = (void *)FUN_0003c5e4(acStack_2194);
    if (__ptr != (void *)0x0) {
      iVar2 = FUN_0007d200(__ptr,0,local_2114);
      if (iVar2 == 0) {
        if (DAT_000be63c < 4) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = 0xffffffff;
          snprintf(local_2018,0x2000,"JSON decode failed(%d): %s",local_2114[0],acStack_20b8);
          FUN_0004948c(3,local_2018,0);
        }
      }
      else {
        iVar3 = FUN_0007eb20(iVar2,"power");
        if (iVar3 == 0) {
          if (DAT_000be63c < 4) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = 0xffffffff;
            builtin_strncpy(local_2018,"no json object[p",0x10);
            local_2008._0_1_ = 'o';
            local_2008._1_1_ = 'w';
            local_2008._2_1_ = 'e';
            local_2008._3_1_ = 'r';
            local_2004._0_1_ = ']';
            local_2004._1_1_ = ' ';
            local_2004._2_1_ = 'f';
            local_2004._3_1_ = 'o';
            builtin_strncpy(acStack_2000,"und\n",5);
            FUN_0004948c(3,local_2018,0);
          }
        }
        else {
          uVar4 = FUN_000807e0();
        }
        if (*(int *)(iVar2 + 4) != -1) {
          piVar5 = (int *)(iVar2 + 4);
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar3 + -1;
          if (iVar3 + -1 == 0) {
            FUN_00080c8c(iVar2);
          }
        }
      }
      free(__ptr);
      return uVar4;
    }
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2018,"http get failed\n",0x10);
      local_2008 = local_2008 & 0xffffff00;
      FUN_0004948c(3,local_2018,0);
    }
  }
  else if (3 < DAT_000be63c) {
    builtin_strncpy(local_2018,"get local ip fai",0x10);
    local_2008._0_1_ = 'l';
    local_2008._1_1_ = 'e';
    local_2008._2_1_ = 'd';
    local_2008._3_1_ = '\n';
    local_2004 = local_2004 & 0xffffff00;
    FUN_0004948c(3,local_2018,0);
    return 0xffffffff;
  }
  return 0xffffffff;
}

