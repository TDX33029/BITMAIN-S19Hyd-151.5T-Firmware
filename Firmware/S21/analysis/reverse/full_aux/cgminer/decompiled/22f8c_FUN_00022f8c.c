// FUN_00022f8c @ 00022f8c  size=68  callers=2
// program: cgminer


void FUN_00022f8c(int param_1,pthread_attr_t *param_2,__start_routine *param_3,void *param_4)

{
  FUN_00022f10(param_1 + 0x10,"util.c","thr_info_create",0x4a5);
  pthread_create((pthread_t *)(param_1 + 0xc),param_2,param_3,param_4);
  return;
}

