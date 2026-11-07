// FUN_00084240 @ 00084240  size=784  callers=1
// program: bmminer


undefined4 FUN_00084240(int param_1,int param_2)

{
  void *pvVar1;
  in_addr_t iVar2;
  int __fd;
  int iVar3;
  size_t sVar4;
  ssize_t sVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined *__dest;
  void *pvVar8;
  uint uVar9;
  undefined4 local_470;
  socklen_t local_46c;
  pthread_t pStack_468;
  sockaddr local_464;
  sockaddr sStack_454;
  pthread_attr_t pStack_444;
  char local_420 [128];
  char local_3a0 [128];
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined *puStack_314;
  undefined1 auStack_310 [240];
  undefined4 local_220;
  undefined1 auStack_21c [512];
  
  if (DAT_00a463bc == 0) {
    pthread_attr_init(&pStack_444);
    pthread_attr_setstacksize(&pStack_444,0x100000);
    pthread_mutex_init((pthread_mutex_t *)&DAT_00a463c0,(pthread_mutexattr_t *)0x0);
    DAT_00a463b8 = param_2;
    if (param_2 != 0) {
      __dest = &DAT_00a4a3e0;
      pvVar6 = (void *)(param_1 + 4);
      do {
        pvVar1 = memcpy(__dest,pvVar6,0x80);
        pvVar8 = (void *)((int)pvVar6 + 0x88);
        uVar7 = *(undefined4 *)((int)pvVar6 + -4);
        __dest = (undefined *)((int)pvVar1 + 0x88);
        *(undefined4 *)((int)pvVar1 + 0x80) = *(undefined4 *)((int)pvVar6 + 0x80);
        *(undefined4 *)((int)pvVar1 + -4) = uVar7;
        pvVar6 = pvVar8;
      } while (pvVar8 != (void *)(param_1 + 4 + param_2 * 0x88));
    }
    local_464.sa_data[4] = '\0';
    local_464.sa_data[5] = '\0';
    local_464.sa_data[6] = '\0';
    local_464.sa_data[7] = '\0';
    local_464.sa_data[8] = '\0';
    local_464.sa_data[9] = '\0';
    local_464.sa_data[10] = '\0';
    local_464.sa_data[0xb] = '\0';
    local_464.sa_data[0xc] = '\0';
    local_464.sa_data[0xd] = '\0';
    local_464.sa_data[0] = '\0';
    local_464.sa_data[1] = '\0';
    local_464.sa_data[2] = '\0';
    local_464.sa_data[3] = '\0';
    local_464.sa_family = 2;
    iVar2 = inet_addr("127.0.0.1");
    local_464.sa_data._2_2_ = SUB42(iVar2,0);
    local_464.sa_data._4_2_ = SUB42(iVar2 >> 0x10,0);
    local_470 = 1;
    __fd = socket(2,1,0);
    if (__fd < 0) {
      uVar7 = 0xfffffffc;
      perror("socket error");
    }
    else {
      iVar3 = setsockopt(__fd,1,2,&local_470,4);
      if (iVar3 < 0) {
        uVar7 = 0xfffffffc;
        perror("set sockopt err");
      }
      else {
        uVar9 = 0x560a;
        while( true ) {
          local_464.sa_data._0_2_ = (ushort)((uVar9 & 0xff) << 8) | (ushort)(uVar9 >> 8) & 0xff;
          uVar9 = uVar9 + 1;
          iVar3 = bind(__fd,&local_464,0x10);
          if (-1 < iVar3) break;
          perror("bind error");
        }
        iVar3 = listen(__fd,5);
        if (iVar3 < 0) {
          uVar7 = 0xfffffffc;
          perror("listen error");
        }
        else {
          local_46c = 0x10;
          iVar3 = accept(__fd,&sStack_454,&local_46c);
          if (iVar3 < 0) {
            uVar7 = 0xfffffffc;
            perror("accept error");
          }
          else {
            local_420[0] = '\0';
            local_420[1] = '\0';
            local_420[2] = '\0';
            local_420[3] = '\0';
            memset(local_420 + 4,0,0x7c);
            sprintf(local_420,"Hello!0x%x\n",0x3f);
            sVar4 = strlen(local_420);
            send(iVar3,local_420,sVar4 + 1,0);
            DAT_00a463bc = 1;
            local_220 = 0;
            DAT_00a463d8 = iVar3;
            memset(auStack_21c,0,0x1fc);
            sVar5 = recv(iVar3,&local_220,0x400,0);
            if (0 < sVar5) {
              auStack_310[sVar5 + 0xf0] = 0;
            }
            uStack_320 = 0x20333231;
            uStack_31c = 0x20363534;
            uStack_318 = 0x20393837;
            puStack_314 = &DAT_00636261;
            memset(auStack_310,0,0xf0);
            send(iVar3,&uStack_320,0x10,0);
            local_3a0[0] = '\0';
            local_3a0[1] = '\0';
            local_3a0[2] = '\0';
            local_3a0[3] = '\0';
            memset(local_3a0 + 4,0,0x7c);
            sVar5 = recv(iVar3,local_3a0,0x15,0);
            if (0 < sVar5) {
              local_420[sVar5 + 0x80] = '\0';
            }
            pvVar6 = malloc(0xc);
            *(int *)((int)pvVar6 + 8) = iVar3;
            *(int *)((int)pvVar6 + 4) = __fd;
            pthread_create(&pStack_468,&pStack_444,FUN_00083f00,pvVar6);
            uVar7 = 0;
          }
        }
      }
    }
  }
  else {
    uVar7 = 0xffffffff;
  }
  return uVar7;
}

