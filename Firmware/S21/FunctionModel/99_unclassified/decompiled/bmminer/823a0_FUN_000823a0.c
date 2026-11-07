// FUN_000823a0 @ 000823a0  size=128  callers=1
// program: bmminer


void FUN_000823a0(undefined4 param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  byte bVar1;
  undefined4 local_14;
  
  local_14._2_2_ = (undefined2)(local_14 >> 0x18);
  FUN_000835dc(0,param_1,0,0xa4,&local_14);
  bVar1 = local_14._3_1_;
  local_14 = CONCAT22(local_14._2_2_,param_4);
  if (param_2 == 0) {
    bVar1 = bVar1 & 0x7f;
  }
  else {
    bVar1 = bVar1 | 0x80;
  }
  local_14 = CONCAT13(bVar1,(undefined3)local_14) & 0x8fffffff | 0x10000000;
  FUN_00081200(param_1,1,0,0xa4,local_14);
  return;
}

