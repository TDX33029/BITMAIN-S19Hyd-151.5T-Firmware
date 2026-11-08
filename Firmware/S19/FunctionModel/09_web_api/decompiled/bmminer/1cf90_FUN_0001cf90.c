// FUN_0001cf90 @ 0001cf90  size=588  callers=0
// program: bmminer


undefined4 FUN_0001cf90(char *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  void *__ptr;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char acStack_9b4 [32];
  char acStack_994 [128];
  int local_914 [23];
  char acStack_8b8 [160];
  char local_818 [16];
  uint local_808;
  uint local_804;
  char acStack_800 [2028];
  
  memset(acStack_994,0,0x80);
  memset(acStack_9b4,0,0x20);
  iVar2 = FUN_00027eb4(acStack_9b4);
  if (iVar2 == 0) {
    sprintf(acStack_994,"http://%s:%d/power/%s",param_1,param_2,acStack_9b4);
    __ptr = (void *)FUN_00027970(acStack_994);
    if (__ptr != (void *)0x0) {
      iVar2 = FUN_00054b30(__ptr,0,local_914);
      if (iVar2 == 0) {
        if (DAT_00087bbc < 4) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = 0xffffffff;
          snprintf(local_818,0x800,"JSON decode failed(%d): %s",local_914[0],acStack_8b8);
          FUN_00032218(3,local_818,0);
        }
      }
      else {
        iVar3 = FUN_000559d4(iVar2,"power");
        if (iVar3 == 0) {
          if (DAT_00087bbc < 4) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = 0xffffffff;
            builtin_strncpy(local_818,"no json object[p",0x10);
            local_808._0_1_ = 'o';
            local_808._1_1_ = 'w';
            local_808._2_1_ = 'e';
            local_808._3_1_ = 'r';
            local_804._0_1_ = ']';
            local_804._1_1_ = ' ';
            local_804._2_1_ = 'f';
            local_804._3_1_ = 'o';
            builtin_strncpy(acStack_800,"und\n",5);
            FUN_00032218(3,local_818,0);
          }
        }
        else {
          uVar4 = FUN_00056164();
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
            FUN_0005630c(iVar2);
          }
        }
      }
      free(__ptr);
      return uVar4;
    }
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_818,"http get failed\n",0x10);
      local_808 = local_808 & 0xffffff00;
      FUN_00032218(3,local_818,0);
    }
  }
  else if (3 < DAT_00087bbc) {
    builtin_strncpy(local_818,"get local ip fai",0x10);
    local_808._0_1_ = 'l';
    local_808._1_1_ = 'e';
    local_808._2_1_ = 'd';
    local_808._3_1_ = '\n';
    local_804 = local_804 & 0xffffff00;
    FUN_00032218(3,local_818,0);
    return 0xffffffff;
  }
  return 0xffffffff;
}

