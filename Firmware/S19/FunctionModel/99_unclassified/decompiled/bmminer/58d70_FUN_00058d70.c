// FUN_00058d70 @ 00058d70  size=104  callers=1
// program: bmminer


undefined4 FUN_00058d70(undefined4 param_1,undefined4 param_2)

{
  uint local_14 [2];
  
  FUN_000592ec(1,param_1,param_2,0xb0,local_14);
  local_14[0] = local_14[0] | 0x10;
  FUN_000571b0(param_1,0,param_2,0xb0,local_14[0]);
  usleep(30000);
  return 0;
}

