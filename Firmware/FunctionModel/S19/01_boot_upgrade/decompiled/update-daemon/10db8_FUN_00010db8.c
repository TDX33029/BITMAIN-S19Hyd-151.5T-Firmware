// FUN_00010db8 @ 00010db8  size=280  callers=1
// program: update-daemon


int FUN_00010db8(char *param_1)

{
  in_addr_t iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  ssize_t sVar5;
  sockaddr local_420;
  char local_410 [1024];
  
  if (param_1 != (char *)0x0) {
    local_420.sa_family = 2;
    local_420.sa_data[4] = '\0';
    local_420.sa_data[5] = '\0';
    local_420.sa_data[6] = '\0';
    local_420.sa_data[7] = '\0';
    local_420.sa_data[8] = '\0';
    local_420.sa_data[9] = '\0';
    local_420.sa_data[10] = '\0';
    local_420.sa_data[0xb] = '\0';
    local_420.sa_data[0xc] = '\0';
    local_420.sa_data[0xd] = '\0';
    local_420.sa_data[0] = '\0';
    local_420.sa_data[1] = '\0';
    local_420.sa_data[2] = '\0';
    local_420.sa_data[3] = '\0';
    iVar1 = inet_addr("127.0.0.1");
    local_420.sa_data._2_2_ = SUB42(iVar1,0);
    local_420.sa_data._4_2_ = SUB42(iVar1 >> 0x10,0);
    local_420.sa_data._0_2_ = FUN_00010bd8("22322");
    iVar2 = socket(2,1,0);
    if (iVar2 < 0) {
      perror("socket err:");
      return -1;
    }
    iVar3 = connect(iVar2,&local_420,0x10);
    if (iVar3 < 0) {
      perror("connect err:");
      return -2;
    }
    sVar4 = strlen(param_1);
    send(iVar2,param_1,sVar4 + 1,0);
    local_410[0] = '\0';
    local_410[1] = '\0';
    local_410[2] = '\0';
    local_410[3] = '\0';
    memset(local_410 + 4,0,0x3fc);
    sVar5 = recv(iVar2,local_410,0x400,0);
    if (0 < sVar5) {
      (&local_420)[1].sa_data[sVar5 + -2] = '\0';
      iVar2 = FUN_00010bd8(local_410);
      if (iVar2 == 200) {
        return 0;
      }
      return iVar2;
    }
  }
  return -3;
}

