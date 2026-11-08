// FUN_00044b4c @ 00044b4c  size=680  callers=1
// program: cgminer


undefined4 FUN_00044b4c(char *param_1)

{
  pthread_mutex_t *__mutex;
  size_t sVar1;
  in_addr_t iVar2;
  int iVar3;
  int iVar4;
  ssize_t sVar5;
  undefined4 uVar6;
  uint local_498 [2];
  sockaddr local_490;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined1 auStack_41c [124];
  undefined4 local_3a0;
  undefined1 auStack_39c [124];
  undefined4 local_320;
  undefined1 auStack_31c [252];
  undefined4 local_220;
  undefined1 auStack_21c [512];
  
  if (DAT_0006a808 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    __mutex = malloc(0x24);
    pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    iVar4 = DAT_0006a824;
    local_320 = 0;
    memset(auStack_31c,0,0xfc);
    sprintf((char *)&local_320,"%x regist %s",0x3f,param_1);
    iVar3 = DAT_0006a800;
    sVar1 = strlen((char *)&local_320);
    send(iVar4,&local_320,sVar1 + 1,0);
    local_420 = 0;
    memset(auStack_41c,0,0x7c);
    while (iVar3 == DAT_0006a800) {
      usleep(1000);
    }
    memcpy(&local_420,(void *)(iVar3 * 0x80 + 0x6a828),0x80);
    local_498[0] = 0;
    local_498[1] = 0;
    local_480 = 0;
    local_47c = 0;
    local_460 = 0;
    local_45c = 0;
    local_440 = 0;
    local_43c = 0;
    local_478 = 0;
    local_474 = 0;
    local_470 = 0;
    local_46c = 0;
    local_468 = 0;
    local_464 = 0;
    local_458 = 0;
    local_454 = 0;
    local_450 = 0;
    local_44c = 0;
    local_448 = 0;
    local_444 = 0;
    local_438 = 0;
    local_434 = 0;
    local_430 = 0;
    local_42c = 0;
    local_428 = 0;
    local_424 = 0;
    __isoc99_sscanf(&local_420,"%x%d%s%s%s",local_498 + 1,local_498,&local_480,&local_460,&local_440
                   );
    if (local_498[0] == 0) {
      uVar6 = 0xfffffffc;
    }
    else {
      local_490.sa_family = 2;
      local_490.sa_data[0] = '\0';
      local_490.sa_data[1] = '\0';
      local_490.sa_data[2] = '\0';
      local_490.sa_data[3] = '\0';
      local_490.sa_data[4] = '\0';
      local_490.sa_data[5] = '\0';
      local_490.sa_data[6] = '\0';
      local_490.sa_data[7] = '\0';
      local_490.sa_data[8] = '\0';
      local_490.sa_data[9] = '\0';
      local_490.sa_data[10] = '\0';
      local_490.sa_data[0xb] = '\0';
      local_490.sa_data[0xc] = '\0';
      local_490.sa_data[0xd] = '\0';
      iVar2 = inet_addr("127.0.0.1");
      local_490.sa_data._2_2_ = SUB42(iVar2,0);
      local_490.sa_data._4_2_ = SUB42(iVar2 >> 0x10,0);
      local_490.sa_data._0_2_ =
           (ushort)((local_498[0] & 0xff) << 8) | (ushort)(local_498[0] >> 8) & 0xff;
      iVar3 = socket(2,1,0);
      if (iVar3 < 0) {
        perror("socket err:");
        uVar6 = 0xfffffffc;
      }
      else {
        iVar4 = connect(iVar3,&local_490,0x10);
        if (iVar4 < 0) {
          perror("connect err:");
          uVar6 = 0xfffffffd;
        }
        else {
          local_220 = 0;
          memset(auStack_21c,0,0x1fc);
          sVar5 = recv(iVar3,&local_220,0x200,0);
          if (0 < sVar5) {
            auStack_31c[sVar5 + 0xfc] = 0;
          }
          memset(auStack_39c,0,0x7c);
          local_3a0 = 0x214b4f;
          send(iVar3,&local_3a0,4,0);
          uVar6 = 0;
          *(int *)((int)__mutex + 0x20) = iVar3;
          *(__pthread_mutex_s **)(param_1 + 0x80) = &__mutex->__data;
          __mutex[1].__data.__lock = local_498[0];
        }
      }
    }
  }
  return uVar6;
}

