// FUN_00092140 @ 00092140  size=332  callers=0
// program: bmminer


undefined4 FUN_00092140(int param_1,int param_2,undefined4 param_3)

{
  size_t sVar1;
  undefined4 uVar2;
  int local_14;
  tm *local_10;
  char *local_c;
  
  local_c = (char *)(*(int *)(*(int *)(param_2 + 8) + 0x174) + *(int *)(param_1 + 0x100c) * 0x100c);
  local_14 = *(int *)(*(int *)(param_2 + 8) + 0x13c);
  local_10 = (tm *)(*(int *)(param_2 + 8) + 0x148);
  if (local_14 == 0) {
    gettimeofday((timeval *)(*(int *)(param_2 + 8) + 0x13c),(__timezone_ptr_t)0x0);
    local_14 = *(int *)(*(int *)(param_2 + 8) + 0x13c);
  }
  if (*(int *)(*(int *)(param_2 + 8) + 0x144) != local_14) {
    localtime_r(&local_14,local_10);
    *(int *)(*(int *)(param_2 + 8) + 0x144) = local_14;
  }
  if (*(int *)(local_c + 0x1008) != local_14) {
    sVar1 = strftime(local_c,0x1001,(char *)(param_1 + 8),local_10);
    *(size_t *)(local_c + 0x1004) = sVar1;
    *(int *)(local_c + 0x1008) = local_14;
  }
  uVar2 = FUN_0009774c(param_3,local_c,*(undefined4 *)(local_c + 0x1004));
  return uVar2;
}

