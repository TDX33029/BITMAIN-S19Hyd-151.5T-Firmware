// FUN_0005830c @ 0005830c  size=96  callers=0
// program: bmminer


void FUN_0005830c(undefined4 param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_000592ec(1,param_1,param_2,0x58,&local_14);
  bVar1 = local_14._1_1_ & 0xf;
  local_14._0_2_ = CONCAT11(bVar1 | param_3 << 4,(undefined1)local_14);
  FUN_000571b0(param_1,0,param_2,0x58,local_14);
  return;
}

