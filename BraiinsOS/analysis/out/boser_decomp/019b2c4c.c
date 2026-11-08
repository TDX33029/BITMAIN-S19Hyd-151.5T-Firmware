// FUN_019b2c4c @ 019b2c4c size=40 calls_out=0 calls_in=1
// strings: /sys/fs/cgroup/cpu

void FUN_019b2c4c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[2] = 0x12;
  *param_1 = 0x80000000;
  param_1[1] = "/sys/fs/cgroup/cpu";
  param_1[3] = param_2;
  param_1[4] = param_3;
  return;
}

