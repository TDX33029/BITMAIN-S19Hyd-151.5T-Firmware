// FUN_0008327c @ 0008327c  size=104  callers=0
// program: bmminer


void FUN_0008327c(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_000835dc(1,param_1,param_2,0x18,&local_14);
  if (param_3 == 0) {
    bVar1 = local_14._3_1_ & 0xf;
  }
  else {
    bVar1 = local_14._3_1_ | 0xf0;
  }
  local_14 = CONCAT13(bVar1,(undefined3)local_14);
  FUN_00081200(param_1,0,param_2,0x18,local_14);
  return;
}

