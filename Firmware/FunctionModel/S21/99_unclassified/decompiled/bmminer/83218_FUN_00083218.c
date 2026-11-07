// FUN_00083218 @ 00083218  size=100  callers=0
// program: bmminer


void FUN_00083218(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_000835dc(0,param_1,0,0x18,&local_14);
  if (param_2 == 0) {
    bVar1 = local_14._3_1_ & 0xf;
  }
  else {
    bVar1 = local_14._3_1_ | 0xf0;
  }
  local_14 = CONCAT13(bVar1,(undefined3)local_14);
  FUN_00081200(param_1,1,0,0x18,local_14);
  return;
}

