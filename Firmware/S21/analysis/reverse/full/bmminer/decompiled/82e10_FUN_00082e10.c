// FUN_00082e10 @ 00082e10  size=104  callers=0
// program: bmminer


void FUN_00082e10(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_000835dc(1,param_1,param_2,0x18,&local_14);
  if (param_3 == 0) {
    bVar1 = local_14._1_1_ & 0xfe;
  }
  else {
    bVar1 = local_14._1_1_ | 1;
  }
  local_14._0_2_ = CONCAT11(bVar1,(undefined1)local_14);
  FUN_00081200(param_1,0,param_2,0x18,local_14);
  return;
}

