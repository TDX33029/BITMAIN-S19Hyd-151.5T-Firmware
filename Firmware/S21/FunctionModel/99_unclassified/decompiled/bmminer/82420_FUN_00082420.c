// FUN_00082420 @ 00082420  size=104  callers=3
// program: bmminer


void FUN_00082420(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_000835dc(0,param_1,0,0xc4,&local_14);
  if (param_2 == 0) {
    bVar1 = local_14._1_1_ & 0x1f;
  }
  else {
    bVar1 = local_14._1_1_ & 0x1f | 0x20;
  }
  local_14._0_2_ = CONCAT11(bVar1,(undefined1)local_14);
  FUN_00081200(param_1,1,0,0xc4,local_14);
  return;
}

