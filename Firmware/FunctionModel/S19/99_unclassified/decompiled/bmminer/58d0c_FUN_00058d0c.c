// FUN_00058d0c @ 00058d0c  size=100  callers=1
// program: bmminer


undefined4 FUN_00058d0c(undefined4 param_1)

{
  uint local_c;
  
  FUN_000592ec(0,param_1,0,0xb0,&local_c);
  local_c = local_c | 0x10;
  FUN_000571b0(param_1,1,0,0xb0,local_c);
  usleep(30000);
  return 0;
}

