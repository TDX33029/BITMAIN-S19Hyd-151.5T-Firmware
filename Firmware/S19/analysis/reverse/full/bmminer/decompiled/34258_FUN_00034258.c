// FUN_00034258 @ 00034258  size=208  callers=0
// program: bmminer


bool FUN_00034258(int param_1,undefined4 param_2)

{
  undefined4 *__ptr;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  __ptr = (undefined4 *)FUN_00033a18(1,0xc,"util.c","tq_push",0x469);
  puVar3 = __ptr + 1;
  *__ptr = param_2;
  __ptr[1] = puVar3;
  __ptr[2] = puVar3;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  if (iVar1 != 0) {
    FUN_000338c4("tq_push",0x46d);
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
  FUN_00033848((pthread_mutex_t *)(param_1 + 0xc),"tq_push",0x47a);
  (*DAT_00087ce8)();
  return !bVar4;
}

