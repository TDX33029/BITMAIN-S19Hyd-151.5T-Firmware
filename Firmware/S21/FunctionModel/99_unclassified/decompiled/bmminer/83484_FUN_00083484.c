// FUN_00083484 @ 00083484  size=96  callers=0
// program: bmminer


void FUN_00083484(undefined4 param_1,undefined4 param_2,byte param_3)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_000835dc(1,param_1,param_2,0x58,&local_14);
  bVar1 = local_14._2_1_ & 0xf0;
  local_14._0_3_ = CONCAT12(bVar1 | param_3 & 0xf,(undefined2)local_14);
  FUN_00081200(param_1,0,param_2,0x58,local_14);
  return;
}

