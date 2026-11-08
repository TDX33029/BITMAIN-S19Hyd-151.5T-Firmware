// FUN_0003c358 @ 0003c358  size=240  callers=0
// program: cgminer


uint FUN_0003c358(void *param_1,uint param_2,undefined4 param_3,char *param_4,char *param_5)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t sVar3;
  char *param0;
  
  uVar1 = FUN_00020bbc(param_3,param_1);
  *(char **)((int)param_1 + 0xac) = param_4;
  *(undefined4 *)((int)param_1 + 0xa4) = uVar1;
  *(char **)((int)param_1 + 0xb0) = param_5;
  sVar2 = strlen(param_4);
  sVar3 = strlen(param_5);
  sVar2 = sVar2 + sVar3 + 2;
  param0 = (char *)FUN_0001f860(sVar2,"cgminer.c","add_pool_details",0x2aaa);
  *(char **)((int)param_1 + 0xa8) = param0;
  snprintf(param0,sVar2,"%s:%s",*(char **)((int)param_1 + 0xac),*(char **)((int)param_1 + 0xb0));
  *(undefined1 *)((int)param_1 + 0x11c) = 1;
  *(byte *)((int)param_1 + 0x6b) = (byte)param_2 ^ 1;
  *(undefined1 *)((int)param_1 + 0x61) = 1;
  if (*(int *)((int)param_1 + 100) != 1) {
    FUN_00028ff0((int)param_1 + 100);
  }
  pthread_create((pthread_t *)((int)param_1 + 0x118),(pthread_attr_t *)0x0,FUN_000330f0,param_1);
  if (param_2 == 0) {
    pthread_join(*(pthread_t *)((int)param_1 + 0x118),(void **)0x0);
    param_2 = (uint)DAT_00068a14;
  }
  return param_2;
}

