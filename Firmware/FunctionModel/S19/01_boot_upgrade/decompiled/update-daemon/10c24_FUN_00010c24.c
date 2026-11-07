// FUN_00010c24 @ 00010c24  size=404  callers=0
// program: update-daemon


void FUN_00010c24(int *param_1)

{
  uint param1;
  size_t sVar1;
  int __fd;
  uint param1_00;
  char local_820 [16];
  char local_810 [1024];
  char local_410 [1024];
  
  puts("New Thread!\r");
  local_810[0] = '\0';
  local_810[1] = '\0';
  local_810[2] = '\0';
  local_810[3] = '\0';
  memset(local_810 + 4,0,0x3fc);
  __fd = *param_1;
  read(__fd,local_810,0x400);
  printf("Recv:\'%s\'\r\n",local_810);
  builtin_strncpy(local_410,"/usr/sbin/updateporc.sh ",0x19);
  memset(local_410 + 0x19,0,999);
  strcpy(local_410 + 0x18,local_810);
  builtin_strncpy(local_820,"Come On WUHAN",0xe);
  param1 = system(local_410);
  if (param1 == 0xffffffff) {
    puts("system err!\r");
    builtin_strncpy(local_820,"500",4);
  }
  else {
    printf("system status:[%d]\r\n",param1);
    param1_00 = (param1 & 0xffff) >> 8;
    if ((param1 & 0x7f) == 0) {
      if (param1_00 == 0) {
        puts("Shell Exec Successfully!\r");
        builtin_strncpy(local_820,"200",4);
      }
      else {
        printf("Shell Execute Failed, Ret[%d]\r\n",param1_00);
        sprintf(local_820,"%d",param1_00);
      }
    }
    else {
      printf("Other Exit Ret[%d]\r\n",param1_00);
      sprintf(local_820,"6%d",param1_00);
    }
  }
  sVar1 = strlen(local_820);
  write(__fd,local_820,sVar1 + 1);
  close(__fd);
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}

