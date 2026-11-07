// FUN_00010c8c @ 00010c8c  size=556  callers=0
// program: update-daemon


void FUN_00010c8c(int *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort **ppuVar3;
  size_t sVar4;
  byte *pbVar5;
  uint uVar6;
  uint param1;
  int __fd;
  char local_820 [16];
  undefined4 local_810;
  undefined1 auStack_80c [1020];
  char local_410 [1024];
  
  puts("New Thread!\r");
  local_810 = 0;
  memset(auStack_80c,0,0x3fc);
  __fd = *param_1;
  read(__fd,&local_810,0x400);
  printf("Recv:\'%s\'\r\n",(char *)&local_810);
  iVar2 = access((char *)&local_810,0);
  if (iVar2 != 0) {
    printf("File does not exist: %s\n",(char *)&local_810);
    close(__fd);
                    /* WARNING: Subroutine does not return */
    pthread_exit((void *)0x0);
  }
  uVar6 = local_810 & 0xff;
  if (uVar6 != 0) {
    ppuVar3 = __ctype_b_loc();
    pbVar5 = (byte *)&local_810;
    do {
      uVar1 = (*ppuVar3)[uVar6];
      if ((((uVar1 & 8) == 0) && (uVar6 != 0x5f)) && (2 < uVar6 - 0x2d)) {
        puts("Invalid client content.");
        close(__fd);
                    /* WARNING: Subroutine does not return */
        pthread_exit((void *)(uVar1 & 8));
      }
      pbVar5 = pbVar5 + 1;
      uVar6 = (uint)*pbVar5;
    } while (uVar6 != 0);
  }
  builtin_strncpy(local_410,"/usr/sbin/updateporc.sh ",0x19);
  memset(local_410 + 0x19,0,999);
  strcpy(local_410 + 0x18,(char *)&local_810);
  builtin_strncpy(local_820,"Come On WUHAN",0xe);
  uVar6 = system(local_410);
  if (uVar6 == 0xffffffff) {
    puts("system err!\r");
    builtin_strncpy(local_820,"500",4);
  }
  else {
    param1 = (uVar6 & 0xffff) >> 8;
    printf("system status:[%d]\r\n",uVar6);
    if ((uVar6 & 0x7f) == 0) {
      if (param1 == 0) {
        puts("Shell Exec Successfully!\r");
        builtin_strncpy(local_820,"200",4);
      }
      else {
        printf("Shell Execute Failed, Ret[%d]\r\n",param1);
        sprintf(local_820,"%d",param1);
      }
    }
    else {
      printf("Other Exit Ret[%d]\r\n",param1);
      sprintf(local_820,"6%d",param1);
    }
  }
  sVar4 = strlen(local_820);
  write(__fd,local_820,sVar4 + 1);
  close(__fd);
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}

