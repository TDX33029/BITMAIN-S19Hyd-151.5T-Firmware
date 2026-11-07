// FUN_00010b4c @ 00010b4c  size=592  callers=0
// program: cgminer-api


undefined4 FUN_00010b4c(char *param_1,char *param_2,uint param_3)

{
  hostent *phVar1;
  int __fd;
  int iVar2;
  size_t sVar3;
  ssize_t sVar4;
  char *pcVar5;
  int *piVar6;
  char *param1;
  int iVar7;
  undefined4 uVar8;
  char *__buf;
  sockaddr local_30;
  
  phVar1 = gethostbyname(param_2);
  if (phVar1 == (hostent *)0x0) {
    printf("Couldn\'t get hostname: \'%s\'\n",param_2);
  }
  else {
    __fd = socket(2,1,0);
    if (__fd == -1) {
      piVar6 = __errno_location();
      pcVar5 = strerror(*piVar6);
      printf("Socket initialisation failed: %s\n",pcVar5);
      return 1;
    }
    iVar7 = 0;
    local_30.sa_data[6] = '\0';
    local_30.sa_data[7] = '\0';
    local_30.sa_data._0_2_ = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
    local_30.sa_data[8] = '\0';
    local_30.sa_data[9] = '\0';
    local_30.sa_data[10] = '\0';
    local_30.sa_data[0xb] = '\0';
    local_30.sa_data[0xc] = '\0';
    local_30.sa_data[0xd] = '\0';
    local_30.sa_family = 2;
    local_30.sa_data._2_2_ = SUB42(*(undefined4 *)*phVar1->h_addr_list,0);
    local_30.sa_data._4_2_ = SUB42((uint)*(undefined4 *)*phVar1->h_addr_list >> 0x10,0);
    iVar2 = connect(__fd,&local_30,0x10);
    if (iVar2 < 0) {
      piVar6 = __errno_location();
      pcVar5 = strerror(*piVar6);
      printf("Socket connect failed: %s\n",pcVar5);
      return 1;
    }
    sVar3 = strlen(param_1);
    sVar4 = send(__fd,param_1,sVar3,0);
    if (sVar4 < 0) {
      piVar6 = __errno_location();
      uVar8 = 1;
      pcVar5 = strerror(*piVar6);
      printf("Send failed: %s\n",pcVar5);
LAB_00010d30:
      close(__fd);
      return uVar8;
    }
    pcVar5 = malloc(0x10000);
    if (pcVar5 == (char *)0x0) {
      printf("Err: OOM (%d)\n",0x10000);
    }
    else {
      iVar2 = 0xffff;
      do {
        do {
          __buf = pcVar5 + iVar7;
          sVar4 = recv(__fd,__buf,iVar2 - iVar7,0);
          iVar7 = iVar7 + sVar4;
          if (sVar4 < 0) {
            piVar6 = __errno_location();
            uVar8 = 1;
            param1 = strerror(*piVar6);
            printf("Recv failed: %s\n",param1);
LAB_00010d0c:
            *__buf = '\0';
            if (DAT_00022078 == 0) {
              printf("Reply was \'%s\'\n",pcVar5);
              FUN_000109b8(pcVar5);
            }
            else {
              puts(pcVar5);
            }
            goto LAB_00010d30;
          }
          uVar8 = 0;
          if (sVar4 == 0) goto LAB_00010d0c;
        } while (iVar2 != iVar7);
        sVar3 = iVar2 + 0x10000;
        iVar2 = iVar2 + 0xffff;
        pcVar5 = realloc(pcVar5,sVar3);
      } while (pcVar5 != (char *)0x0);
      printf("Err: OOM (%d)\n",sVar3);
    }
  }
  return 1;
}

