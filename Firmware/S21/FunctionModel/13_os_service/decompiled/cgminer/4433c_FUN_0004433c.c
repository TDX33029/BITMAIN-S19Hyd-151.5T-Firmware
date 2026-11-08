// FUN_0004433c @ 0004433c  size=816  callers=0
// program: cgminer


undefined4 FUN_0004433c(int param_1)

{
  pthread_t __th;
  ssize_t sVar1;
  int iVar2;
  int *__arg;
  int iVar3;
  size_t sVar4;
  int iVar5;
  char *__s2;
  int __fd;
  undefined4 local_224;
  pthread_t pStack_220;
  char local_21c [8];
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  pthread_attr_t pStack_1cc;
  undefined4 local_1a8;
  undefined1 auStack_1a4 [124];
  undefined4 local_128;
  undefined1 auStack_124 [256];
  
  __th = pthread_self();
  pthread_detach(__th);
  local_210 = 0;
  builtin_strncpy(local_21c,"ct_a/mai",8);
  local_214 = 0x6e;
  prctl(0xf,local_21c);
  pthread_attr_init(&pStack_1cc);
  pthread_attr_setstacksize(&pStack_1cc,0x100000);
  __fd = *(int *)(param_1 + 8);
  do {
    while( true ) {
      while( true ) {
        local_1a8 = 0;
        memset(auStack_1a4,0,0x7c);
        sVar1 = recv(__fd,&local_1a8,0x80,0);
        if (sVar1 < 1) {
          return 0;
        }
        local_20c = 0;
        local_208 = 0;
        local_1ec = 0;
        local_1e8 = 0;
        local_224 = 0;
        local_204 = 0;
        local_200 = 0;
        local_1fc = 0;
        local_1f8 = 0;
        local_1f4 = 0;
        local_1f0 = 0;
        local_1e4 = 0;
        local_1e0 = 0;
        local_1dc = 0;
        local_1d8 = 0;
        local_1d4 = 0;
        local_1d0 = 0;
        __isoc99_sscanf(&local_1a8,"%x%s%s",&local_224,&local_1ec,&local_20c);
        iVar2 = strcmp((char *)&local_1ec,"regist");
        if (iVar2 == 0) break;
        iVar2 = DAT_0006a800 + 1;
        memcpy((void *)(DAT_0006a800 * 0x80 + 0x6a828),&local_1a8,0x80);
        DAT_0006a800 = iVar2;
      }
      __arg = calloc(0x98,1);
      iVar2 = DAT_0006a804;
      if (DAT_0006a804 != 0) break;
LAB_000445f4:
      local_128 = 0;
      memset(auStack_124,0,0xfc);
      sprintf((char *)&local_128,"%x %d %s %s %s",0x3f,0,"reg_resp","no_name",(char *)&local_20c);
      sVar4 = strlen((char *)&local_128);
      send(__fd,&local_128,sVar4 + 1,0);
      free(__arg);
    }
    __s2 = &DAT_0006e82c;
    iVar5 = 0;
    do {
      iVar3 = strcmp((char *)&local_20c,__s2);
      __s2 = __s2 + 0x88;
      if (iVar3 == 0) {
        iVar3 = *(int *)(&DAT_0006e8ac + iVar5 * 0x88);
        __arg[3] = *(int *)(&DAT_0006e828 + iVar5 * 0x88);
        __arg[0x25] = iVar3;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar2);
    if (iVar2 == iVar5) goto LAB_000445f4;
    *__arg = DAT_00068578;
    sVar4 = strlen((char *)&local_20c);
    memcpy(__arg + 4,&local_20c,sVar4 + 1);
    __arg[0x24] = 0;
    pthread_create(&pStack_220,&pStack_1cc,FUN_00044670,__arg);
    iVar2 = __arg[0x24];
    while (iVar2 == 0) {
      usleep(10000);
      iVar2 = __arg[0x24];
    }
    iVar2 = *__arg;
    local_128 = 0;
    if (iVar2 != DAT_00068578) {
      DAT_00068578 = iVar2;
    }
    memset(auStack_124,0,0xfc);
    sprintf((char *)&local_128,"%x %d %s %s %s",0x3f,iVar2,"reg_resp","OK",(char *)&local_20c);
    sVar4 = strlen((char *)&local_128);
    send(__fd,&local_128,sVar4 + 1,0);
    DAT_00068578 = DAT_00068578 + 1;
  } while( true );
}

