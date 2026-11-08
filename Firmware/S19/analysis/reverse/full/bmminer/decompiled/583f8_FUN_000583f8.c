// FUN_000583f8 @ 000583f8  size=100  callers=1
// program: bmminer


void FUN_000583f8(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_000592ec(0,param_1,0,0x18,&local_14);
  if (param_2 == 0) {
    bVar1 = local_14._1_1_ & 0x7f;
  }
  else {
    bVar1 = local_14._1_1_ | 0x80;
  }
  local_14._0_2_ = CONCAT11(bVar1,(undefined1)local_14);
  FUN_000571b0(param_1,1,0,0x18,local_14);
  return;
}

