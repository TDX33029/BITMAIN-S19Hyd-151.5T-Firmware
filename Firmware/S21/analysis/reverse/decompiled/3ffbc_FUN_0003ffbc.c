// FUN_0003ffbc @ 0003ffbc  size=1472
// callers: []

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0003ffbc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  char local_2028 [4];
  char acStack_2024 [4];
  char acStack_2020 [4];
  char acStack_201c [4];
  undefined2 local_2018 [2];
  char acStack_2014 [4];
  char acStack_2010 [4];
  char acStack_200c [4];
  char local_2008 [4];
  char acStack_2004 [4];
  char local_2000 [8156];
  
  if (3 < DAT_000be63c) {
    local_2028 = (char  [4])s_tuning_freq_thread_start_waiting_000a0544._0_4_;
    acStack_2024 = (char  [4])s_tuning_freq_thread_start_waiting_000a0544._4_4_;
    acStack_2020 = (char  [4])s_tuning_freq_thread_start_waiting_000a0544._8_4_;
    acStack_201c = (char  [4])s_tuning_freq_thread_start_waiting_000a0544._12_4_;
    local_2018 = (undefined2  [2])s_tuning_freq_thread_start_waiting_000a0544._16_4_;
    acStack_2014 = (char  [4])s_tuning_freq_thread_start_waiting_000a0544._20_4_;
    acStack_2010 = (char  [4])s_tuning_freq_thread_start_waiting_000a0544._24_4_;
    acStack_200c = (char  [4])s_tuning_freq_thread_start_waiting_000a0544._28_4_;
    local_2008 = (char  [4])s_tuning_freq_thread_start_waiting_000a0544._32_4_;
    acStack_2004 = (char  [4])s_tuning_freq_thread_start_waiting_000a0544._36_4_;
    local_2000[0] = (char)ram0x000a056c;
    FUN_0004948c(3,local_2028,0);
  }
  sem_wait((sem_t *)&DAT_012a2938);
  if (3 < DAT_000be63c) {
    local_2028[0] = s_tuning_freq_start_000a0570[0];
    local_2028[1] = s_tuning_freq_start_000a0570[1];
    local_2028[2] = s_tuning_freq_start_000a0570[2];
    local_2028[3] = s_tuning_freq_start_000a0570[3];
    acStack_2024[0] = s_tuning_freq_start_000a0570[4];
    acStack_2024[1] = s_tuning_freq_start_000a0570[5];
    acStack_2024[2] = s_tuning_freq_start_000a0570[6];
    acStack_2024[3] = s_tuning_freq_start_000a0570[7];
    acStack_2020[0] = s_tuning_freq_start_000a0570[8];
    acStack_2020[1] = s_tuning_freq_start_000a0570[9];
    acStack_2020[2] = s_tuning_freq_start_000a0570[10];
    acStack_2020[3] = s_tuning_freq_start_000a0570[0xb];
    acStack_201c[0] = s_tuning_freq_start_000a0570[0xc];
    acStack_201c[1] = s_tuning_freq_start_000a0570[0xd];
    acStack_201c[2] = s_tuning_freq_start_000a0570[0xe];
    acStack_201c[3] = s_tuning_freq_start_000a0570[0xf];
    local_2018[0] = (short)ram0x000a0580;
    FUN_0004948c(3,local_2028,0);
  }
  FUN_0003fe90();
  iVar1 = FUN_00018b30();
  if (4 < DAT_000be63c) {
    snprintf(local_2028,0x2000,"waiting board temp come to %d",0x37);
    FUN_0004948c(4,local_2028,0);
  }
  if (iVar1 < 0x37) {
    FUN_0004bf68(1000);
    uVar8 = 1;
    do {
      while( true ) {
        uVar8 = uVar8 + 1;
        FUN_0004bf68(1000);
        if ((uVar8 % 10 != 0) || (DAT_000be63c < 5)) break;
        snprintf(local_2028,0x2000,"waiting asic temp to %d, curr temp %f when time %ds",0x37,
                 (double)DAT_000cb664,uVar8);
        FUN_0004948c(4,local_2028,0);
        if (uVar8 == 0x1e) goto LAB_000400ac;
      }
    } while (uVar8 != 0x1e);
LAB_000400ac:
    if (3 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"can not heat up to %d",0x37);
      FUN_0004948c(3,local_2028,0);
    }
  }
  iVar1 = FUN_0003fe90();
  iVar2 = FUN_00024c74();
  iVar2 = iVar2 + iVar1;
  if (0x883 < iVar2) {
    iVar2 = 0x884;
  }
  if (iVar2 < 0x6bd) {
    iVar2 = 0x6bd;
  }
  iVar1 = FUN_00024c74();
  if (iVar2 < iVar1) {
    pthread_setcancelstate(1,(int *)0x0);
    FUN_000246cc(iVar2,3);
    pthread_setcancelstate(0,(int *)0x0);
  }
  iVar1 = FUN_000281f0();
  uVar8 = DAT_00a4ed90;
  while ((iVar3 = FUN_0002e388(), iVar3 < 0x4b0 && (iVar3 = FUN_00018a2c(), iVar3 < 0x13))) {
    if (uVar8 < DAT_00a6c8d8) {
      uVar9 = FUN_00018a2c();
      if (10 < (int)uVar9) {
        uVar7 = DAT_00a6c8d8 - (iVar1 + -200);
        iVar3 = FUN_00018a2c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar7 * -0x33333333);
        uVar4 = (uVar7 / 10) * (iVar3 + -10) + iVar1 + -200;
        uVar7 = DAT_00a6c8d8;
        if (uVar4 < DAT_00a6c8d8) {
          uVar7 = uVar4;
        }
        if ((int)uVar8 < (int)uVar7) {
          FUN_00027460(uVar8,uVar7,iVar2,iVar2);
          uVar8 = uVar7;
        }
      }
    }
    FUN_0004bf68(5000);
  }
  iVar1 = FUN_00018a2c();
  if (iVar1 < 0x13) {
    FUN_0004e8c8(0x11,"temp too low");
    FUN_00056e88(9,0);
  }
  else {
    if (uVar8 < DAT_00a6c8d8) {
      FUN_00027460(uVar8,DAT_00a6c8d8,iVar2,iVar2,0);
    }
    FUN_00026ac0(DAT_000be614,&DAT_00aaa8f0,&DAT_00a6c8e8,&DAT_00a6c8d8,&DAT_008c8aa8,&DAT_008c7068,
                 &DAT_008c7064,DAT_008c7044,1000);
  }
  if (3 < DAT_000be63c) {
    local_2028 = (char  [4])s_tuning_freq_matrix_thread_set_fr_000a0600._0_4_;
    acStack_2024 = (char  [4])s_tuning_freq_matrix_thread_set_fr_000a0600._4_4_;
    acStack_2020 = (char  [4])s_tuning_freq_matrix_thread_set_fr_000a0600._8_4_;
    acStack_201c = (char  [4])s_tuning_freq_matrix_thread_set_fr_000a0600._12_4_;
    local_2018 = (undefined2  [2])s_tuning_freq_matrix_thread_set_fr_000a0600._16_4_;
    acStack_2014 = (char  [4])s_tuning_freq_matrix_thread_set_fr_000a0600._20_4_;
    acStack_2010 = (char  [4])s_tuning_freq_matrix_thread_set_fr_000a0600._24_4_;
    acStack_200c = (char  [4])s_tuning_freq_matrix_thread_set_fr_000a0600._28_4_;
    local_2008 = (char  [4])s_tuning_freq_matrix_thread_set_fr_000a0600._32_4_;
    acStack_2004 = (char  [4])s_tuning_freq_matrix_thread_set_fr_000a0600._36_4_;
    local_2000._0_4_ = s_tuning_freq_matrix_thread_set_fr_000a0600._40_4_;
    FUN_0004948c(3,local_2028,0);
  }
  iVar1 = FUN_00018a2c();
  if (iVar1 < 0x28) {
    uVar5 = 120000;
  }
  else {
    uVar5 = 20000;
  }
  FUN_0004bf68(uVar5);
  if (3 < DAT_000be63c) {
    local_2028[0] = s_set_voltage_to_work_voltage_000a062c[0];
    local_2028[1] = s_set_voltage_to_work_voltage_000a062c[1];
    local_2028[2] = s_set_voltage_to_work_voltage_000a062c[2];
    local_2028[3] = s_set_voltage_to_work_voltage_000a062c[3];
    acStack_2024[0] = s_set_voltage_to_work_voltage_000a062c[4];
    acStack_2024[1] = s_set_voltage_to_work_voltage_000a062c[5];
    acStack_2024[2] = s_set_voltage_to_work_voltage_000a062c[6];
    acStack_2024[3] = s_set_voltage_to_work_voltage_000a062c[7];
    acStack_2020[0] = s_set_voltage_to_work_voltage_000a062c[8];
    acStack_2020[1] = s_set_voltage_to_work_voltage_000a062c[9];
    acStack_2020[2] = s_set_voltage_to_work_voltage_000a062c[10];
    acStack_2020[3] = s_set_voltage_to_work_voltage_000a062c[0xb];
    acStack_201c[0] = s_set_voltage_to_work_voltage_000a062c[0xc];
    acStack_201c[1] = s_set_voltage_to_work_voltage_000a062c[0xd];
    acStack_201c[2] = s_set_voltage_to_work_voltage_000a062c[0xe];
    acStack_201c[3] = s_set_voltage_to_work_voltage_000a062c[0xf];
    local_2018 = (undefined2  [2])s_set_voltage_to_work_voltage_000a062c._16_4_;
    acStack_2014[0] = s_set_voltage_to_work_voltage_000a062c[0x14];
    acStack_2014[1] = s_set_voltage_to_work_voltage_000a062c[0x15];
    acStack_2014[2] = s_set_voltage_to_work_voltage_000a062c[0x16];
    acStack_2014[3] = s_set_voltage_to_work_voltage_000a062c[0x17];
    acStack_2010[0] = s_set_voltage_to_work_voltage_000a062c[0x18];
    acStack_2010[1] = s_set_voltage_to_work_voltage_000a062c[0x19];
    acStack_2010[2] = s_set_voltage_to_work_voltage_000a062c[0x1a];
    acStack_2010[3] = s_set_voltage_to_work_voltage_000a062c[0x1b];
    FUN_0004948c(3,local_2028,0);
  }
  iVar1 = FUN_00024c74();
  if ((iVar2 < iVar1) && (iVar3 = FUN_00024c74(), iVar3 != iVar2)) {
    while (iVar2 < iVar1 + -9) {
      iVar1 = iVar1 + -10;
      pthread_setcancelstate(1,(int *)0x0);
      FUN_000246cc(iVar1,3);
      pthread_setcancelstate(0,(int *)0x0);
      FUN_0004bf68(2000);
    }
    iVar1 = FUN_00024c74();
    if (iVar1 != iVar2) {
      pthread_setcancelstate(1,(int *)0x0);
      FUN_000246cc(iVar2,3);
      pthread_setcancelstate(0,(int *)0x0);
    }
  }
  uVar5 = FUN_0002a544();
  uVar6 = FUN_0002a574();
  iVar2 = FUN_00098658(uVar5,uVar6);
  iVar1 = (iVar2 * DAT_000be5f8 + 99) / 100;
  if (3 < DAT_000be63c) {
    snprintf(local_2028,0x2000,
             "opt_hashrate_percent %d  core_num_each_domain %d, old_enable_col_num %d",DAT_000be5f8,
             iVar2,iVar1);
    FUN_0004948c(3,local_2028,0);
  }
  if (DAT_000be5f8 != 100) {
    DAT_000c94d8 = 1;
  }
  FUN_00039950(iVar1,iVar2,0);
  DAT_000c74c4 = 1;
  if (3 < DAT_000be63c) {
    local_2028[0] = s_tuning_freq_end_000a0690[0];
    local_2028[1] = s_tuning_freq_end_000a0690[1];
    local_2028[2] = s_tuning_freq_end_000a0690[2];
    local_2028[3] = s_tuning_freq_end_000a0690[3];
    acStack_2024[0] = s_tuning_freq_end_000a0690[4];
    acStack_2024[1] = s_tuning_freq_end_000a0690[5];
    acStack_2024[2] = s_tuning_freq_end_000a0690[6];
    acStack_2024[3] = s_tuning_freq_end_000a0690[7];
    acStack_2020[0] = s_tuning_freq_end_000a0690[8];
    acStack_2020[1] = s_tuning_freq_end_000a0690[9];
    acStack_2020[2] = s_tuning_freq_end_000a0690[10];
    acStack_2020[3] = s_tuning_freq_end_000a0690[0xb];
    acStack_201c[0] = s_tuning_freq_end_000a0690[0xc];
    acStack_201c[1] = s_tuning_freq_end_000a0690[0xd];
    acStack_201c[2] = s_tuning_freq_end_000a0690[0xe];
    acStack_201c[3] = s_tuning_freq_end_000a0690[0xf];
    FUN_0004948c(3,local_2028,0);
  }
  remove("/config/find_asic_counter");
  return 0;
}


