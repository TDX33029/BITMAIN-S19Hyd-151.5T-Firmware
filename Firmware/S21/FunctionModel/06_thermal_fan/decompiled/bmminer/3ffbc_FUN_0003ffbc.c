// FUN_0003ffbc @ 0003ffbc  size=1472  callers=0
// program: bmminer


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
  char local_2028 [16];
  undefined4 local_2018;
  char acStack_2014 [20];
  uint local_2000;
  
  if (3 < DAT_000be63c) {
    builtin_strncpy(local_2028,"tuning_freq_thre",0x10);
    local_2018._0_1_ = 'a';
    local_2018._1_1_ = 'd';
    local_2018._2_1_ = ' ';
    local_2018._3_1_ = 's';
    builtin_strncpy(acStack_2014,"tart waiting to work",0x14);
    local_2000 = local_2000 & 0xffffff00;
    FUN_0004948c(3,local_2028,0);
  }
  sem_wait((sem_t *)&DAT_012a2938);
  if (3 < DAT_000be63c) {
    builtin_strncpy(local_2028,"tuning freq star",0x10);
    local_2018._0_1_ = 't';
    local_2018._1_1_ = '\0';
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
    builtin_strncpy(local_2028,"tuning_freq_matr",0x10);
    local_2018._0_1_ = 'i';
    local_2018._1_1_ = 'x';
    local_2018._2_1_ = '_';
    local_2018._3_1_ = 't';
    builtin_strncpy(acStack_2014,"hread set freq compl",0x14);
    local_2000._0_1_ = 'e';
    local_2000._1_1_ = 't';
    local_2000._2_1_ = 'e';
    local_2000._3_1_ = '\0';
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
    builtin_strncpy(local_2028,"set voltage to w",0x10);
    local_2018._0_1_ = 'o';
    local_2018._1_1_ = 'r';
    local_2018._2_1_ = 'k';
    local_2018._3_1_ = ' ';
    builtin_strncpy(acStack_2014,"voltage",8);
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
    builtin_strncpy(local_2028,"tuning freq end",0x10);
    FUN_0004948c(3,local_2028,0);
  }
  remove("/config/find_asic_counter");
  return 0;
}

