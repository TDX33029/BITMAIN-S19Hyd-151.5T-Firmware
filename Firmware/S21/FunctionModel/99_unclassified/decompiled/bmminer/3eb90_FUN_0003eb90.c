// FUN_0003eb90 @ 0003eb90  size=624  callers=1
// program: bmminer


void FUN_0003eb90(void)

{
  FILE *__stream;
  int iVar1;
  char *__s;
  char *pcVar2;
  long lVar3;
  long param8;
  size_t sVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  __time_t local_203c;
  timeval local_2038;
  tm local_2030 [186];
  
  __stream = fopen("/tmp/miner/droa.log","r+");
  if (__stream == (FILE *)0x0) {
    if (3 < DAT_000be63c) {
      local_2030[0].tm_sec._0_1_ = 'd';
      local_2030[0].tm_sec._1_1_ = 'r';
      local_2030[0].tm_sec._2_1_ = 'o';
      local_2030[0].tm_sec._3_1_ = 'a';
      local_2030[0].tm_min._0_1_ = 'l';
      local_2030[0].tm_min._1_1_ = 'o';
      local_2030[0].tm_min._2_1_ = 'g';
      local_2030[0].tm_min._3_1_ = ' ';
      local_2030[0].tm_hour._0_1_ = 'o';
      local_2030[0].tm_hour._1_1_ = 'p';
      local_2030[0].tm_hour._2_1_ = 'e';
      local_2030[0].tm_hour._3_1_ = 'n';
      local_2030[0].tm_mday._0_1_ = ' ';
      local_2030[0].tm_mday._1_1_ = 'f';
      local_2030[0].tm_mday._2_1_ = 'a';
      local_2030[0].tm_mday._3_1_ = 'i';
      local_2030[0].tm_mon._0_1_ = 'l';
      local_2030[0].tm_mon._1_1_ = 'e';
      local_2030[0].tm_mon._2_1_ = 'd';
      local_2030[0].tm_mon._3_1_ = ' ';
      local_2030[0].tm_year._0_1_ = 'i';
      local_2030[0].tm_year._1_1_ = 'n';
      local_2030[0].tm_year._2_1_ = ' ';
      local_2030[0].tm_year._3_1_ = '1';
      local_2030[0].tm_wday._0_1_ = '5';
      local_2030[0].tm_wday._1_1_ = ' ';
      local_2030[0].tm_wday._2_1_ = 'm';
      local_2030[0].tm_wday._3_1_ = 'i';
      local_2030[0].tm_yday._0_1_ = 'n';
      local_2030[0].tm_yday._1_1_ = 'u';
      local_2030[0].tm_yday._2_1_ = 't';
      local_2030[0].tm_yday._3_1_ = 'e';
      local_2030[0].tm_isdst._0_1_ = 0;
      FUN_0004948c(3,local_2030,0);
    }
    return;
  }
  fseek(__stream,-2,2);
  uVar5 = 0;
  while (iVar1 = fgetc(__stream), iVar1 != 10) {
    uVar5 = uVar5 + 1;
    fseek(__stream,-2,1);
  }
  fseek(__stream,~uVar5,2);
  __s = calloc(0x200,1);
  fgets(__s,0x200,__stream);
  pcVar2 = strstr(__s,"RTime:");
  if (pcVar2 == (char *)0x0) {
    if (3 < DAT_000be63c) {
      lVar3 = FUN_0002e388();
      uVar6 = FUN_0002a71c();
      iVar1 = FUN_0004e8a8();
      snprintf((char *)local_2030,0x2000,"RTime:%ld,AR:%f,RStat:%d",lVar3,
               (double)CONCAT44(extraout_s1_00,uVar6),iVar1);
      FUN_0004a06c(3,local_2030,0);
    }
  }
  else {
    local_2038.tv_sec = 0;
    local_2038.tv_usec = 0;
    gettimeofday(&local_2038,(__timezone_ptr_t)0x0);
    local_203c = local_2038.tv_sec;
    localtime_r(&local_203c,local_2030);
    fseek(__stream,~uVar5,2);
    lVar3 = ftell(__stream);
    memset(__s,0,0x200);
    param8 = FUN_0002e388();
    uVar6 = FUN_0002a71c();
    iVar1 = FUN_0004e8a8();
    sprintf(__s,"%d-%02d-%02d %02d:%02d:%02d RTime:%ld,AR:%1f,RStat:%d\n",
            local_2030[0].tm_year + 0x76c,local_2030[0].tm_mon + 1,local_2030[0].tm_mday,
            local_2030[0].tm_hour,local_2030[0].tm_min,local_2030[0].tm_sec,param8,
            (double)CONCAT44(extraout_s1,uVar6),iVar1);
    fprintf(__stream,__s);
    fflush(__stream);
    fclose(__stream);
    sVar4 = strlen(__s);
    truncate("/tmp/miner/droa.log",lVar3 + sVar4);
  }
  free(__s);
  return;
}

