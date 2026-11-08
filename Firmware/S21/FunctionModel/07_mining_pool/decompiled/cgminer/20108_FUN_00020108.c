// FUN_00020108 @ 00020108  size=208  callers=1
// program: cgminer


bool FUN_00020108(int param_1,undefined4 param_2)

{
  undefined4 *__ptr;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  __ptr = (undefined4 *)FUN_0001f8e8(1,0xc,"util.c","tq_push",0x467);
  puVar3 = __ptr + 1;
  *__ptr = param_2;
  __ptr[1] = puVar3;
  __ptr[2] = puVar3;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  if (iVar1 != 0) {
    FUN_0001f708("tq_push",0x46b);
  }
  bVar4 = *(char *)(param_1 + 8) != '\0';
  if (bVar4) {
    free(__ptr);
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 4);
    *(undefined4 **)(param_1 + 4) = puVar3;
    __ptr[1] = param_1;
    __ptr[2] = puVar2;
    *puVar2 = puVar3;
  }
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0x28));
  FUN_0001f68c((pthread_mutex_t *)(param_1 + 0xc),"tq_push",0x478);
  (*DAT_0006796c)();
  return !bVar4;
}

