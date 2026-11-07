// FUN_009b0000 @ 009b0000 size=164 calls_out=1 calls_in=0
// strings: Descriptor | p_gain | smoother_half_decay | i_gain | d_gain

void FUN_009b0000(int param_1,undefined4 param_2)

{
  int local_24;
  
  local_24 = param_1 + 0x18;
  FUN_00fb34b0(param_2,"Descriptor",10,"p_gain",6,param_1,&LAB_00fb13e0,"i_gain",6,param_1 + 8,
               &LAB_00fb13e0,"d_gain",6,param_1 + 0x10,&LAB_00fb13e0,"smoother_half_decay",0x13,
               &local_24,FUN_00d489e0);
  return;
}

