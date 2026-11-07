// FUN_000669ec @ 000669ec  size=468  callers=2
// program: bmminer


void FUN_000669ec(int param_1)

{
  int iVar1;
  int local_81c [2];
  char local_814 [2048];
  undefined4 *local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_81c[0] = param_1;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_009450d8);
  if (iVar1 == 0) {
    iVar1 = FUN_00068360(DAT_009450f0,local_81c);
    if (iVar1 == 1) {
      FUN_000683cc(DAT_009450f0,local_81c);
    }
    else {
      snprintf(local_814,0x800,"ctx(%d) is not inited\n",local_81c[0]);
      FUN_0004948c(1,local_814,0);
    }
    local_14 = (undefined4 *)FUN_00068714(DAT_009450f0);
    local_10 = (*(code *)*local_14)(local_14);
    while (local_10 != 0) {
      local_c = local_c + 1;
      local_10 = (*(code *)*local_14)(local_14);
    }
    FUN_00068798(local_14);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_009450d8);
    if (local_c == 0) {
      DAT_009450f4 = 0;
      FUN_0006851c(DAT_009450f0);
      DAT_009450f0 = 0;
    }
  }
  else {
    builtin_strncpy(local_814,"failed to i2c lock\n",0x14);
    FUN_0004948c(0,local_814,0);
  }
  return;
}

