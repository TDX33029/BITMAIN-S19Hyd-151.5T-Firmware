// FUN_000834e4 @ 000834e4  size=92  callers=0
// program: bmminer


void FUN_000834e4(undefined4 param_1,byte param_2)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_000835dc(0,param_1,0,0x58,&local_14);
  bVar1 = local_14._2_1_ & 0xf0;
  local_14._0_3_ = CONCAT12(bVar1 | param_2 & 0xf,(undefined2)local_14);
  FUN_00081200(param_1,1,0,0x58,local_14);
  return;
}

