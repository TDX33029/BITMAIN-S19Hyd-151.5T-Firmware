// FUN_0003d7f0 @ 0003d7f0  size=616  callers=1
// program: bmminer


void FUN_0003d7f0(void)

{
  undefined4 uVar1;
  uint __seed;
  long lVar2;
  int local_2020;
  uint local_201c;
  char local_2018 [24];
  undefined4 local_2000;
  char acStack_1ffc [8168];
  
  FUN_0004bd34(&local_2020);
  if (DAT_008c7098 == 0 && DAT_008c709c == 0) {
    FUN_0004bd34();
    return;
  }
  local_2020 = local_2020 - DAT_008c7098;
  if ((int)(local_201c - DAT_008c709c) < 0) {
    local_2020 = local_2020 + -1;
  }
  if ((local_2020 < 0x12d) || (DAT_000c045c == '\0')) {
    if (DAT_000c74c0 != 0) {
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2018,"network connection resum",0x18);
        local_2000._0_1_ = 'e';
        local_2000._1_1_ = ',';
        local_2000._2_1_ = ' ';
        local_2000._3_1_ = 'r';
        builtin_strncpy(acStack_1ffc,"estart",7);
        FUN_0004948c(3,local_2018,0);
      }
      FUN_0004e8c8(6,"network connection resume, restart...");
      DAT_000c74c0 = 0;
      DAT_000c74bc = 0;
      return;
    }
    if (DAT_000c74bc != 0) {
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2018,"network connection resum",0x18);
        local_2000._0_1_ = 'e';
        local_2000._1_1_ = '\0';
        FUN_0004948c(3,local_2018,0);
      }
      uVar1 = FUN_0004e8b8();
      FUN_0004e8c8(uVar1,0);
      DAT_000c74bc = 0;
    }
  }
  else if (DAT_000c74bc == 0) {
    FUN_0004e8c8(3,"network connection lost");
    __seed = FUN_00044b08();
    if (__seed == 0) {
      __seed = local_201c;
    }
    srandom(__seed);
    lVar2 = random();
    DAT_000c74bc = lVar2 % 300 + 1;
    if (3 < DAT_000be63c) {
      snprintf(local_2018,0x2000,"will power off in %d seconds in case not resume",DAT_000c74bc);
      FUN_0004948c(3,local_2018,0);
    }
  }
  else if ((DAT_000c74bc + 299 < local_2020) && (DAT_000c74c0 == 0)) {
    if (3 < DAT_000be63c) {
      snprintf(local_2018,0x2000,"network connection lost for 5 min + %d seconds, power off...",
               DAT_000c74bc);
      FUN_0004948c(3,local_2018,0);
    }
    FUN_00024584();
    DAT_000c74c0 = 1;
  }
  return;
}

