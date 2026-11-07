// FUN_00082b44 @ 00082b44  size=92  callers=0
// program: bmminer


void FUN_00082b44(undefined4 param_1,byte param_2)

{
  undefined4 local_14 [2];
  
  FUN_000835dc(0,param_1,0,0x18,local_14);
  local_14[0] = CONCAT31(local_14[0]._1_3_,(byte)local_14[0] & 0xf7 | (param_2 & 1) << 3);
  FUN_00081200(param_1,1,0,0x18,local_14[0]);
  return;
}

