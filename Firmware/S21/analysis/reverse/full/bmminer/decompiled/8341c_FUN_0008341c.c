// FUN_0008341c @ 0008341c  size=104  callers=0
// program: bmminer


undefined4 FUN_0008341c(undefined4 param_1)

{
  uint local_c;
  
  FUN_000835dc(0,param_1,0,0xc4,&local_c);
  local_c = local_c & 0xffff1fff | 0xa000;
  FUN_00081200(param_1,1,0,0xc4,local_c);
  usleep(20000);
  return 0;
}

