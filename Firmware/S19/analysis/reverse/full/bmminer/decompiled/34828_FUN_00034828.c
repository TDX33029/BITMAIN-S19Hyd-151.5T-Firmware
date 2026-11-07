// FUN_00034828 @ 00034828  size=68  callers=12
// program: bmminer


int FUN_00034828(__time_t *param_1)

{
  timespec local_10;
  
  clock_gettime(1,&local_10);
  *param_1 = local_10.tv_sec;
  param_1[1] = local_10.tv_nsec / 1000;
  return local_10.tv_nsec * 0x10624dd3;
}

