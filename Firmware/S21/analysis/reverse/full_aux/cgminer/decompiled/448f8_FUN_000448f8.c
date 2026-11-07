// FUN_000448f8 @ 000448f8  size=592  callers=1
// program: cgminer


undefined4 FUN_000448f8(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  in_addr_t iVar3;
  int __fd;
  int iVar4;
  ssize_t sVar5;
  undefined4 *__arg;
  undefined *__dest;
  void *__src;
  void *pvVar6;
  pthread_t pStack_350;
  sockaddr local_34c;
  pthread_attr_t pStack_33c;
  char local_318 [20];
  uint local_304;
  undefined1 auStack_300 [232];
  undefined4 local_218;
  undefined1 auStack_214 [508];
  
  if (DAT_0006a808 == 0) {
    pthread_attr_init(&pStack_33c);
    pthread_attr_setstacksize(&pStack_33c,0x100000);
    pthread_mutex_init((pthread_mutex_t *)&DAT_0006a80c,(pthread_mutexattr_t *)0x0);
    if (param_2 != 0) {
      __dest = &DAT_0006e82c;
      __src = (void *)(param_1 + 4);
      do {
        pvVar1 = memcpy(__dest,__src,0x80);
        pvVar6 = (void *)((int)__src + 0x88);
        __dest = (undefined *)((int)pvVar1 + 0x88);
        uVar2 = *(undefined4 *)((int)__src + -4);
        *(undefined4 *)((int)pvVar1 + 0x80) = *(undefined4 *)((int)__src + 0x80);
        *(undefined4 *)((int)pvVar1 + -4) = uVar2;
        __src = pvVar6;
      } while (pvVar6 != (void *)(param_1 + 4 + param_2 * 0x88));
    }
    local_34c.sa_data[4] = '\0';
    local_34c.sa_data[5] = '\0';
    local_34c.sa_data[6] = '\0';
    local_34c.sa_data[7] = '\0';
    local_34c.sa_data[8] = '\0';
    local_34c.sa_data[9] = '\0';
    local_34c.sa_data[10] = '\0';
    local_34c.sa_data[0xb] = '\0';
    local_34c.sa_data[0xc] = '\0';
    local_34c.sa_data[0xd] = '\0';
    local_34c.sa_data[0] = '\0';
    local_34c.sa_data[1] = '\0';
    local_34c.sa_data[2] = '\0';
    local_34c.sa_data[3] = '\0';
    local_34c.sa_family = 2;
    DAT_0006a804 = param_2;
    iVar3 = inet_addr("127.0.0.1");
    local_34c.sa_data._2_2_ = SUB42(iVar3,0);
    local_34c.sa_data._4_2_ = SUB42(iVar3 >> 0x10,0);
    local_34c.sa_data[0] = 'V';
    local_34c.sa_data[1] = '\n';
    __fd = socket(2,1,0);
    if (__fd < 0) {
      uVar2 = 0xfffffffc;
      perror("socket err:");
    }
    else {
      while (iVar4 = connect(__fd,&local_34c,0x10), iVar4 < 0) {
        perror("connect err:");
        sleep(1);
      }
      local_218 = 0;
      memset(auStack_214,0,0x1fc);
      sVar5 = recv(__fd,&local_218,0x100,0);
      if (0 < sVar5) {
        auStack_300[sVar5 + 0xe8] = 0;
      }
      builtin_strncpy(local_318,"func1 func2 func3 fu",0x14);
      local_304._0_1_ = 'n';
      local_304._1_1_ = 'c';
      local_304._2_1_ = '4';
      local_304._3_1_ = '\0';
      memset(auStack_300,0,0xe8);
      send(__fd,local_318,0x18,0);
      sVar5 = recv(__fd,&local_218,0x100,0);
      if (0 < sVar5) {
        auStack_300[sVar5 + 0xe8] = 0;
      }
      builtin_strncpy(local_318,"3f heart-beats 22027",0x14);
      local_304 = local_304 & 0xffffff00;
      send(__fd,local_318,0x15,0);
      DAT_0006a824 = __fd;
      __arg = malloc(0xc);
      __arg[2] = __fd;
      *__arg = 0x560a;
      pthread_create(&pStack_350,&pStack_33c,FUN_0004433c,__arg);
      DAT_0006a808 = 1;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

