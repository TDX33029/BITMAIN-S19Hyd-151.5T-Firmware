// FUN_00012c78 @ 00012c78  size=1660  callers=1
// program: bmminer


undefined4 FUN_00012c78(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  char local_2010 [8];
  undefined4 uStack_2008;
  char acStack_2004 [8];
  uint local_1ffc;
  undefined4 local_1ff8;
  uint local_1ff4;
  undefined4 local_1ff0;
  char acStack_1fec [8156];
  
  piVar1 = (int *)FUN_0007eb20(param_1,"strategy");
  if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
    if (DAT_000be63c < 4) {
      uVar4 = 0xffffffff;
    }
    else {
      builtin_strncpy(local_2010,"get stra",8);
      uStack_2008._0_1_ = 't';
      uStack_2008._1_1_ = 'e';
      uStack_2008._2_1_ = 'g';
      uStack_2008._3_1_ = 'y';
      builtin_strncpy(acStack_2004," failed\n",8);
      local_1ffc = local_1ffc & 0xffffff00;
      FUN_0004948c(3,local_2010,0);
      uVar4 = 0xffffffff;
    }
  }
  else {
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2010,"strategy",8);
      uStack_2008._0_1_ = ':';
      uStack_2008._1_1_ = '\n';
      uStack_2008._2_1_ = '\0';
      FUN_0004948c(4,local_2010,0);
    }
    piVar2 = (int *)FUN_0007eb20(piVar1,"open_core_high_voltage");
    if ((piVar2 == (int *)0x0) || (*piVar2 != 3)) {
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2010,"get open",8);
        uStack_2008._0_1_ = '_';
        uStack_2008._1_1_ = 'c';
        uStack_2008._2_1_ = 'o';
        uStack_2008._3_1_ = 'r';
        builtin_strncpy(acStack_2004,"e_high_v",8);
        local_1ffc._0_1_ = 'o';
        local_1ffc._1_1_ = 'l';
        local_1ffc._2_1_ = 't';
        local_1ffc._3_1_ = 'a';
        local_1ff8._0_1_ = 'g';
        local_1ff8._1_1_ = 'e';
        local_1ff8._2_1_ = ' ';
        local_1ff8._3_1_ = 'f';
        local_1ff4._0_1_ = 'a';
        local_1ff4._1_1_ = 'i';
        local_1ff4._2_1_ = 'l';
        local_1ff4._3_1_ = 'e';
        local_1ff0._0_1_ = 'd';
        local_1ff0._1_1_ = '\n';
        local_1ff0._2_1_ = '\0';
        FUN_0004948c(3,local_2010,0);
      }
    }
    else {
      if (4 < DAT_000be63c) {
        iVar3 = FUN_000807e0();
        snprintf(local_2010,0x2000,"open_core_high_voltage: %d\n",iVar3);
        FUN_0004948c(4,local_2010,0);
      }
      DAT_00a4ee48 = FUN_000807e0(piVar2);
    }
    piVar2 = (int *)FUN_0007eb20(piVar1,"inc_freq_voltage");
    if ((piVar2 == (int *)0x0) || (*piVar2 != 3)) {
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2010,"get inc_",8);
        uStack_2008._0_1_ = 'f';
        uStack_2008._1_1_ = 'r';
        uStack_2008._2_1_ = 'e';
        uStack_2008._3_1_ = 'q';
        builtin_strncpy(acStack_2004,"_voltage",8);
        local_1ffc._0_1_ = ' ';
        local_1ffc._1_1_ = 'f';
        local_1ffc._2_1_ = 'a';
        local_1ffc._3_1_ = 'i';
        local_1ff8._0_1_ = 'l';
        local_1ff8._1_1_ = 'e';
        local_1ff8._2_1_ = 'd';
        local_1ff8._3_1_ = '\n';
        local_1ff4 = local_1ff4 & 0xffffff00;
        FUN_0004948c(3,local_2010,0);
      }
    }
    else {
      if (4 < DAT_000be63c) {
        iVar3 = FUN_000807e0();
        snprintf(local_2010,0x2000,"inc_freq_voltage: %d\n",iVar3);
        FUN_0004948c(4,local_2010,0);
      }
      DAT_00a4ee4c = FUN_000807e0(piVar2);
    }
    piVar2 = (int *)FUN_0007eb20(piVar1,"inc_freq_step");
    if ((piVar2 == (int *)0x0) || (*piVar2 != 3)) {
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2010,"get inc_",8);
        uStack_2008._0_1_ = 'f';
        uStack_2008._1_1_ = 'r';
        uStack_2008._2_1_ = 'e';
        uStack_2008._3_1_ = 'q';
        builtin_strncpy(acStack_2004,"_step fa",8);
        local_1ffc._0_1_ = 'i';
        local_1ffc._1_1_ = 'l';
        local_1ffc._2_1_ = 'e';
        local_1ffc._3_1_ = 'd';
        local_1ff8._0_1_ = '\n';
        local_1ff8._1_1_ = '\0';
        FUN_0004948c(3,local_2010,0);
      }
    }
    else {
      if (4 < DAT_000be63c) {
        iVar3 = FUN_000807e0();
        snprintf(local_2010,0x2000,"inc_freq_step: %d\n",iVar3);
        FUN_0004948c(4,local_2010,0);
      }
      FUN_000807e0(piVar2);
      dVar5 = (double)FUN_00098c24();
      DAT_00a4ee50 = (float)(dVar5 / 100.0);
    }
    piVar2 = (int *)FUN_0007eb20(piVar1,"inc_freq_delay");
    if ((piVar2 == (int *)0x0) || (*piVar2 != 3)) {
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2010,"get inc_",8);
        uStack_2008._0_1_ = 'f';
        uStack_2008._1_1_ = 'r';
        uStack_2008._2_1_ = 'e';
        uStack_2008._3_1_ = 'q';
        builtin_strncpy(acStack_2004,"_delay f",8);
        local_1ffc._0_1_ = 'a';
        local_1ffc._1_1_ = 'i';
        local_1ffc._2_1_ = 'l';
        local_1ffc._3_1_ = 'e';
        local_1ff8._0_1_ = 'd';
        local_1ff8._1_1_ = '\n';
        local_1ff8._2_1_ = '\0';
        FUN_0004948c(3,local_2010,0);
      }
    }
    else {
      if (4 < DAT_000be63c) {
        iVar3 = FUN_000807e0();
        snprintf(local_2010,0x2000,"inc_freq_delay: %d\n",iVar3);
        FUN_0004948c(4,local_2010,0);
      }
      DAT_00a4ee54 = FUN_000807e0(piVar2);
    }
    piVar2 = (int *)FUN_0007eb20(piVar1,"poweron_with_reset_high");
    if ((piVar2 == (int *)0x0) || (*piVar2 != 3)) {
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2010,"get powe",8);
        uStack_2008._0_1_ = 'r';
        uStack_2008._1_1_ = 'o';
        uStack_2008._2_1_ = 'n';
        uStack_2008._3_1_ = '_';
        builtin_strncpy(acStack_2004,"with_res",8);
        local_1ffc._0_1_ = 'e';
        local_1ffc._1_1_ = 't';
        local_1ffc._2_1_ = '_';
        local_1ffc._3_1_ = 'h';
        local_1ff8._0_1_ = 'i';
        local_1ff8._1_1_ = 'g';
        local_1ff8._2_1_ = 'h';
        local_1ff8._3_1_ = ' ';
        local_1ff4._0_1_ = 'f';
        local_1ff4._1_1_ = 'a';
        local_1ff4._2_1_ = 'i';
        local_1ff4._3_1_ = 'l';
        local_1ff0._0_1_ = 'e';
        local_1ff0._1_1_ = 'd';
        local_1ff0._2_1_ = '\n';
        local_1ff0._3_1_ = '\0';
        FUN_0004948c(3,local_2010,0);
      }
    }
    else {
      if (4 < DAT_000be63c) {
        iVar3 = FUN_000807e0();
        snprintf(local_2010,0x2000,"poweron_with_reset_high: %d\n",iVar3);
        FUN_0004948c(4,local_2010,0);
      }
      DAT_00a4ee58 = FUN_000807e0(piVar2);
    }
    piVar2 = (int *)FUN_0007eb20(piVar1,"test_loop_securely_find_asic_num");
    if ((piVar2 == (int *)0x0) || (*piVar2 != 5)) {
      if (4 < DAT_000be63c) {
        builtin_strncpy(local_2010,"get test",8);
        uStack_2008._0_1_ = '_';
        uStack_2008._1_1_ = 'l';
        uStack_2008._2_1_ = 'o';
        uStack_2008._3_1_ = 'o';
        builtin_strncpy(acStack_2004,"p_secure",8);
        local_1ffc._0_1_ = 'l';
        local_1ffc._1_1_ = 'y';
        local_1ffc._2_1_ = '_';
        local_1ffc._3_1_ = 'f';
        local_1ff8._0_1_ = 'i';
        local_1ff8._1_1_ = 'n';
        local_1ff8._2_1_ = 'd';
        local_1ff8._3_1_ = '_';
        local_1ff4._0_1_ = 'a';
        local_1ff4._1_1_ = 's';
        local_1ff4._2_1_ = 'i';
        local_1ff4._3_1_ = 'c';
        local_1ff0._0_1_ = '_';
        local_1ff0._1_1_ = 'n';
        local_1ff0._2_1_ = 'u';
        local_1ff0._3_1_ = 'm';
        builtin_strncpy(acStack_1fec," failed\n",9);
        FUN_0004948c(4,local_2010,0);
      }
    }
    else {
      if (4 < DAT_000be63c) {
        snprintf(local_2010,0x2000,"test_loop_securely_find_asic_num: %d\n",1);
        FUN_0004948c(4,local_2010,0);
      }
      DAT_00a4ee64 = *piVar2 == 5;
    }
    piVar2 = (int *)FUN_0007eb20(piVar1,"pid_target_temp");
    if ((piVar2 == (int *)0x0) || (*piVar2 != 3)) {
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2010,"get pid_",8);
        uStack_2008._0_1_ = 't';
        uStack_2008._1_1_ = 'a';
        uStack_2008._2_1_ = 'r';
        uStack_2008._3_1_ = 'g';
        builtin_strncpy(acStack_2004,"et_temp ",8);
        local_1ffc._0_1_ = 'f';
        local_1ffc._1_1_ = 'a';
        local_1ffc._2_1_ = 'i';
        local_1ffc._3_1_ = 'l';
        local_1ff8._0_1_ = 'e';
        local_1ff8._1_1_ = 'd';
        local_1ff8._2_1_ = '\n';
        local_1ff8._3_1_ = '\0';
        FUN_0004948c(3,local_2010,0);
      }
    }
    else {
      if (4 < DAT_000be63c) {
        iVar3 = FUN_000807e0();
        snprintf(local_2010,0x2000,"pid_target_temp: %d\n",iVar3);
        FUN_0004948c(4,local_2010,0);
      }
      DAT_00a4ee5c = FUN_000807e0(piVar2);
    }
    piVar1 = (int *)FUN_0007eb20(piVar1,"voltage_adjust_setp");
    if ((piVar1 == (int *)0x0) || (*piVar1 != 3)) {
      if (DAT_000be63c < 4) {
        uVar4 = 0;
      }
      else {
        builtin_strncpy(local_2010,"get volt",8);
        uStack_2008._0_1_ = 'a';
        uStack_2008._1_1_ = 'g';
        uStack_2008._2_1_ = 'e';
        uStack_2008._3_1_ = '_';
        builtin_strncpy(acStack_2004,"adjust_s",8);
        local_1ffc._0_1_ = 'e';
        local_1ffc._1_1_ = 't';
        local_1ffc._2_1_ = 'p';
        local_1ffc._3_1_ = ' ';
        local_1ff8._0_1_ = 'f';
        local_1ff8._1_1_ = 'a';
        local_1ff8._2_1_ = 'i';
        local_1ff8._3_1_ = 'l';
        local_1ff4._0_1_ = 'e';
        local_1ff4._1_1_ = 'd';
        local_1ff4._2_1_ = '\n';
        local_1ff4._3_1_ = '\0';
        FUN_0004948c(3,local_2010,0);
        uVar4 = 0;
      }
    }
    else {
      if (4 < DAT_000be63c) {
        iVar3 = FUN_000807e0();
        snprintf(local_2010,0x2000,"voltage_adjust_setp: %d\n",iVar3);
        FUN_0004948c(4,local_2010,0);
      }
      DAT_00a4ee60 = FUN_000807e0(piVar1);
      uVar4 = 0;
    }
  }
  return uVar4;
}

