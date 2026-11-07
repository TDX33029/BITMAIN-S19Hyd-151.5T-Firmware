// FUN_0003be20 @ 0003be20  size=420  callers=0
// program: bmminer


undefined4 FUN_0003be20(void)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  char local_810 [36];
  undefined4 uStack_7ec;
  char acStack_7e8 [2008];
  
  if (4 < DAT_00087bbc) {
    builtin_strncpy(local_810,"[DEBUG] HW sweep init.\n",0x18);
    FUN_00032218(4,local_810,0);
    if (4 < DAT_00087bbc) {
      builtin_strncpy(local_810,"[DEBUG] Allocate memory for hw sweep",0x24);
      uStack_7ec = CONCAT13(uStack_7ec._3_1_,0xa2e);
      FUN_00032218(4,local_810,0);
    }
  }
  if (DAT_00507484 == (void *)0x0) {
    pvVar2 = calloc(0x8114ac,1);
    DAT_00507484 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      FUN_0003a9e0(0xd,0xff);
      if (3 < DAT_00087bbc) {
        builtin_strncpy(local_810,"Fail to allocate memory for hw sweep",0x24);
        uStack_7ec._0_1_ = ' ';
        uStack_7ec._1_1_ = 'c';
        uStack_7ec._2_1_ = 't';
        uStack_7ec._3_1_ = 'x';
        builtin_strncpy(acStack_7e8,"t.\n",4);
        FUN_00032218(3,local_810,0);
        return 0xffffffff;
      }
    }
    else {
      pvVar3 = malloc(0x400);
      *(void **)((int)pvVar2 + 4) = pvVar3;
      if (pvVar3 != (void *)0x0) goto LAB_0003be50;
      FUN_0003bd28();
      FUN_0003a9e0(0xd,0xff);
      if (3 < DAT_00087bbc) {
        builtin_strncpy(local_810,"Fail to allocate memory for hw sweep",0x24);
        uStack_7ec._0_1_ = ' ';
        uStack_7ec._1_1_ = 'p';
        uStack_7ec._2_1_ = 'r';
        uStack_7ec._3_1_ = 'i';
        builtin_strncpy(acStack_7e8,"vate data.\n",0xc);
        FUN_00032218(3,local_810,0);
      }
    }
    uVar1 = 0xffffffff;
  }
  else {
LAB_0003be50:
    uVar1 = 0;
  }
  return uVar1;
}

