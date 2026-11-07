// FUN_00083010 @ 00083010  size=92  callers=1
// program: bmminer


void FUN_00083010(undefined4 param_1,char param_2)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_000835dc(0,param_1,0,0x58,&local_14);
  bVar1 = local_14._1_1_ & 0xf;
  local_14._0_2_ = CONCAT11(bVar1 | param_2 << 4,(undefined1)local_14);
  FUN_00081200(param_1,1,0,0x58,local_14);
  return;
}

