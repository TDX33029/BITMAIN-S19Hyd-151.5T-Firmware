// FUN_0004d884 @ 0004d884  size=576  callers=0
// program: bmminer


undefined4 FUN_0004d884(void)

{
  char local_2020 [28];
  undefined4 local_2004;
  undefined2 local_2000;
  
  if (3 < DAT_000be63c) {
    builtin_strncpy(local_2020,"stable_test,test_handler sta",0x1c);
    local_2004._0_1_ = 'r';
    local_2004._1_1_ = 't';
    local_2004._2_1_ = '.';
    local_2004._3_1_ = '\0';
    FUN_0004948c(3,local_2020,0);
  }
  FUN_0004bd34(&DAT_00a6c8a8);
  if (DAT_008c7030 == 0) {
    if (3 < DAT_000be63c) {
      snprintf(local_2020,0x2000,"stable_test,first run ,wait until:%d.",0xe10);
      FUN_0004948c(3,local_2020,0);
    }
    do {
      sleep(10);
      FUN_0004bd34(&DAT_00a6c894);
      DAT_00a6c8b4 = (undefined *)(DAT_00a6c898 - DAT_00a6c8ac);
      DAT_00a6c8b0 = DAT_00a6c894 - DAT_00a6c8a8;
      if ((int)DAT_00a6c8b4 < 0) {
        DAT_00a6c8b0 = DAT_00a6c8b0 + -1;
        DAT_00a6c8b4 = &DAT_000f4240 + (int)DAT_00a6c8b4;
      }
    } while (DAT_00a6c8b0 < 0xe11);
  }
  if (3 < DAT_000be63c) {
    builtin_strncpy(local_2020,"stable_test,auto test start.",0x1c);
    local_2004._0_1_ = '.';
    local_2004._1_1_ = '\0';
    FUN_0004948c(3,local_2020,0);
  }
  FUN_0004bd34(&DAT_00a6c8a0);
  while (DAT_00a6c890 == 0) {
    sleep(10);
    FUN_0004bd34(&DAT_00a6c894);
    DAT_00a6c8b4 = (undefined *)(DAT_00a6c898 - DAT_00a6c8a4);
    DAT_00a6c8b0 = DAT_00a6c894 - DAT_00a6c8a0;
    if ((int)DAT_00a6c8b4 < 0) {
      DAT_00a6c8b4 = &DAT_000f4240 + (int)DAT_00a6c8b4;
      DAT_00a6c8b0 = DAT_00a6c8b0 + -1;
    }
    FUN_0004d828();
  }
  if (DAT_000be63c < 4) {
    return 0;
  }
  builtin_strncpy(local_2020,"catch test err ,stop stable ",0x1c);
  local_2004._0_1_ = 't';
  local_2004._1_1_ = 'e';
  local_2004._2_1_ = 's';
  local_2004._3_1_ = 't';
  local_2000 = 0x21;
  FUN_0004948c(3,local_2020,0);
  return 0;
}

