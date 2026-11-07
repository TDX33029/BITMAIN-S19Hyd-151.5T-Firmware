// FUN_00059964 @ 00059964  size=652  callers=0
// program: bmminer


undefined4 FUN_00059964(uint *param_1)

{
  pthread_t __th;
  int iVar1;
  int iVar2;
  size_t sVar3;
  void *__buf;
  ssize_t sVar4;
  uint uVar5;
  undefined4 local_260;
  socklen_t local_25c;
  char local_258 [16];
  sockaddr local_248;
  sockaddr sStack_238;
  char local_228 [256];
  char local_128 [260];
  
  __th = pthread_self();
  pthread_detach(__th);
  local_258[0] = '\0';
  local_258[1] = '\0';
  local_258[2] = '\0';
  local_258[3] = '\0';
  local_258[4] = '\0';
  local_258[5] = '\0';
  local_258[6] = '\0';
  local_258[7] = '\0';
  local_258[8] = '\0';
  local_258[9] = '\0';
  local_258[10] = '\0';
  local_258[0xb] = '\0';
  local_258[0xc] = '\0';
  local_258[0xd] = '\0';
  local_258[0xe] = '\0';
  local_258[0xf] = '\0';
  sprintf(local_258,"ct_b/fcb/%d",*param_1);
  prctl(0xf,local_258);
  local_248.sa_family = 2;
  local_248.sa_data._2_4_ = inet_addr("127.0.0.1");
  iVar1 = socket(2,1,0);
  if (iVar1 < 0) {
    perror("socket error");
    return 0;
  }
  local_260 = 1;
  iVar2 = setsockopt(iVar1,1,2,&local_260,4);
  if (iVar2 < 0) {
    perror("set sockopt err");
    return 0;
  }
  uVar5 = *param_1;
  while( true ) {
    local_248.sa_data._0_2_ = (ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff;
    iVar2 = bind(iVar1,&local_248,0x10);
    if (-1 < iVar2) break;
    perror("bind error");
    uVar5 = *param_1 + 1;
    *param_1 = uVar5;
  }
  iVar2 = listen(iVar1,5);
  if (iVar2 < 0) {
    perror("listen error");
  }
  else {
    local_25c = 0x10;
    param_1[0x24] = 1;
    iVar1 = accept(iVar1,&sStack_238,&local_25c);
    if (-1 < iVar1) {
      local_228[0] = '\0';
      local_228[1] = '\0';
      local_228[2] = '\0';
      local_228[3] = '\0';
      memset(local_228 + 4,0,0xfc);
      sprintf(local_228,"%x %s\n",0x3f,(char *)(param_1 + 4));
      sVar3 = strlen(local_228);
      send(iVar1,local_228,sVar3 + 1,0);
      sVar3 = param_1[0x25];
      __buf = malloc(sVar3);
      sVar4 = recv(iVar1,__buf,sVar3,0);
      if (0 < sVar4) {
        *(undefined1 *)((int)__buf + sVar4) = 0;
      }
      do {
        sVar4 = recv(iVar1,__buf,param_1[0x25],0);
        if (sVar4 < 1) {
          iVar2 = 0;
        }
        else {
          iVar2 = 0;
          if ((code *)param_1[3] != (code *)0x0) {
            iVar2 = (*(code *)param_1[3])(__buf);
          }
        }
        local_128[0] = '\0';
        local_128[1] = '\0';
        local_128[2] = '\0';
        local_128[3] = '\0';
        memset(local_128 + 4,0,0xfc);
        sprintf(local_128,"%x %d %s %s",0x3f,iVar2,(char *)(param_1 + 4),"OK");
        sVar3 = strlen(local_128);
        send(iVar1,local_128,sVar3 + 1,0);
      } while( true );
    }
    perror("accept error");
  }
  return 0;
}

