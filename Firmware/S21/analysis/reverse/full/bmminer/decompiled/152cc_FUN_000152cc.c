// FUN_000152cc @ 000152cc  size=560  callers=1
// program: bmminer


undefined4 FUN_000152cc(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char local_2010 [16];
  undefined4 local_2000;
  uint local_1ffc;
  char acStack_1ff8 [8168];
  
  piVar1 = (int *)FUN_0007eb20(param_1,"adjust_strategy");
  if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
    if (DAT_000be63c < 4) {
      uVar4 = 0xffffffff;
    }
    else {
      builtin_strncpy(local_2010,"get strategy fai",0x10);
      local_2000._0_1_ = 'l';
      local_2000._1_1_ = 'e';
      local_2000._2_1_ = 'd';
      local_2000._3_1_ = '\n';
      local_1ffc = local_1ffc & 0xffffff00;
      FUN_0004948c(3,local_2010,0);
      uVar4 = 0xffffffff;
    }
  }
  else {
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2010,"adjust_strategy:",0x10);
      local_2000._0_1_ = '\n';
      local_2000._1_1_ = '\0';
      FUN_0004948c(4,local_2010,0);
    }
    piVar2 = (int *)FUN_0007eb20(piVar1,"hashrate_percent_min");
    if ((piVar2 == (int *)0x0) || (*piVar2 != 3)) {
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2010,"get hashrate_per",0x10);
        local_2000._0_1_ = 'c';
        local_2000._1_1_ = 'e';
        local_2000._2_1_ = 'n';
        local_2000._3_1_ = 't';
        local_1ffc._0_1_ = '_';
        local_1ffc._1_1_ = 'm';
        local_1ffc._2_1_ = 'i';
        local_1ffc._3_1_ = 'n';
        builtin_strncpy(acStack_1ff8," failed\n",9);
        FUN_0004948c(3,local_2010,0);
      }
    }
    else {
      if (4 < DAT_000be63c) {
        iVar3 = FUN_000807e0();
        snprintf(local_2010,0x2000,"hashrate_percent_min: %d\n",iVar3);
        FUN_0004948c(4,local_2010,0);
      }
      DAT_00a4ee68 = FUN_000807e0(piVar2);
    }
    piVar1 = (int *)FUN_0007eb20(piVar1,"hashrate_percent_max");
    if ((piVar1 == (int *)0x0) || (*piVar1 != 3)) {
      if (DAT_000be63c < 4) {
        uVar4 = 0;
      }
      else {
        builtin_strncpy(local_2010,"get hashrate_per",0x10);
        local_2000._0_1_ = 'c';
        local_2000._1_1_ = 'e';
        local_2000._2_1_ = 'n';
        local_2000._3_1_ = 't';
        local_1ffc._0_1_ = '_';
        local_1ffc._1_1_ = 'm';
        local_1ffc._2_1_ = 'a';
        local_1ffc._3_1_ = 'x';
        builtin_strncpy(acStack_1ff8," failed\n",9);
        FUN_0004948c(3,local_2010,0);
        uVar4 = 0;
      }
    }
    else {
      if (4 < DAT_000be63c) {
        iVar3 = FUN_000807e0();
        snprintf(local_2010,0x2000,"hashrate_percent_max: %d\n",iVar3);
        FUN_0004948c(4,local_2010,0);
      }
      DAT_00a4ee6c = FUN_000807e0(piVar1);
      uVar4 = 0;
    }
  }
  return uVar4;
}

