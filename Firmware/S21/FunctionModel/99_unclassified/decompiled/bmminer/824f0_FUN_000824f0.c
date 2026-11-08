// FUN_000824f0 @ 000824f0  size=108  callers=2
// program: bmminer


void FUN_000824f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_000835dc(1,param_1,param_2,0x18,&local_14);
  if (param_3 == 0) {
    bVar1 = local_14._1_1_ & 0xfc;
  }
  else {
    bVar1 = local_14._1_1_ | 3;
  }
  local_14._0_2_ = CONCAT11(bVar1,(undefined1)local_14);
  FUN_00081200(param_1,0,param_2,0x18,local_14);
  return;
}

