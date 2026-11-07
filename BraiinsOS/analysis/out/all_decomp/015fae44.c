// FUN_015fae44 @ 015fae44 size=40 calls_out=0 calls_in=1
// strings: /sys/fs/cgroup/cpu;cpuacct

void FUN_015fae44(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[2] = 0x1a;
  *param_1 = 0x80000000;
  param_1[1] = "/sys/fs/cgroup/cpu,cpuacct";
  param_1[3] = param_2;
  param_1[4] = param_3;
  return;
}

