// FUN_018e95d0 @ 018e95d0 size=84 calls_out=2 calls_in=1
// strings: 

void FUN_018e95d0(undefined4 *param_1,int param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  local_20 = 0;
  local_28 = 0;
  uStack_24 = 1;
  FUN_01935d5c(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),&local_28);
  FUN_018e74e8(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),&local_28);
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = local_20;
  return;
}

