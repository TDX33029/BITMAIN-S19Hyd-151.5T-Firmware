// FUN_000668b0 @ 000668b0  size=316  callers=1
// program: bmminer


int FUN_000668b0(void)

{
  char local_814 [2048];
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = -1;
  if (DAT_00944b90 == 0) {
    builtin_strncpy(local_814,"please init platform first!!\n",0x1e);
    FUN_0004948c(0,local_814,0);
    local_c = -2;
  }
  else {
    if (DAT_009450f4 == 0) {
      DAT_009450f0 = FUN_00068280(&LAB_00066878,0,0);
      pthread_mutex_init((pthread_mutex_t *)&DAT_009450d8,(pthread_mutexattr_t *)0x0);
    }
    DAT_009450f4 = DAT_009450f4 + 1;
    local_14 = 0;
    local_10 = 0;
    local_c = DAT_009450f4;
    FUN_00068300(DAT_009450f0,&local_c,4,&local_14,8);
  }
  return local_c;
}

