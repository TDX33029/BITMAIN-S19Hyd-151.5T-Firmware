// FUN_0008331c @ 0008331c  size=256  callers=1
// program: bmminer


undefined4 FUN_0008331c(undefined4 param_1)

{
  uint local_18;
  uint local_14 [2];
  
  FUN_000835dc(0,param_1,0,0xb9,&local_18);
  local_18 = local_18 & 0xffffdfff;
  FUN_00081200(param_1,1,0,0xb9,local_18);
  usleep(20000);
  FUN_000835dc(0,param_1,0,0x54,local_14);
  local_14[0] = local_14[0] & 0xfffffff0 | 2;
  FUN_00081200(param_1,1,0,0x54,local_14[0]);
  usleep(100000);
  FUN_000835dc(0,param_1,0,0xb9,&local_18);
  local_18 = local_18 | 0x4000;
  FUN_00081200(param_1,1,0,0xb9,local_18);
  usleep(20000);
  return 0;
}

