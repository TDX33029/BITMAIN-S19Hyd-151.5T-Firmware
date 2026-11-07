// FUN_000832f0 @ 000832f0  size=112  callers=1
// program: bmminer


undefined4 FUN_000832f0(undefined4 param_1,undefined4 param_2)

{
  FUN_00081200(param_1,0,param_2,0xb8,0x20002209);
  usleep(20000);
  FUN_00081200(param_1,0,param_2,0xb8,0x20202209);
  usleep(10000);
  return 0;
}

