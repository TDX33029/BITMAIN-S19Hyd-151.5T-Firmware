// FUN_0006e4b8 @ 0006e4b8  size=268  callers=0
// program: bmminer


void FUN_0006e4b8(byte param_1)

{
  char acStack_808 [2048];
  
  if (param_1 < 0x10) {
    if ((*(int *)(&DAT_012a2964 + (uint)param_1 * 8) != 0) ||
       (*(int *)(&DAT_012a2968 + (uint)param_1 * 8) != 0)) {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_009451bc);
      FUN_00062814(*(undefined4 *)(&DAT_012a2964 + (uint)param_1 * 8));
      *(undefined4 *)(&DAT_012a2964 + (uint)param_1 * 8) = 0;
      *(undefined4 *)(&DAT_012a2968 + (uint)param_1 * 8) = 0;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_009451bc);
    }
  }
  else {
    snprintf(acStack_808,0x800,"%s: Bad pic param, input chain is %d\n","close_pic",(uint)param_1);
    FUN_0004948c(0,acStack_808,0);
  }
  return;
}

