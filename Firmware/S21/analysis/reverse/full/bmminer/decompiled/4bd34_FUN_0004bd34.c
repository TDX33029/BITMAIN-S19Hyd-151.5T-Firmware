// FUN_0004bd34 @ 0004bd34  size=68  callers=20
// program: bmminer


int FUN_0004bd34(__time_t *param_1)

{
  timespec local_10;
  
  clock_gettime(1,&local_10);
  *param_1 = local_10.tv_sec;
  param_1[1] = local_10.tv_nsec / 1000;
  return local_10.tv_nsec * 0x10624dd3;
}

