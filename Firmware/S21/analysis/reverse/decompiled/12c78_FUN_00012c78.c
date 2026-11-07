// FUN_00012c78 @ 00012c78  size=1660
// callers: [FUN_00029e18]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00012c78(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  char local_2010 [4];
  char acStack_200c [4];
  undefined3 uStack_2008;
  char cStack_2005;
  char acStack_2004 [4];
  char local_2000 [4];
  char local_1ffc [4];
  undefined3 local_1ff8;
  char cStack_1ff5;
  char local_1ff4 [4];
  undefined3 local_1ff0;
  char cStack_1fed;
  char acStack_1fec [4];
  char acStack_1fe8 [4];
  undefined1 local_1fe4;
  
  piVar1 = (int *)FUN_0007eb20(param_1,"strategy");
  if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
    if (DAT_000be63c < 4) {
      uVar4 = 0xffffffff;
    }
    else {
      local_2010[0] = s_get_strategy_failed_0009bc0c[0];
      local_2010[1] = s_get_strategy_failed_0009bc0c[1];
      local_2010[2] = s_get_strategy_failed_0009bc0c[2];
      local_2010[3] = s_get_strategy_failed_0009bc0c[3];
      acStack_200c[0] = s_get_strategy_failed_0009bc0c[4];
      acStack_200c[1] = s_get_strategy_failed_0009bc0c[5];
      acStack_200c[2] = s_get_strategy_failed_0009bc0c[6];
      acStack_200c[3] = s_get_strategy_failed_0009bc0c[7];
      uStack_2008._0_1_ = s_get_strategy_failed_0009bc0c[8];
      uStack_2008._1_1_ = s_get_strategy_failed_0009bc0c[9];
      uStack_2008._2_1_ = s_get_strategy_failed_0009bc0c[10];
      cStack_2005 = s_get_strategy_failed_0009bc0c[0xb];
      acStack_2004[0] = s_get_strategy_failed_0009bc0c[0xc];
      acStack_2004[1] = s_get_strategy_failed_0009bc0c[0xd];
      acStack_2004[2] = s_get_strategy_failed_0009bc0c[0xe];
      acStack_2004[3] = s_get_strategy_failed_0009bc0c[0xf];
      local_2000[0] = s_get_strategy_failed_0009bc0c[0x10];
      local_2000[1] = s_get_strategy_failed_0009bc0c[0x11];
      local_2000[2] = s_get_strategy_failed_0009bc0c[0x12];
      local_2000[3] = s_get_strategy_failed_0009bc0c[0x13];
      local_1ffc[0] = (char)ram0x0009bc20;
      FUN_0004948c(3,local_2010,0);
      uVar4 = 0xffffffff;
    }
  }
  else {
    if (4 < DAT_000be63c) {
      local_2010[0] = s_strategy__0009bc24[0];
      local_2010[1] = s_strategy__0009bc24[1];
      local_2010[2] = s_strategy__0009bc24[2];
      local_2010[3] = s_strategy__0009bc24[3];
      acStack_200c[0] = s_strategy__0009bc24[4];
      acStack_200c[1] = s_strategy__0009bc24[5];
      acStack_200c[2] = s_strategy__0009bc24[6];
      acStack_200c[3] = s_strategy__0009bc24[7];
      uStack_2008 = (undefined3)ram0x0009bc2c;
      FUN_0004948c(4,local_2010,0);
    }
    piVar2 = (int *)FUN_0007eb20(piVar1,"open_core_high_voltage");
    if ((piVar2 == (int *)0x0) || (*piVar2 != 3)) {
      if (3 < DAT_000be63c) {
        local_2010[0] = s_get_open_core_high_voltage_faile_0009bc48[0];
        local_2010[1] = s_get_open_core_high_voltage_faile_0009bc48[1];
        local_2010[2] = s_get_open_core_high_voltage_faile_0009bc48[2];
        local_2010[3] = s_get_open_core_high_voltage_faile_0009bc48[3];
        acStack_200c[0] = s_get_open_core_high_voltage_faile_0009bc48[4];
        acStack_200c[1] = s_get_open_core_high_voltage_faile_0009bc48[5];
        acStack_200c[2] = s_get_open_core_high_voltage_faile_0009bc48[6];
        acStack_200c[3] = s_get_open_core_high_voltage_faile_0009bc48[7];
        uStack_2008._0_1_ = s_get_open_core_high_voltage_faile_0009bc48[8];
        uStack_2008._1_1_ = s_get_open_core_high_voltage_faile_0009bc48[9];
        uStack_2008._2_1_ = s_get_open_core_high_voltage_faile_0009bc48[10];
        cStack_2005 = s_get_open_core_high_voltage_faile_0009bc48[0xb];
        acStack_2004[0] = s_get_open_core_high_voltage_faile_0009bc48[0xc];
        acStack_2004[1] = s_get_open_core_high_voltage_faile_0009bc48[0xd];
        acStack_2004[2] = s_get_open_core_high_voltage_faile_0009bc48[0xe];
        acStack_2004[3] = s_get_open_core_high_voltage_faile_0009bc48[0xf];
        local_2000[0] = s_get_open_core_high_voltage_faile_0009bc48[0x10];
        local_2000[1] = s_get_open_core_high_voltage_faile_0009bc48[0x11];
        local_2000[2] = s_get_open_core_high_voltage_faile_0009bc48[0x12];
        local_2000[3] = s_get_open_core_high_voltage_faile_0009bc48[0x13];
        local_1ffc[0] = s_get_open_core_high_voltage_faile_0009bc48[0x14];
        local_1ffc[1] = s_get_open_core_high_voltage_faile_0009bc48[0x15];
        local_1ffc[2] = s_get_open_core_high_voltage_faile_0009bc48[0x16];
        local_1ffc[3] = s_get_open_core_high_voltage_faile_0009bc48[0x17];
        local_1ff8._0_1_ = s_get_open_core_high_voltage_faile_0009bc48[0x18];
        local_1ff8._1_1_ = s_get_open_core_high_voltage_faile_0009bc48[0x19];
        local_1ff8._2_1_ = s_get_open_core_high_voltage_faile_0009bc48[0x1a];
        cStack_1ff5 = s_get_open_core_high_voltage_faile_0009bc48[0x1b];
        local_1ff4[0] = s_get_open_core_high_voltage_faile_0009bc48[0x1c];
        local_1ff4[1] = s_get_open_core_high_voltage_faile_0009bc48[0x1d];
        local_1ff4[2] = s_get_open_core_high_voltage_faile_0009bc48[0x1e];
        local_1ff4[3] = s_get_open_core_high_voltage_faile_0009bc48[0x1f];
        local_1ff0 = (undefined3)ram0x0009bc68;
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
        local_2010[0] = s_get_inc_freq_voltage_failed_0009bc80[0];
        local_2010[1] = s_get_inc_freq_voltage_failed_0009bc80[1];
        local_2010[2] = s_get_inc_freq_voltage_failed_0009bc80[2];
        local_2010[3] = s_get_inc_freq_voltage_failed_0009bc80[3];
        acStack_200c[0] = s_get_inc_freq_voltage_failed_0009bc80[4];
        acStack_200c[1] = s_get_inc_freq_voltage_failed_0009bc80[5];
        acStack_200c[2] = s_get_inc_freq_voltage_failed_0009bc80[6];
        acStack_200c[3] = s_get_inc_freq_voltage_failed_0009bc80[7];
        uStack_2008._0_1_ = s_get_inc_freq_voltage_failed_0009bc80[8];
        uStack_2008._1_1_ = s_get_inc_freq_voltage_failed_0009bc80[9];
        uStack_2008._2_1_ = s_get_inc_freq_voltage_failed_0009bc80[10];
        cStack_2005 = s_get_inc_freq_voltage_failed_0009bc80[0xb];
        acStack_2004[0] = s_get_inc_freq_voltage_failed_0009bc80[0xc];
        acStack_2004[1] = s_get_inc_freq_voltage_failed_0009bc80[0xd];
        acStack_2004[2] = s_get_inc_freq_voltage_failed_0009bc80[0xe];
        acStack_2004[3] = s_get_inc_freq_voltage_failed_0009bc80[0xf];
        local_2000[0] = s_get_inc_freq_voltage_failed_0009bc80[0x10];
        local_2000[1] = s_get_inc_freq_voltage_failed_0009bc80[0x11];
        local_2000[2] = s_get_inc_freq_voltage_failed_0009bc80[0x12];
        local_2000[3] = s_get_inc_freq_voltage_failed_0009bc80[0x13];
        local_1ffc[0] = s_get_inc_freq_voltage_failed_0009bc80[0x14];
        local_1ffc[1] = s_get_inc_freq_voltage_failed_0009bc80[0x15];
        local_1ffc[2] = s_get_inc_freq_voltage_failed_0009bc80[0x16];
        local_1ffc[3] = s_get_inc_freq_voltage_failed_0009bc80[0x17];
        local_1ff8._0_1_ = s_get_inc_freq_voltage_failed_0009bc80[0x18];
        local_1ff8._1_1_ = s_get_inc_freq_voltage_failed_0009bc80[0x19];
        local_1ff8._2_1_ = s_get_inc_freq_voltage_failed_0009bc80[0x1a];
        cStack_1ff5 = s_get_inc_freq_voltage_failed_0009bc80[0x1b];
        local_1ff4[0] = (char)ram0x0009bc9c;
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
        local_2010[0] = s_get_inc_freq_step_failed_0009bcb0[0];
        local_2010[1] = s_get_inc_freq_step_failed_0009bcb0[1];
        local_2010[2] = s_get_inc_freq_step_failed_0009bcb0[2];
        local_2010[3] = s_get_inc_freq_step_failed_0009bcb0[3];
        acStack_200c[0] = s_get_inc_freq_step_failed_0009bcb0[4];
        acStack_200c[1] = s_get_inc_freq_step_failed_0009bcb0[5];
        acStack_200c[2] = s_get_inc_freq_step_failed_0009bcb0[6];
        acStack_200c[3] = s_get_inc_freq_step_failed_0009bcb0[7];
        uStack_2008._0_1_ = s_get_inc_freq_step_failed_0009bcb0[8];
        uStack_2008._1_1_ = s_get_inc_freq_step_failed_0009bcb0[9];
        uStack_2008._2_1_ = s_get_inc_freq_step_failed_0009bcb0[10];
        cStack_2005 = s_get_inc_freq_step_failed_0009bcb0[0xb];
        acStack_2004[0] = s_get_inc_freq_step_failed_0009bcb0[0xc];
        acStack_2004[1] = s_get_inc_freq_step_failed_0009bcb0[0xd];
        acStack_2004[2] = s_get_inc_freq_step_failed_0009bcb0[0xe];
        acStack_2004[3] = s_get_inc_freq_step_failed_0009bcb0[0xf];
        local_2000[0] = s_get_inc_freq_step_failed_0009bcb0[0x10];
        local_2000[1] = s_get_inc_freq_step_failed_0009bcb0[0x11];
        local_2000[2] = s_get_inc_freq_step_failed_0009bcb0[0x12];
        local_2000[3] = s_get_inc_freq_step_failed_0009bcb0[0x13];
        local_1ffc[0] = s_get_inc_freq_step_failed_0009bcb0[0x14];
        local_1ffc[1] = s_get_inc_freq_step_failed_0009bcb0[0x15];
        local_1ffc[2] = s_get_inc_freq_step_failed_0009bcb0[0x16];
        local_1ffc[3] = s_get_inc_freq_step_failed_0009bcb0[0x17];
        local_1ff8._0_1_ = (char)ram0x0009bcc8;
        local_1ff8._1_1_ = (char)((uint)ram0x0009bcc8 >> 8);
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
      DAT_00a4ee50 = (float)(dVar5 / DAT_000132f8);
    }
    piVar2 = (int *)FUN_0007eb20(piVar1,"inc_freq_delay");
    if ((piVar2 == (int *)0x0) || (*piVar2 != 3)) {
      if (3 < DAT_000be63c) {
        local_2010[0] = s_get_inc_freq_delay_failed_0009bcf0[0];
        local_2010[1] = s_get_inc_freq_delay_failed_0009bcf0[1];
        local_2010[2] = s_get_inc_freq_delay_failed_0009bcf0[2];
        local_2010[3] = s_get_inc_freq_delay_failed_0009bcf0[3];
        acStack_200c[0] = s_get_inc_freq_delay_failed_0009bcf0[4];
        acStack_200c[1] = s_get_inc_freq_delay_failed_0009bcf0[5];
        acStack_200c[2] = s_get_inc_freq_delay_failed_0009bcf0[6];
        acStack_200c[3] = s_get_inc_freq_delay_failed_0009bcf0[7];
        uStack_2008._0_1_ = s_get_inc_freq_delay_failed_0009bcf0[8];
        uStack_2008._1_1_ = s_get_inc_freq_delay_failed_0009bcf0[9];
        uStack_2008._2_1_ = s_get_inc_freq_delay_failed_0009bcf0[10];
        cStack_2005 = s_get_inc_freq_delay_failed_0009bcf0[0xb];
        acStack_2004[0] = s_get_inc_freq_delay_failed_0009bcf0[0xc];
        acStack_2004[1] = s_get_inc_freq_delay_failed_0009bcf0[0xd];
        acStack_2004[2] = s_get_inc_freq_delay_failed_0009bcf0[0xe];
        acStack_2004[3] = s_get_inc_freq_delay_failed_0009bcf0[0xf];
        local_2000[0] = s_get_inc_freq_delay_failed_0009bcf0[0x10];
        local_2000[1] = s_get_inc_freq_delay_failed_0009bcf0[0x11];
        local_2000[2] = s_get_inc_freq_delay_failed_0009bcf0[0x12];
        local_2000[3] = s_get_inc_freq_delay_failed_0009bcf0[0x13];
        local_1ffc[0] = s_get_inc_freq_delay_failed_0009bcf0[0x14];
        local_1ffc[1] = s_get_inc_freq_delay_failed_0009bcf0[0x15];
        local_1ffc[2] = s_get_inc_freq_delay_failed_0009bcf0[0x16];
        local_1ffc[3] = s_get_inc_freq_delay_failed_0009bcf0[0x17];
        local_1ff8 = (undefined3)ram0x0009bd08;
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
        local_2010[0] = s_get_poweron_with_reset_high_fail_0009bd24[0];
        local_2010[1] = s_get_poweron_with_reset_high_fail_0009bd24[1];
        local_2010[2] = s_get_poweron_with_reset_high_fail_0009bd24[2];
        local_2010[3] = s_get_poweron_with_reset_high_fail_0009bd24[3];
        acStack_200c[0] = s_get_poweron_with_reset_high_fail_0009bd24[4];
        acStack_200c[1] = s_get_poweron_with_reset_high_fail_0009bd24[5];
        acStack_200c[2] = s_get_poweron_with_reset_high_fail_0009bd24[6];
        acStack_200c[3] = s_get_poweron_with_reset_high_fail_0009bd24[7];
        uStack_2008._0_1_ = s_get_poweron_with_reset_high_fail_0009bd24[8];
        uStack_2008._1_1_ = s_get_poweron_with_reset_high_fail_0009bd24[9];
        uStack_2008._2_1_ = s_get_poweron_with_reset_high_fail_0009bd24[10];
        cStack_2005 = s_get_poweron_with_reset_high_fail_0009bd24[0xb];
        acStack_2004[0] = s_get_poweron_with_reset_high_fail_0009bd24[0xc];
        acStack_2004[1] = s_get_poweron_with_reset_high_fail_0009bd24[0xd];
        acStack_2004[2] = s_get_poweron_with_reset_high_fail_0009bd24[0xe];
        acStack_2004[3] = s_get_poweron_with_reset_high_fail_0009bd24[0xf];
        local_2000[0] = s_get_poweron_with_reset_high_fail_0009bd24[0x10];
        local_2000[1] = s_get_poweron_with_reset_high_fail_0009bd24[0x11];
        local_2000[2] = s_get_poweron_with_reset_high_fail_0009bd24[0x12];
        local_2000[3] = s_get_poweron_with_reset_high_fail_0009bd24[0x13];
        local_1ffc[0] = s_get_poweron_with_reset_high_fail_0009bd24[0x14];
        local_1ffc[1] = s_get_poweron_with_reset_high_fail_0009bd24[0x15];
        local_1ffc[2] = s_get_poweron_with_reset_high_fail_0009bd24[0x16];
        local_1ffc[3] = s_get_poweron_with_reset_high_fail_0009bd24[0x17];
        local_1ff8._0_1_ = s_get_poweron_with_reset_high_fail_0009bd24[0x18];
        local_1ff8._1_1_ = s_get_poweron_with_reset_high_fail_0009bd24[0x19];
        local_1ff8._2_1_ = s_get_poweron_with_reset_high_fail_0009bd24[0x1a];
        cStack_1ff5 = s_get_poweron_with_reset_high_fail_0009bd24[0x1b];
        local_1ff4[0] = s_get_poweron_with_reset_high_fail_0009bd24[0x1c];
        local_1ff4[1] = s_get_poweron_with_reset_high_fail_0009bd24[0x1d];
        local_1ff4[2] = s_get_poweron_with_reset_high_fail_0009bd24[0x1e];
        local_1ff4[3] = s_get_poweron_with_reset_high_fail_0009bd24[0x1f];
        local_1ff0._0_1_ = s_get_poweron_with_reset_high_fail_0009bd24[0x20];
        local_1ff0._1_1_ = s_get_poweron_with_reset_high_fail_0009bd24[0x21];
        local_1ff0._2_1_ = s_get_poweron_with_reset_high_fail_0009bd24[0x22];
        cStack_1fed = s_get_poweron_with_reset_high_fail_0009bd24[0x23];
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
        local_2010[0] = s_get_test_loop_securely_find_asic_0009bd6c[0];
        local_2010[1] = s_get_test_loop_securely_find_asic_0009bd6c[1];
        local_2010[2] = s_get_test_loop_securely_find_asic_0009bd6c[2];
        local_2010[3] = s_get_test_loop_securely_find_asic_0009bd6c[3];
        acStack_200c[0] = s_get_test_loop_securely_find_asic_0009bd6c[4];
        acStack_200c[1] = s_get_test_loop_securely_find_asic_0009bd6c[5];
        acStack_200c[2] = s_get_test_loop_securely_find_asic_0009bd6c[6];
        acStack_200c[3] = s_get_test_loop_securely_find_asic_0009bd6c[7];
        uStack_2008._0_1_ = s_get_test_loop_securely_find_asic_0009bd6c[8];
        uStack_2008._1_1_ = s_get_test_loop_securely_find_asic_0009bd6c[9];
        uStack_2008._2_1_ = s_get_test_loop_securely_find_asic_0009bd6c[10];
        cStack_2005 = s_get_test_loop_securely_find_asic_0009bd6c[0xb];
        acStack_2004[0] = s_get_test_loop_securely_find_asic_0009bd6c[0xc];
        acStack_2004[1] = s_get_test_loop_securely_find_asic_0009bd6c[0xd];
        acStack_2004[2] = s_get_test_loop_securely_find_asic_0009bd6c[0xe];
        acStack_2004[3] = s_get_test_loop_securely_find_asic_0009bd6c[0xf];
        local_2000[0] = s_get_test_loop_securely_find_asic_0009bd6c[0x10];
        local_2000[1] = s_get_test_loop_securely_find_asic_0009bd6c[0x11];
        local_2000[2] = s_get_test_loop_securely_find_asic_0009bd6c[0x12];
        local_2000[3] = s_get_test_loop_securely_find_asic_0009bd6c[0x13];
        local_1ffc[0] = s_get_test_loop_securely_find_asic_0009bd6c[0x14];
        local_1ffc[1] = s_get_test_loop_securely_find_asic_0009bd6c[0x15];
        local_1ffc[2] = s_get_test_loop_securely_find_asic_0009bd6c[0x16];
        local_1ffc[3] = s_get_test_loop_securely_find_asic_0009bd6c[0x17];
        local_1ff8._0_1_ = s_get_test_loop_securely_find_asic_0009bd6c[0x18];
        local_1ff8._1_1_ = s_get_test_loop_securely_find_asic_0009bd6c[0x19];
        local_1ff8._2_1_ = s_get_test_loop_securely_find_asic_0009bd6c[0x1a];
        cStack_1ff5 = s_get_test_loop_securely_find_asic_0009bd6c[0x1b];
        local_1ff4[0] = s_get_test_loop_securely_find_asic_0009bd6c[0x1c];
        local_1ff4[1] = s_get_test_loop_securely_find_asic_0009bd6c[0x1d];
        local_1ff4[2] = s_get_test_loop_securely_find_asic_0009bd6c[0x1e];
        local_1ff4[3] = s_get_test_loop_securely_find_asic_0009bd6c[0x1f];
        local_1ff0._0_1_ = s_get_test_loop_securely_find_asic_0009bd6c[0x20];
        local_1ff0._1_1_ = s_get_test_loop_securely_find_asic_0009bd6c[0x21];
        local_1ff0._2_1_ = s_get_test_loop_securely_find_asic_0009bd6c[0x22];
        cStack_1fed = s_get_test_loop_securely_find_asic_0009bd6c[0x23];
        acStack_1fec[0] = s_get_test_loop_securely_find_asic_0009bd6c[0x24];
        acStack_1fec[1] = s_get_test_loop_securely_find_asic_0009bd6c[0x25];
        acStack_1fec[2] = s_get_test_loop_securely_find_asic_0009bd6c[0x26];
        acStack_1fec[3] = s_get_test_loop_securely_find_asic_0009bd6c[0x27];
        acStack_1fe8[0] = s_get_test_loop_securely_find_asic_0009bd6c[0x28];
        acStack_1fe8[1] = s_get_test_loop_securely_find_asic_0009bd6c[0x29];
        acStack_1fe8[2] = s_get_test_loop_securely_find_asic_0009bd6c[0x2a];
        acStack_1fe8[3] = s_get_test_loop_securely_find_asic_0009bd6c[0x2b];
        local_1fe4 = (undefined1)ram0x0009bd98;
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
        local_2010[0] = s_get_pid_target_temp_failed_0009bdd4[0];
        local_2010[1] = s_get_pid_target_temp_failed_0009bdd4[1];
        local_2010[2] = s_get_pid_target_temp_failed_0009bdd4[2];
        local_2010[3] = s_get_pid_target_temp_failed_0009bdd4[3];
        acStack_200c[0] = s_get_pid_target_temp_failed_0009bdd4[4];
        acStack_200c[1] = s_get_pid_target_temp_failed_0009bdd4[5];
        acStack_200c[2] = s_get_pid_target_temp_failed_0009bdd4[6];
        acStack_200c[3] = s_get_pid_target_temp_failed_0009bdd4[7];
        uStack_2008._0_1_ = s_get_pid_target_temp_failed_0009bdd4[8];
        uStack_2008._1_1_ = s_get_pid_target_temp_failed_0009bdd4[9];
        uStack_2008._2_1_ = s_get_pid_target_temp_failed_0009bdd4[10];
        cStack_2005 = s_get_pid_target_temp_failed_0009bdd4[0xb];
        acStack_2004[0] = s_get_pid_target_temp_failed_0009bdd4[0xc];
        acStack_2004[1] = s_get_pid_target_temp_failed_0009bdd4[0xd];
        acStack_2004[2] = s_get_pid_target_temp_failed_0009bdd4[0xe];
        acStack_2004[3] = s_get_pid_target_temp_failed_0009bdd4[0xf];
        local_2000[0] = s_get_pid_target_temp_failed_0009bdd4[0x10];
        local_2000[1] = s_get_pid_target_temp_failed_0009bdd4[0x11];
        local_2000[2] = s_get_pid_target_temp_failed_0009bdd4[0x12];
        local_2000[3] = s_get_pid_target_temp_failed_0009bdd4[0x13];
        local_1ffc[0] = s_get_pid_target_temp_failed_0009bdd4[0x14];
        local_1ffc[1] = s_get_pid_target_temp_failed_0009bdd4[0x15];
        local_1ffc[2] = s_get_pid_target_temp_failed_0009bdd4[0x16];
        local_1ffc[3] = s_get_pid_target_temp_failed_0009bdd4[0x17];
        local_1ff8._0_1_ = s_get_pid_target_temp_failed_0009bdd4[0x18];
        local_1ff8._1_1_ = s_get_pid_target_temp_failed_0009bdd4[0x19];
        local_1ff8._2_1_ = s_get_pid_target_temp_failed_0009bdd4[0x1a];
        cStack_1ff5 = s_get_pid_target_temp_failed_0009bdd4[0x1b];
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
        local_2010[0] = s_get_voltage_adjust_setp_failed_0009be04[0];
        local_2010[1] = s_get_voltage_adjust_setp_failed_0009be04[1];
        local_2010[2] = s_get_voltage_adjust_setp_failed_0009be04[2];
        local_2010[3] = s_get_voltage_adjust_setp_failed_0009be04[3];
        acStack_200c[0] = s_get_voltage_adjust_setp_failed_0009be04[4];
        acStack_200c[1] = s_get_voltage_adjust_setp_failed_0009be04[5];
        acStack_200c[2] = s_get_voltage_adjust_setp_failed_0009be04[6];
        acStack_200c[3] = s_get_voltage_adjust_setp_failed_0009be04[7];
        uStack_2008._0_1_ = s_get_voltage_adjust_setp_failed_0009be04[8];
        uStack_2008._1_1_ = s_get_voltage_adjust_setp_failed_0009be04[9];
        uStack_2008._2_1_ = s_get_voltage_adjust_setp_failed_0009be04[10];
        cStack_2005 = s_get_voltage_adjust_setp_failed_0009be04[0xb];
        acStack_2004[0] = s_get_voltage_adjust_setp_failed_0009be04[0xc];
        acStack_2004[1] = s_get_voltage_adjust_setp_failed_0009be04[0xd];
        acStack_2004[2] = s_get_voltage_adjust_setp_failed_0009be04[0xe];
        acStack_2004[3] = s_get_voltage_adjust_setp_failed_0009be04[0xf];
        local_2000[0] = s_get_voltage_adjust_setp_failed_0009be04[0x10];
        local_2000[1] = s_get_voltage_adjust_setp_failed_0009be04[0x11];
        local_2000[2] = s_get_voltage_adjust_setp_failed_0009be04[0x12];
        local_2000[3] = s_get_voltage_adjust_setp_failed_0009be04[0x13];
        local_1ffc[0] = s_get_voltage_adjust_setp_failed_0009be04[0x14];
        local_1ffc[1] = s_get_voltage_adjust_setp_failed_0009be04[0x15];
        local_1ffc[2] = s_get_voltage_adjust_setp_failed_0009be04[0x16];
        local_1ffc[3] = s_get_voltage_adjust_setp_failed_0009be04[0x17];
        local_1ff8._0_1_ = s_get_voltage_adjust_setp_failed_0009be04[0x18];
        local_1ff8._1_1_ = s_get_voltage_adjust_setp_failed_0009be04[0x19];
        local_1ff8._2_1_ = s_get_voltage_adjust_setp_failed_0009be04[0x1a];
        cStack_1ff5 = s_get_voltage_adjust_setp_failed_0009be04[0x1b];
        local_1ff4[0] = s_get_voltage_adjust_setp_failed_0009be04[0x1c];
        local_1ff4[1] = s_get_voltage_adjust_setp_failed_0009be04[0x1d];
        local_1ff4[2] = s_get_voltage_adjust_setp_failed_0009be04[0x1e];
        local_1ff4[3] = s_get_voltage_adjust_setp_failed_0009be04[0x1f];
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


