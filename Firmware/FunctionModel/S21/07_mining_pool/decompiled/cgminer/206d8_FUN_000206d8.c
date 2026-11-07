// FUN_000206d8 @ 000206d8  size=68  callers=27
// program: cgminer


int FUN_000206d8(__time_t *param_1)

{
  timespec local_10;
  
  clock_gettime(1,&local_10);
  *param_1 = local_10.tv_sec;
  param_1[1] = local_10.tv_nsec / 1000;
  return local_10.tv_nsec * 0x10624dd3;
}

