// FUN_0006e354 @ 0006e354  size=356  callers=6
// program: bmminer


int FUN_0006e354(byte param_1)

{
  char acStack_814 [2048];
  uint local_14;
  undefined2 local_10;
  undefined1 local_e;
  byte local_d;
  int local_c;
  
  local_c = 0;
  if (param_1 < 0x10) {
    if ((*(int *)(&DAT_012a2964 + (uint)param_1 * 8) == 0) ||
       (*(int *)(&DAT_012a2968 + (uint)param_1 * 8) == 0)) {
      local_14 = (uint)param_1;
      local_10 = 0;
      local_e = 4;
      local_d = param_1;
      pthread_mutex_lock((pthread_mutex_t *)&DAT_009451bc);
      local_c = FUN_0006256c(&local_14);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_009451bc);
      if (-1 < local_c) {
        *(int *)(&DAT_012a2964 + (uint)param_1 * 8) = local_c;
        *(undefined4 *)(&DAT_012a2968 + (uint)param_1 * 8) = 1;
      }
    }
    else {
      local_c = *(int *)(&DAT_012a2964 + (uint)param_1 * 8);
    }
  }
  else {
    snprintf(acStack_814,0x800,"%s: Bad pic param, input chain is %d\n","open_pic",(uint)param_1);
    FUN_0004948c(0,acStack_814,0);
    local_c = -0x7ffffdff;
  }
  return local_c;
}

