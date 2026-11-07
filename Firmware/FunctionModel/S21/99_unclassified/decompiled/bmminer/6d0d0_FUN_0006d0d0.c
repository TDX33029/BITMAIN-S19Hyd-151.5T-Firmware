// FUN_0006d0d0 @ 0006d0d0  size=640  callers=2
// program: bmminer


void FUN_0006d0d0(char *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint local_81c;
  undefined *local_810 [512];
  uint local_10;
  void *local_c;
  
  local_c = param_2;
  snprintf((char *)local_810,0x800,"Dumping %u %s bytes from %p:\n",param_3,param_1,param_2);
  FUN_0004948c(2,local_810,0);
  local_81c = param_3;
  while( true ) {
    if ((int)local_81c < 1) {
      return;
    }
    for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
      if (local_10 < local_81c) {
        snprintf((char *)local_810,0x800,"%02x ",(uint)*(byte *)((int)local_c + local_10));
        FUN_0004948c(2,local_810,0);
      }
      else {
        local_810[0] = &DAT_00202020;
        FUN_0004948c(2,local_810,0);
      }
    }
    for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
      if (local_10 < local_81c) {
        if ((*(byte *)((int)local_c + local_10) < 0x20) ||
           (0x7e < *(byte *)((int)local_c + local_10))) {
          uVar1 = 0x2e;
        }
        else {
          uVar1 = (uint)*(byte *)((int)local_c + local_10);
        }
        snprintf((char *)local_810,0x800,"%c",uVar1);
        FUN_0004948c(2,local_810,0);
      }
      else {
        local_810[0] = (undefined *)CONCAT22(local_810[0]._2_2_,0x20);
        FUN_0004948c(2,local_810,0);
      }
    }
    local_810[0] = (undefined *)CONCAT22(local_810[0]._2_2_,10);
    FUN_0004948c(2,local_810,0);
    local_c = (void *)((int)local_c + 0x10);
    if ((int)local_81c < 0x11) break;
    local_81c = local_81c - 0x10;
  }
  return;
}

