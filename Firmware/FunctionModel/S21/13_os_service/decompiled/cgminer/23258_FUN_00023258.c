// FUN_00023258 @ 00023258  size=200  callers=4
// program: cgminer


bool FUN_00023258(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *__arg;
  int iVar1;
  pthread_t local_1c [2];
  
  __arg = (void *)FUN_0001f860(0x18,"util.c","cg_completion_timeout",0xf46);
  FUN_00022f10(__arg,"util.c","cg_completion_timeout",0xf47);
  *(undefined4 *)((int)__arg + 0x10) = param_1;
  *(undefined4 *)((int)__arg + 0x14) = param_2;
  pthread_create(local_1c,(pthread_attr_t *)0x0,FUN_0002300c,__arg);
  iVar1 = FUN_000230d0(__arg,param_3,"util.c","cg_completion_timeout",0xf4d);
  if (iVar1 == 0) {
    pthread_join(local_1c[0],(void **)0x0);
    free(__arg);
    return true;
  }
  pthread_cancel(local_1c[0]);
  return iVar1 == 0;
}

