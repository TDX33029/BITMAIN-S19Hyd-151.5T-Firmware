// FUN_00082fb0 @ 00082fb0  size=96  callers=1
// program: bmminer


void FUN_00082fb0(undefined4 param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_000835dc(1,param_1,param_2,0x58,&local_14);
  bVar1 = local_14._1_1_ & 0xf;
  local_14._0_2_ = CONCAT11(bVar1 | param_3 << 4,(undefined1)local_14);
  FUN_00081200(param_1,0,param_2,0x58,local_14);
  return;
}

