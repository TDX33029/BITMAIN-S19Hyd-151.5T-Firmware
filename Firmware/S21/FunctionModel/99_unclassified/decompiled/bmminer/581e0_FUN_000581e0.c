// FUN_000581e0 @ 000581e0  size=420  callers=0
// program: bmminer


undefined4 FUN_000581e0(void)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  char local_2010 [36];
  undefined4 uStack_1fec;
  char acStack_1fe8 [8152];
  
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2010,"[DEBUG] HW sweep init.\n",0x18);
    FUN_0004948c(4,local_2010,0);
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2010,"[DEBUG] Allocate memory for hw sweep",0x24);
      uStack_1fec = CONCAT13(uStack_1fec._3_1_,0xa2e);
      FUN_0004948c(4,local_2010,0);
    }
  }
  if (DAT_00944b7c == (void *)0x0) {
    pvVar2 = calloc(0x10054ac,1);
    DAT_00944b7c = pvVar2;
    if (pvVar2 == (void *)0x0) {
      FUN_00056e88(0xd,0xff);
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2010,"Fail to allocate memory for hw sweep",0x24);
        uStack_1fec._0_1_ = ' ';
        uStack_1fec._1_1_ = 'c';
        uStack_1fec._2_1_ = 't';
        uStack_1fec._3_1_ = 'x';
        builtin_strncpy(acStack_1fe8,"t.\n",4);
        FUN_0004948c(3,local_2010,0);
        return 0xffffffff;
      }
    }
    else {
      pvVar3 = malloc(0x400);
      *(void **)((int)pvVar2 + 4) = pvVar3;
      if (pvVar3 != (void *)0x0) goto LAB_00058210;
      FUN_000580e8();
      FUN_00056e88(0xd,0xff);
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2010,"Fail to allocate memory for hw sweep",0x24);
        uStack_1fec._0_1_ = ' ';
        uStack_1fec._1_1_ = 'p';
        uStack_1fec._2_1_ = 'r';
        uStack_1fec._3_1_ = 'i';
        builtin_strncpy(acStack_1fe8,"vate data.\n",0xc);
        FUN_0004948c(3,local_2010,0);
      }
    }
    uVar1 = 0xffffffff;
  }
  else {
LAB_00058210:
    uVar1 = 0;
  }
  return uVar1;
}

