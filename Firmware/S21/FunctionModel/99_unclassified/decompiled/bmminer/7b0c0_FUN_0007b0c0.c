// FUN_0007b0c0 @ 0007b0c0  size=104  callers=1
// program: bmminer


undefined4 FUN_0007b0c0(uint *param_1)

{
  uint uVar1;
  timeval local_10;
  
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  *param_1 = local_10.tv_sec ^ local_10.tv_usec;
  uVar1 = getpid();
  *param_1 = uVar1 ^ *param_1;
  return 0;
}

