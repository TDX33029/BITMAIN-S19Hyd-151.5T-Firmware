// FUN_000283a8 @ 000283a8  size=368  callers=1
// program: bmminer


undefined4 FUN_000283a8(undefined4 param_1)

{
  int *piVar1;
  char *param3;
  char local_2010 [16];
  uint local_2000;
  undefined2 local_1ffc;
  
  piVar1 = (int *)FUN_0007eb20(param_1,"processor");
  if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2010,"get processor fa",0x10);
      local_2000._0_1_ = 'i';
      local_2000._1_1_ = 'l';
      local_2000._2_1_ = 'e';
      local_2000._3_1_ = 'd';
      local_1ffc = 10;
      FUN_0004948c(3,local_2010,0);
      return 0xffffffff;
    }
  }
  else {
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2010,"processor:\n",0xc);
      FUN_0004948c(4,local_2010,0);
    }
    piVar1 = (int *)FUN_0007eb20(piVar1,"type");
    if ((piVar1 != (int *)0x0) && (*piVar1 == 2)) {
      if (DAT_000be63c < 5) {
        return 0;
      }
      param3 = (char *)FUN_00080310(piVar1);
      snprintf(local_2010,0x2000,"type: %s\n",param3);
      FUN_0004948c(4,local_2010,0);
      return 0;
    }
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2010,"get type failed\n",0x10);
      local_2000 = local_2000 & 0xffffff00;
      FUN_0004948c(3,local_2010,0);
    }
  }
  return 0xffffffff;
}

